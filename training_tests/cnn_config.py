train_data_path = 'coco_dataset/train2017'
train_annotations_path = 'coco_dataset/annotations/instances_train2017.json'

train_batch_size = 1
train_shuffle_dl = True
num_workers_dl = 4

num_classes = 80
num_epochs = 1

lr = 1e-3
momentum = 0.9
weight_decay = 1e-2