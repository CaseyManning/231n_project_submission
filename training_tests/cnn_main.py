import torch
import cnn_config
from cnn_utils import *
from multiprocessing import freeze_support

def main():
    print("Torch version:", torch.__version__)

    dataset = CocoDataset(
        root=cnn_config.train_data_path, annotation=cnn_config.train_annotations_path, transforms=get_transform()
    )

    data_loader = torch.utils.data.DataLoader(
        dataset,
        batch_size=cnn_config.train_batch_size,
        shuffle=cnn_config.train_shuffle_dl,
        num_workers=cnn_config.num_workers_dl,
        collate_fn=collate_fn,
    )

    device = torch.device("cuda") if torch.cuda.is_available() else torch.device("cpu")

    model = get_model_instance_segmentation(cnn_config.num_classes)
    model.to(device)

    # Parameters
    params = [p for p in model.parameters() if p.requires_grad]
    optimizer = torch.optim.SGD(
        params, lr=cnn_config.lr, momentum=cnn_config.momentum, weight_decay=cnn_config.weight_decay
    )

    # Training
    for epoch in range(cnn_config.num_epochs):
        print(f"Epoch: {epoch}/{cnn_config.num_epochs}")
        model.train()
        i = 0
        for imgs, annotations in data_loader:
            imgs = list(img.to(device) for img in imgs)
            annotations = [{k: v.to(device) for k, v in t.items()} for t in annotations]
            loss_dict = model(imgs, annotations)
            losses = sum(loss for loss in loss_dict.values())

            optimizer.zero_grad()
            losses.backward()
            optimizer.step()
            
            i += 1
            print(f"Iteration: {i}/{len(data_loader)}, Loss: {losses}")
    

if __name__ == '__main__':
    mode = 'train'
    freeze_support()
    if mode == 'train':
        model = main()
        torch.save(model.state_dict(), 'model')
    if mode == 'test':
        model = torchvision.models.detection.faster_rcnn()
        model.load_state_dict(torch.load('model'))
        model.eval()