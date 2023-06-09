#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 Unity.Barracuda.Tensor Unity.Barracuda.IOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
// 0x00000002 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
// 0x00000003 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
// 0x00000004 Unity.Barracuda.Tensor Unity.Barracuda.IOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
// 0x00000005 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
// 0x00000006 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
// 0x00000007 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
// 0x00000008 Unity.Barracuda.Tensor Unity.Barracuda.IOps::DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer/DepthToSpaceMode)
// 0x00000009 Unity.Barracuda.Tensor Unity.Barracuda.IOps::SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
// 0x0000000A Unity.Barracuda.Tensor Unity.Barracuda.IOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
// 0x0000000B Unity.Barracuda.Tensor Unity.Barracuda.IOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
// 0x0000000C Unity.Barracuda.Tensor Unity.Barracuda.IOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
// 0x0000000D Unity.Barracuda.Tensor Unity.Barracuda.IOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
// 0x0000000E Unity.Barracuda.Tensor Unity.Barracuda.IOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
// 0x0000000F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
// 0x00000010 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000011 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000012 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000013 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000014 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
// 0x00000015 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
// 0x00000016 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Dropout(Unity.Barracuda.Tensor,System.Single)
// 0x00000017 Unity.Barracuda.Tensor Unity.Barracuda.IOps::RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
// 0x00000018 Unity.Barracuda.Tensor Unity.Barracuda.IOps::RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
// 0x00000019 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
// 0x0000001A Unity.Barracuda.Tensor Unity.Barracuda.IOps::OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
// 0x0000001B Unity.Barracuda.Tensor Unity.Barracuda.IOps::TopKIndices(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Boolean,System.Boolean)
// 0x0000001C Unity.Barracuda.Tensor Unity.Barracuda.IOps::TopKValues(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32)
// 0x0000001D Unity.Barracuda.Tensor Unity.Barracuda.IOps::NonZero(Unity.Barracuda.Tensor)
// 0x0000001E Unity.Barracuda.Tensor Unity.Barracuda.IOps::Relu(Unity.Barracuda.Tensor)
// 0x0000001F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Softmax(Unity.Barracuda.Tensor,System.Int32)
// 0x00000020 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogSoftmax(Unity.Barracuda.Tensor)
// 0x00000021 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Tanh(Unity.Barracuda.Tensor)
// 0x00000022 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sigmoid(Unity.Barracuda.Tensor)
// 0x00000023 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Elu(Unity.Barracuda.Tensor,System.Single)
// 0x00000024 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Relu6(Unity.Barracuda.Tensor)
// 0x00000025 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
// 0x00000026 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
// 0x00000027 Unity.Barracuda.Tensor Unity.Barracuda.IOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000028 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Swish(Unity.Barracuda.Tensor)
// 0x00000029 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Abs(Unity.Barracuda.Tensor)
// 0x0000002A Unity.Barracuda.Tensor Unity.Barracuda.IOps::Neg(Unity.Barracuda.Tensor)
// 0x0000002B Unity.Barracuda.Tensor Unity.Barracuda.IOps::Ceil(Unity.Barracuda.Tensor)
// 0x0000002C Unity.Barracuda.Tensor Unity.Barracuda.IOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
// 0x0000002D Unity.Barracuda.Tensor Unity.Barracuda.IOps::Floor(Unity.Barracuda.Tensor)
// 0x0000002E Unity.Barracuda.Tensor Unity.Barracuda.IOps::Reciprocal(Unity.Barracuda.Tensor)
// 0x0000002F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pow(Unity.Barracuda.Tensor,System.Single)
// 0x00000030 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Exp(Unity.Barracuda.Tensor)
// 0x00000031 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Log(Unity.Barracuda.Tensor)
// 0x00000032 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sqrt(Unity.Barracuda.Tensor)
// 0x00000033 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Acos(Unity.Barracuda.Tensor)
// 0x00000034 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Acosh(Unity.Barracuda.Tensor)
// 0x00000035 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Asin(Unity.Barracuda.Tensor)
// 0x00000036 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Asinh(Unity.Barracuda.Tensor)
// 0x00000037 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Atan(Unity.Barracuda.Tensor)
// 0x00000038 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Atanh(Unity.Barracuda.Tensor)
// 0x00000039 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Cos(Unity.Barracuda.Tensor)
// 0x0000003A Unity.Barracuda.Tensor Unity.Barracuda.IOps::Cosh(Unity.Barracuda.Tensor)
// 0x0000003B Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sin(Unity.Barracuda.Tensor)
// 0x0000003C Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sinh(Unity.Barracuda.Tensor)
// 0x0000003D Unity.Barracuda.Tensor Unity.Barracuda.IOps::Tan(Unity.Barracuda.Tensor)
// 0x0000003E Unity.Barracuda.Tensor Unity.Barracuda.IOps::Add(Unity.Barracuda.Tensor[])
// 0x0000003F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sub(Unity.Barracuda.Tensor[])
// 0x00000040 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Mul(Unity.Barracuda.Tensor[])
// 0x00000041 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Div(Unity.Barracuda.Tensor[])
// 0x00000042 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pow(Unity.Barracuda.Tensor[])
// 0x00000043 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Min(Unity.Barracuda.Tensor[])
// 0x00000044 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Max(Unity.Barracuda.Tensor[])
// 0x00000045 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Mean(Unity.Barracuda.Tensor[])
// 0x00000046 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceMax(Unity.Barracuda.Tensor,System.Int32)
// 0x00000047 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceMean(Unity.Barracuda.Tensor,System.Int32)
// 0x00000048 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceMin(Unity.Barracuda.Tensor,System.Int32)
// 0x00000049 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceProd(Unity.Barracuda.Tensor,System.Int32)
// 0x0000004A Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceSum(Unity.Barracuda.Tensor,System.Int32)
// 0x0000004B Unity.Barracuda.Tensor Unity.Barracuda.IOps::ArgMax(Unity.Barracuda.Tensor,System.Int32)
// 0x0000004C Unity.Barracuda.Tensor Unity.Barracuda.IOps::ArgMin(Unity.Barracuda.Tensor,System.Int32)
// 0x0000004D Unity.Barracuda.Tensor Unity.Barracuda.IOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x0000004E Unity.Barracuda.Tensor Unity.Barracuda.IOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x0000004F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000050 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000051 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000052 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000053 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000054 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000055 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalNot(Unity.Barracuda.Tensor)
// 0x00000056 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000057 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Flatten(Unity.Barracuda.Tensor)
// 0x00000058 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
// 0x00000059 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
// 0x0000005A Unity.Barracuda.Tensor Unity.Barracuda.IOps::Transpose(Unity.Barracuda.Tensor)
// 0x0000005B Unity.Barracuda.Tensor Unity.Barracuda.IOps::Transpose(Unity.Barracuda.Tensor,System.Int32[])
// 0x0000005C Unity.Barracuda.Tensor Unity.Barracuda.IOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
// 0x0000005D Unity.Barracuda.Tensor Unity.Barracuda.IOps::StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
// 0x0000005E Unity.Barracuda.Tensor Unity.Barracuda.IOps::Tile(Unity.Barracuda.Tensor,System.Int32[])
// 0x0000005F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Gather(Unity.Barracuda.Tensor[],System.Int32)
// 0x00000060 Unity.Barracuda.Tensor Unity.Barracuda.IOps::NonMaxSuppression(Unity.Barracuda.Tensor[],System.Int32,System.Single,System.Single,System.Int32)
// 0x00000061 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Shape(Unity.Barracuda.Tensor,System.Int32)
// 0x00000062 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Copy(Unity.Barracuda.Tensor)
// 0x00000063 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Prepare(Unity.Barracuda.Tensor)
// 0x00000064 System.Void Unity.Barracuda.IOps::ResetAllocator(System.Boolean)
// 0x00000065 System.Void Unity.Barracuda.IModelCompiler::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
// 0x00000066 System.Void Unity.Barracuda.IModelCompiler::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
// 0x00000067 System.Void Unity.Barracuda.IVars::SetInput(System.String,Unity.Barracuda.Tensor)
// 0x00000068 System.Void Unity.Barracuda.IVars::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
// 0x00000069 Unity.Barracuda.Tensor[] Unity.Barracuda.IVars::GatherInputs(Unity.Barracuda.Layer)
// 0x0000006A System.Void Unity.Barracuda.IVars::PrepareStorage(Unity.Barracuda.Layer)
// 0x0000006B System.Void Unity.Barracuda.IVars::Store(Unity.Barracuda.Layer,Unity.Barracuda.Tensor)
// 0x0000006C Unity.Barracuda.Tensor Unity.Barracuda.IVars::PeekOutput(System.String)
// 0x0000006D Unity.Barracuda.Tensor[] Unity.Barracuda.IVars::PeekConstants(System.String)
// 0x0000006E Unity.Barracuda.ITensorAllocator Unity.Barracuda.IVars::GetAllocator()
// 0x0000006F Unity.Barracuda.Tensor Unity.Barracuda.ITensorAllocator::Alloc(Unity.Barracuda.TensorShape)
// 0x00000070 Unity.Barracuda.Tensor Unity.Barracuda.ITensorAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
// 0x00000071 System.Void Unity.Barracuda.ITensorAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
// 0x00000072 System.Void Unity.Barracuda.ITensorAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
// 0x00000073 System.Void Unity.Barracuda.ITensorAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
// 0x00000074 System.Void Unity.Barracuda.ITensorAllocator::Reset(System.Boolean)
// 0x00000075 Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.BarracudaBackendsFactory::ResolveAutoType(Unity.Barracuda.WorkerFactory/Type)
extern void BarracudaBackendsFactory_ResolveAutoType_m28CE935B0E3949FBAB7FBC5641823DAB7D3C306D (void);
// 0x00000076 Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.BarracudaBackendsFactory::GetBestTypeForDevice(Unity.Barracuda.WorkerFactory/Device)
extern void BarracudaBackendsFactory_GetBestTypeForDevice_m52385C708937A9057B27288BA0F6A179635DE46E (void);
// 0x00000077 Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.BarracudaBackendsFactory::ValidateType(Unity.Barracuda.WorkerFactory/Type)
extern void BarracudaBackendsFactory_ValidateType_m34E32F266815B96A6E83EAC33B102646CEF46088 (void);
// 0x00000078 Unity.Barracuda.IOps Unity.Barracuda.BarracudaBackendsFactory::CreateOps(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.ITensorAllocator,System.Boolean)
extern void BarracudaBackendsFactory_CreateOps_m39450C66A43DC48F7A4DA2D5D4B7D04B17D0618C (void);
// 0x00000079 Unity.Barracuda.IWorker Unity.Barracuda.BarracudaBackendsFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory/WorkerConfiguration)
extern void BarracudaBackendsFactory_CreateWorker_mAEC4CBBD3D900EAABB52844AEBA3B74CD4122C10 (void);
// 0x0000007A Unity.Barracuda.Model Unity.Barracuda.BarracudaBackendsFactory::PatchModel(Unity.Barracuda.Model,System.String[],System.String[])
extern void BarracudaBackendsFactory_PatchModel_m409963E090FD3F6BE798240D2F6A6DE8FFC8B5A2 (void);
// 0x0000007B Unity.Barracuda.Model Unity.Barracuda.BarracudaBackendsFactory::ValidateModel(Unity.Barracuda.Model)
extern void BarracudaBackendsFactory_ValidateModel_mCF3673E8EB821D4C16AF452CB79D94018E13EE1A (void);
// 0x0000007C System.Void Unity.Barracuda.BarracudaBackendsFactory::.ctor()
extern void BarracudaBackendsFactory__ctor_mFF7FD99D000185A98984AF97188DF9BA476D089C (void);
// 0x0000007D Unity.Jobs.JobHandle Unity.Barracuda.BurstTensorData::get_fence()
extern void BurstTensorData_get_fence_m2B4B782416E6B3953934D5BD9D4D712948B8DADC (void);
// 0x0000007E System.Void Unity.Barracuda.BurstTensorData::set_fence(Unity.Jobs.JobHandle)
extern void BurstTensorData_set_fence_mD28DCC2FA467E6FA393FDB0662C461E4B917CD8A (void);
// 0x0000007F Unity.Jobs.JobHandle Unity.Barracuda.BurstTensorData::get_reuse()
extern void BurstTensorData_get_reuse_m75E91005BA79E385DE70077EE91FE82DA60DEC29 (void);
// 0x00000080 System.Void Unity.Barracuda.BurstTensorData::set_reuse(Unity.Jobs.JobHandle)
extern void BurstTensorData_set_reuse_m29230C8D79E164FECEB55C170123BA2378F1887B (void);
// 0x00000081 System.Void Unity.Barracuda.BurstTensorData::.ctor(System.Int32)
extern void BurstTensorData__ctor_m21CF799109D17AFEBEC646237F43E3579D265C2C (void);
// 0x00000082 System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.TensorShape)
extern void BurstTensorData__ctor_m1E537EE48A6F319A4D20202FCB7AFCF2DD157FE5 (void);
// 0x00000083 System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.ArrayTensorData)
extern void BurstTensorData__ctor_m23133BF1AB9A5C6577F9F6120ADCEAEF5FEEF4B1 (void);
// 0x00000084 System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.SharedArrayTensorData)
extern void BurstTensorData__ctor_m718E95D48B410BE608887CB8B63AB6DF36203B0A (void);
// 0x00000085 System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.UnsafeArrayTensorData)
extern void BurstTensorData__ctor_m61AD92B5321F06BDC48ABEF0E20DC5759713FCF4 (void);
// 0x00000086 System.Void Unity.Barracuda.BurstTensorData::Finalize()
extern void BurstTensorData_Finalize_mF3E2BB55001CC06CFFE85273E29BB98D6F1A4E17 (void);
// 0x00000087 System.Void Unity.Barracuda.BurstTensorData::Dispose()
extern void BurstTensorData_Dispose_mAC90562AB7296D6DD47A9A5D70D76D89CD55C75C (void);
// 0x00000088 System.Void Unity.Barracuda.BurstTensorData::CompleteAllPendingOperations()
extern void BurstTensorData_CompleteAllPendingOperations_m02AECFE93EEF99880D685B8807A8664631DEA350 (void);
// 0x00000089 System.Void Unity.Barracuda.BurstTensorData::Reserve(System.Int32)
extern void BurstTensorData_Reserve_m3223EAB628E3424C1C0104BA1E08FDB38455F13E (void);
// 0x0000008A System.Void Unity.Barracuda.BurstTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void BurstTensorData_Upload_mF16C68421FE96EDEE9AACFEDCB8B6CAB3CA085F5 (void);
// 0x0000008B System.Single[] Unity.Barracuda.BurstTensorData::Download(Unity.Barracuda.TensorShape)
extern void BurstTensorData_Download_m23B9A90D894DBD38B352E129429030C7E23C3A9C (void);
// 0x0000008C System.Single[] Unity.Barracuda.BurstTensorData::SharedAccess(System.Int32&)
extern void BurstTensorData_SharedAccess_m2B8F6C615AE2E83EA790FE3466F1C11E3F4CE9D6 (void);
// 0x0000008D System.Boolean Unity.Barracuda.BurstTensorData::ScheduleAsyncDownload(System.Int32)
extern void BurstTensorData_ScheduleAsyncDownload_mE9BC225019B56490507EB0FD17FC187726673984 (void);
// 0x0000008E System.String Unity.Barracuda.BurstTensorData::ToString()
extern void BurstTensorData_ToString_mD44067BF647564D5679D0164DA4F720AAD6BB2B9 (void);
// 0x0000008F System.Void Unity.Barracuda.BurstCPUOps::.ctor(Unity.Barracuda.ITensorAllocator)
extern void BurstCPUOps__ctor_mA244377CF8A3120047C6D490B40756A73A73A834 (void);
// 0x00000090 Unity.Barracuda.BurstTensorData Unity.Barracuda.BurstCPUOps::Pin(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Pin_m5FA0BD2B0A9B5B2315CB49F1EAB58BFFB066B064 (void);
// 0x00000091 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Prepare(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Prepare_mB357F7CFFD1509F57A68F8543601A1BF29CA6F3F (void);
// 0x00000092 Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps::Dependencies(Unity.Jobs.JobHandle,Unity.Jobs.JobHandle)
extern void BurstCPUOps_Dependencies_m599120DD91F207BC76768413FDCECA505347DFE0 (void);
// 0x00000093 Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps::Dependencies(Unity.Jobs.JobHandle,Unity.Jobs.JobHandle,Unity.Jobs.JobHandle)
extern void BurstCPUOps_Dependencies_m5D89C51B472A907C0561C22A6775C2F4F8F01CCA (void);
// 0x00000094 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::MatMul2D(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void BurstCPUOps_MatMul2D_mEC3152702129D760AEA118D966C8E632C80CFC1F (void);
// 0x00000095 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void BurstCPUOps_Dense_mC9FB27CC7A07F261CF885B1F7A04ED2DC75E7163 (void);
// 0x00000096 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void BurstCPUOps_Conv2D_m9F397666E79C7B4FD3EF9A90FF634F55C92185D9 (void);
// 0x00000097 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Conv2DUsingIm2ColSliced(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void BurstCPUOps_Conv2DUsingIm2ColSliced_m8BF3EB7863E93A3641B24D290D8AD831F5883A7F (void);
// 0x00000098 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void BurstCPUOps_MaxPool2D_mF3C4EEB1EE50AA41E6390A9AC19A2728E2755B78 (void);
// 0x00000099 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void BurstCPUOps_AvgPool2D_m0BAD3431C261CEB8DC7C9D55B811417437D76238 (void);
// 0x0000009A Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void BurstCPUOps_GlobalMaxPool2D_m46DBC404BDB7B30EEA384FE9646366EB08DF716A (void);
// 0x0000009B Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void BurstCPUOps_GlobalAvgPool2D_mCB53AE21A818616F414AB4E3F9BFE12C3719C58F (void);
// 0x0000009C Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void BurstCPUOps_DepthwiseConv2D_m24C3E201F83D90C634A61689E4E810DD73B3AD4A (void);
// 0x0000009D Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_ScaleBias_mA2AC56C38DAB9FE041DB2AB600BC1A18A0F7B96A (void);
// 0x0000009E Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Relu(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Relu_m18A142F16CD93ABF40E9C27B3CAC2A1ABA1864C2 (void);
// 0x0000009F Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Relu6(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Relu6_mCD7D2C2F484A03D718C7669BF0F89CD7C266A4BA (void);
// 0x000000A0 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_LeakyRelu_mEBEE7DC7F91816909CFDD5439D718D37E1E11263 (void);
// 0x000000A1 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Tanh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Tanh_m89D486984258AA947DA140FB38BE30398860162F (void);
// 0x000000A2 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sigmoid(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Sigmoid_mE9137DAC74FE1F322960873EF71660BD44AFE010 (void);
// 0x000000A3 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_Elu_m8AB640CD7C8CB3BE8B7B0F6C8EEE644C349044EF (void);
// 0x000000A4 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void BurstCPUOps_Selu_mF404571276085155FDBF21C4FF121549F9198533 (void);
// 0x000000A5 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Swish(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Swish_m99064ADFC5C531AA0B2C9B6F2F88F72977197628 (void);
// 0x000000A6 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_PRelu_m81BE68AF2324D2DDAB335AE84EFB2978BB56038F (void);
// 0x000000A7 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void BurstCPUOps_Softmax_m9F19A219EC95C439B6F862E609EA9C70F50012EE (void);
// 0x000000A8 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void BurstCPUOps_LogSoftmax_m0AC75FF937F9BAC747091712E75A0C6352B1045D (void);
// 0x000000A9 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Abs(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Abs_m2277D22F319E1E84769BC316083A98536A6A6898 (void);
// 0x000000AA Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Neg(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Neg_mCF0CC4E5B7B8CEF22A5EDDA68A994368B92CB67E (void);
// 0x000000AB Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Ceil(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Ceil_m8D624C7988441067B8A161EE1807BF6B563A3D15 (void);
// 0x000000AC Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void BurstCPUOps_Clip_m39EFE7A9CC4366D2B63F8E567B23AD9C3F839215 (void);
// 0x000000AD Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Floor(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Floor_m991915B7118CA3BF4268DC412D1F6308F36D35B9 (void);
// 0x000000AE Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Reciprocal(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Reciprocal_m8BC546084C618EAB1F6093CE410924072029C075 (void);
// 0x000000AF Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Pow(Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_Pow_mF59120997DF5851F73DE44536E9214528A119C29 (void);
// 0x000000B0 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Exp(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Exp_m6F3E0472D6AAE4FBFEDFB8C7160CA554178293E9 (void);
// 0x000000B1 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Log(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Log_m436E1580E68CBB6EB1A94F5C7922C565112A2CA5 (void);
// 0x000000B2 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sqrt(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Sqrt_m3FA20019E3C125A4F1DA5EA28C295CC25D7AA476 (void);
// 0x000000B3 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Acos(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Acos_mAFD3734D98AA336FA6772253E62E2C0C2A357470 (void);
// 0x000000B4 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Acosh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Acosh_mC54FEFAAAAC886D28D7FC50BE0133916D5F9AD65 (void);
// 0x000000B5 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Asin(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Asin_mD68E0EA4F5C31F2EAB23888A29EBC8B5DACDA1FF (void);
// 0x000000B6 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Asinh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Asinh_m07D7C6CBF1BB3B86ACEC0770F7FF016DF965A138 (void);
// 0x000000B7 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Atan(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Atan_m0EE9241CC4A161C9202049AD540097CDF15953DC (void);
// 0x000000B8 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Atanh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Atanh_mEB222A29279C0242D49F6D290AB6B65A9E241345 (void);
// 0x000000B9 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Cos(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Cos_m17F00E2995DD303884E216197F437B1D43A4B441 (void);
// 0x000000BA Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Cosh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Cosh_mA7C29EDC3D7F7CDDE49EA71078B1D00C2D29520D (void);
// 0x000000BB Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sin(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Sin_m5DBBF2007AA443F4B72C6EAC0B6C7134D609B468 (void);
// 0x000000BC Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sinh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Sinh_m7C52065544C1D4BC57ADC507868C2744949BB422 (void);
// 0x000000BD Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Tan(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Tan_m2779034F91A3845E7FD2505DBFAB3B0F70871966 (void);
// 0x000000BE Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::GenericBroadcast(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void BurstCPUOps_GenericBroadcast_m010297A7C770F6186A7594F07F9E11187F31D9BF (void);
// 0x000000BF System.Void Unity.Barracuda.BurstCPUOps::BroadcastAdd(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_BroadcastAdd_m44717BC40F41AF22FCD4B2A7EA02684D6D2F13A4 (void);
// 0x000000C0 System.Void Unity.Barracuda.BurstCPUOps::BroadcastSub(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastSub_mB761D423822CAFF926072243FAAE0904394580BE (void);
// 0x000000C1 System.Void Unity.Barracuda.BurstCPUOps::BroadcastMul(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastMul_m5A57AAFC94A7AF5C4E1E419A6929D34EC2AEDD77 (void);
// 0x000000C2 System.Void Unity.Barracuda.BurstCPUOps::BroadcastDiv(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastDiv_m54EC6772CBA05AA5AC2FC6ECB7C3746B3F1AED7B (void);
// 0x000000C3 System.Void Unity.Barracuda.BurstCPUOps::BroadcastPow(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastPow_mF328C34F6C521BD36BC7E6C3D676B07FAD09445D (void);
// 0x000000C4 System.Void Unity.Barracuda.BurstCPUOps::BroadcastMin(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastMin_m402EA5F596B7593768121F2154B2D902BF93B5E3 (void);
// 0x000000C5 System.Void Unity.Barracuda.BurstCPUOps::BroadcastMax(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastMax_mB3E0BD9E99979708EF01169E92647E85078CBE02 (void);
// 0x000000C6 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Add(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Add_m20DD2B08FCA9E03D88FDE9D7EFB981935A743F91 (void);
// 0x000000C7 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sub(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Sub_mD5F75F2E8754D7923DD37E816449F8AE9A59A685 (void);
// 0x000000C8 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Mul(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Mul_mE7F119785256E495ED169607DE48D5749387D5E2 (void);
// 0x000000C9 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Div(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Div_m5A1DBD771D1DE17DDB02108D89111F4817767117 (void);
// 0x000000CA Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Pow(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Pow_mCBBB6266B7F183A848F3949298686494200D2F7D (void);
// 0x000000CB Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Min(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Min_m2417A09A0F1782FA40BC980A5C0EB8493E6C4BB1 (void);
// 0x000000CC Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Max(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Max_m836D0B65337096F3124B797F17D241C2813D51AE (void);
// 0x000000CD Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void BurstCPUOps_CopyAndReshape_mF81B6E4B4A840A9732090D68148740F80A1FCBFB (void);
// 0x000000CE System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Dense(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32)
extern void ComputeKernelLibrary_Dense_m927AD0845D3C3C28678A449B3353599D4B351A25 (void);
// 0x000000CF System.Boolean Unity.Barracuda.ComputeKernelLibrary::IsT8x8_R8x8KernelValid(Unity.Barracuda.ComputeKernelLibrary/ChannelMode,Unity.Barracuda.ComputeKernelLibrary/KernelMode,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_IsT8x8_R8x8KernelValid_m17D81DD26736477EE192181271393079786FC2FA (void);
// 0x000000D0 System.Boolean Unity.Barracuda.ComputeKernelLibrary::IsT2x32_R8x8KernelValid(Unity.Barracuda.ComputeKernelLibrary/ChannelMode,Unity.Barracuda.ComputeKernelLibrary/KernelMode,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_IsT2x32_R8x8KernelValid_mA0B3DC86744A28792E32ADF9874D172460316D8C (void);
// 0x000000D1 System.Boolean Unity.Barracuda.ComputeKernelLibrary::IsWinograd16x16_R4x4KernelValid(Unity.Barracuda.ComputeKernelLibrary/ChannelMode,Unity.Barracuda.ComputeKernelLibrary/KernelMode,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_IsWinograd16x16_R4x4KernelValid_m6EF71B5B3956738D592EAFAA392AF118ABAB4AE0 (void);
// 0x000000D2 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Conv2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[])
extern void ComputeKernelLibrary_Conv2D_m017FD7EB24D1F1A5BB24107824377E507EB84BC4 (void);
// 0x000000D3 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::DepthwiseConv2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_DepthwiseConv2D_mCF8D37E3AFD0EFC1BFB4741E6C1500333703E7D9 (void);
// 0x000000D4 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Conv2DTrans(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_Conv2DTrans_mF2022E7DFBEC0492E137729ADC22E3EE9592923D (void);
// 0x000000D5 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Activation(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Activation_m845A8ECC733C74B6E7D7B5BC40AF010EED7A34C0 (void);
// 0x000000D6 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::PRelu(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_PRelu_m29F4EA6B588A9BD6799B810FB31DDBD7A3105E17 (void);
// 0x000000D7 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Softmax(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_Softmax_mBFF42B167052DFF334A932D1E581F7360D0CEF9E (void);
// 0x000000D8 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::LogSoftmax(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_LogSoftmax_m85F14E0BDEA1168DE0E5069975D8CB9A946092CC (void);
// 0x000000D9 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::ScaleBias(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_ScaleBias_mDCA85EAC54C5D966603AEA2DEB5A972B02F6BB84 (void);
// 0x000000DA System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Upsample2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Boolean)
extern void ComputeKernelLibrary_Upsample2D_m3643D2CD8A89E196A65607D82C74FC7A7028936D (void);
// 0x000000DB System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Pool2DReduce(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Pool2DReduce_mC3AD7B27895912FFCE8309404D96CEFC67B8295A (void);
// 0x000000DC System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Pool2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Pool2D_m8F9B31F20B553F1C3EEF463EFF561DB72271423B (void);
// 0x000000DD System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::PoolAvgVar2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_PoolAvgVar2D_m251441C8AA5FF98A25F3753C36023FF6BFFA94AD (void);
// 0x000000DE System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::GlobalPool2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_GlobalPool2D_mA696BCB34FCDF34425D771CFC76496DB318214BD (void);
// 0x000000DF System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::NormalizationTail(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_NormalizationTail_mB6D322CE5CE98CD3E02A79D5791E6480BD510D5A (void);
// 0x000000E0 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Copy(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_Copy_m4456EEA3204AE2A815E9F4D4E1447CBCCF6A65B4 (void);
// 0x000000E1 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::ReshapeFromNHWCModel(Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_ReshapeFromNHWCModel_mE1C9773604D1EAE25094F128D0A5AE52065D5D78 (void);
// 0x000000E2 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Padding(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Padding_m23361A5216936B0C8C0B9FF16FE4556F8B34C599 (void);
// 0x000000E3 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Broadcast(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Broadcast_mDB9646682D72D04A06764AE59DEF2E712663FAED (void);
// 0x000000E4 System.ValueTuple`3<System.Int32,System.Int32,System.Int32> Unity.Barracuda.ComputeKernelLibrary::Int3(System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_Int3_m773A827448DAC87E1790F87C3E6DAEF1E2820165 (void);
// 0x000000E5 System.Single Unity.Barracuda.ComputeKernelLibrary::BigO(System.Int32)
extern void ComputeKernelLibrary_BigO_m7C61D2EFC8A784DF9A58EA59C7BD0BD3DBF47A34 (void);
// 0x000000E6 Unity.Barracuda.ComputeKernelLibrary/StrictDimensions Unity.Barracuda.ComputeKernelLibrary::StrictAnd(System.Boolean)
extern void ComputeKernelLibrary_StrictAnd_m49B6BA8A04156AFEBE875BFF7C26F3E7430576A4 (void);
// 0x000000E7 Unity.Barracuda.ComputeKernelLibrary/StrictDimensions Unity.Barracuda.ComputeKernelLibrary::Strict()
extern void ComputeKernelLibrary_Strict_m78154B83BD98CACF54FC9E68E09A7D0B6E8E9322 (void);
// 0x000000E8 System.Void Unity.Barracuda.ComputeKernelLibrary::.ctor()
extern void ComputeKernelLibrary__ctor_mBE4528DE25661C5A94DB9370103B5AFD6763BF55 (void);
// 0x000000E9 System.Void Unity.Barracuda.ComputeKernelLibrary::.cctor()
extern void ComputeKernelLibrary__cctor_m04606DBC6355C9BBEB79AD66CBED61642D179164 (void);
// 0x000000EA UnityEngine.ComputeShader Unity.Barracuda.ComputeKernel::get_shader()
extern void ComputeKernel_get_shader_m0D447F51A2319E95F356F6409F4003CA216C6A81 (void);
// 0x000000EB System.Void Unity.Barracuda.ComputeKernel::.ctor(Unity.Barracuda.ComputeFunc,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>)
extern void ComputeKernel__ctor_m552489B273AB8DB0CEA61A187E41A6392758D96A (void);
// 0x000000EC System.Void Unity.Barracuda.ComputeKernel::SetTensor(System.String,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeKernel_SetTensor_m238FF4E5BD04D539AB1B60437D05C37831834F6A (void);
// 0x000000ED System.Void Unity.Barracuda.ComputeKernel::SetTensor(Unity.Barracuda.ComputeFunc/TensorDecl,System.Int32,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeKernel_SetTensor_m9753CC570CA8E7CC3889160611D26023B4F83005 (void);
// 0x000000EE System.Void Unity.Barracuda.ComputeKernel::SetTensorDecl(System.String,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeKernel_SetTensorDecl_m3D81D3C1964201D26BECA256815ABA4672B7FF90 (void);
// 0x000000EF System.Void Unity.Barracuda.ComputeKernel::SetTensorDecl(Unity.Barracuda.ComputeFunc/TensorDecl,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeKernel_SetTensorDecl_mEA777019F6EA126001772B6D6D0BF1619DF917C4 (void);
// 0x000000F0 System.Void Unity.Barracuda.ComputeKernel::SetTensorBuffer(System.String,UnityEngine.ComputeBuffer)
extern void ComputeKernel_SetTensorBuffer_mDA34F2A92056E075A8640D9A4B4960FCAE647A31 (void);
// 0x000000F1 System.Void Unity.Barracuda.ComputeKernel::SetTensorBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern void ComputeKernel_SetTensorBuffer_m257F015B13D22F03617043A780612B46A0D6A944 (void);
// 0x000000F2 System.Void Unity.Barracuda.ComputeKernel::Dispatch()
extern void ComputeKernel_Dispatch_m056450E3439528399CDB0710C7C0B694CE02F1E5 (void);
// 0x000000F3 System.Int64 Unity.Barracuda.ComputeKernel::CalculateEntryScore(UnityEngine.ComputeShader[],Unity.Barracuda.ComputeKernelLibrary/Entry,System.Boolean)
extern void ComputeKernel_CalculateEntryScore_m6267B58821BB5B0416664F72AC33340CE92D8E5E (void);
// 0x000000F4 Unity.Barracuda.ComputeKernel Unity.Barracuda.ComputeKernel::BestKernel(UnityEngine.ComputeShader[],System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry>,System.Boolean)
extern void ComputeKernel_BestKernel_mECBD57B0FD95E70D6F6F07F17D552AB52F5898D5 (void);
// 0x000000F5 System.Void Unity.Barracuda.ComputeOps::.ctor(UnityEngine.ComputeShader[],UnityEngine.ComputeShader,Unity.Barracuda.ITensorAllocator,System.Boolean)
extern void ComputeOps__ctor_m91204BBA1F07E7F7BA1008C28771EB3DF835E5DD (void);
// 0x000000F6 Unity.Barracuda.ComputeKernel Unity.Barracuda.ComputeOps::BestKernel(System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry>)
extern void ComputeOps_BestKernel_m8015CD19B0395FA5F682C179BCA2EBC285C4E197 (void);
// 0x000000F7 Unity.Barracuda.ComputeKernel Unity.Barracuda.ComputeOps::CompileKernel(Unity.Barracuda.ComputeKernelLibrary/Entry)
extern void ComputeOps_CompileKernel_m643DAA0664FC2BD9D08264EA76FBBA659497F8EC (void);
// 0x000000F8 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::MatMul2D(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void ComputeOps_MatMul2D_m21CCB12A0D26E904AD2E61624E8543F454AB99A3 (void);
// 0x000000F9 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void ComputeOps_Dense_mB36C149B3ADE6BBFBBED1CBDA7A1FDE7088F28BA (void);
// 0x000000FA Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Conv2DWinograd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation,Unity.Barracuda.ComputeKernel)
extern void ComputeOps_Conv2DWinograd_m80B0A61B2BE1C52A36F11314F1E570C783416F6A (void);
// 0x000000FB Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ComputeOps_Conv2D_m69BDCD90F5E5456C0468D967C78831AEEBC2E27F (void);
// 0x000000FC Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ComputeOps_DepthwiseConv2D_mD9713EE32A9C8C9310085092F69BF82B85F2DE96 (void);
// 0x000000FD Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ComputeOps_Conv2DTrans_m06C266849C93E7AE04E83BA1F25334B4945CB582 (void);
// 0x000000FE Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ComputeOps_Upsample2D_m527F5C2A0355425B2B387913ED3892C561071954 (void);
// 0x000000FF Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Pool2D(System.String,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ComputeOps_Pool2D_mC393A59B63BBCE8A22A1DEA87C074A00F870F68A (void);
// 0x00000100 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalMaxPool2D_mFDA638AA82AD1CF20FB7C054523F2FA51AC962A4 (void);
// 0x00000101 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalAvgPool2D_m7F7250195BB931464FFCBE000CCD3771DDFE4C0C (void);
// 0x00000102 System.Tuple`2<Unity.Barracuda.Tensor,Unity.Barracuda.Tensor> Unity.Barracuda.ComputeOps::GlobalAvgVariancePool2DReduce(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Boolean)
extern void ComputeOps_GlobalAvgVariancePool2DReduce_mA1355CB84A85A27D3568217064880DF165BC9CA9 (void);
// 0x00000103 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalAvgVariancePool2D_mB3D4DD371A1AC01E93F3B720CEE95D0940F44F2D (void);
// 0x00000104 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalPool2DReduce(System.String,Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalPool2DReduce_m378816F5D14765084E3FDB7E9B4BBD3ECF85C4D4 (void);
// 0x00000105 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalPool2D(System.String,System.String,Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalPool2D_m637CCA1F2726D408645F3F2271D29A009377AE16 (void);
// 0x00000106 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ComputeOps_ScaleBias_m79B5A84BB8806000AC439713E218FBDFD6AED982 (void);
// 0x00000107 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void ComputeOps_Normalization_mAB61776FC9AB0F91A8CFF29BC3A04E0212C073CF (void);
// 0x00000108 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Activation(System.String,Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ComputeOps_Activation_m69E5A616914E1F16A651396B2972B9913E83FEDB (void);
// 0x00000109 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ComputeOps_PRelu_m7D30C8D1986C875BACE52BB1AAC1144CE2EE73CD (void);
// 0x0000010A Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void ComputeOps_Softmax_m08F974AAE2A5B2894A0B61F37738BCE6D5C731E8 (void);
// 0x0000010B Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void ComputeOps_LogSoftmax_mAE9C89A65E223EE2B5DDB588A7BB9E3E92533B14 (void);
// 0x0000010C Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void ComputeOps_RandomNormal_mA0A49C2D3FCDC8FCAF9DA371A518FD784B402968 (void);
// 0x0000010D Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void ComputeOps_RandomUniform_mC632C7A35405E41CFF97D2185D5BB046DB608AA0 (void);
// 0x0000010E Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void ComputeOps_Concat_mE42D264AF6C1FE9E407B4C58807C997513EBFAF0 (void);
// 0x0000010F System.Int32[] Unity.Barracuda.ComputeOps::GetInputTensorStridesOnDevice(Unity.Barracuda.TensorShape,Unity.Barracuda.ComputeInfo/ChannelsOrder)
extern void ComputeOps_GetInputTensorStridesOnDevice_mB89CF8A83E745BA7A14C99C38EF913862A2F6BB8 (void);
// 0x00000110 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ElementwiseWithBroadcast(System.String,Unity.Barracuda.Tensor[])
extern void ComputeOps_ElementwiseWithBroadcast_mC3586A8978BF6BECF580C36ABF82D4D36DDB644A (void);
// 0x00000111 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.String,System.Single)
extern void ComputeOps_ApplyPadding_m84A7429DF9AF9426BA4569BA6423A12CC5891408 (void);
// 0x00000112 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::LogicalNot(Unity.Barracuda.Tensor)
extern void ComputeOps_LogicalNot_mAF2DF864BE1BF681A3F1B4962AA5ABA7017CBD44 (void);
// 0x00000113 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ComputeOps_Where_mE33E2EF8E253C9C8CEEAAEA909DF1A4BEFC29F34 (void);
// 0x00000114 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::CopyAndReshape_NCHW(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ComputeOps_CopyAndReshape_NCHW_mC8434DB855CF81E54258498D86E0BBE5808C24B4 (void);
// 0x00000115 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ComputeOps_CopyAndReshape_mBE78463CD4614BD3CE225D0634E70BEF5016E951 (void);
// 0x00000116 System.Void Unity.Barracuda.ComputeVarsWithSharedModel::Dispose()
extern void ComputeVarsWithSharedModel_Dispose_m53F35E818E246B266C32D1271720FD2EFD97D10F (void);
// 0x00000117 Unity.Barracuda.Tensor[] Unity.Barracuda.ComputeVarsWithSharedModel::PrepareLayerInputTensors(Unity.Barracuda.Model,Unity.Barracuda.Layer,Unity.Barracuda.IOps)
extern void ComputeVarsWithSharedModel_PrepareLayerInputTensors_m8281D819EED363597A5081DD03A1170C59C425C9 (void);
// 0x00000118 UnityEngine.ComputeBuffer Unity.Barracuda.ComputeVarsWithSharedModel::CreateComputeBufferForModelTensors(Unity.Barracuda.Layer,System.Int64&)
extern void ComputeVarsWithSharedModel_CreateComputeBufferForModelTensors_m9FE13162F42C5CA05D4A47506A9A38140DA2A411 (void);
// 0x00000119 System.Void Unity.Barracuda.ComputeVarsWithSharedModel::.ctor()
extern void ComputeVarsWithSharedModel__ctor_m39E3A59EBDE7BEF89E3DCD0C5F208A648B25CA12 (void);
// 0x0000011A System.Void Unity.Barracuda.ComputeDebugUtils::.cctor()
extern void ComputeDebugUtils__cctor_m83C12BD3CCB5B742DF197286CA154E2C219574B8 (void);
// 0x0000011B System.Void Unity.Barracuda.ComputeDebugUtils::LogAssertion(Unity.Barracuda.ComputeDebugUtils/KernelAssertInfo,System.String)
extern void ComputeDebugUtils_LogAssertion_mADEB6EDD58399AFB776F8FF9F7791164A890C56F (void);
// 0x0000011C System.Void Unity.Barracuda.ComputeDebugUtils::PrepareDispatch()
extern void ComputeDebugUtils_PrepareDispatch_m43C3237215D40F0CA3AC232686260DFB1D2C502E (void);
// 0x0000011D System.Void Unity.Barracuda.ComputeDebugUtils::VerifyDispatch(System.String)
extern void ComputeDebugUtils_VerifyDispatch_m3E6C40F27B354A7D27FDE77595AB8B8FE0B38A4A (void);
// 0x0000011E System.Void Unity.Barracuda.ComputeDebugUtils::.ctor()
extern void ComputeDebugUtils__ctor_m4EDC24A509AA53400E157EB80FCA40829BE0E9EF (void);
// 0x0000011F System.Void Unity.Barracuda.PrecompiledComputeOps::.ctor(UnityEngine.ComputeShader[],UnityEngine.ComputeShader,Unity.Barracuda.ITensorAllocator,System.Boolean)
extern void PrecompiledComputeOps__ctor_m1324EBEBEE7412AEB34D306B640662327F958F39 (void);
// 0x00000120 UnityEngine.ComputeBuffer Unity.Barracuda.PrecompiledComputeOps::NewComputeBuffer(System.String,System.Int32,System.Int32)
extern void PrecompiledComputeOps_NewComputeBuffer_m2ACF248AF6128BF0F4DFBF4BE6923C207CEAC029 (void);
// 0x00000121 System.Void Unity.Barracuda.PrecompiledComputeOps::ResetAllocator(System.Boolean)
extern void PrecompiledComputeOps_ResetAllocator_m536262A7ED56A1E4AFC086F16F4D47F5E839019D (void);
// 0x00000122 System.Int32 Unity.Barracuda.PrecompiledComputeOps::CalcModelWithInputsHashCode(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void PrecompiledComputeOps_CalcModelWithInputsHashCode_m503DECAEFF10F75C59503A003C8C0CF3F06E4D3D (void);
// 0x00000123 Unity.Barracuda.Tensor[] Unity.Barracuda.PrecompiledComputeOps::PrepareConv2dWinograd(Unity.Barracuda.Model,Unity.Barracuda.Layer)
extern void PrecompiledComputeOps_PrepareConv2dWinograd_m953B6C60F5D4E9FF793C1E9BAD238E0D61B3F621 (void);
// 0x00000124 Unity.Barracuda.Tensor[] Unity.Barracuda.PrecompiledComputeOps::PrepareConv2DTrans(Unity.Barracuda.Model,Unity.Barracuda.Layer)
extern void PrecompiledComputeOps_PrepareConv2DTrans_m6E2227D97B667FB3759B19DD39057B80489E9B2E (void);
// 0x00000125 System.Void Unity.Barracuda.PrecompiledComputeOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void PrecompiledComputeOps_PrepareModel_m212A36FC70AD2F4DE6AAC14F4DB0689A672F1638 (void);
// 0x00000126 System.Void Unity.Barracuda.PrecompiledComputeOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void PrecompiledComputeOps_PreExecuteLayer_mB07049A8AB9665F69FA42CC65BF68BC2744A0BC1 (void);
// 0x00000127 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::ApplyUnsupportedFusedActivationIfNeeded(Unity.Barracuda.Layer/FusedActivation,Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_ApplyUnsupportedFusedActivationIfNeeded_mD7FEE6FB4E63DD109F419E06302644B965D7F170 (void);
// 0x00000128 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void PrecompiledComputeOps_Dense_mB0DB65FB26BF1728B70A44C15959A83B5937896A (void);
// 0x00000129 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void PrecompiledComputeOps_Conv2D_m6EADEEB3293A4C862D5319341CEA68FFC2ADA95B (void);
// 0x0000012A Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void PrecompiledComputeOps_DepthwiseConv2D_m49EF0A8B1046727495F361EF10D66BC89EE46DB3 (void);
// 0x0000012B Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void PrecompiledComputeOps_Conv2DTrans_mD593A52789D40E7AD2D650C40FBE989929457D58 (void);
// 0x0000012C Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void PrecompiledComputeOps_Upsample2D_mE2F69DC8FAFAC05F474424A926609F30897587BC (void);
// 0x0000012D Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Pool2D(System.String,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void PrecompiledComputeOps_Pool2D_mB5276E6025E362BFFD2779883DA563A4544EA46A (void);
// 0x0000012E Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_ScaleBias_mB13EB708BE89534B4D731CB9CE850382FC562521 (void);
// 0x0000012F Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::GlobalPool2D(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_GlobalPool2D_m0632D3B083BE9F4634C3A9FF458523E313F33EF4 (void);
// 0x00000130 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_GlobalMaxPool2D_m284BF1F093178A962C882C7B3F74E691B4391B83 (void);
// 0x00000131 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_GlobalAvgPool2D_m98B876A705B0F0B08A855FD73F37C71A6B2E80EE (void);
// 0x00000132 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void PrecompiledComputeOps_Normalization_mB76FB404D339F869F3BA65F9076FEBC94B2CB2CD (void);
// 0x00000133 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Activation(System.String,Unity.Barracuda.Tensor,System.Single,System.Single)
extern void PrecompiledComputeOps_Activation_mC424B15AA6409B04AF4065FAD564427138D5D020 (void);
// 0x00000134 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_PRelu_m79133E80CDFEE1784689BF77E86E771BB1555237 (void);
// 0x00000135 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void PrecompiledComputeOps_Softmax_m9EDFDC51A532206D3AD5803641C046805D9895C7 (void);
// 0x00000136 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_LogSoftmax_mDB1243AE50A4CE9D308AEAECDCAC7696DD87C955 (void);
// 0x00000137 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::ElementwiseWithBroadcast(System.String,Unity.Barracuda.Tensor[])
extern void PrecompiledComputeOps_ElementwiseWithBroadcast_mEDAE28828CA413F66147B72ABD517071E162019B (void);
// 0x00000138 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void PrecompiledComputeOps_Concat_mC129501AE0473C455BD16A797C2525411ADA6580 (void);
// 0x00000139 System.Void Unity.Barracuda.PrecompiledComputeOps::.cctor()
extern void PrecompiledComputeOps__cctor_mC62AEF19638218ABD44DF2B1729FB92D7DE593A4 (void);
// 0x0000013A System.Single[] Unity.Barracuda.ArrayTensorData::get_array()
extern void ArrayTensorData_get_array_m836519BC3644D59738EEB8ADE8425CC76824357C (void);
// 0x0000013B System.Void Unity.Barracuda.ArrayTensorData::.ctor(System.Int32)
extern void ArrayTensorData__ctor_m42BBDDD0588AA63AA3ACD8CD46B6CEF0AA9DC1C0 (void);
// 0x0000013C System.Void Unity.Barracuda.ArrayTensorData::.ctor(Unity.Barracuda.TensorShape)
extern void ArrayTensorData__ctor_mCDC62F547A97D8A855016D648295412F1EBBE796 (void);
// 0x0000013D System.Void Unity.Barracuda.ArrayTensorData::Finalize()
extern void ArrayTensorData_Finalize_m1B9012A7982FF98C490235FFAE0B02FF12023334 (void);
// 0x0000013E System.Void Unity.Barracuda.ArrayTensorData::Dispose()
extern void ArrayTensorData_Dispose_m0A1ABE5D48423B861B0866EBF0B2610EFC563DCE (void);
// 0x0000013F System.Void Unity.Barracuda.ArrayTensorData::Reserve(System.Int32)
extern void ArrayTensorData_Reserve_m61339451429776DFF1315B1691FDA2AB54800877 (void);
// 0x00000140 System.Void Unity.Barracuda.ArrayTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void ArrayTensorData_Upload_mB74B0CBC8F93CE893E9443024535F4F8A7749B60 (void);
// 0x00000141 System.Boolean Unity.Barracuda.ArrayTensorData::ScheduleAsyncDownload(System.Int32)
extern void ArrayTensorData_ScheduleAsyncDownload_mA8E070B01F28CBD1D61DCDCFE95CBAB7CDBA586C (void);
// 0x00000142 System.Single[] Unity.Barracuda.ArrayTensorData::Download(Unity.Barracuda.TensorShape)
extern void ArrayTensorData_Download_m02921B321095079F08ADF0680683086D512D1E44 (void);
// 0x00000143 System.Single[] Unity.Barracuda.ArrayTensorData::SharedAccess(System.Int32&)
extern void ArrayTensorData_SharedAccess_m8B5C1DE86E6CEABFEBBEB4AD8E328FE2E0540065 (void);
// 0x00000144 System.Int32 Unity.Barracuda.ArrayTensorData::get_maxCapacity()
extern void ArrayTensorData_get_maxCapacity_m0D069231C0CC3AE4669D009E5606DB0A9D7F2441 (void);
// 0x00000145 System.String Unity.Barracuda.ArrayTensorData::ToString()
extern void ArrayTensorData_ToString_m1C787E8CA41F36C3857B258161FA99804A5208CD (void);
// 0x00000146 System.Single[] Unity.Barracuda.SharedArrayTensorData::get_array()
extern void SharedArrayTensorData_get_array_m6740FDF32CB957B6A5003ABB907E9B77D49A4BFD (void);
// 0x00000147 System.Int32 Unity.Barracuda.SharedArrayTensorData::get_offset()
extern void SharedArrayTensorData_get_offset_m52686EF31C240E34B1990F5DB478F46FE27AE03D (void);
// 0x00000148 System.Int32 Unity.Barracuda.SharedArrayTensorData::get_count()
extern void SharedArrayTensorData_get_count_mF2816181483F62C6ED11F0C71D23BA05483F8BE1 (void);
// 0x00000149 System.Void Unity.Barracuda.SharedArrayTensorData::.ctor(System.Single[],System.Int32,System.Int32)
extern void SharedArrayTensorData__ctor_m7FC6C181E8420A72F4D2BD18A7FC76A34D2A3BE2 (void);
// 0x0000014A System.Void Unity.Barracuda.SharedArrayTensorData::Finalize()
extern void SharedArrayTensorData_Finalize_m2839DDED1244F08F201D6E01CD4C6763B4373D3D (void);
// 0x0000014B System.Void Unity.Barracuda.SharedArrayTensorData::Dispose()
extern void SharedArrayTensorData_Dispose_m4D5A6F8758CC266967AC42B742B9D5AAC8C9C527 (void);
// 0x0000014C System.Void Unity.Barracuda.SharedArrayTensorData::Reserve(System.Int32)
extern void SharedArrayTensorData_Reserve_m2F7A66809956297CD24742339F4081A56186591F (void);
// 0x0000014D System.Void Unity.Barracuda.SharedArrayTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void SharedArrayTensorData_Upload_m141677D60D3D71AA093AE664D749742740F0C073 (void);
// 0x0000014E System.Boolean Unity.Barracuda.SharedArrayTensorData::ScheduleAsyncDownload(System.Int32)
extern void SharedArrayTensorData_ScheduleAsyncDownload_m76BF54E4A56E1475FAD4AA3FE695931CD5846901 (void);
// 0x0000014F System.Single[] Unity.Barracuda.SharedArrayTensorData::Download(Unity.Barracuda.TensorShape)
extern void SharedArrayTensorData_Download_m2E08C69189574E40294E63D479F342B5B2BEEEE9 (void);
// 0x00000150 System.Single[] Unity.Barracuda.SharedArrayTensorData::SharedAccess(System.Int32&)
extern void SharedArrayTensorData_SharedAccess_m487C0052054B51677362050FFE921F5CFB0FE695 (void);
// 0x00000151 System.Int32 Unity.Barracuda.SharedArrayTensorData::get_maxCapacity()
extern void SharedArrayTensorData_get_maxCapacity_m0DFD32325D83266F1A4A66B83C3ED43A4403806F (void);
// 0x00000152 System.String Unity.Barracuda.SharedArrayTensorData::ToString()
extern void SharedArrayTensorData_ToString_m79DA31FF4DD6F0C7901D085DDEED6E138EF1EE60 (void);
// 0x00000153 System.Void Unity.Barracuda.ReferenceCPUOps::.ctor(Unity.Barracuda.ITensorAllocator)
extern void ReferenceCPUOps__ctor_m187AC0503D8A1EBBC71CBD34EBB16C4A6DF368BA (void);
// 0x00000154 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensor(Unity.Barracuda.TensorShape,System.String)
extern void ReferenceCPUOps_NewTensor_m3394A6CA474BC120BB32B2C42C967BF96B974805 (void);
// 0x00000155 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensorLike(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_NewTensorLike_mFD9FAAF62870BC5BBF74BA92B48F7CCDF3650D93 (void);
// 0x00000156 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensorLike(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_NewTensorLike_mCACFC647D88F2F880616AEB793F01B02417C6A16 (void);
// 0x00000157 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensor(System.Int32,System.Int32,System.String)
extern void ReferenceCPUOps_NewTensor_m7CC1AD7F8CF8239DE70777AB904A9B57217B4CFA (void);
// 0x00000158 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensor(System.Int32,System.Int32,System.Int32,System.Int32,System.String)
extern void ReferenceCPUOps_NewTensor_m651AED9E8E92BA4B9A9CFB80BA2D81315BEB2BDE (void);
// 0x00000159 System.Void Unity.Barracuda.ReferenceCPUOps::ResetAllocator(System.Boolean)
extern void ReferenceCPUOps_ResetAllocator_mCE6FC9B1E0F58930FE50727DB1D27223AB6BD24C (void);
// 0x0000015A System.Single Unity.Barracuda.ReferenceCPUOps::ApplyFusedActivation(System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_ApplyFusedActivation_mE5807BB74FCE09F3FC435976826CA4F1D953B4EB (void);
// 0x0000015B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void ReferenceCPUOps_MatMul_mA5D9FB55168B23C7E008DE206FF90CE2A95DCBF2 (void);
// 0x0000015C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::MatMul2D(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void ReferenceCPUOps_MatMul2D_mB4378FF67F57ACF97E458BD736870BB585B14327 (void);
// 0x0000015D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_Dense_m3E8898E45AC98C8F738385358A55F87D49C529B3 (void);
// 0x0000015E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_Conv2D_m3F8A6671C22A6F381FDFE04EFF100FB80A33C1BB (void);
// 0x0000015F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_DepthwiseConv2D_mB4611A97CAFF6BA7DBBC0C7B457BC663B47E5BF6 (void);
// 0x00000160 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_Conv2DTrans_m733D612FED875543A5529F06519A4EDF0A84FDA6 (void);
// 0x00000161 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceCPUOps_Upsample2D_mEFF601B3399E2D6861C2DB35C6A7D384493D66D8 (void);
// 0x00000162 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceCPUOps_Resample2D_m46C1CE04BE49B88DF39E48BFE10938FA77420667 (void);
// 0x00000163 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer/DepthToSpaceMode)
extern void ReferenceCPUOps_DepthToSpace_m3FA276D7388EA94E1CE6C3CC50332FF5424E59E4 (void);
// 0x00000164 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_SpaceToDepth_m6F6651C39BC6ADBD4EE0767A087A25B5DC7EE21C (void);
// 0x00000165 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceCPUOps_MaxPool2D_m41BE51753BF206A1838799C09414D811FD2F1827 (void);
// 0x00000166 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceCPUOps_AvgPool2D_m22F95391C12745DF51FBFAFB68A63F6C51575CBA (void);
// 0x00000167 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GlobalMaxPool2D_mBA717FADAB1C5B7B1CDCA41E1FBEED7E1817924B (void);
// 0x00000168 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GlobalAvgPool2D_mA789567EC0537E87B81737D9752472B8216D7F9D (void);
// 0x00000169 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GlobalAvgVariancePool2D_mEB90D19A498FEC509BB7B85752DCEBE302407122 (void);
// 0x0000016A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.Func`6<Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32,System.Single>)
extern void ReferenceCPUOps_ApplyPadding_m3377BE03FD1B66DEFFB9A04B2EC185D8DB559088 (void);
// 0x0000016B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void ReferenceCPUOps_Border2D_m3D89F6B05C440F311786C4B23B5A575AF02FC0AD (void);
// 0x0000016C System.Void Unity.Barracuda.ReferenceCPUOps::ClampHWToTensorShape(Unity.Barracuda.TensorShape,System.Int32&,System.Int32&)
extern void ReferenceCPUOps_ClampHWToTensorShape_m9200544EAB48E7971D03F00039C3CC0EE6A6DAC0 (void);
// 0x0000016D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Pad2DReflect_mDB6DE594E5C15DE160B1786A18E93E54E6971D04 (void);
// 0x0000016E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Pad2DSymmetric_mA47A9E3CB29393CC6D4F5D0D2C0890B886BCC064 (void);
// 0x0000016F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Pad2DEdge_m87E28989EF287F336A26B988CF71C371A617CC01 (void);
// 0x00000170 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_ScaleBias_m24F6230338CEEBE150FDB5BD9605645FA086AE02 (void);
// 0x00000171 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void ReferenceCPUOps_LRN_m26DFF3BBEB9546CB225AEB294EB50A46793D9F2A (void);
// 0x00000172 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_Normalization_m8E5685615C0F863A42A50D67C38A2A84C03FE7CC (void);
// 0x00000173 System.Single Unity.Barracuda.ReferenceCPUOps::Bernoulli(System.Single)
extern void ReferenceCPUOps_Bernoulli_mF0D3D6D3EEE902AA60695B12F18113AD7B614E4F (void);
// 0x00000174 System.Single Unity.Barracuda.ReferenceCPUOps::Gaussian(System.Single,System.Single)
extern void ReferenceCPUOps_Gaussian_m7173E241179D1498E1CFBF06A224359AED2A8FE4 (void);
// 0x00000175 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Dropout(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_Dropout_mF22FF7C3A0F2F1E123E2CFA2C774CE45CEF363BF (void);
// 0x00000176 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void ReferenceCPUOps_RandomNormal_m022083B1141F71762251E8505507CD41B4A41254 (void);
// 0x00000177 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void ReferenceCPUOps_RandomUniform_m786CFE6A69225711D4583A6436C5EAC44FE8C064 (void);
// 0x00000178 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void ReferenceCPUOps_Multinomial_m890FDEDE4BB4AA758653B47C118EB60955A8EE9F (void);
// 0x00000179 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void ReferenceCPUOps_OneHot_mCD3C0B65D948FBA6538FD95BCD6CFCE3F06F439C (void);
// 0x0000017A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::TopKIndices(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void ReferenceCPUOps_TopKIndices_mD3F612B59F57BFB64104998275F1CC06029658F1 (void);
// 0x0000017B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NonZero(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_NonZero_m2BEF07BA95BF42B8839BBAB8B1A034E5EB29CAAF (void);
// 0x0000017C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::TopKValues(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_TopKValues_m9B3B1B5200E7FC4A2EFD0ADCF2BB4B695137A180 (void);
// 0x0000017D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Relu(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Relu_m9BA71F6FAD4A51D2C2A2D5F9B03A8EF8EFCF74D0 (void);
// 0x0000017E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_PRelu_mE7CCC122B70AC307FA97D58EFFE99A2B84B7072A (void);
// 0x0000017F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_Softmax_m8A41523484C79F87776A847E338D842C0B6DB879 (void);
// 0x00000180 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogSoftmax_mFB58915887CEE36BEF64D3AABFBB3993B138DC62 (void);
// 0x00000181 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Tanh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Tanh_mB1AE9DB40D0B11B86811E991865146049A525ACE (void);
// 0x00000182 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sigmoid(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Sigmoid_mB77A489BAEAB32E5FEA47AC910EA60CFE5C39ACF (void);
// 0x00000183 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Relu6(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Relu6_mFD3CD70ECB02C947CEE629BBDCEC581A26DB6914 (void);
// 0x00000184 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_Elu_mB1249FF6FD3F28A7BDF9C830AF45C72C0E20EBE8 (void);
// 0x00000185 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_LeakyRelu_m1DC27809DF28E3B42054C4C57393846A09A9DEC5 (void);
// 0x00000186 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceCPUOps_Selu_m158F8F259A058ED5E23A9EF584F8F70100B2F487 (void);
// 0x00000187 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Swish(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Swish_mF03010613A501896B97DC9AD7A733FD28F256AE8 (void);
// 0x00000188 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Abs(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Abs_m75BC0EA3A605A86A60A9A77B077C6C0BDE8FC69F (void);
// 0x00000189 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Neg(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Neg_mF94628AD2A8420BB83003E58C76C04B7FF7D07BA (void);
// 0x0000018A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Ceil(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Ceil_m5E5298B133687BEBC72545B67D9F44415F6994AC (void);
// 0x0000018B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceCPUOps_Clip_m200D51F2EF8F105B568E2715599AB477D0E4F88F (void);
// 0x0000018C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Floor(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Floor_mA0166F7746E7C7900838A1CD2BFF6D9D7E98305C (void);
// 0x0000018D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Reciprocal(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Reciprocal_m010E3D0E9F162B67EB42C96D73C182C9A3E48B66 (void);
// 0x0000018E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pow(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_Pow_m82B3A03D3282ECC69F18CCF25A33576C2D5D62A1 (void);
// 0x0000018F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Exp(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Exp_m67D956204736D8ACD1E643704DEF5D5E13F38267 (void);
// 0x00000190 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Log(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Log_m3995E828BB9BD06464C7FAD26CBF40A4460702EA (void);
// 0x00000191 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sqrt(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Sqrt_mD573B103021452D0A16A3B493FAB839E13A1FE9A (void);
// 0x00000192 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Acos(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Acos_mC79E7BA290FE33213C23EE403D0D33EEA883C1B7 (void);
// 0x00000193 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Acosh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Acosh_m28FFF4CD2D36F39EDCEC31EE0F016A717340D6BE (void);
// 0x00000194 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Asin(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Asin_m197E8463E6D6481059FE87DAEE516AAF9E3A026A (void);
// 0x00000195 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Asinh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Asinh_m108DB063734948EC7A82AA8D55366D7EBF8729C2 (void);
// 0x00000196 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Atan(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Atan_mA2D17F97EE4AC093082B740CF8BFDC754100092A (void);
// 0x00000197 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Atanh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Atanh_m102610E7DE7433D87ED4CEEF3030BEA97D1415D5 (void);
// 0x00000198 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Cos(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Cos_m78044719342FDB82A7B206BE75E03C1C02551AC9 (void);
// 0x00000199 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Cosh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Cosh_m32B2F581A07BA299E22571BCAEB751A887EDC471 (void);
// 0x0000019A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sin(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Sin_m3CB203397D68564BBAFECEDDCFE88864E9452DF3 (void);
// 0x0000019B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sinh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Sinh_m7BE1C1DD1E43CE5E4808DA00554E1D882F7FDACD (void);
// 0x0000019C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Tan(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Tan_mEFAEC9DE2E960D9CE80EF0E3FC101FDE49C2DBEA (void);
// 0x0000019D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceCPUOps_Concat_m0F22431440EF8B82D6E402508B3DFD16C5682CB8 (void);
// 0x0000019E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceCPUOps_StridedSlice_m75DE11950740D7BC629BFCE36F8BDA619CFC99B3 (void);
// 0x0000019F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Tile_m879FA76DB34D614882B47F5950EB597F168DAF35 (void);
// 0x000001A0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Shape(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_Shape_mAA41CACC7C8C351439B21E61868AA5012B050B63 (void);
// 0x000001A1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ApplyElementwiseWithBroadcast(Unity.Barracuda.Tensor[],System.Func`3<System.Single,System.Single,System.Single>)
extern void ReferenceCPUOps_ApplyElementwiseWithBroadcast_m22706D60436F2BDB20E9AC36F42607319DB28326 (void);
// 0x000001A2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Add(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Add_m436720B4F85470C72BFAC75F78FAF4CFC31711C8 (void);
// 0x000001A3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sub(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Sub_mEB54A8B91273A5C053D0777F2E8CAEA255402B66 (void);
// 0x000001A4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Mul(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Mul_mAB485185C9F18F8EAF5C73BD7B42A07FA58A6302 (void);
// 0x000001A5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Div(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Div_m552D3C589AD362F87B6C04252203621F8084886E (void);
// 0x000001A6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pow(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Pow_mAFCF2CF2D204A5C642EBABD4E9E004C1CB923631 (void);
// 0x000001A7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Min(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Min_mC151AFBAD733E31DD4E1D560276F0ED682E5E453 (void);
// 0x000001A8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Max(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Max_mF14B1FD03478FB5BDAF64193CBE5BAF1FCA34CDC (void);
// 0x000001A9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Mean(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Mean_m77C6029ED68818A64577A62290823269C41ABB2B (void);
// 0x000001AA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceMin_m827DA311318F56FAA2F11AFFC9447EF7DAC3226C (void);
// 0x000001AB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceMax_m6890C07CA5D4732B7C8DBACBBA98E63A3680DCAF (void);
// 0x000001AC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ArgMax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ArgMax_m2490E4E249D2311A38EBB37F186091924DDD217B (void);
// 0x000001AD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ArgMin(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ArgMin_m5552D30E8CB52AAC844048F2D5F759BC934DA15B (void);
// 0x000001AE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceSum_m0CED1518246176B8E1B823BC361C6E18D24B6E44 (void);
// 0x000001AF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceMean_mF62D4A1193E83F59783FC4CFD0FB70B28291F955 (void);
// 0x000001B0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceProd_mC3237D159A7E5E1B991C6E89ADD7A708DB3AC3C9 (void);
// 0x000001B1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ApplyLogicalOperator(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Func`3<System.Single,System.Single,System.Single>)
extern void ReferenceCPUOps_ApplyLogicalOperator_m52C3751C972DC0A0306850296F334E16B20ED4E2 (void);
// 0x000001B2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Greater_mA83940D946611007D5E55298E8E21CB862B7C399 (void);
// 0x000001B3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GreaterEqual_m2865D542F81E514717DDD06C63181508915BE028 (void);
// 0x000001B4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Less_m16C8827FC107E6168EC560B38AE15B9826F76281 (void);
// 0x000001B5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LessEqual_mEE600311A6D61CE9D2DFE443B9986D846BA66896 (void);
// 0x000001B6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Equal_mCF597FA945D7C2B08E3E4A47605FAE386477FAE6 (void);
// 0x000001B7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalOr_m4681975F596DCDD2EF72197E69A8B6604705CCE3 (void);
// 0x000001B8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalAnd_mCB8C179D5E1CDF02236D14F8EF62CDC030CEC851 (void);
// 0x000001B9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalXor_m8018A82CBCC46C98137F9BAF8C68833D304964DD (void);
// 0x000001BA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalNot(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalNot_m9670166C671375DA12D2F92BFE66E40EC13A4BA8 (void);
// 0x000001BB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Where_mDBFE0A5ECFEB7A135B4BEF0EE14504D10A62CD3D (void);
// 0x000001BC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceCPUOps_CopyAndReshape_m5E57E0A32497A8DCA865C608FDCE141354E93F5F (void);
// 0x000001BD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Copy(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Copy_m7375E1687E5B62B5554F2F0497C16CEBF3E187B9 (void);
// 0x000001BE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Flatten(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Flatten_mDE409CD9FA29F0FEE6C7FD833DFADDF66823D9C8 (void);
// 0x000001BF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceCPUOps_Reshape_m0F7FBC735D4E22068595E60D731F52BED3F3F043 (void);
// 0x000001C0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceCPUOps_Expand_m034F930539AF13DABCAA60532240C2B1B765398A (void);
// 0x000001C1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceCPUOps_Gather_mEEFC510CF0E6CC43CBFC3B2C688B8BDA328E8D07 (void);
// 0x000001C2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NonMaxSuppression(Unity.Barracuda.Tensor[],System.Int32,System.Single,System.Single,System.Int32)
extern void ReferenceCPUOps_NonMaxSuppression_m058928F64C34CF391981C609BC91CAE9F1465554 (void);
// 0x000001C3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Transpose(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Transpose_mC13A4D4BF3D0150428070E8E97BE031B8CBD8A1D (void);
// 0x000001C4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Transpose(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Transpose_mCA3A3E41FAC1A5242B87EEC76C5050B147C2D4DE (void);
// 0x000001C5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Prepare(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Prepare_m14D0AEDDABBA57441847F985031FFA058D4487C1 (void);
// 0x000001C6 System.Single Unity.Barracuda.ReferenceCPUOps::<Pad2DReflect>g__GetReflectPadding|28_0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ReferenceCPUOps_U3CPad2DReflectU3Eg__GetReflectPaddingU7C28_0_m4DC41E092ED76451299ABE039125CF1A61E86E58 (void);
// 0x000001C7 System.Single Unity.Barracuda.ReferenceCPUOps::<Pad2DSymmetric>g__GetSymmetricPadding|29_0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ReferenceCPUOps_U3CPad2DSymmetricU3Eg__GetSymmetricPaddingU7C29_0_mB543B855B62A566EA3D1B17D53B9D01795E805A6 (void);
// 0x000001C8 System.Single Unity.Barracuda.ReferenceCPUOps::<Pad2DEdge>g__GetEdgePadding|30_0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ReferenceCPUOps_U3CPad2DEdgeU3Eg__GetEdgePaddingU7C30_0_m40C9EB5950DCE3A2B63754D16D922090DC951B1A (void);
// 0x000001C9 System.Single Unity.Barracuda.ReferenceCPUOps::<NonMaxSuppression>g__GetIntersectionOverUnionArea|118_0(UnityEngine.Rect,UnityEngine.Rect)
extern void ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetIntersectionOverUnionAreaU7C118_0_m5099E1E7A0CEA993DC3AEE4E9C9EFA8C9AA65E07 (void);
// 0x000001CA System.Single Unity.Barracuda.ReferenceCPUOps::<NonMaxSuppression>g__GetIntersectionArea|118_1(UnityEngine.Rect,UnityEngine.Rect)
extern void ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetIntersectionAreaU7C118_1_mBF2A15FAE35BAA163C43DCA1E719B860DE3D629E (void);
// 0x000001CB UnityEngine.Rect Unity.Barracuda.ReferenceCPUOps::<NonMaxSuppression>g__GetRect|118_2(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetRectU7C118_2_mCECCC48C6DC9BE59CEDB41D31E71A6A1EDE91D21 (void);
// 0x000001CC UnityEngine.Rect Unity.Barracuda.ReferenceCPUOps::<NonMaxSuppression>g__GetRectFromCenter|118_3(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetRectFromCenterU7C118_3_mDF4869860B8E9D563FECAC53AB6D87698C5A6CDE (void);
// 0x000001CD System.Single Unity.Barracuda.MathfEx::Tanh(System.Single)
extern void MathfEx_Tanh_mD40CD862465006E3C4F67C9FD7F3A4653F04B4FD (void);
// 0x000001CE System.Void Unity.Barracuda.MathfEx::.ctor()
extern void MathfEx__ctor_m89F50F2C1BABC6B41C4CD0A3CD9EAB2D2592C1E4 (void);
// 0x000001CF System.Int32 Unity.Barracuda.ComputeHelper::IDivC(System.Int32,System.Int32)
extern void ComputeHelper_IDivC_m112D61B0AAFFC0B6381D3282C88BC065C794C7CD (void);
// 0x000001D0 UnityEngine.ComputeBuffer Unity.Barracuda.ComputeTensorData::get_buffer()
extern void ComputeTensorData_get_buffer_m3E38E936BBB4B44DF6AE3B4227FD419D128FE889 (void);
// 0x000001D1 System.Int32 Unity.Barracuda.ComputeTensorData::get_offset()
extern void ComputeTensorData_get_offset_mF2285541C6233F7C669A3B06FC68010B878B857A (void);
// 0x000001D2 Unity.Barracuda.ComputeInfo/ChannelsOrder Unity.Barracuda.ComputeTensorData::get_channelsOrder()
extern void ComputeTensorData_get_channelsOrder_m2DCBC97A3D57C2B97B5ED8CB36F4DCDC9D60D2C7 (void);
// 0x000001D3 System.Void Unity.Barracuda.ComputeTensorData::.ctor(Unity.Barracuda.TensorShape,System.String,Unity.Barracuda.ComputeInfo/ChannelsOrder,System.Boolean)
extern void ComputeTensorData__ctor_mC3D4428FCFB9BDC2B9033061D8FD2E69F4C4829D (void);
// 0x000001D4 System.Void Unity.Barracuda.ComputeTensorData::.ctor(UnityEngine.ComputeBuffer,Unity.Barracuda.TensorShape,System.Int32,System.String,Unity.Barracuda.ComputeInfo/ChannelsOrder)
extern void ComputeTensorData__ctor_mF1BA7A178632E4D2D1F27A8066E9F48D7F4AE909 (void);
// 0x000001D5 System.Void Unity.Barracuda.ComputeTensorData::Finalize()
extern void ComputeTensorData_Finalize_m3F643C49D9D44B7558B944B460BAF81764D43BA2 (void);
// 0x000001D6 System.Void Unity.Barracuda.ComputeTensorData::Dispose()
extern void ComputeTensorData_Dispose_mC5225AB54C8F1B71A1CD6DAF81011DEE2965E955 (void);
// 0x000001D7 System.Void Unity.Barracuda.ComputeTensorData::Reserve(System.Int32)
extern void ComputeTensorData_Reserve_mF81BD04F645CC5DE49AAFA238BDE3D222E482215 (void);
// 0x000001D8 System.Void Unity.Barracuda.ComputeTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void ComputeTensorData_Upload_mF775E2C1074223719DC11E5ACD837FAC8A4F0FF3 (void);
// 0x000001D9 System.Boolean Unity.Barracuda.ComputeTensorData::ScheduleAsyncDownload(System.Int32)
extern void ComputeTensorData_ScheduleAsyncDownload_m5CB44D627B975294BF891CFC80F989EDE0FECBC4 (void);
// 0x000001DA System.Boolean Unity.Barracuda.ComputeTensorData::WaitFor3Frames(System.Int32)
extern void ComputeTensorData_WaitFor3Frames_mF117D026C263BD8D7F11E867DA6BBEA25B4C0243 (void);
// 0x000001DB System.Boolean Unity.Barracuda.ComputeTensorData::WaitForAsyncReadback(System.Int32)
extern void ComputeTensorData_WaitForAsyncReadback_m148A39E7520EC53B81DC4F74EF8AE35184C803DB (void);
// 0x000001DC System.Single[] Unity.Barracuda.ComputeTensorData::ConvertFromOnDeviceFormat(Unity.Barracuda.TensorShape,System.Single[])
extern void ComputeTensorData_ConvertFromOnDeviceFormat_m00E9A196EA80520E4FED2A8EA5D4C6AD1F27B767 (void);
// 0x000001DD System.Single[] Unity.Barracuda.ComputeTensorData::Download(Unity.Barracuda.TensorShape)
extern void ComputeTensorData_Download_m9F1B8E05AC4E30295E02E0806F84BE99C5E1254D (void);
// 0x000001DE System.Single[] Unity.Barracuda.ComputeTensorData::SharedAccess(System.Int32&)
extern void ComputeTensorData_SharedAccess_m2C2EE49B064E230D4654545F6BCC47524A006101 (void);
// 0x000001DF System.Int32 Unity.Barracuda.ComputeTensorData::get_maxCapacity()
extern void ComputeTensorData_get_maxCapacity_m5ED509607E7990B2A4DEDCA17EF3740610F2C601 (void);
// 0x000001E0 System.String Unity.Barracuda.ComputeTensorData::ToString()
extern void ComputeTensorData_ToString_m6EA012BA98633EB45D2AD0A1CC6F3A8AB719F7AF (void);
// 0x000001E1 System.Void Unity.Barracuda.SharedComputeTensorData::.ctor(UnityEngine.ComputeBuffer,Unity.Barracuda.TensorShape,System.Int32,System.String,Unity.Barracuda.ComputeInfo/ChannelsOrder)
extern void SharedComputeTensorData__ctor_mC932651263F720967C743924558AC4B27E8E8A92 (void);
// 0x000001E2 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedOnly(UnityEngine.TextureFormat)
extern void TextureFormatUtils_IsRedOnly_m08540FA401DECD1C17DF7542CFA9B07C9B7ED491 (void);
// 0x000001E3 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedOnly(UnityEngine.RenderTextureFormat)
extern void TextureFormatUtils_IsRedOnly_m5F7FC52B573A4663CA74A920FF9461B3F8F4C730 (void);
// 0x000001E4 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreen(UnityEngine.TextureFormat)
extern void TextureFormatUtils_IsRedGreen_m4E91D422DB86F0C32F857A5704846A1869AB335B (void);
// 0x000001E5 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreen(UnityEngine.RenderTextureFormat)
extern void TextureFormatUtils_IsRedGreen_m59D70DBA7AFAA01810D1BD77D8C08E3A1B53CC0F (void);
// 0x000001E6 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreenBlue(UnityEngine.TextureFormat)
extern void TextureFormatUtils_IsRedGreenBlue_m2188D6DFFC0644B3BEA4F302D2B055B35633AC56 (void);
// 0x000001E7 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreenBlue(UnityEngine.RenderTextureFormat)
extern void TextureFormatUtils_IsRedGreenBlue_mCCC016AD208DA06B4888E1EA06932AAEE699EEB1 (void);
// 0x000001E8 System.Boolean Unity.Barracuda.TextureFormatUtils::IsAlphaOnly(UnityEngine.Texture)
extern void TextureFormatUtils_IsAlphaOnly_m80E23E65F0CC7EDCE0355F60BD8291FA3FBC8C29 (void);
// 0x000001E9 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedOnly(UnityEngine.Texture)
extern void TextureFormatUtils_IsRedOnly_m60A832BA0F9EDED6A3D3049D7DA334AEC6BCD88C (void);
// 0x000001EA System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreen(UnityEngine.Texture)
extern void TextureFormatUtils_IsRedGreen_m447631743ACD2B1B530ABF262559547748BCB1F2 (void);
// 0x000001EB System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreenBlue(UnityEngine.Texture)
extern void TextureFormatUtils_IsRedGreenBlue_m32CE19143C1FE9C7A6E49B3A8884C01D8A7DDAED (void);
// 0x000001EC System.Int32 Unity.Barracuda.TextureFormatUtils::FormatToChannelCount(UnityEngine.Texture)
extern void TextureFormatUtils_FormatToChannelCount_m21CC9761974C9C2A5FAC003124F6B1655A5620FA (void);
// 0x000001ED UnityEngine.Color Unity.Barracuda.TextureFormatUtils::FormatToChannelMask(UnityEngine.Texture,System.Int32)
extern void TextureFormatUtils_FormatToChannelMask_m9407E1D4E8A263423BA6C313CFDDA6C9F207CDA5 (void);
// 0x000001EE UnityEngine.Color Unity.Barracuda.TextureFormatUtils::FormatToChannelMask(UnityEngine.Texture)
extern void TextureFormatUtils_FormatToChannelMask_mB707AA43CC988281BBBF9EAC7E2F62BBF55BD3A8 (void);
// 0x000001EF System.Void Unity.Barracuda.TextureFormatUtils::.ctor()
extern void TextureFormatUtils__ctor_m0549E58810F9AAAB439F23DD845E62CA8C5E494A (void);
// 0x000001F0 Unity.Barracuda.TensorShape Unity.Barracuda.TextureAsTensorData::get_shape()
extern void TextureAsTensorData_get_shape_m90CA898AF99E70B8E1E1362D8782A70F5662DB86 (void);
// 0x000001F1 UnityEngine.Texture[] Unity.Barracuda.TextureAsTensorData::get_textures()
extern void TextureAsTensorData_get_textures_m3028544D22B672E25C72FE45BA6A0184AA7822A2 (void);
// 0x000001F2 System.Int32 Unity.Barracuda.TextureAsTensorData::get_interpretPixelAsChannels()
extern void TextureAsTensorData_get_interpretPixelAsChannels_m52DF58AFDCA39049E423E61361A1E9E732A6E50F (void);
// 0x000001F3 Unity.Barracuda.TextureAsTensorData/InterpretDepthAs Unity.Barracuda.TextureAsTensorData::get_interpretDepthAs()
extern void TextureAsTensorData_get_interpretDepthAs_m7E96FD3A781E9FF259B51861CCF73E13D24DDEF6 (void);
// 0x000001F4 Unity.Barracuda.TextureAsTensorData/InterpretColorAs Unity.Barracuda.TextureAsTensorData::get_interpretColorAs()
extern void TextureAsTensorData_get_interpretColorAs_mA414135991F1D316DCE8FB5AFBF7E308F86879B4 (void);
// 0x000001F5 Unity.Barracuda.TextureAsTensorData/Flip Unity.Barracuda.TextureAsTensorData::get_flip()
extern void TextureAsTensorData_get_flip_m79F5D1CC019FA39218DDE7856AB951DB60264D66 (void);
// 0x000001F6 System.Void Unity.Barracuda.TextureAsTensorData::.ctor(UnityEngine.Texture[],System.Int32,Unity.Barracuda.TextureAsTensorData/Flip,Unity.Barracuda.TextureAsTensorData/InterpretDepthAs,Unity.Barracuda.TextureAsTensorData/InterpretColorAs)
extern void TextureAsTensorData__ctor_mA6980EB5C457E954EF149E58B6B28958BA2FF964 (void);
// 0x000001F7 System.Void Unity.Barracuda.TextureAsTensorData::.ctor(UnityEngine.Texture,System.Int32,Unity.Barracuda.TextureAsTensorData/Flip,Unity.Barracuda.TextureAsTensorData/InterpretDepthAs,Unity.Barracuda.TextureAsTensorData/InterpretColorAs)
extern void TextureAsTensorData__ctor_m1929EECD59BA3DE86060198FBD709D57EC342106 (void);
// 0x000001F8 System.Void Unity.Barracuda.TextureAsTensorData::Reserve(System.Int32)
extern void TextureAsTensorData_Reserve_m6DD080BF42E4722D4C24CD89265BDF5D23AD1FE0 (void);
// 0x000001F9 System.Void Unity.Barracuda.TextureAsTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void TextureAsTensorData_Upload_m5C1A651B8EE3130E4468F4EE8DD4594202EBF43F (void);
// 0x000001FA System.Boolean Unity.Barracuda.TextureAsTensorData::ScheduleAsyncDownload(System.Int32)
extern void TextureAsTensorData_ScheduleAsyncDownload_m18027CB2335F2D06FC1C54092C87941B81ED39CD (void);
// 0x000001FB System.Single[] Unity.Barracuda.TextureAsTensorData::Download(Unity.Barracuda.TensorShape)
extern void TextureAsTensorData_Download_mFAA1815AFD2B561D3DAF3CFDADB9A945A72B16CD (void);
// 0x000001FC System.Single[] Unity.Barracuda.TextureAsTensorData::SharedAccess(System.Int32&)
extern void TextureAsTensorData_SharedAccess_m6841A9BBFD2A58A5C1BBE96549060ECCE7A2E4F0 (void);
// 0x000001FD System.Int32 Unity.Barracuda.TextureAsTensorData::get_maxCapacity()
extern void TextureAsTensorData_get_maxCapacity_mCD706DF2F2FB3CDF6EC4E8ACB7345C61F068C424 (void);
// 0x000001FE System.Void Unity.Barracuda.TextureAsTensorData::Dispose()
extern void TextureAsTensorData_Dispose_m45C6F62CF9015749EE7FE84F958B1F367B4127BD (void);
// 0x000001FF System.Void Unity.Barracuda.ReferenceComputeOps::.ctor(UnityEngine.ComputeShader,Unity.Barracuda.ITensorAllocator)
extern void ReferenceComputeOps__ctor_mE1BC3B83556917B404A19CD7D6CD29876B1C05FF (void);
// 0x00000200 Unity.Barracuda.ComputeTensorData Unity.Barracuda.ReferenceComputeOps::Pin(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Pin_m4F863D0040A591A9CC201DA6653026FDA7853D41 (void);
// 0x00000201 System.Void Unity.Barracuda.ReferenceComputeOps::SetTensor(Unity.Barracuda.ComputeFunc,System.String,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_SetTensor_m8B1A21659E7D8F1D7B259851E0B464CCF0629F6C (void);
// 0x00000202 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::NewTensor(Unity.Barracuda.ComputeFunc,System.String,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_NewTensor_m48C30282546D467A0C8541E15FAE003DCBB7FAA0 (void);
// 0x00000203 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Dispatch(Unity.Barracuda.ComputeFunc,Unity.Barracuda.TensorShape,System.Int32,System.Int32,System.Int32,System.String)
extern void ReferenceComputeOps_Dispatch_m9FEB07D86E5DEF40568815771372276528EADF89 (void);
// 0x00000204 Unity.Barracuda.ITensorData Unity.Barracuda.ReferenceComputeOps::TextureToTensorData(Unity.Barracuda.TextureAsTensorData,System.String)
extern void ReferenceComputeOps_TextureToTensorData_m5627426E7CE74250F64BA1E57CF39F7EC52F879D (void);
// 0x00000205 System.Void Unity.Barracuda.ReferenceComputeOps::TensorToRenderTexture(Unity.Barracuda.Tensor,UnityEngine.RenderTexture,System.Int32,System.Int32,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Texture3D)
extern void ReferenceComputeOps_TensorToRenderTexture_mE45C99D1B59E26881994F3BB73A98ED20F7FFE4F (void);
// 0x00000206 System.Boolean Unity.Barracuda.ReferenceComputeOps::ShouldFlattenInputForDenseLayer(Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_ShouldFlattenInputForDenseLayer_m7E077B45CC302A2B72D2388FCE43FD1616937F1D (void);
// 0x00000207 System.Boolean Unity.Barracuda.ReferenceComputeOps::IsFusedActivationSupported(Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_IsFusedActivationSupported_mEB092E1CF1A785A7023D57B82C5F2ACEAA74F0EA (void);
// 0x00000208 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void ReferenceComputeOps_MatMul_mD9AC8CD8354400E23520D744144AC1703C4D28B8 (void);
// 0x00000209 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::MatMul2D(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void ReferenceComputeOps_MatMul2D_mB63FC11BF648A28E20E3804BF063C08AC380CC0C (void);
// 0x0000020A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_Dense_mDD8420287504047C7EA9C500BFFB2CB407247ADE (void);
// 0x0000020B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Conv2DWinograd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_Conv2DWinograd_m9ABAAAE5639EAA5C4478BE92C78FE425F45C947A (void);
// 0x0000020C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_Conv2D_m03B7656CBC9CE84C416194340D70842FD846CC6A (void);
// 0x0000020D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_DepthwiseConv2D_m8FE3896DEC034BD8F46422B20580F16A2AC4D3C2 (void);
// 0x0000020E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_Conv2DTrans_m5443C84395A7D7C2BDB56F1C7EE64FD687CD02D1 (void);
// 0x0000020F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceComputeOps_Upsample2D_mC52F1E13EABA8B96F90427DAB654A8F8F9ED6AD1 (void);
// 0x00000210 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceComputeOps_Resample2D_m06ADA07E7BC3A504FBB1182942EFBA6BBD85C850 (void);
// 0x00000211 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer/DepthToSpaceMode)
extern void ReferenceComputeOps_DepthToSpace_m3587AACCBC03423AFC56A46921739504CA32C1B8 (void);
// 0x00000212 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_SpaceToDepth_m60C6F44AC31FAB260489F18D664AED5A8828193F (void);
// 0x00000213 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pool2D(System.String,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_Pool2D_mC7F2EA38C21EDA503CA10230EEB63318B36E4144 (void);
// 0x00000214 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_MaxPool2D_m1057F4C32E9B29589A88107BB97B0D371FF98EE5 (void);
// 0x00000215 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_AvgPool2D_mD3F38197A593B91051159F88AC46E7CD67F8051A (void);
// 0x00000216 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalPool2D(System.String,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalPool2D_m3F95A899D09B45B69171E75B88CD154B92F93AFD (void);
// 0x00000217 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalMaxPool2D_m9E03A860C0FA047C79A3022144B3CD7D49CC235D (void);
// 0x00000218 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalAvgPool2D_mDA5D47DFD8F33BF30E1D13CD57D1FF5A3AED2782 (void);
// 0x00000219 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalAvgVariancePool2D_m0613AE824103CF03053401F1EB256C2A4FDC8877 (void);
// 0x0000021A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.String,System.Single)
extern void ReferenceComputeOps_ApplyPadding_mF8A708CFD2DA773EE152F5E5C2CA0030998D4968 (void);
// 0x0000021B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void ReferenceComputeOps_Border2D_mB1E603E97AD90DF98D0CDF36C21DA7B26A910C76 (void);
// 0x0000021C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Pad2DReflect_m3B2AED708045A5E6A84C068627ADBF5ACB33A21F (void);
// 0x0000021D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Pad2DSymmetric_m321EBD4DA22FB4F1E1A7C67C06AC8A47223A75B8 (void);
// 0x0000021E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Pad2DEdge_m3EB62D0AE53F10703B8157455E1E58E4EA33389A (void);
// 0x0000021F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_ScaleBias_m9E78E5EEF79197DBD2B4BF18B26199E4ECFD6468 (void);
// 0x00000220 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_Normalization_m7216E14C8D7F2E08D2C5DAE3ABACB61399D86DD3 (void);
// 0x00000221 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void ReferenceComputeOps_LRN_m3B4B74A7A7F3728CA236CEF6EDBEFC084825F081 (void);
// 0x00000222 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Dropout(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_Dropout_m10756ECB8AB627FBC98B59F355364C600EA8D002 (void);
// 0x00000223 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Activation(System.String,Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceComputeOps_Activation_m9AE9E76AB61D8C3D0782CF1ED4786491AF1F7309 (void);
// 0x00000224 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Relu(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Relu_mD608A21EAF4A72454F2918E52CA5FFD9F7B91CB9 (void);
// 0x00000225 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_PRelu_mFC275C56AA5AAC35D821228E30B7A2A0B835E509 (void);
// 0x00000226 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_Softmax_m980D264C32E4A25A7621AB374EAE991F48B91E3B (void);
// 0x00000227 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogSoftmax_mB400072251A87E95BD900B797FA1FDBED0C2D328 (void);
// 0x00000228 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Tanh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Tanh_m28D2478812962EC79BCBD2E853EE0707D99F73A2 (void);
// 0x00000229 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sigmoid(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Sigmoid_mA93D30F3B86C1F5E474D80391F3301E6A66F8510 (void);
// 0x0000022A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Relu6(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Relu6_m79156FE91A238F37CE983176A4A086DBED37A512 (void);
// 0x0000022B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_Elu_mA856E5E1FE54523BD8BDF73338FE33739E910B2C (void);
// 0x0000022C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_LeakyRelu_mC3258A52ECF646FAAAF52C92D67F6EC2407126AE (void);
// 0x0000022D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceComputeOps_Selu_mBC647ABE669911C58AF75B8BDFE156DA4DA0D193 (void);
// 0x0000022E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Swish(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Swish_m2C976FEA5C74EA49CA9C83C10E6ED72BD2211591 (void);
// 0x0000022F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Abs(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Abs_m24C5BB86A739E7F6EBF698846DC6C2E38C07208C (void);
// 0x00000230 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Neg(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Neg_m7E66635C4C6486154D18320296AE8AA43F111BDB (void);
// 0x00000231 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Ceil(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Ceil_mB38CF11607864E3B3660185A40404F6E5C9CECE5 (void);
// 0x00000232 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceComputeOps_Clip_mACD76E09AA2661702DC39B8BCB7596A0F557D274 (void);
// 0x00000233 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Floor(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Floor_mEA07C3C64BEDCB212001FE35801ED7C5B2E6EF8D (void);
// 0x00000234 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Reciprocal(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Reciprocal_mB64F440ECFEF946BFE58FFAA2BED218012B3E96D (void);
// 0x00000235 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pow(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_Pow_m7545D377E3CDB149DD274DB147A469685028C0FB (void);
// 0x00000236 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Exp(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Exp_m81362403DDC0C15072FEFC19154CDF15EA1D3804 (void);
// 0x00000237 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Log(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Log_m23E6760E5A90C237EFF3A9A611661F1C5DF64943 (void);
// 0x00000238 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sqrt(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Sqrt_m18D7A819AAF5823F5057B1E420D41668865627F9 (void);
// 0x00000239 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Acos(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Acos_m0F31F75DDA82D6D8AFC2B571B6E899C50B16D50A (void);
// 0x0000023A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Acosh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Acosh_m2A2A041C00F815DA5E15F082E2759FFDAEA81B6F (void);
// 0x0000023B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Asin(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Asin_mB9283E302AC662D4A81C61E58008CD3FEF2338B2 (void);
// 0x0000023C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Asinh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Asinh_m303CEB6224ED9A5E9A37EA83D6A29FA042ADBF75 (void);
// 0x0000023D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Atan(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Atan_m7D750739511E163FA8327621528CB0ED0CA816A3 (void);
// 0x0000023E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Atanh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Atanh_mB3D7BE2DB5188C7BF6BAFD7E6458311CBD43C31F (void);
// 0x0000023F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Cos(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Cos_m68CAC71A7F48104A4243664E2059A62D9AF2A5E8 (void);
// 0x00000240 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Cosh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Cosh_m88ADBB997065E1283893B8EDCD65F50DB068D3DA (void);
// 0x00000241 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sin(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Sin_m74F371A7EDDCD96EA034933AE70142622AC38A3C (void);
// 0x00000242 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sinh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Sinh_mBF3728FEED2F68C6E642B4A9D78788004EDC5EF4 (void);
// 0x00000243 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Tan(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Tan_m6F7BB6DF12D4F2CE07A6A88B0B18A314ACD48207 (void);
// 0x00000244 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_Expand_m0A54B16C1024DE5182609D9F80F4406A181F51ED (void);
// 0x00000245 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ElementwiseWithBroadcast(System.String,Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_ElementwiseWithBroadcast_m079C1ABA9FC5842E571EEFF0541B640F55E8E54E (void);
// 0x00000246 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Add(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Add_mAE1D2057C16442A63C2E1D0C00879EEFB87F10E7 (void);
// 0x00000247 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sub(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Sub_mE441A82683EB366D19AED39DAE586B20016CA112 (void);
// 0x00000248 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Mul(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Mul_m70F312488094ABAFFA30CB264DABFAB11693C774 (void);
// 0x00000249 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Div(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Div_mB14F87A216CE57C848B291FEA85F7A537634A745 (void);
// 0x0000024A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pow(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Pow_m34BF73CA407903BACA791E1050F3A4B00366719E (void);
// 0x0000024B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Min(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Min_mA3832FECC9ACF74D42CA2DD9A9BE31BCF75921D5 (void);
// 0x0000024C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Max(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Max_m5BAA66841E5F33B23BCC5783F927448D2FBAA14C (void);
// 0x0000024D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Mean(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Mean_m5B036866ECD233F5D62D3A5E4F34ED0768BF3191 (void);
// 0x0000024E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Reduce(System.String,Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_Reduce_m9454070856DD5285081BDF898D1B7CE81FC4C9E2 (void);
// 0x0000024F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ArgMax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ArgMax_mE4C39435A75D16919F95A6AC2F12D885A60F6CF9 (void);
// 0x00000250 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ArgMin(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ArgMin_mF0C9219880BEEDAC54CB79ABFD25508EDE42698F (void);
// 0x00000251 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceMin_mEFA2BBCD0225EB9312B80AB50A46BDB9550FAA83 (void);
// 0x00000252 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceMax_m6CEF1B7A1DC0D239D2E0FC84D05AD6476AA04BE7 (void);
// 0x00000253 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceSum_m737E5922C432A952DDB77FE84E993FAC78218B8E (void);
// 0x00000254 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceMean_m95C517F0032C535F21DF0A81F2F4E63A13F69736 (void);
// 0x00000255 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceProd_m7DE667E3B17DCB8C9A7D4A793B70B611CC82AC23 (void);
// 0x00000256 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Greater_m4F6E8C86322767A571FD932A67EFEC08C4E93BEB (void);
// 0x00000257 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GreaterEqual_m1A4F6A6D6270DF95772BB4C21C64777B05A3BCBF (void);
// 0x00000258 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Less_m9F834FD07C26FC596CE86F8035683B0B5ABECE6D (void);
// 0x00000259 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LessEqual_m3EE344B9C09B561AC35742DC8AC904C05D1B1F4A (void);
// 0x0000025A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Equal_m668960AD530B55A3245DEA823657E5D9275105E0 (void);
// 0x0000025B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalOr_mAD0238556B6BB83127834CC3356A9863DA9095F6 (void);
// 0x0000025C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalAnd_mB70B370C96499FD123BE017BDE11667DB4C6061B (void);
// 0x0000025D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalXor_m426AC6E8CFD1F2D255AA2437FEE41A74BD270486 (void);
// 0x0000025E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalNot(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalNot_mE84DBC6216D732AB41F4DCAC93D62B8BDAAA0582 (void);
// 0x0000025F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::CopyAndReshape_NCHW(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_CopyAndReshape_NCHW_m6248F4B5E2E1B8C0DF84381F2A4A9EF98BF92FB5 (void);
// 0x00000260 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_CopyAndReshape_m0799F5A1EEF72685A7E8856CF5DDF5ABF2CFF509 (void);
// 0x00000261 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Flatten(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Flatten_m6B84394F4DC026D79B000FE308E6540F2665AF42 (void);
// 0x00000262 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_Reshape_mDA1BB0D0A2880A9465D1EEC802FC22DC25316443 (void);
// 0x00000263 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Transpose(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Transpose_m6D22F0A94A6C3A66220F06F6B6EDF47E9092F7B3 (void);
// 0x00000264 System.Int32[] Unity.Barracuda.ReferenceComputeOps::GetOnDeviceShape(Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_GetOnDeviceShape_mF7EC25DC531001B9EBF1DD54DE7759E5EC1982AF (void);
// 0x00000265 System.Int32[] Unity.Barracuda.ReferenceComputeOps::ConvertPermutationToDeviceLayout(System.Int32[])
extern void ReferenceComputeOps_ConvertPermutationToDeviceLayout_mDAA5A1BCCAFA8B161A52541D78966A3A7F39ABB2 (void);
// 0x00000266 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Transpose8D(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Transpose8D_m2388D838B3186F899D70AF3F28A21E98FAD5F115 (void);
// 0x00000267 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Transpose(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Transpose_mDA593380BEF7C195299D4A31EF6238F73CCF6FAB (void);
// 0x00000268 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::TransposeToNCHW(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_TransposeToNCHW_mD41667551967CA10FC36445484364E57742EB628 (void);
// 0x00000269 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceComputeOps_Concat_mEB1FDE6F4883BFA419874C7330ADDB7204A00A93 (void);
// 0x0000026A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_StridedSlice_mC403F92BBBE9B8F19C76D3DBA6D803AC2B4356E9 (void);
// 0x0000026B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Tile_mB19AD60F3EFBB0BECC58847FE76E37BAB57B4ACD (void);
// 0x0000026C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceComputeOps_Gather_m203FD88951F3AD2FB68DBF845AB95E2B9A212DE2 (void);
// 0x0000026D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Copy(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Copy_mE553C51789FAAF99DD171A95D885579A60E1767E (void);
// 0x0000026E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Prepare(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Prepare_m49B332BF7E943EC1DC0E1730BAABC44C84E70BDB (void);
// 0x0000026F System.Void Unity.Barracuda.ReferenceComputeOps::.cctor()
extern void ReferenceComputeOps__cctor_m02D97E12C5ED85CA5010E9732454687457EA1D19 (void);
// 0x00000270 System.UInt32 Unity.Barracuda.ComputeFunc::get_threadGroupSize()
extern void ComputeFunc_get_threadGroupSize_m0D4C76AB91DAD77954CD10606968DF86A4141A96 (void);
// 0x00000271 System.Int32 Unity.Barracuda.ComputeFunc::get_width()
extern void ComputeFunc_get_width_m52666C3EB651D499B423628F273A82CF793AA49D (void);
// 0x00000272 System.Int32 Unity.Barracuda.ComputeFunc::get_height()
extern void ComputeFunc_get_height_m1D83A6306B459071CEDD1A1F856D4D1D74523498 (void);
// 0x00000273 System.Int32 Unity.Barracuda.ComputeFunc::get_depth()
extern void ComputeFunc_get_depth_mF80DB0BF4CE080FBB94B2681D232DDDC351D22B3 (void);
// 0x00000274 Unity.Barracuda.ComputeFunc/TensorDecl Unity.Barracuda.ComputeFunc::GetTensorDecl(System.String)
extern void ComputeFunc_GetTensorDecl_m7C095A20ABDF5C703C7B7B29B08A6AEB3CA190FF (void);
// 0x00000275 System.Int32 Unity.Barracuda.ComputeFunc::GetTensorData(System.String)
extern void ComputeFunc_GetTensorData_mF0BE430DE4519A67A57F8B7073981DE8EEF33CF5 (void);
// 0x00000276 UnityEngine.Texture2D Unity.Barracuda.ComputeFunc::get_dummyTexture2D()
extern void ComputeFunc_get_dummyTexture2D_mE0382A2EB19F68C30F26EAA8F4FD3D196BDF4784 (void);
// 0x00000277 UnityEngine.Texture3D Unity.Barracuda.ComputeFunc::get_dummyTexture3D()
extern void ComputeFunc_get_dummyTexture3D_m976D6F1396BB9AF59955CA9B9EBA0F4BB62E1AD5 (void);
// 0x00000278 UnityEngine.Texture2DArray Unity.Barracuda.ComputeFunc::get_dummyTexture2DArray()
extern void ComputeFunc_get_dummyTexture2DArray_m2ACD34FB87E7EE56FE6784868FE3F07D72C2E8A8 (void);
// 0x00000279 System.Void Unity.Barracuda.ComputeFunc::.ctor(UnityEngine.ComputeShader,System.String[],System.Int32,System.Int32,System.Int32)
extern void ComputeFunc__ctor_m516FC5C43314B8775F24F8628CA508ABB70DA19B (void);
// 0x0000027A System.Void Unity.Barracuda.ComputeFunc::.ctor(UnityEngine.ComputeShader,System.String)
extern void ComputeFunc__ctor_m03606D90574B46C307C05DFA57789A691F771820 (void);
// 0x0000027B System.Void Unity.Barracuda.ComputeFunc::.ctor(UnityEngine.ComputeShader[],System.String[],System.Int32,System.Int32,System.Int32)
extern void ComputeFunc__ctor_mA6AC93E5232318E2A3D9C30B33E3E3D28956D683 (void);
// 0x0000027C System.Void Unity.Barracuda.ComputeFunc::.ctor(UnityEngine.ComputeShader[],System.String)
extern void ComputeFunc__ctor_mECAF4AB96858DA16566617DBE6FFB753CBA27D08 (void);
// 0x0000027D System.Void Unity.Barracuda.ComputeFunc::SetTensor(System.String,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeFunc_SetTensor_m08238C3C82DF681F372CBCB840298C731ABB4A6F (void);
// 0x0000027E System.Void Unity.Barracuda.ComputeFunc::SetTensor(Unity.Barracuda.ComputeFunc/TensorDecl,System.Int32,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeFunc_SetTensor_m1A97DB943C1A405B615A95E7C3A6DB40175DE34A (void);
// 0x0000027F System.Void Unity.Barracuda.ComputeFunc::SetTensor(System.String,Unity.Barracuda.TensorShape,UnityEngine.Texture,System.Int64)
extern void ComputeFunc_SetTensor_m50FEE0FAACA9469DEB8F0DE3BF8784D3FD81D628 (void);
// 0x00000280 System.Void Unity.Barracuda.ComputeFunc::SetTensorDecl(System.String,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeFunc_SetTensorDecl_mE46880E6219A059E43600E8957876A150EBC8AF4 (void);
// 0x00000281 System.Void Unity.Barracuda.ComputeFunc::SetTensorDecl(Unity.Barracuda.ComputeFunc/TensorDecl,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeFunc_SetTensorDecl_m1839141DA57D310B2B17ABA5458547217056FAF4 (void);
// 0x00000282 System.Void Unity.Barracuda.ComputeFunc::SetTensorBuffer(System.String,UnityEngine.ComputeBuffer)
extern void ComputeFunc_SetTensorBuffer_mCDA021CD1499CB191BA2A670C718B9CEF1F1D1DC (void);
// 0x00000283 System.Void Unity.Barracuda.ComputeFunc::SetTensorBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern void ComputeFunc_SetTensorBuffer_mBA3E062D655641E95E610DCB18EC66E81D982497 (void);
// 0x00000284 System.Void Unity.Barracuda.ComputeFunc::SetTexture(System.String,UnityEngine.Texture)
extern void ComputeFunc_SetTexture_m188532280C002E7606C577659965F217FC8DCC98 (void);
// 0x00000285 System.Void Unity.Barracuda.ComputeFunc::Dispatch(System.ValueTuple`3<System.Int32,System.Int32,System.Int32>)
extern void ComputeFunc_Dispatch_m34CD2C8473012C2F76918931F90E1D0C1C6E9ADB (void);
// 0x00000286 System.Void Unity.Barracuda.ComputeFunc::Dispatch(System.Int32,System.Int32,System.Int32)
extern void ComputeFunc_Dispatch_m1D1AFE51AE6EA502AD1ACA3834D381122DF58AE3 (void);
// 0x00000287 System.Int32 Unity.Barracuda.ComputeFunc::IntDivCeil(System.Int32,System.Int32)
extern void ComputeFunc_IntDivCeil_m2C6CA16D71D1BB8EE751CF20F99C0F4D7368E711 (void);
// 0x00000288 System.String Unity.Barracuda.ComputeFunc::FindBestKernelMatchingDimensions(UnityEngine.ComputeShader[],System.String[],System.Int32,System.Int32,System.Int32)
extern void ComputeFunc_FindBestKernelMatchingDimensions_mEE5411F7D485D45B3CEEFB94DBC431908CFBCDA2 (void);
// 0x00000289 System.Void Unity.Barracuda.ComputeFunc::.cctor()
extern void ComputeFunc__cctor_m1F347D8CD86655EC333B347F215CF2101A0BF28F (void);
// 0x0000028A System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(System.Int32)
extern void UnsafeArrayTensorData__ctor_mC637B8B6BDD11787CE759CA87A9CC89663C65B33 (void);
// 0x0000028B System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(Unity.Barracuda.TensorShape)
extern void UnsafeArrayTensorData__ctor_m50342CDE3782335B00E702E320EE551E533927BC (void);
// 0x0000028C System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(Unity.Barracuda.ArrayTensorData)
extern void UnsafeArrayTensorData__ctor_m022BE11242EC18AD3DF0F9EB7C02FE645C55CC50 (void);
// 0x0000028D System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(Unity.Barracuda.SharedArrayTensorData)
extern void UnsafeArrayTensorData__ctor_mAB49C7F7AD8C25BD10DD72EA84DBF8D818DBDD8C (void);
// 0x0000028E System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(System.Single[],System.Int32,System.Int32,System.Boolean)
extern void UnsafeArrayTensorData__ctor_m4C9127FC072A060188553F527C528AC9831488A0 (void);
// 0x0000028F System.Void Unity.Barracuda.UnsafeArrayTensorData::Finalize()
extern void UnsafeArrayTensorData_Finalize_mF35078DCEC3382A7F3F27C3EDF59397226F6B5F8 (void);
// 0x00000290 System.Void Unity.Barracuda.UnsafeArrayTensorData::Dispose()
extern void UnsafeArrayTensorData_Dispose_mC4D7ACB581CA1FB65D66A10917B14E1BAF17DE3D (void);
// 0x00000291 System.Void Unity.Barracuda.UnsafeArrayTensorData::Reserve(System.Int32)
extern void UnsafeArrayTensorData_Reserve_mD882D17459B3B806B659FB3A16B836AD00159FB5 (void);
// 0x00000292 System.Void Unity.Barracuda.UnsafeArrayTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void UnsafeArrayTensorData_Upload_mCE613BFD6FCB68C1484CD52C6C96AE0AF92CAABA (void);
// 0x00000293 System.Single[] Unity.Barracuda.UnsafeArrayTensorData::Download(Unity.Barracuda.TensorShape)
extern void UnsafeArrayTensorData_Download_mD6F5A12A661012958866E9718243541B5F1EF54C (void);
// 0x00000294 System.String Unity.Barracuda.UnsafeArrayTensorData::ToString()
extern void UnsafeArrayTensorData_ToString_m569516EC08D966DD69815C0574B41CE1C7FCE8B3 (void);
// 0x00000295 Unity.Barracuda.BLASPlugin Unity.Barracuda.UnsafeArrayCPUOps::get_blas()
extern void UnsafeArrayCPUOps_get_blas_m6CA8069C56E42C6C490D4B50BDCC6CB99C6B0736 (void);
// 0x00000296 System.Void Unity.Barracuda.UnsafeArrayCPUOps::.ctor(Unity.Barracuda.ITensorAllocator)
extern void UnsafeArrayCPUOps__ctor_mF91D841991B22F51C1818CECFAA676FC0D4C07F3 (void);
// 0x00000297 Unity.Barracuda.UnsafeArrayTensorData Unity.Barracuda.UnsafeArrayCPUOps::Pin(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Pin_m6A0FDF638CECEB3312615D24392EE56184722A53 (void);
// 0x00000298 System.Void Unity.Barracuda.UnsafeArrayCPUOps::Parallel_For(System.Int64,System.Int64,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_Parallel_For_m5B1EC87E0E1B1EE365B52053A7F7E93784F863E7 (void);
// 0x00000299 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Neg(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Neg_m41E3AE26C680D69E99793FD26CDC7EB322349845 (void);
// 0x0000029A System.Void Unity.Barracuda.UnsafeArrayCPUOps::NegInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_NegInnerLoop_m1499A5C104D679136E7DB90D2C78D0C10C06C845 (void);
// 0x0000029B Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Relu(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Relu_mD1430432B1395BBDBB4C1C297FE009ACA63C23ED (void);
// 0x0000029C System.Void Unity.Barracuda.UnsafeArrayCPUOps::ReluInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_ReluInnerLoop_m2BC320EB3164496952BA562248A1E773342918AF (void);
// 0x0000029D Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Relu6(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Relu6_mED1B4F51F5B2330A93B80FC624E314459D078DAC (void);
// 0x0000029E System.Void Unity.Barracuda.UnsafeArrayCPUOps::Relu6InnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_Relu6InnerLoop_m6DE99073F962F9AB71F63318F8FBCFCE2DF82610 (void);
// 0x0000029F Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void UnsafeArrayCPUOps_LeakyRelu_mA2F8414ADF1A825550F0FC8D7B1523402356F103 (void);
// 0x000002A0 System.Void Unity.Barracuda.UnsafeArrayCPUOps::LeakyReluInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*,System.Single)
extern void UnsafeArrayCPUOps_LeakyReluInnerLoop_m1B4B15EB80EB31048C799A51C2CCC9D4541B02BE (void);
// 0x000002A1 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void UnsafeArrayCPUOps_Elu_mAC38831B90DA87E80D9F2EBEEE6D14A23FAE6DDB (void);
// 0x000002A2 System.Void Unity.Barracuda.UnsafeArrayCPUOps::EluInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*,System.Single)
extern void UnsafeArrayCPUOps_EluInnerLoop_m1C83143450417A66E353EE8CDE7FA641900EAFDC (void);
// 0x000002A3 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_PRelu_m3F9AF6C475166A6C09BA077C0E932350CC83A5B0 (void);
// 0x000002A4 System.Void Unity.Barracuda.UnsafeArrayCPUOps::PReluInnerLoop(System.Int32,System.Int32,System.Single*,System.Int32,System.Single*,System.Single*,System.Int32)
extern void UnsafeArrayCPUOps_PReluInnerLoop_m215108D499437427C2D7D8EC9BA281EEA05915B8 (void);
// 0x000002A5 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sigmoid(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Sigmoid_m5CAB417BB50D6C2FB7F2C52C4D61D79D6BC33F76 (void);
// 0x000002A6 System.Void Unity.Barracuda.UnsafeArrayCPUOps::SigmoidInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SigmoidInnerLoop_mB1804C6ABBE1829F4D56769EB469A2B006089D75 (void);
// 0x000002A7 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Swish(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Swish_m3BA38E02435FDE5FC9BD0D0E2E8CF79BD72D638A (void);
// 0x000002A8 System.Void Unity.Barracuda.UnsafeArrayCPUOps::SwishInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SwishInnerLoop_m4D920058746469FD0FE3D988C131EDBE0039FB9A (void);
// 0x000002A9 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Exp(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Exp_m0C219C75B05A3152432D14E43CE594479826726E (void);
// 0x000002AA System.Void Unity.Barracuda.UnsafeArrayCPUOps::ExpInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_ExpInnerLoop_m613D3462E0EE5CCE7A5B82117D2CD61B0451F9A2 (void);
// 0x000002AB Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sqrt(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Sqrt_m931AECAA61E3223132A3A47A0D4F50967868DF8B (void);
// 0x000002AC System.Void Unity.Barracuda.UnsafeArrayCPUOps::SqrtInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SqrtInnerLoop_mFECAA560F680F151FE3985D6B1D567BD4BF80146 (void);
// 0x000002AD Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Tanh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Tanh_m1775DA30C140F09A495C96A3C1D08D9E5549564E (void);
// 0x000002AE System.Void Unity.Barracuda.UnsafeArrayCPUOps::TanhInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_TanhInnerLoop_m72213E1143BCAA617039F65EAD59FD1F9AE62CF9 (void);
// 0x000002AF Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Acos(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Acos_m79434EB2569F8C4C54F6E152C886BC2E0DC14E5A (void);
// 0x000002B0 System.Void Unity.Barracuda.UnsafeArrayCPUOps::AcosInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_AcosInnerLoop_m5472CF2C88F09E5B18FB450FF7BFD59F8242E5C9 (void);
// 0x000002B1 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Acosh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Acosh_m6A6FDC5C2053DD2D7160F21B751BE1C8DF70A3AB (void);
// 0x000002B2 System.Void Unity.Barracuda.UnsafeArrayCPUOps::AcoshInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_AcoshInnerLoop_m94B87C0E2CEE897D5B0778C08E80F69AE739040F (void);
// 0x000002B3 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Asin(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Asin_m68DA1DD329EC741F042FB3191882EB516909D899 (void);
// 0x000002B4 System.Void Unity.Barracuda.UnsafeArrayCPUOps::AsinInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_AsinInnerLoop_m6BA1ABBF873A80E4A239CCC5F1F5F8F81A350143 (void);
// 0x000002B5 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Asinh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Asinh_m8170ADF4E56FEF46FCA67C3B91A38B76AB1C7FD2 (void);
// 0x000002B6 System.Void Unity.Barracuda.UnsafeArrayCPUOps::AsinhInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_AsinhInnerLoop_m5F614A2B53E01E6EEECF0E89B13DD44C17BF3242 (void);
// 0x000002B7 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Atan(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Atan_m8A7ACAB435B950F941C0CFE36AA6FAFEAADE9DB9 (void);
// 0x000002B8 System.Void Unity.Barracuda.UnsafeArrayCPUOps::AtanInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_AtanInnerLoop_m44A0B45672F5CF6D5EF6C7E452E9FD5EE052D333 (void);
// 0x000002B9 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Atanh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Atanh_m2BAB37C9941FFF805B40B47F38134FD362832AAB (void);
// 0x000002BA System.Void Unity.Barracuda.UnsafeArrayCPUOps::AtanhInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_AtanhInnerLoop_mC58A037C906DE8BCB3955DE8CD0E13B03B739AA4 (void);
// 0x000002BB Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Cos(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Cos_mA2A6225AD07C9EC3073B5A1A2EDE6DA74F473855 (void);
// 0x000002BC System.Void Unity.Barracuda.UnsafeArrayCPUOps::CosInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_CosInnerLoop_m3CA080563522F84ADC4C9B0E1A1F935387943DE8 (void);
// 0x000002BD Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Cosh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Cosh_mD18C938D218E3FD8ED321C8EAD244F56B4568E79 (void);
// 0x000002BE System.Void Unity.Barracuda.UnsafeArrayCPUOps::CoshInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_CoshInnerLoop_m2F6A68C26F1ADE9F9001A9ADD80D861D1EE0DFB5 (void);
// 0x000002BF Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sin(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Sin_m96450F420DC30B0A72B2437928C756850043AB0A (void);
// 0x000002C0 System.Void Unity.Barracuda.UnsafeArrayCPUOps::SinInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SinInnerLoop_mE15B16C57ECA1DC93D3B15290F4BC4D8BF3CFC31 (void);
// 0x000002C1 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sinh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Sinh_mEB1BD929216D8627D54B5EE3E994B9C9781E5612 (void);
// 0x000002C2 System.Void Unity.Barracuda.UnsafeArrayCPUOps::SinhInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SinhInnerLoop_m7EA3F0883B402B968849B106CDFC0B52DEE9A209 (void);
// 0x000002C3 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Tan(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Tan_m1E9FBC1A0F2F6347DC2F87C80A4F8F0C675084E7 (void);
// 0x000002C4 System.Void Unity.Barracuda.UnsafeArrayCPUOps::TanInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_TanInnerLoop_m6B632B6F6551C8DA1A6496AFA44ACFA92BFC5E28 (void);
// 0x000002C5 System.Boolean Unity.Barracuda.UnsafeArrayCPUOps::CanUseModuloForBroadcasting(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void UnsafeArrayCPUOps_CanUseModuloForBroadcasting_mA5E11D32CA57471B3554AD7AABCD93839021B465 (void);
// 0x000002C6 System.Boolean Unity.Barracuda.UnsafeArrayCPUOps::CanUseModuloForBroadcasting(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void UnsafeArrayCPUOps_CanUseModuloForBroadcasting_m044C3C607B16F7462DE8C9FA53257F74C0F0593E (void);
// 0x000002C7 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyElementwiseWithBroadcast(Unity.Barracuda.Tensor[],System.Func`3<System.Single,System.Single,System.Single>,System.Action`1<System.Int64>,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_ApplyElementwiseWithBroadcast_mDCC67DE246E0F63FF28A6E977F86E45732C961EA (void);
// 0x000002C8 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Add(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Add_m9CEF53E9F040EFFEDAD967294D977C45A975F23F (void);
// 0x000002C9 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sub(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Sub_m77590F1B089699C5C9E8159E52A793EE7418FBF3 (void);
// 0x000002CA Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Mul(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Mul_mC1DA30B01D3E68C3AE3EF7277989EF9CBB737EB9 (void);
// 0x000002CB Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Div(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Div_m5B8AA42A974D6E7BB834046830B6F40DAD0DAF27 (void);
// 0x000002CC Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Min(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Min_m454D2C92B5F8B4D7C788543CFA3E6FCED0E4A157 (void);
// 0x000002CD Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Max(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Max_m42A57C3830A23FC40596124289E0585EFDA4FAFC (void);
// 0x000002CE Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Greater_m2F3A9B59AB9AB652978C4F1CB4A5B615F15B1683 (void);
// 0x000002CF Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_GreaterEqual_mF924B9A302AACDEE0B3EB8E4AB97000CDCA82D69 (void);
// 0x000002D0 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Less_m7B7E89980F7E29DA693BB415E81AB4C4ABF6F5C3 (void);
// 0x000002D1 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LessEqual_mB0A59D086D0E480677EE210F851EADC8D8BFEFC4 (void);
// 0x000002D2 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Equal_m17CB9237146995D813637A72E3B0A55FCC1B6B0C (void);
// 0x000002D3 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalOr_mDED497E079A3DBD3252BB8AE08BF9616F6693709 (void);
// 0x000002D4 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalAnd_m90D34BE10522B15B44FD2F3E6FA5CCE796D15DD2 (void);
// 0x000002D5 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalXor_m3BEC1679F25EE454D05E747E24AD260B9AEB03AE (void);
// 0x000002D6 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalNot(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalNot_mBF031979D068ADDF159B7697ACA5992BC16B9E79 (void);
// 0x000002D7 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Where_m7D3799515754BD6219E3F7C5DB110A1C2016FD85 (void);
// 0x000002D8 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyLogicalOperator(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Func`3<System.Single,System.Single,System.Single>,System.Action`1<System.Int64>,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_ApplyLogicalOperator_m0A0B549CE649B40FE31E5E9B8CC978D937F6B206 (void);
// 0x000002D9 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::MatMul2D(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void UnsafeArrayCPUOps_MatMul2D_mE2D071A1345D4442C4A090095DE8CE9CAD505A57 (void);
// 0x000002DA Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void UnsafeArrayCPUOps_Dense_mC6A97D1998BCE58847B886F5E5C7CCBD50E08106 (void);
// 0x000002DB Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyFusedActivation(Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void UnsafeArrayCPUOps_ApplyFusedActivation_mBBCF4E5703997C17FA4762DD79FAC60E88BF90B8 (void);
// 0x000002DC Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_MaxPool2D_m7CD5150A899BF56FE560AEE889B18E30D21D4E5C (void);
// 0x000002DD System.Void Unity.Barracuda.UnsafeArrayCPUOps::MaxPool2DInnerLoop(System.Int32[],System.Int32[],System.Int32[],System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_MaxPool2DInnerLoop_m79764D40B272F5199D17F9029E400BEEFEEFABF1 (void);
// 0x000002DE Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_AvgPool2D_m8F0294E59D35C0CB35E1AD1E9B4CD60990D176C8 (void);
// 0x000002DF System.Void Unity.Barracuda.UnsafeArrayCPUOps::AvgPool2DInnerLoop(System.Int32[],System.Int32[],System.Int32[],System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_AvgPool2DInnerLoop_mED79E51BFA24AD69E66A3ACC2FEA5A4B13E2D636 (void);
// 0x000002E0 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_GlobalMaxPool2D_m8B7CB96E4535D85F02385DD4C7725F42D6F7BC83 (void);
// 0x000002E1 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_GlobalAvgPool2D_m68B6C9FF779F870E60DC1D622140893E01FA9B40 (void);
// 0x000002E2 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void UnsafeArrayCPUOps_Conv2D_m4312501B10427A68654BBAB790632CC767F1F642 (void);
// 0x000002E3 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Conv2DUsingIm2Col(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_Conv2DUsingIm2Col_mD541128F4B00C1D4E97BCCC06DC2C8FDF9229329 (void);
// 0x000002E4 System.Void Unity.Barracuda.UnsafeArrayCPUOps::Im2ColInnerLoop(System.Int32[],System.Int32[],System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_Im2ColInnerLoop_m53ECB0960EB7F2B2491A6F0A3CB1B9EE02D0641F (void);
// 0x000002E5 System.Int32 Unity.Barracuda.UnsafeArrayCPUOps::SafeIntDivCeil(System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_SafeIntDivCeil_mB77457BC2FD92DAFF1FFEBA05FD49598C3ED6ED0 (void);
// 0x000002E6 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Conv2DUsingIm2ColSliced(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_Conv2DUsingIm2ColSliced_m7E64913B7E86D41CE41EF531E766B05E54F5C724 (void);
// 0x000002E7 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void UnsafeArrayCPUOps_DepthwiseConv2D_mE377C849BEB73446298399F8B48BE07CB56C51B2 (void);
// 0x000002E8 System.Void Unity.Barracuda.UnsafeArrayCPUOps::DepthwiseConv2DInnerLoop(System.Int32[],System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_DepthwiseConv2DInnerLoop_mDAAE9D999E9670B5C40C30994A18E6E2DF4FC70A (void);
// 0x000002E9 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.Single,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_ApplyPadding_mD6859A150B36FE9A217696ECB98D0BE5FCE2AB79 (void);
// 0x000002EA Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void UnsafeArrayCPUOps_Border2D_m035344FC49F830C07C48578B74B2FABAC60E0BF1 (void);
// 0x000002EB Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void UnsafeArrayCPUOps_Pad2DEdge_m4700E4F782DA2900314D5ABC48FA701288E4A392 (void);
// 0x000002EC Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void UnsafeArrayCPUOps_Pad2DReflect_m9FD2DE9EF9FD5B9B7BCBBA19EA7226A9D62052CE (void);
// 0x000002ED Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void UnsafeArrayCPUOps_Pad2DSymmetric_m8AC5EDA655131548A6D9B5C1042089885CA9659B (void);
// 0x000002EE Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void UnsafeArrayCPUOps_CopyAndReshape_m01EBEAD3CB7DE6F0BF2C05B93BC8AFB4FD4C1506 (void);
// 0x000002EF Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_ScaleBias_m70EBAD16F026BFDCB970CA3BE935E7DB30E45D5B (void);
// 0x000002F0 System.Void Unity.Barracuda.UnsafeArrayCPUOps::ScaleBiasInnerLoop(System.Int32,System.Int32,System.Single*,System.Int32,System.Single*,System.Single*,System.Int32,System.Single*,System.Int32)
extern void UnsafeArrayCPUOps_ScaleBiasInnerLoop_mD267EDB2D6739D8E556F4375E6D1E0BFC6DF32E7 (void);
// 0x000002F1 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Prepare(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Prepare_m225C9CC6AFE49FE3BABF58DDFF9071AD0EF9F90F (void);
// 0x000002F2 System.Void Unity.Barracuda.InnerLoop::.ctor()
extern void InnerLoop__ctor_m76C687AF7F2B2AF21D30C656152DB1E4BA570146 (void);
// 0x000002F3 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*,System.Single*,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void InnerLoop_SetState_mAF373F0D23E2D50D5E411AC76C2A5BD4A1B4746B (void);
// 0x000002F4 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void InnerLoop_SetState_mEBF505B7CFE031F427AB4903329E27720D433EDF (void);
// 0x000002F5 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Int32,System.Single*,System.Int32,System.Single*,System.Int32)
extern void InnerLoop_SetState_m8C07162B7A1C0A4C616B043DA35B9CBA94BA0CC7 (void);
// 0x000002F6 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Int32,System.Single*,System.Int32)
extern void InnerLoop_SetState_m5D53346C06D7E12047EE89DDF401621EEBD9FB74 (void);
// 0x000002F7 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*)
extern void InnerLoop_SetState_m4DD603CB15FF1C4C1D65EA29D6108F77F2D0CECD (void);
// 0x000002F8 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*,System.Single*)
extern void InnerLoop_SetState_mE5E1195176C4F7F0913E08408EC79C82AF01C456 (void);
// 0x000002F9 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*)
extern void InnerLoop_SetState_mD6CD9DA793BA86B5742ECF5B0F09258D86422B21 (void);
// 0x000002FA System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single)
extern void InnerLoop_SetState_m63B8640BB66C4D8E6C5CBB776190D4A3E4617E38 (void);
// 0x000002FB System.Void Unity.Barracuda.InnerLoop::SetState(System.Single*,System.Single*,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Single,System.Int32,System.Int32)
extern void InnerLoop_SetState_m4C6364106EEFFF1BFEE7B04BD05643AFFA0085F1 (void);
// 0x000002FC System.Void Unity.Barracuda.InnerLoop::NegInnerLoop(System.Int64)
extern void InnerLoop_NegInnerLoop_m357CFE90283C683DAB92A51247A77F6EA48DFBE8 (void);
// 0x000002FD System.Void Unity.Barracuda.InnerLoop::ReluInnerLoop(System.Int64)
extern void InnerLoop_ReluInnerLoop_mAC565931FF9C9592CB74BEBB522313AFB4293576 (void);
// 0x000002FE System.Void Unity.Barracuda.InnerLoop::Relu6InnerLoop(System.Int64)
extern void InnerLoop_Relu6InnerLoop_m03FD62F3AD0987A5189A2411A2A77C035757D0A3 (void);
// 0x000002FF System.Void Unity.Barracuda.InnerLoop::LeakyReluInnerLoop(System.Int64)
extern void InnerLoop_LeakyReluInnerLoop_mA7B42AED5718C89448907717C43A9D2DC82814F6 (void);
// 0x00000300 System.Void Unity.Barracuda.InnerLoop::EluInnerLoop(System.Int64)
extern void InnerLoop_EluInnerLoop_m50CC65AC82BE2E7AD6D591AAAB06C0FF53F0C781 (void);
// 0x00000301 System.Void Unity.Barracuda.InnerLoop::PReluInnerLoop(System.Int64)
extern void InnerLoop_PReluInnerLoop_mE70E533CA0E158D8DC4849C50F6D8E7C46486403 (void);
// 0x00000302 System.Void Unity.Barracuda.InnerLoop::SigmoidInnerLoop(System.Int64)
extern void InnerLoop_SigmoidInnerLoop_mBB444CD27E13DF7FEB0132124FAEF1588D3F3599 (void);
// 0x00000303 System.Void Unity.Barracuda.InnerLoop::SwishInnerLoop(System.Int64)
extern void InnerLoop_SwishInnerLoop_mADA950F489F012E024C0B74230B304FE2259DFF9 (void);
// 0x00000304 System.Void Unity.Barracuda.InnerLoop::ExpInnerLoop(System.Int64)
extern void InnerLoop_ExpInnerLoop_mD6F78FCFA87703759FB270586222EC031CDAFE91 (void);
// 0x00000305 System.Void Unity.Barracuda.InnerLoop::SqrtInnerLoop(System.Int64)
extern void InnerLoop_SqrtInnerLoop_m6935D5D15D302C89ADA4E436D66365D79948D2ED (void);
// 0x00000306 System.Void Unity.Barracuda.InnerLoop::TanhInnerLoop(System.Int64)
extern void InnerLoop_TanhInnerLoop_m97D206CE09C03E4723EB0144D73A4643C5180253 (void);
// 0x00000307 System.Void Unity.Barracuda.InnerLoop::AcosInnerLoop(System.Int64)
extern void InnerLoop_AcosInnerLoop_m0DA7B3C3555DAFE9CE519A0CEE32D8156DA1F504 (void);
// 0x00000308 System.Void Unity.Barracuda.InnerLoop::AcoshInnerLoop(System.Int64)
extern void InnerLoop_AcoshInnerLoop_m0C10A63CAE75469E5A492A6EE658331C1A7E087A (void);
// 0x00000309 System.Void Unity.Barracuda.InnerLoop::AsinInnerLoop(System.Int64)
extern void InnerLoop_AsinInnerLoop_m8B75C2B176734A98E9175DB0D88A7C623261BD42 (void);
// 0x0000030A System.Void Unity.Barracuda.InnerLoop::AsinhInnerLoop(System.Int64)
extern void InnerLoop_AsinhInnerLoop_m23B8A46E6AEAD3095FBE987A9B553B11D6C30284 (void);
// 0x0000030B System.Void Unity.Barracuda.InnerLoop::AtanInnerLoop(System.Int64)
extern void InnerLoop_AtanInnerLoop_mD252E6356BC12E9BE45160E7265B3A3821C7A122 (void);
// 0x0000030C System.Void Unity.Barracuda.InnerLoop::AtanhInnerLoop(System.Int64)
extern void InnerLoop_AtanhInnerLoop_m6D79F14E2E1AE8D050A7922F2EB958D67377D10A (void);
// 0x0000030D System.Void Unity.Barracuda.InnerLoop::CosInnerLoop(System.Int64)
extern void InnerLoop_CosInnerLoop_m525FEF0D754F4CF18D36B026D38ADCE364DF0F0C (void);
// 0x0000030E System.Void Unity.Barracuda.InnerLoop::CoshInnerLoop(System.Int64)
extern void InnerLoop_CoshInnerLoop_m7A74A490EC8842EE264DA65FDB6B0F7D85423D5A (void);
// 0x0000030F System.Void Unity.Barracuda.InnerLoop::SinInnerLoop(System.Int64)
extern void InnerLoop_SinInnerLoop_m0042A654E9CF6A70946D8DB2BB7D67A4D1122A51 (void);
// 0x00000310 System.Void Unity.Barracuda.InnerLoop::SinhInnerLoop(System.Int64)
extern void InnerLoop_SinhInnerLoop_m5077720ACEF5873A9EC4357E3A995E0AB718FC08 (void);
// 0x00000311 System.Void Unity.Barracuda.InnerLoop::TanInnerLoop(System.Int64)
extern void InnerLoop_TanInnerLoop_m17C1493FECBBE3D76D1376E36537980283C40859 (void);
// 0x00000312 System.Void Unity.Barracuda.InnerLoop::AddInnerLoop(System.Int64)
extern void InnerLoop_AddInnerLoop_m1F6EBB39DC6430811EA44C2C3DD6383C0B22E642 (void);
// 0x00000313 System.Void Unity.Barracuda.InnerLoop::SubInnerLoop(System.Int64)
extern void InnerLoop_SubInnerLoop_m43D7F92AF56CEEA12C2CD9224031153F99355356 (void);
// 0x00000314 System.Void Unity.Barracuda.InnerLoop::MulInnerLoop(System.Int64)
extern void InnerLoop_MulInnerLoop_m8040ED2B00D23F59706EBB610F7AAF4A145E2CBF (void);
// 0x00000315 System.Void Unity.Barracuda.InnerLoop::DivInnerLoop(System.Int64)
extern void InnerLoop_DivInnerLoop_m739741F58F0CF4B780038883A49BAC3D4BA1AEE1 (void);
// 0x00000316 System.Void Unity.Barracuda.InnerLoop::MinInnerLoop(System.Int64)
extern void InnerLoop_MinInnerLoop_mEBE1D2586BBE33A83530C5A810C8694A2F930E3E (void);
// 0x00000317 System.Void Unity.Barracuda.InnerLoop::MaxInnerLoop(System.Int64)
extern void InnerLoop_MaxInnerLoop_mA0BC1F35F291641FEDA33C8EF8DDD923728983CD (void);
// 0x00000318 System.Void Unity.Barracuda.InnerLoop::GreaterInnerLoop(System.Int64)
extern void InnerLoop_GreaterInnerLoop_mA4371E88899ABCB7E6CE82C7285678AC7D8F237E (void);
// 0x00000319 System.Void Unity.Barracuda.InnerLoop::GreaterEqualInnerLoop(System.Int64)
extern void InnerLoop_GreaterEqualInnerLoop_mDBDE497B8A54636A1C87BA2C132E5901E2AF6112 (void);
// 0x0000031A System.Void Unity.Barracuda.InnerLoop::LessInnerLoop(System.Int64)
extern void InnerLoop_LessInnerLoop_m3FE1522E30618108010B206330D888E8C3019E64 (void);
// 0x0000031B System.Void Unity.Barracuda.InnerLoop::LessEqualInnerLoop(System.Int64)
extern void InnerLoop_LessEqualInnerLoop_m03CBCF62528CC5533A5632F944155B9801E6C1D6 (void);
// 0x0000031C System.Void Unity.Barracuda.InnerLoop::EqualInnerLoop(System.Int64)
extern void InnerLoop_EqualInnerLoop_m16B2C7CB44B62A22D688CD39C6CB61D5AA1C2973 (void);
// 0x0000031D System.Void Unity.Barracuda.InnerLoop::LogicalOrInnerLoop(System.Int64)
extern void InnerLoop_LogicalOrInnerLoop_mC5E143D64AA017CDAB12D58F92DCE86EFCF77D95 (void);
// 0x0000031E System.Void Unity.Barracuda.InnerLoop::LogicalAndInnerLoop(System.Int64)
extern void InnerLoop_LogicalAndInnerLoop_m4A4F83D40701BC41A22D0473932014D067FCEA42 (void);
// 0x0000031F System.Void Unity.Barracuda.InnerLoop::LogicalXorInnerLoop(System.Int64)
extern void InnerLoop_LogicalXorInnerLoop_mD7D256724F16E3E9CE1B131DDABA2A1CE94DC0B3 (void);
// 0x00000320 System.Void Unity.Barracuda.InnerLoop::WhereInnerLoop(System.Int64)
extern void InnerLoop_WhereInnerLoop_mA47276730259F37141EEF8F3D1CE687318056D18 (void);
// 0x00000321 System.Void Unity.Barracuda.InnerLoop::AddInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_AddInnerLoopNoBroadcast_mDEC8C44980E03D6C6F9B06716D19C2CD9365074E (void);
// 0x00000322 System.Void Unity.Barracuda.InnerLoop::SubInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_SubInnerLoopNoBroadcast_m0C51981BA10B91F0B4A59EA05D0E56EB777C2364 (void);
// 0x00000323 System.Void Unity.Barracuda.InnerLoop::MulInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_MulInnerLoopNoBroadcast_m11994E5FAA2D6CAAFC6A3AED768A652D2DC98B7E (void);
// 0x00000324 System.Void Unity.Barracuda.InnerLoop::DivInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_DivInnerLoopNoBroadcast_m5530A515173FEE1869401088C3D9B1923AD9358F (void);
// 0x00000325 System.Void Unity.Barracuda.InnerLoop::MinInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_MinInnerLoopNoBroadcast_m16A73CF394C7B6EE162D7601CCD30CE2B53CA259 (void);
// 0x00000326 System.Void Unity.Barracuda.InnerLoop::MaxInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_MaxInnerLoopNoBroadcast_m11B07793FDF011BC3817DFBA0BEFE48ED4FFA94B (void);
// 0x00000327 System.Void Unity.Barracuda.InnerLoop::GreaterInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_GreaterInnerLoopNoBroadcast_mA52A45E1B446E45EC0AD5B438A60E4FA60EEFF36 (void);
// 0x00000328 System.Void Unity.Barracuda.InnerLoop::GreaterEqualInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_GreaterEqualInnerLoopNoBroadcast_m77A1C44878B0275D2E0ABFD838A0BF33BE648CEA (void);
// 0x00000329 System.Void Unity.Barracuda.InnerLoop::LessInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LessInnerLoopNoBroadcast_mA3541C932ACB5B5C523C7D42563B27351EF7EB84 (void);
// 0x0000032A System.Void Unity.Barracuda.InnerLoop::LessEqualInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LessEqualInnerLoopNoBroadcast_m770BBB333C1A9EA898094779D3C25A2C07E49249 (void);
// 0x0000032B System.Void Unity.Barracuda.InnerLoop::EqualInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_EqualInnerLoopNoBroadcast_m3347D2970A159DBE5922E37A4968146113FF1134 (void);
// 0x0000032C System.Void Unity.Barracuda.InnerLoop::LogicalOrInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LogicalOrInnerLoopNoBroadcast_m5D0D9C1054A78C622152D1DED529CE01DEDF5F56 (void);
// 0x0000032D System.Void Unity.Barracuda.InnerLoop::LogicalAndInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LogicalAndInnerLoopNoBroadcast_m0C4A3B61408CBA40B871A4548C12FAE60397B377 (void);
// 0x0000032E System.Void Unity.Barracuda.InnerLoop::LogicalXorInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LogicalXorInnerLoopNoBroadcast_mD2000DA7F9B291CF6F78CC783BFCE82D05137ABF (void);
// 0x0000032F System.Void Unity.Barracuda.InnerLoop::LogicalNotInnerLoop(System.Int64)
extern void InnerLoop_LogicalNotInnerLoop_m38B819A6578EE836F24D5A88A61C63D736F6EA56 (void);
// 0x00000330 System.Void Unity.Barracuda.InnerLoop::WhereInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_WhereInnerLoopNoBroadcast_mD6B66B5D99123D92BCE15717F90EA94B8BE99DF3 (void);
// 0x00000331 System.Void Unity.Barracuda.InnerLoop::ClampHWToTensorShape(Unity.Barracuda.TensorShape,System.Int32&,System.Int32&)
extern void InnerLoop_ClampHWToTensorShape_m180281F53613C436CC4B7CE53FBBB67A750B8C88 (void);
// 0x00000332 System.Void Unity.Barracuda.InnerLoop::Border2DInnerLoop(System.Int64)
extern void InnerLoop_Border2DInnerLoop_m7B8405C0C502BAEAFB3C836FBE03F5699A598762 (void);
// 0x00000333 System.Void Unity.Barracuda.InnerLoop::Pad2DEdgeInnerLoop(System.Int64)
extern void InnerLoop_Pad2DEdgeInnerLoop_m1221BE4F0D29A5F14533F5A0F30B6F5A47900FBF (void);
// 0x00000334 System.Void Unity.Barracuda.InnerLoop::Pad2DReflectInnerLoop(System.Int64)
extern void InnerLoop_Pad2DReflectInnerLoop_mD00C1EF5BA804F512D82F709EE73465A9CA202AE (void);
// 0x00000335 System.Void Unity.Barracuda.InnerLoop::Pad2DSymmetricInnerLoop(System.Int64)
extern void InnerLoop_Pad2DSymmetricInnerLoop_m05FCFB67E68B9A0AB56906FD9E91F42998AA8E00 (void);
// 0x00000336 System.Void Unity.Barracuda.InnerLoop::ScaleBiasInnerLoop(System.Int64)
extern void InnerLoop_ScaleBiasInnerLoop_mB4914D497FBA5EAF411E419368DE449F43B0D8C2 (void);
// 0x00000337 System.Single Unity.Barracuda.InnerLoop::Add(System.Single,System.Single)
extern void InnerLoop_Add_mE5094DB749D8010B124E22B904ACF8060B73607E (void);
// 0x00000338 System.Single Unity.Barracuda.InnerLoop::Sub(System.Single,System.Single)
extern void InnerLoop_Sub_mBAF57BC19AF314609C0EE4D1CF322BBBBB0D0C00 (void);
// 0x00000339 System.Single Unity.Barracuda.InnerLoop::Mul(System.Single,System.Single)
extern void InnerLoop_Mul_m181FF4C5B6ACFC5F307846BA20E33C78B9998ED6 (void);
// 0x0000033A System.Single Unity.Barracuda.InnerLoop::Div(System.Single,System.Single)
extern void InnerLoop_Div_mBD3C2009D6878D4D9F057A01EE70CBDB7ADF075B (void);
// 0x0000033B System.Single Unity.Barracuda.InnerLoop::Min(System.Single,System.Single)
extern void InnerLoop_Min_mC45E818ABA4001224B19A9E99D896BF121ED0307 (void);
// 0x0000033C System.Single Unity.Barracuda.InnerLoop::Max(System.Single,System.Single)
extern void InnerLoop_Max_m6CE1FE740BDFAEDB02E35B5709E20220A1FE0BD3 (void);
// 0x0000033D System.Single Unity.Barracuda.InnerLoop::Greater(System.Single,System.Single)
extern void InnerLoop_Greater_m7A8245DD8817ABA6FB2BCD5EBA9765BA39926FC7 (void);
// 0x0000033E System.Single Unity.Barracuda.InnerLoop::GreaterEqual(System.Single,System.Single)
extern void InnerLoop_GreaterEqual_m43D4A6D2E32AAB06AB130C3D05C2B3891599FAF1 (void);
// 0x0000033F System.Single Unity.Barracuda.InnerLoop::Less(System.Single,System.Single)
extern void InnerLoop_Less_m7E4A29CEEBDC50CEF84BCB67C20B0857E4FD5FF0 (void);
// 0x00000340 System.Single Unity.Barracuda.InnerLoop::LessEqual(System.Single,System.Single)
extern void InnerLoop_LessEqual_mFED0D87F4E00A4C0B2CE69AEA18EDE1823A821B2 (void);
// 0x00000341 System.Single Unity.Barracuda.InnerLoop::Equal(System.Single,System.Single)
extern void InnerLoop_Equal_mDF27C8C85F27DBBB731D907E8F86269614AE0283 (void);
// 0x00000342 System.Single Unity.Barracuda.InnerLoop::LogicalOr(System.Single,System.Single)
extern void InnerLoop_LogicalOr_mCE1060A32B0AC6FB47734581CD791422AE0786EB (void);
// 0x00000343 System.Single Unity.Barracuda.InnerLoop::LogicalAnd(System.Single,System.Single)
extern void InnerLoop_LogicalAnd_mEC55477818E6D110A15981D3A016A102693A38F6 (void);
// 0x00000344 System.Single Unity.Barracuda.InnerLoop::LogicalXor(System.Single,System.Single)
extern void InnerLoop_LogicalXor_m758251BE505FAF027694F04F16B8AC4F22D98300 (void);
// 0x00000345 System.Single Unity.Barracuda.InnerLoop::LogicalNot(System.Single)
extern void InnerLoop_LogicalNot_m3CC58D3265F002C8ED8A371B4A18494BA5E07EEA (void);
// 0x00000346 System.Single Unity.Barracuda.InnerLoop::Where(System.Single,System.Single,System.Single)
extern void InnerLoop_Where_mC0C7C270FF81C51C0B3B48833350D3DC1641DE5A (void);
// 0x00000347 System.Void Unity.Barracuda.CompareOps::.ctor(Unity.Barracuda.IOps,Unity.Barracuda.IOps,Unity.Barracuda.CompareOpsUtils/LogLevel,System.Single)
extern void CompareOps__ctor_m03C4874330EBE65CB239213637B627CC24C601F0 (void);
// 0x00000348 System.Void Unity.Barracuda.CompareOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void CompareOps_PrepareModel_m89F84D6D8598A98FDD36260A5535796C2DCFDB92 (void);
// 0x00000349 System.Void Unity.Barracuda.CompareOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void CompareOps_PreExecuteLayer_m214D2B150B61D6CA415CDDE76FD0895A9ACC049D (void);
// 0x0000034A Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_MatMul_m75ECA68A0F6A5A3A4402AE8A41DA93DB7021A573 (void);
// 0x0000034B Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Dense_m8EBBE3AD4FB797919B7FA99E3B876175EC69E106 (void);
// 0x0000034C Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Conv2D_m597E3BE11E0A869AF50A8CDDCC5C91678DC3B0D3 (void);
// 0x0000034D Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_DepthwiseConv2D_m60D8BD6D195B247CF817E8A9F0DA6848027B253D (void);
// 0x0000034E Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Conv2DTrans_mF5CC98F3C9548FA2A6677EDAEEE7EBF3F076018C (void);
// 0x0000034F Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_Upsample2D_m72BA57B1E89A378A16237040EC9E78F169216B05 (void);
// 0x00000350 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_Resample2D_m413CFE3ADCED2A7573522F415846682771F0778F (void);
// 0x00000351 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer/DepthToSpaceMode)
extern void CompareOps_Unity_Barracuda_IOps_DepthToSpace_m3ECBE30E33FD2D3EC91B3447AC1E059BAA52D7EA (void);
// 0x00000352 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_SpaceToDepth_m3BC64178B9E48D39A3C7F781D62EF4B508F7D0DC (void);
// 0x00000353 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_MaxPool2D_m69DD9DE7A7DDAD37AE26167F443B73955390251C (void);
// 0x00000354 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_AvgPool2D_mA87F0F8BBDB63A312C2164A00368C56F65ED53EE (void);
// 0x00000355 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m6A09D3434186B79D21B20B1F73DB787B24058DE1 (void);
// 0x00000356 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m0AC1796D79A6D263B41BE022F019457F34E4E023 (void);
// 0x00000357 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_mEF687591499BCB0B8291E5E3C14EBDE6D01C679A (void);
// 0x00000358 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Border2D_mD3296AF7370F679B32968325362E129889230C64 (void);
// 0x00000359 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Pad2DReflect_m8E15F8102E63A2A9BAE4A5BAEB8BFB478283E8ED (void);
// 0x0000035A Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Pad2DSymmetric_m7A96EDBB6B7D690983D26788A3904FD9D304713C (void);
// 0x0000035B Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Pad2DEdge_m280A9C936150FEB6AC5026E9647124D8944FD10A (void);
// 0x0000035C Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_ScaleBias_mB850621028F415D71FC597EFFFEACDC5CA54A719 (void);
// 0x0000035D Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Normalization_mBD4068618C6043AA936F84FFE709F376FFDF2BF7 (void);
// 0x0000035E Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_LRN_m310B70624EC7AD02E0F4CBE519C3D7A1CB01CCB6 (void);
// 0x0000035F Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Dropout(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Dropout_mC13A91180E077E221A81137B73FE9A7432B474BC (void);
// 0x00000360 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_RandomNormal_mE3F8B5E6D5BC13252FD3411962E9273000D44157 (void);
// 0x00000361 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_RandomUniform_m6E9678D0BAC89229A26C38F3225B1B3E958578B2 (void);
// 0x00000362 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Multinomial_m89BFAEE78A3B7FB9611A1E58C8D073094EE7150E (void);
// 0x00000363 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_OneHot_m81B854E4631D6BD79C477B22AEAA9A1CC5FE789F (void);
// 0x00000364 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.TopKIndices(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_TopKIndices_m9DE5DF7AD3B6D374954206E3DB6CC8766046BFEA (void);
// 0x00000365 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::TopKValues(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_TopKValues_mB299D2EFFF1C12FF35A2175279F05CECB7A1DE2F (void);
// 0x00000366 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::NonZero(Unity.Barracuda.Tensor)
extern void CompareOps_NonZero_mFA1CC24FB3753A8DD07E658D98CE9F8458E77D1E (void);
// 0x00000367 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Relu(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Relu_m70E72FD032DF56084C52C56CD523AAF81DE8E0FF (void);
// 0x00000368 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Softmax_mF5B0120A26C4F86D8D6CB24E284B54218E5E090C (void);
// 0x00000369 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogSoftmax(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogSoftmax_mB7D2FBC9BEAD067FD506FD9248187371B0221CBC (void);
// 0x0000036A Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Tanh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Tanh_m125E051EFA6D05715F41F8EF4BBCF2CE6077CDC6 (void);
// 0x0000036B Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sigmoid(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Sigmoid_mB20BE2907FBFCE7C61CA5435015BECC8BFE178D4 (void);
// 0x0000036C Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Elu(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Elu_mAB5312413BD6A9F8A0372FECCBC9C806DB5AA925 (void);
// 0x0000036D Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Relu6(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Relu6_mE952F97481391317A83D1919582DB8D2BA5A588B (void);
// 0x0000036E Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_LeakyRelu_m1795C37FA33013F48B9AA8E0D39BD430DCF7648C (void);
// 0x0000036F Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Selu_mC84EB94011DD67C4471048E6FABC023965A0B262 (void);
// 0x00000370 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_PRelu_m2640C3E81B4BBCBC01758B2AEE336C8B8066E4AD (void);
// 0x00000371 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Swish(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Swish_mA230ACF73644BB1885D0E87D3E00CE7AAED442FB (void);
// 0x00000372 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Abs(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Abs_mD33787572F47F256DDBD4A2C43F3356804BBD36A (void);
// 0x00000373 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Neg(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Neg_m053238B90C3EEBA89A2DD002A89D689ACC419DBF (void);
// 0x00000374 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Ceil(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Ceil_mC8C4B7A7B2C8C5EBC7940EC1BA2B6D78029494A7 (void);
// 0x00000375 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Clip_mC7D11D5199C92013EA233E848CE06FCB8263E544 (void);
// 0x00000376 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Floor(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Floor_m89A2CD3B245FEC97DB01DB563198AFD766BE4D7C (void);
// 0x00000377 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Reciprocal(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Reciprocal_m7A365817567624EF195E5E3E5831F7C8F4FCDB1E (void);
// 0x00000378 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Pow_m3566FB75695EE939F4A9D31BB90E07FBC61BFD55 (void);
// 0x00000379 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Exp(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Exp_m8FF0FF5CB2CB84396BC30E6BAABE0D0518ADA031 (void);
// 0x0000037A Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Log(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Log_m6102663EE5F01D070D29701039C0E54FBD2DFE76 (void);
// 0x0000037B Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sqrt(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Sqrt_mF1F47794AD5CF248024D0A5803825987FBC3F0C9 (void);
// 0x0000037C Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Acos(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Acos_mBB1E227D3BE6E5DCA79A4803DBA767765567FBDB (void);
// 0x0000037D Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Acosh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Acosh_mB6140F3491AF5DF068BDC476828E7C4EEAF2B177 (void);
// 0x0000037E Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Asin(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Asin_mC11E7A896A8C7A7F2AF6189E8C1E713F8C478BA4 (void);
// 0x0000037F Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Asinh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Asinh_m14830A6A05E18C184DE1CFB81E4F7218E55D1269 (void);
// 0x00000380 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Atan(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Atan_mF878DCC94755B5E4437388549BDF46BD42EE5BBF (void);
// 0x00000381 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Atanh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Atanh_m3D0F7FB5BA29AA28775B0FF13BE689F1C5FDB74A (void);
// 0x00000382 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Cos(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Cos_m455C8469D81B82245D5420CA334677F95DD1CC91 (void);
// 0x00000383 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Cosh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Cosh_mE0C2F50C4953EC8304C88F38ABD4C94CF9B7CF07 (void);
// 0x00000384 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sin(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Sin_mCB258A9DB29A5E6C3B4C61DB1C169DD7BDFB7E85 (void);
// 0x00000385 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sinh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Sinh_m7DC9DBFB2D06ABBDFB2BDBAF1F263F90BC14E589 (void);
// 0x00000386 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Tan(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Tan_m011D0A54CDD89D60FB5FDA5ED26684EA24D2BE9F (void);
// 0x00000387 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Add(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Add_mD90C8BBB2E2C9885C6226BBBBABB87F2EE41B30F (void);
// 0x00000388 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sub(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Sub_m03DA72640F801F89DC6015CB3042C6A2FB5B9A20 (void);
// 0x00000389 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Mul(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Mul_m0814EE3E11ED48542C11FD92D725E0045154ADA8 (void);
// 0x0000038A Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Div(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Div_m0154C0D3D2CB169875269BCE0D8F0FC031BF5D51 (void);
// 0x0000038B Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Pow_mAABC00948678B50CCB150A99B29FF0B33966758A (void);
// 0x0000038C Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Min(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Min_m55AFD7CF68B23DEB933179BED03C897D96C901DB (void);
// 0x0000038D Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Max(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Max_mA3A1EE6F83FDE7B186A54CF54E50923EF8168F83 (void);
// 0x0000038E Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Mean(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Mean_m643FA085B4A967A7882756BF9A77DD86AF957CB1 (void);
// 0x0000038F Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ArgMax(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ArgMax_m1E20F24A0937F82DD29E21389F073EBFA925F679 (void);
// 0x00000390 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ArgMin(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ArgMin_m2B8A7A9EFBF04518E1E2C4419627591221139037 (void);
// 0x00000391 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceMax_m3C46C7FC2AF9904B25DB4583DD880BB862871B00 (void);
// 0x00000392 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceMean_m53E0CC72A046A1C20DBCBCA147C8099DA51ADA43 (void);
// 0x00000393 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceMin_mA30D885EAA64E95A52083C0161E5A410EEFA92D4 (void);
// 0x00000394 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceProd_m3564B33E788F57AE925917D1C5FD0D285F898B23 (void);
// 0x00000395 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceSum_mB69FFD67BBF82E9FBA72E0AB09306FC7E8248EEB (void);
// 0x00000396 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Greater_mBD9B9C9C8B6E98F0ADFAD9211C66EABF3CB9FA44 (void);
// 0x00000397 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GreaterEqual_mDB701424D2F484A3B477BC1C5C299D13D5A27314 (void);
// 0x00000398 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Less_m38CCECB96B0A40E2DE9A1065FD79098CE193BBB9 (void);
// 0x00000399 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LessEqual_mDA8B9313D7C8AC4E0BA34663F20FF3BAFA03016B (void);
// 0x0000039A Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Equal_mD1F7B4BDB6E5ACB1BBC5FED993FCC9E918FD2320 (void);
// 0x0000039B Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalOr_mAC2EE37C5B606E9EB7A4A307D620099A1CAB2DD0 (void);
// 0x0000039C Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalAnd_mAFF3B9CFC2B9176386BBF6E7A9B64E1F98E0E99A (void);
// 0x0000039D Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalXor_mA40151A358A1D75B35FB5FBD8B3E04CBF2B83191 (void);
// 0x0000039E Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalNot(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalNot_m38A50D79059C65CBF29F8C38C312B8B9B7E00A6E (void);
// 0x0000039F Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Where_m423FBE5C307FA04A06283CC87C091A0D7BBD745B (void);
// 0x000003A0 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Flatten(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Flatten_m30E781CE6C551B99E5EEB01242E018A0F3075095 (void);
// 0x000003A1 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void CompareOps_Unity_Barracuda_IOps_Reshape_mAD2A402CBC0C64DF96431FF5827477DD8C3EAC3B (void);
// 0x000003A2 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void CompareOps_Unity_Barracuda_IOps_Expand_mA3B98063DB0F4783AC9BC3C39035B1F7D4009DE5 (void);
// 0x000003A3 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Transpose_m94F03CE0DF753D3A7BE1A7D1F6D324F9BA7FD205 (void);
// 0x000003A4 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Transpose_mD9432211B3D0397C760C46D7CA42096F3A7C1CA0 (void);
// 0x000003A5 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Gather_m9F844035E6B5D4074B387B83686F6ED779EE5923 (void);
// 0x000003A6 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.NonMaxSuppression(Unity.Barracuda.Tensor[],System.Int32,System.Single,System.Single,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_NonMaxSuppression_mF07972EB5BBC5E705C96D794382E01CEA5766A7D (void);
// 0x000003A7 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Concat_m5C65C4DE26575249FF2153AAA81985241FE8810B (void);
// 0x000003A8 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_StridedSlice_m8AAE647C8C5B4D0BF90081AF3E16395A3D8F0225 (void);
// 0x000003A9 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Tile_mE85C8550FB2A955B1B8AFCE14A45C40C8CCEEF4F (void);
// 0x000003AA Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Shape(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Shape_mB2A88EC1BD60EA917B45F0C2367DFE1642CFDF21 (void);
// 0x000003AB Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Copy(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Copy_mE916D8822C45BAC9E51B7458683939756E91D31E (void);
// 0x000003AC Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Prepare(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Prepare_m41F936182DCDA953F5530E01C64A438D13A14F0A (void);
// 0x000003AD System.Void Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ResetAllocator(System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_ResetAllocator_mE853807A95FB6154834DF837AD428F64FFE98C37 (void);
// 0x000003AE System.Void Unity.Barracuda.CompareOps::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/Type,Unity.Barracuda.Tensor[])
extern void CompareOps_CheckSame_m1460E873ECFC34CC27D62CDE12484064F485E1C4 (void);
// 0x000003AF System.Void Unity.Barracuda.CompareOps::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.String,Unity.Barracuda.Tensor[])
extern void CompareOps_CheckSame_mDFF23F453A033AE68883D66096F70377DE5448BB (void);
// 0x000003B0 System.Void Unity.Barracuda.CompareOpsUtils::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/Type,Unity.Barracuda.CompareOpsUtils/LogLevel,System.Single,Unity.Barracuda.Tensor[])
extern void CompareOpsUtils_CheckSame_mC3EAD74388C452A6B1C1491F059DBD801CA054AB (void);
// 0x000003B1 System.Void Unity.Barracuda.CompareOpsUtils::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.String,Unity.Barracuda.CompareOpsUtils/LogLevel,System.Single,Unity.Barracuda.Tensor[])
extern void CompareOpsUtils_CheckSame_mFC75D32E31558000DA819A145644213259ECEA8C (void);
// 0x000003B2 System.Void Unity.Barracuda.CompareOpsUtils::CheckApproximately(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Single,Unity.Barracuda.Layer/Type,Unity.Barracuda.CompareOpsUtils/LogLevel)
extern void CompareOpsUtils_CheckApproximately_mFA9DFC784159545DA532EB1EDF4F75712BAF0CCA (void);
// 0x000003B3 System.Void Unity.Barracuda.CompareOpsUtils::CheckApproximately(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Single,System.String,Unity.Barracuda.CompareOpsUtils/LogLevel)
extern void CompareOpsUtils_CheckApproximately_m20DF1B221D5439B724EDF17A83A6E2901B024DE1 (void);
// 0x000003B4 System.Void Unity.Barracuda.CompareOpsUtils::.ctor()
extern void CompareOpsUtils__ctor_mC7FD5E3C16361D97372C0041C2B3B699C2FEA14D (void);
// 0x000003B5 System.Void Unity.Barracuda.ComputeInfo::.cctor()
extern void ComputeInfo__cctor_m8908DF9F660AF64EBEAE2E3B22C2FCF690A5928A (void);
// 0x000003B6 System.Void Unity.Barracuda.ComputeInfo::.ctor()
extern void ComputeInfo__ctor_mD6DE7282AD7B060E484B2BF3E383A3761B257608 (void);
// 0x000003B7 UnityEngine.ComputeShader Unity.Barracuda.ComputeShaderSingleton::get_referenceKernels()
extern void ComputeShaderSingleton_get_referenceKernels_mB1052E94997DD3070D2B6B5D4F3EFCA97F340251 (void);
// 0x000003B8 UnityEngine.ComputeShader[] Unity.Barracuda.ComputeShaderSingleton::get_kernels()
extern void ComputeShaderSingleton_get_kernels_mAC01CC4498A362357BB69CE1EC4652D357D9066E (void);
// 0x000003B9 UnityEngine.ComputeShader Unity.Barracuda.ComputeShaderSingleton::get_texureKernels()
extern void ComputeShaderSingleton_get_texureKernels_m9FC97F6E12C681683D78A1B991D54FBFFF2B578D (void);
// 0x000003BA System.Void Unity.Barracuda.ComputeShaderSingleton::.ctor()
extern void ComputeShaderSingleton__ctor_m29B9E816827DE5D2EED42FC58C86B0DBDBEEBB33 (void);
// 0x000003BB UnityEngine.ComputeShader Unity.Barracuda.ComputeShaderSingleton::LoadReferenceKernels()
extern void ComputeShaderSingleton_LoadReferenceKernels_m1A619F174782FBE1AC7C70AEA5DEA408C2ADBFBE (void);
// 0x000003BC UnityEngine.ComputeShader Unity.Barracuda.ComputeShaderSingleton::LoadTextureKernels()
extern void ComputeShaderSingleton_LoadTextureKernels_m8F093231D4F91D2C043D31EAFB62C84E0C33C2E1 (void);
// 0x000003BD UnityEngine.ComputeShader[] Unity.Barracuda.ComputeShaderSingleton::LoadKernels()
extern void ComputeShaderSingleton_LoadKernels_mD4EE0FA1BB795E867A7CE83AF2DA94C24B9A2608 (void);
// 0x000003BE Unity.Barracuda.ComputeShaderSingleton Unity.Barracuda.ComputeShaderSingleton::get_Instance()
extern void ComputeShaderSingleton_get_Instance_m39E2EFA148C75B43DA543DAD32D635561A0630F9 (void);
// 0x000003BF UnityEngine.ComputeShader Unity.Barracuda.ComputeShaderSingleton::LoadIf(System.Boolean,System.String)
extern void ComputeShaderSingleton_LoadIf_mDE3CB07A2DBF87D47F873A39F8EE78CF149167B2 (void);
// 0x000003C0 System.Void Unity.Barracuda.ComputeShaderSingleton::LoadIf(System.Boolean,System.String,System.Collections.Generic.List`1<UnityEngine.ComputeShader>)
extern void ComputeShaderSingleton_LoadIf_m6681B5C6E532687447F5F49FAD85F541767116D0 (void);
// 0x000003C1 System.Boolean Unity.Barracuda.ComputeShaderSingleton::get_supported()
extern void ComputeShaderSingleton_get_supported_m6A76BC26B2BDB724FDC92D9B83C8F1EF4E121950 (void);
// 0x000003C2 System.Void Unity.Barracuda.ComputeShaderSingleton::.cctor()
extern void ComputeShaderSingleton__cctor_m00C0DEC97DC1D06CD0B056DF20B1BC1C8DEAB1B1 (void);
// 0x000003C3 System.Void Unity.Barracuda.GenericWorker::.ctor(Unity.Barracuda.Model,Unity.Barracuda.IOps,Unity.Barracuda.IVars,System.Boolean)
extern void GenericWorker__ctor_mAB691690D4961DF86FC0EF4E41D6950B6D06C308 (void);
// 0x000003C4 System.Void Unity.Barracuda.GenericWorker::Finalize()
extern void GenericWorker_Finalize_mFD1CD71643CF655721404944E62AF3A017B9AB60 (void);
// 0x000003C5 System.Void Unity.Barracuda.GenericWorker::OccupyAllocator()
extern void GenericWorker_OccupyAllocator_m16A6058CE5FD11553A41637941745E0B25779828 (void);
// 0x000003C6 System.Void Unity.Barracuda.GenericWorker::ResetAllocatorIfStale()
extern void GenericWorker_ResetAllocatorIfStale_mB5B8AD44C4D3E9E2106F408F1308BDB13F95C058 (void);
// 0x000003C7 System.Void Unity.Barracuda.GenericWorker::ResetAllocatorIfStaleAndNotOccupied()
extern void GenericWorker_ResetAllocatorIfStaleAndNotOccupied_mA31D2274938ED0327206C04FD2BB45EEEEFCE38D (void);
// 0x000003C8 System.Void Unity.Barracuda.GenericWorker::Dispose()
extern void GenericWorker_Dispose_mADB23BE11AD7100B6281DCBF7FFD21539F2CC64E (void);
// 0x000003C9 System.Void Unity.Barracuda.GenericWorker::PrepareForInput(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericWorker_PrepareForInput_mF9F93F2C654D57F11775CF1BD7B966F850CD04FB (void);
// 0x000003CA System.Void Unity.Barracuda.GenericWorker::SetInput(System.String,Unity.Barracuda.Tensor)
extern void GenericWorker_SetInput_mB9E3FDC2936D0B78887E9DCA34AE1B893117241B (void);
// 0x000003CB System.Void Unity.Barracuda.GenericWorker::SetInput(Unity.Barracuda.Tensor)
extern void GenericWorker_SetInput_m6006D2DE4B9B1ECB2AC1DE6009097C78C4D0F99D (void);
// 0x000003CC Unity.Barracuda.IWorker Unity.Barracuda.GenericWorker::Execute(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void GenericWorker_Execute_m75BA1044AD01E92D120AC7CDC23E69B5B2101129 (void);
// 0x000003CD Unity.Barracuda.IWorker Unity.Barracuda.GenericWorker::Execute(Unity.Barracuda.Tensor)
extern void GenericWorker_Execute_mA007D5093B711E50EA097FBD2BB6617CC10E47F3 (void);
// 0x000003CE Unity.Barracuda.IWorker Unity.Barracuda.GenericWorker::Execute()
extern void GenericWorker_Execute_m39E1A9A6D7DAEA201C8F45360A8DF26A2765D68B (void);
// 0x000003CF System.Collections.IEnumerator Unity.Barracuda.GenericWorker::StartManualSchedule(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void GenericWorker_StartManualSchedule_m96C17FA706A646F7862C35E740AB0D271C9D789A (void);
// 0x000003D0 System.Void Unity.Barracuda.GenericWorker::FlushSchedule(System.Boolean)
extern void GenericWorker_FlushSchedule_mEBCEBBDF8DA2812424F7D4CA8A1862DAAAC54B13 (void);
// 0x000003D1 System.Collections.IEnumerator Unity.Barracuda.GenericWorker::StartManualSchedule(Unity.Barracuda.Tensor)
extern void GenericWorker_StartManualSchedule_m18FDE88CAB5E55D9AFC224DD4920BB5CB39295D8 (void);
// 0x000003D2 System.Single Unity.Barracuda.GenericWorker::get_scheduleProgress()
extern void GenericWorker_get_scheduleProgress_m7132FAECE9DEC2D5DE9CEC308E469B84948D1E42 (void);
// 0x000003D3 Unity.Barracuda.Layer/FusedActivation Unity.Barracuda.GenericWorker::GetAndVerifyFusedActivation(Unity.Barracuda.Layer)
extern void GenericWorker_GetAndVerifyFusedActivation_m63C4783C3CB6758FEBF8767A08527BED69E33877 (void);
// 0x000003D4 System.Collections.IEnumerator Unity.Barracuda.GenericWorker::StartManualSchedule()
extern void GenericWorker_StartManualSchedule_m1A0B9E0A17AC44582217E622097F80EA15F2CE07 (void);
// 0x000003D5 Unity.Barracuda.Tensor Unity.Barracuda.GenericWorker::PeekOutput()
extern void GenericWorker_PeekOutput_mAA65AF44AAB820E0B7F8B1042FCAE39582BFF099 (void);
// 0x000003D6 Unity.Barracuda.Tensor Unity.Barracuda.GenericWorker::PeekOutput(System.String)
extern void GenericWorker_PeekOutput_mF03C0FE470CE952499FEA8914A44537056B966B5 (void);
// 0x000003D7 Unity.Barracuda.Tensor[] Unity.Barracuda.GenericWorker::PeekConstants(System.String)
extern void GenericWorker_PeekConstants_m3AA8A9C5F1E1659B994F6C83B0587247C1A74DE5 (void);
// 0x000003D8 System.String Unity.Barracuda.GenericWorker::Summary()
extern void GenericWorker_Summary_mFB9C13857AA2F68C1E3D7C49EB415FF129A06F62 (void);
// 0x000003D9 System.Void Unity.Barracuda.GenericVars::.ctor()
extern void GenericVars__ctor_mAC99D397D1B1849BE5ECEBC747B35C2BF235E6FB (void);
// 0x000003DA System.Void Unity.Barracuda.GenericVars::Finalize()
extern void GenericVars_Finalize_m6BA83D4D103B5063376B876CA1E06B7AD4541E53 (void);
// 0x000003DB System.Void Unity.Barracuda.GenericVars::Dispose()
extern void GenericVars_Dispose_m772F21345C85909C13DFA57928D58C87546A0A21 (void);
// 0x000003DC Unity.Barracuda.ITensorAllocator Unity.Barracuda.GenericVars::GetAllocator()
extern void GenericVars_GetAllocator_m0436E686C6F8DC62A2A15AD1B27DE226C59DAD29 (void);
// 0x000003DD System.Boolean Unity.Barracuda.GenericVars::IsTensorOwnedByInternalAllocator(Unity.Barracuda.Tensor)
extern void GenericVars_IsTensorOwnedByInternalAllocator_mDA864CB2C278F1151D312CEB59AA9D7C4C885180 (void);
// 0x000003DE System.Boolean Unity.Barracuda.GenericVars::ValidateGlobalInputs(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVars_ValidateGlobalInputs_m9BEE55A2F55DCA0B811C1617572C82DB0247DD3D (void);
// 0x000003DF Unity.Barracuda.Tensor[] Unity.Barracuda.GenericVars::PrepareLayerInputTensors(Unity.Barracuda.Model,Unity.Barracuda.Layer,Unity.Barracuda.IOps)
extern void GenericVars_PrepareLayerInputTensors_mCE160D6182CDC0756B211F0E95063285ED0733D5 (void);
// 0x000003E0 System.Void Unity.Barracuda.GenericVars::SetInput(System.String,Unity.Barracuda.Tensor)
extern void GenericVars_SetInput_mBFA49C0979ABAC11194EE80063A1FE42C825CE18 (void);
// 0x000003E1 System.Void Unity.Barracuda.GenericVars::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVars_PrepareStorage_m054284595FCA2988DA36D76B14997512EA224C9C (void);
// 0x000003E2 Unity.Barracuda.Tensor[] Unity.Barracuda.GenericVars::GatherInputs(Unity.Barracuda.Layer)
extern void GenericVars_GatherInputs_m10DFA45036AF190AA9F7C99929F2D8E9353129EB (void);
// 0x000003E3 System.Void Unity.Barracuda.GenericVars::PrepareStorage(Unity.Barracuda.Layer)
extern void GenericVars_PrepareStorage_mA4B57A9AF2123E053A37A61E217609DFF1B310A5 (void);
// 0x000003E4 System.Void Unity.Barracuda.GenericVars::Store(Unity.Barracuda.Layer,Unity.Barracuda.Tensor)
extern void GenericVars_Store_mFB3FA4BF6121BCCB90884D2101F1724657256D06 (void);
// 0x000003E5 Unity.Barracuda.Tensor Unity.Barracuda.GenericVars::PeekOutput(System.String)
extern void GenericVars_PeekOutput_m1E539114E673361C6A80BAB25E5C4AF0272A8FCE (void);
// 0x000003E6 Unity.Barracuda.Tensor[] Unity.Barracuda.GenericVars::PeekConstants(System.String)
extern void GenericVars_PeekConstants_mC972AF922A3BF5FD3C6E49208426E58B4E492164 (void);
// 0x000003E7 System.Boolean Unity.Barracuda.GenericVarsWithReuse::get_layerRequiresStorage()
extern void GenericVarsWithReuse_get_layerRequiresStorage_m7B60D3E4A97752C6C8C3AB4CCF0313FD57F63524 (void);
// 0x000003E8 Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithReuse::get_temporary()
extern void GenericVarsWithReuse_get_temporary_mE4EC1FEEB363983D0D79505EB74682E7F9A0E650 (void);
// 0x000003E9 System.Void Unity.Barracuda.GenericVarsWithReuse::ReleaseTemporary()
extern void GenericVarsWithReuse_ReleaseTemporary_m0044D573537DCF77470B0CD3A9A4500C6313493F (void);
// 0x000003EA System.Void Unity.Barracuda.GenericVarsWithReuse::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVarsWithReuse_PrepareStorage_m2C3EB3659B7CBA88FC83A2C4A0AB9F6D72E9FDA2 (void);
// 0x000003EB System.Void Unity.Barracuda.GenericVarsWithReuse::PrepareStorage(Unity.Barracuda.Layer)
extern void GenericVarsWithReuse_PrepareStorage_mB98CCE8C0032BD8D3C71A7B608D4D842E5BD57F2 (void);
// 0x000003EC System.Void Unity.Barracuda.GenericVarsWithReuse::Store(Unity.Barracuda.Layer,Unity.Barracuda.Tensor)
extern void GenericVarsWithReuse_Store_m67AFAA1E6F473802BB9149836948EFF2163DD524 (void);
// 0x000003ED Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithReuse::PeekOutput(System.String)
extern void GenericVarsWithReuse_PeekOutput_m1BB3B36E6A4F7CE6AA503A4BFDBADAB83B44E9D3 (void);
// 0x000003EE System.Void Unity.Barracuda.GenericVarsWithReuse::.ctor()
extern void GenericVarsWithReuse__ctor_m804FF9BED22BE2191962BA162D2F80B931C47D10 (void);
// 0x000003EF System.Void Unity.Barracuda.GenericVarsWithPreallocation::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVarsWithPreallocation_PrepareStorage_mD9EA365A1D68ABAA009962B0023C70C29D4E33CE (void);
// 0x000003F0 Unity.Barracuda.ITensorAllocator Unity.Barracuda.GenericVarsWithPreallocation::GetAllocator()
extern void GenericVarsWithPreallocation_GetAllocator_m98C7D86771F7C54470F230F7370389EBEB964DD4 (void);
// 0x000003F1 System.Boolean Unity.Barracuda.GenericVarsWithPreallocation::IsTensorOwnedByInternalAllocator(Unity.Barracuda.Tensor)
extern void GenericVarsWithPreallocation_IsTensorOwnedByInternalAllocator_m8E51DD101B608D1186ECE68E3B41ED42E19FE054 (void);
// 0x000003F2 Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithPreallocation::Alloc(Unity.Barracuda.TensorShape)
extern void GenericVarsWithPreallocation_Alloc_m38513583317BE8595F82F0F9A60140A8DD5A1EF4 (void);
// 0x000003F3 Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithPreallocation::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void GenericVarsWithPreallocation_Alloc_m06C7B1CCE0E1F39745CC234B8A9DE5654D13E927 (void);
// 0x000003F4 System.Void Unity.Barracuda.GenericVarsWithPreallocation::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void GenericVarsWithPreallocation_MoveToDevice_m7ECAA3469FD15994A0D47DD1A79E84D3E17FB3EE (void);
// 0x000003F5 System.Void Unity.Barracuda.GenericVarsWithPreallocation::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void GenericVarsWithPreallocation_Release_m1E7702FDA9FB9DE8333A502CB1C811F76B644A28 (void);
// 0x000003F6 System.Void Unity.Barracuda.GenericVarsWithPreallocation::WaiveOwnership(Unity.Barracuda.Tensor)
extern void GenericVarsWithPreallocation_WaiveOwnership_m4C685131032179FDCC0953F7B2B3E47C7C30E5AC (void);
// 0x000003F7 System.Void Unity.Barracuda.GenericVarsWithPreallocation::Reset(System.Boolean)
extern void GenericVarsWithPreallocation_Reset_mAA5B41695F74034E79614614D50495A3FA778477 (void);
// 0x000003F8 System.Int64 Unity.Barracuda.GenericVarsWithPreallocation::get_busyBytes()
extern void GenericVarsWithPreallocation_get_busyBytes_m1DF7C1F827A76C626BBDD93FE9B408700884D3BD (void);
// 0x000003F9 System.Int64 Unity.Barracuda.GenericVarsWithPreallocation::get_freeBytes()
extern void GenericVarsWithPreallocation_get_freeBytes_m86308FE7D2BBFBCB21000F640689A84AD5E1E1D3 (void);
// 0x000003FA System.Int64 Unity.Barracuda.GenericVarsWithPreallocation::get_totalBytes()
extern void GenericVarsWithPreallocation_get_totalBytes_m38761F4158611FEDB8637B45BC7D59F2A6E34DA3 (void);
// 0x000003FB System.String Unity.Barracuda.GenericVarsWithPreallocation::ToString()
extern void GenericVarsWithPreallocation_ToString_m4D6EB2713354CF0A1FD70D6266EF5EED111CCF02 (void);
// 0x000003FC System.Void Unity.Barracuda.GenericVarsWithPreallocation::.ctor()
extern void GenericVarsWithPreallocation__ctor_mC45D375117BF4E435C41247229AAF5532386400D (void);
// 0x000003FD System.Void Unity.Barracuda.DefaultTensorAllocator::.ctor()
extern void DefaultTensorAllocator__ctor_mA044DAC90A5754FCCBB7A6587C8EF504675CFCD0 (void);
// 0x000003FE System.Void Unity.Barracuda.DefaultVars::.ctor()
extern void DefaultVars__ctor_mCDC292426EE7F4FEB67D33BB6E87FDBA6BDFCA71 (void);
// 0x000003FF System.Boolean Unity.Barracuda.LinearLayerFusing::IsLayerLinear(Unity.Barracuda.Layer,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Layer>)
extern void LinearLayerFusing_IsLayerLinear_mC33442357ED684CFA8D46027F45A4371C7E3E858 (void);
// 0x00000400 System.Boolean Unity.Barracuda.LinearLayerFusing::IsLayerLinearMathOp(Unity.Barracuda.Layer)
extern void LinearLayerFusing_IsLayerLinearMathOp_mD751840167C97E67FF1FD123455DE386EFEAE6BB (void);
// 0x00000401 System.Boolean Unity.Barracuda.LinearLayerFusing::AreLayersFusable(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_AreLayersFusable_m0963D12FC1A8BEF92A8F7A2972ECBAE18523F1EF (void);
// 0x00000402 System.Void Unity.Barracuda.LinearLayerFusing::Add(System.ValueTuple`2<Unity.Barracuda.Layer/Type,Unity.Barracuda.Layer/Type>,System.Func`3<Unity.Barracuda.Layer,Unity.Barracuda.Layer,Unity.Barracuda.Layer>)
extern void LinearLayerFusing_Add_m74417B35F0A1F769BE2931B7DCC3E84F92CD43E6 (void);
// 0x00000403 System.Void Unity.Barracuda.LinearLayerFusing::.ctor()
extern void LinearLayerFusing__ctor_m4D2C588FA7BD30F958511849145B10BDC3811750 (void);
// 0x00000404 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::FuseLayers(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_FuseLayers_m9CA50809C3867C5F621AE6A3DB3A50EA442BDDED (void);
// 0x00000405 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_0(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_0_mD381516081FA4766AA358333DF89B0918B61E11F (void);
// 0x00000406 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_1(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_1_m7402800301CC265B31BEF2E275F3051791FB8349 (void);
// 0x00000407 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_2(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_2_m11B13D923C8710C23CE479436E09C30A97526135 (void);
// 0x00000408 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_3(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_3_m372481F7F08A2CD88C75A4BE9A2EB54F00C7F18E (void);
// 0x00000409 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_4(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_4_m051E51DFD1F7613C1B3EF7E9F644F14714E8F43C (void);
// 0x0000040A Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_6(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_6_m99AC9DB58666AC9ACDFCECED24B16101E6960D15 (void);
// 0x0000040B Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_8(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_8_m114067FCF1D00609D4E8AE36CC151843E5A68832 (void);
// 0x0000040C Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_9(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_9_mE500FA0EA1BCC77CCD69D45868DA70163C698721 (void);
// 0x0000040D Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_11(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_11_mFBD752659CE63F553A9D36674A4B9BEEB533AF6B (void);
// 0x0000040E Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_13(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_13_m8E6DBF6009926913AE1EE6A23EA7D2FF2BB509DE (void);
// 0x0000040F Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_14(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_14_mD6A2DE7D2191EBE3135E1834D68C7D7131D7E07A (void);
// 0x00000410 System.Boolean Unity.Barracuda.CSharpBLAS::IsNative()
extern void CSharpBLAS_IsNative_mEA6E7323B0A9F118BFC796D87F6DDA8703E3DF1D (void);
// 0x00000411 System.Boolean Unity.Barracuda.CSharpBLAS::IsCurrentPlatformSupported()
extern void CSharpBLAS_IsCurrentPlatformSupported_m7D32FC17BE2DBE5BD756D732C8FA300F9AFA14D5 (void);
// 0x00000412 System.Void Unity.Barracuda.CSharpBLAS::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void CSharpBLAS_SGEMM_mF3B9F4BA5F6454E3FF3482F26A7511361514BEE1 (void);
// 0x00000413 Unity.Jobs.JobHandle Unity.Barracuda.CSharpBLAS::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void CSharpBLAS_ScheduleSGEMM_m048890D46A7E35FEBB23647B8B2E5DEE3651D092 (void);
// 0x00000414 System.Void Unity.Barracuda.CSharpBLAS::.ctor()
extern void CSharpBLAS__ctor_mFE971B6C2FCA8F9D737C13C0B7D59E78668A2F30 (void);
// 0x00000415 System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Single[],System.Int32,System.Boolean)
extern void MatrixUtils_CopyBlockWithPadding_m3779A858A6E333F0F7F5CC00C101E8B17D346535 (void);
// 0x00000416 System.Void Unity.Barracuda.MatrixUtils::ClearFloatArray(System.Single*,System.Single,System.Int32)
extern void MatrixUtils_ClearFloatArray_mA18BDA9CA3A71843FE248A55315422F00976A74B (void);
// 0x00000417 System.Void Unity.Barracuda.MatrixUtils::CopyFloatArray(System.Single*,System.Single*,System.Int32)
extern void MatrixUtils_CopyFloatArray_mD9695169C4883FDFB9906D36E086CFBEA5D0BE4E (void);
// 0x00000418 System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Boolean)
extern void MatrixUtils_CopyBlockWithPadding_m191D4BDBB9FB3CFE275DC2E60B81C8EDB2D5461A (void);
// 0x00000419 System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single[],System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void MatrixUtils_CopyBlockWithPadding_m01FD5FFFFEB3B40809AED7B9147E2A45182BA57A (void);
// 0x0000041A System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single*,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void MatrixUtils_CopyBlockWithPadding_m5179FB99C9C9142EE036DAB0A8E2089577574451 (void);
// 0x0000041B System.Void Unity.Barracuda.MatrixUtils::MultiplyBlockUnroll8xhPadded(System.Single*,System.Single*,System.Single*,System.Int32)
extern void MatrixUtils_MultiplyBlockUnroll8xhPadded_m723A00DE1702DA1A405E9381BCF820E8FA6F3A26 (void);
// 0x0000041C System.Void Unity.Barracuda.MatrixUtils::MultiplyBlockUnroll8xhParallelWithPadding(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void MatrixUtils_MultiplyBlockUnroll8xhParallelWithPadding_mAB581F1C85CFAF5E5256F95A69E22B8446AF1FF8 (void);
// 0x0000041D System.Void Unity.Barracuda.MatrixUtils::.ctor()
extern void MatrixUtils__ctor_mB44EF7D5855131DB7B090E927B8C1533530FD69B (void);
// 0x0000041E System.String Unity.Barracuda.ModelAnalyzer::GetDefaultInputName(Unity.Barracuda.Model)
extern void ModelAnalyzer_GetDefaultInputName_m88E5327BCDB391AE09CB98BAB88FCD22DF2BF149 (void);
// 0x0000041F System.String Unity.Barracuda.ModelAnalyzer::GetDefaultOutputName(Unity.Barracuda.Model)
extern void ModelAnalyzer_GetDefaultOutputName_mF86682F121431070214D0053EEC37FD13F5D38E4 (void);
// 0x00000420 System.Nullable`1<Unity.Barracuda.TensorShape>[] Unity.Barracuda.ModelAnalyzer::ListTemporaryTensorShapes(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void ModelAnalyzer_ListTemporaryTensorShapes_mF88929E17807C4989435DC533775093DBD520AF4 (void);
// 0x00000421 System.Nullable`1<Unity.Barracuda.TensorShape>[] Unity.Barracuda.ModelAnalyzer::ListTemporaryTensorShapes(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>&)
extern void ModelAnalyzer_ListTemporaryTensorShapes_m3EEB4867C1950F234C50362EC735E6276059B217 (void);
// 0x00000422 System.Boolean Unity.Barracuda.ModelAnalyzer::TryGetOutputTensorShape(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>,System.String,Unity.Barracuda.TensorShape&)
extern void ModelAnalyzer_TryGetOutputTensorShape_m10CC6BC0BC1A0E8AF6C1744C9792E2142CFF666F (void);
// 0x00000423 System.Boolean Unity.Barracuda.ModelAnalyzer::TryGetOutputTensorShape(Unity.Barracuda.Model,System.String,Unity.Barracuda.TensorShape&)
extern void ModelAnalyzer_TryGetOutputTensorShape_m894CDD6D14B9EB2D275822951F73D0F3EC9A5896 (void);
// 0x00000424 System.Collections.Generic.HashSet`1<Unity.Barracuda.Layer> Unity.Barracuda.ModelAnalyzer::FindLayersThatRequireStorage(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindLayersThatRequireStorage_mD589A57DEECCE986711137EF5F5690820DB48B34 (void);
// 0x00000425 System.Collections.Generic.HashSet`1<Unity.Barracuda.Layer> Unity.Barracuda.ModelAnalyzer::FindUpstreamLayers(Unity.Barracuda.Model,System.String[])
extern void ModelAnalyzer_FindUpstreamLayers_mDF58BEAAE03EB9416CA837D844CB3E003D64C974 (void);
// 0x00000426 Unity.Barracuda.TensorShape Unity.Barracuda.ModelAnalyzer::FindLargestNecessaryTensorShape(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void ModelAnalyzer_FindLargestNecessaryTensorShape_m171450CF2E325184DD3ED46A51DB741374DC1312 (void);
// 0x00000427 Unity.Barracuda.TensorShape Unity.Barracuda.ModelAnalyzer::FindLargestArgumentTensorShape(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindLargestArgumentTensorShape_m281F74AB4B01BD6EABC243038557DB2CA65B0E7F (void);
// 0x00000428 System.String[] Unity.Barracuda.ModelAnalyzer::FindUnusedLayers(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindUnusedLayers_m905E152E745631FD3099D124C41D46EDF3E6E8B9 (void);
// 0x00000429 System.String[] Unity.Barracuda.ModelAnalyzer::FindBrokenLinks(Unity.Barracuda.Model,System.Collections.Generic.HashSet`1<System.String>)
extern void ModelAnalyzer_FindBrokenLinks_m812B620655383528EAB2E0745FE434D649617754 (void);
// 0x0000042A System.String[] Unity.Barracuda.ModelAnalyzer::FindBrokenLinks(Unity.Barracuda.Model,System.String[])
extern void ModelAnalyzer_FindBrokenLinks_m48877A3665C63A152C1E8212564BB8FD8B29E207 (void);
// 0x0000042B System.String[] Unity.Barracuda.ModelAnalyzer::FindBrokenLinks(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindBrokenLinks_mA7738327D572A5268F70FFB8C5BA92515D498AC9 (void);
// 0x0000042C System.String[] Unity.Barracuda.ModelAnalyzer::FindUnconnectedInputs(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindUnconnectedInputs_mD7A296D8F844A6BF44540B4C1911AF2F663A4230 (void);
// 0x0000042D System.String[] Unity.Barracuda.ModelAnalyzer::FindUnconnectedOutputs(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindUnconnectedOutputs_mCFD053F7E5A0D2C10E806F1FA89CA591669473B8 (void);
// 0x0000042E System.Void Unity.Barracuda.ModelAnalyzer::.ctor()
extern void ModelAnalyzer__ctor_m5D8729F8EFBCC294A567C34EA9D0F16185F2937A (void);
// 0x0000042F Unity.Barracuda.Model Unity.Barracuda.ModelOptimizer::Optimize(Unity.Barracuda.Model,System.Boolean,System.Collections.Generic.HashSet`1<System.String>)
extern void ModelOptimizer_Optimize_m5308ECE71A91C520EBA71729F4E3C31C6E027A4D (void);
// 0x00000430 System.Void Unity.Barracuda.ModelOptimizer::RemoveUnused(Unity.Barracuda.Model,System.Collections.Generic.HashSet`1<System.String>)
extern void ModelOptimizer_RemoveUnused_m409A3939800976B70F1719DA445510F5F441EB4E (void);
// 0x00000431 System.Boolean Unity.Barracuda.ModelOptimizer::IsLayerSupportingActivationFusing(Unity.Barracuda.Layer/Type)
extern void ModelOptimizer_IsLayerSupportingActivationFusing_mCBC3E9B23E9051AEDB391EDA6A48811E3FD85C7B (void);
// 0x00000432 System.Boolean Unity.Barracuda.ModelOptimizer::IsActivationFusable(Unity.Barracuda.Layer/Activation)
extern void ModelOptimizer_IsActivationFusable_m2693A142A77AC257A523087E7F38236F3FEE59C9 (void);
// 0x00000433 System.Void Unity.Barracuda.ModelOptimizer::FuseActivation(Unity.Barracuda.Model,Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void ModelOptimizer_FuseActivation_m5F0F4017DFAD5450D81E9236CBC3A14724527E64 (void);
// 0x00000434 System.Void Unity.Barracuda.ModelOptimizer::FuseActivations(Unity.Barracuda.Model)
extern void ModelOptimizer_FuseActivations_m1DC1BEFBC56538A594566CBDF7187CF2E4B06F78 (void);
// 0x00000435 System.Boolean Unity.Barracuda.ModelOptimizer::IsPermutationNoop(System.Int32[])
extern void ModelOptimizer_IsPermutationNoop_m4CCC20EBA97E2608C602BE0EB2EF7DDF482D182F (void);
// 0x00000436 System.Boolean Unity.Barracuda.ModelOptimizer::IsLayerNoop(Unity.Barracuda.Layer)
extern void ModelOptimizer_IsLayerNoop_m82A35E1848AC8ABA8F01334F1697726EDFF97703 (void);
// 0x00000437 Unity.Barracuda.Model Unity.Barracuda.ModelOptimizer::RemoveNoop(Unity.Barracuda.Model)
extern void ModelOptimizer_RemoveNoop_m299DA8A6FD35E22215C78B0121579D42EB830411 (void);
// 0x00000438 System.Boolean Unity.Barracuda.ModelOptimizer::IsLayerConstant(Unity.Barracuda.Layer)
extern void ModelOptimizer_IsLayerConstant_mDD13FCA29714DECD40C3A0FD726524D252331E93 (void);
// 0x00000439 System.Boolean Unity.Barracuda.ModelOptimizer::IsLayerFusedActivation(Unity.Barracuda.Layer)
extern void ModelOptimizer_IsLayerFusedActivation_m378111FE3EEF6913B913B0D3D51A6E5FF8CCEE0A (void);
// 0x0000043A System.Int64 Unity.Barracuda.ModelOptimizer::LayerComplextity(Unity.Barracuda.Layer)
extern void ModelOptimizer_LayerComplextity_mD0813D332318313012E277232E598058E8AF59EB (void);
// 0x0000043B Unity.Barracuda.Layer Unity.Barracuda.ModelOptimizer::FuseConsecutiveLayers(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void ModelOptimizer_FuseConsecutiveLayers_mDD194B6FD6BCB6D0D0B7CACE78CDAB86D83869D5 (void);
// 0x0000043C System.Boolean Unity.Barracuda.ModelOptimizer::AreLayersFusable(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void ModelOptimizer_AreLayersFusable_mF4A8A8AEECDBBC95BE1975D518A5639D0DFA78A0 (void);
// 0x0000043D System.Void Unity.Barracuda.ModelOptimizer::PackConstants(Unity.Barracuda.Model,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Layer>)
extern void ModelOptimizer_PackConstants_m546164696A81C54D55BBCBFFD190C2027F18ED5E (void);
// 0x0000043E System.Void Unity.Barracuda.ModelOptimizer::UnpackConstants(Unity.Barracuda.Model)
extern void ModelOptimizer_UnpackConstants_mCFBEFC0A231444FE0DA2BF730FB5C575D9AC43FB (void);
// 0x0000043F System.Void Unity.Barracuda.ModelOptimizer::FuseLinear(Unity.Barracuda.Model,System.Collections.Generic.HashSet`1<System.String>)
extern void ModelOptimizer_FuseLinear_mB7F2C9D0E10BA1BCCB0487AFD8ADCAE42B362C5D (void);
// 0x00000440 System.Void Unity.Barracuda.ModelOptimizer::.ctor()
extern void ModelOptimizer__ctor_m0B2118383282283DEBEA96026687A507AD444376 (void);
// 0x00000441 System.Void Unity.Barracuda.ModelOptimizer::.cctor()
extern void ModelOptimizer__cctor_m1DA59AB55F0C5B203AD926DE9C856345D423305F (void);
// 0x00000442 System.Void Unity.Barracuda.StaticLayerOppComplexity::Add(Unity.Barracuda.Layer/Type,System.Func`2<Unity.Barracuda.Layer,System.Int64>)
extern void StaticLayerOppComplexity_Add_mA40AB893741E12256B6851555AEA6AFA799F42DC (void);
// 0x00000443 System.Void Unity.Barracuda.StaticLayerOppComplexity::.ctor()
extern void StaticLayerOppComplexity__ctor_m59C0EE23986A384357F9B71DC99222D31A71E919 (void);
// 0x00000444 System.Int64 Unity.Barracuda.StaticLayerOppComplexity::LayerComplextity(Unity.Barracuda.Layer)
extern void StaticLayerOppComplexity_LayerComplextity_mB8FC23AB294E295A1FB0B93F28EB5741484FF88D (void);
// 0x00000445 System.Void Unity.Barracuda.StatsOps::.ctor(Unity.Barracuda.IOps)
extern void StatsOps__ctor_m41C83BB3427AD7ED1CE7634B15B0ED208D90AB41 (void);
// 0x00000446 System.Void Unity.Barracuda.StatsOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void StatsOps_PrepareModel_m20AA1E0E7A37C09DB561FC1E7B941B32075A8C47 (void);
// 0x00000447 System.Void Unity.Barracuda.StatsOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void StatsOps_PreExecuteLayer_m32C2B9D785879452FBEA9877870D6FA27BB58598 (void);
// 0x00000448 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_MatMul_m4F4FFEED3A056D29FE199FBEED7983841DAE1852 (void);
// 0x00000449 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Dense_mE0391D15E8459A2F6155729FA6ADD6ADD41F8F82 (void);
// 0x0000044A Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Conv2D_m63F673B34CC0244CAF41BB3B0164C0C64EC5784F (void);
// 0x0000044B Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_DepthwiseConv2D_m910CCBF7E52B8E2483B8EBF943D4D417C5D0B5A0 (void);
// 0x0000044C Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Conv2DTrans_mFDED1367F9A58BBA30C397D7FE3417374EC789C7 (void);
// 0x0000044D Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_Upsample2D_m80AE466378AE2F3C6C7261B38ECE86F51D266156 (void);
// 0x0000044E Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_Resample2D_m77FA441FCED7D3C438BC6393FB68C2FECEEE8226 (void);
// 0x0000044F Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer/DepthToSpaceMode)
extern void StatsOps_Unity_Barracuda_IOps_DepthToSpace_m51DC6AE470D9962D1D992B92A6D559F73D9F460A (void);
// 0x00000450 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_SpaceToDepth_m64440C44AD99A38B6CEA589C9C800D99F8D323A0 (void);
// 0x00000451 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_MaxPool2D_m0EF270B3E89D46F84AFCDC3BE9BF501F7B4CE5D6 (void);
// 0x00000452 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_AvgPool2D_m35BDE34301B513AABB103E0DC53959072082DD00 (void);
// 0x00000453 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m7739D6D4C3C4DA1F0BE96551744B1BDDEB0A7C3F (void);
// 0x00000454 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m1A09DE15F583F938C05932C812696AE03F1C03CB (void);
// 0x00000455 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m9C11AB45D60EA691EC7A0E463F3E3AEB44835176 (void);
// 0x00000456 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Border2D_m76BFE13EC9B1D047F24641EA6719A1249A88DCBF (void);
// 0x00000457 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Pad2DReflect_m0F585032C967526234C70CC8E3678DADEDCA76A3 (void);
// 0x00000458 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Pad2DSymmetric_mFA45740E09A5EBA1289521ACC9EFDD513947AA22 (void);
// 0x00000459 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Pad2DEdge_m4AE88E5C516B23BA7A7BF3522DD51190D13069C1 (void);
// 0x0000045A Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_ScaleBias_mB69C66B4B6A8B8AA4DDE20F9D3A25400DC871948 (void);
// 0x0000045B Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Normalization_mDF8E0294624F7769FD85A201F4D0288F2847B812 (void);
// 0x0000045C Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_LRN_m85501BAAD608CD919BEC1C23A6044D048D9D7289 (void);
// 0x0000045D Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Dropout(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Dropout_mF7AC3EFF204313DB5D1451FF2012E46CA75882DD (void);
// 0x0000045E Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_RandomNormal_mC17B426C897CD545E39C9B7898E726BDD71C9400 (void);
// 0x0000045F Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_RandomUniform_mEAB624932CC5D320A880CE7964A67DA8D8B0CD12 (void);
// 0x00000460 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Multinomial_mABB030B2D0457D61695FDB19B85D0DAC44FB505A (void);
// 0x00000461 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_OneHot_mA7CE2B80D1ACD642BC7E73938C67767AB4D3172C (void);
// 0x00000462 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.TopKIndices(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_TopKIndices_mCF8B0219EB7936AAA1D77FE2138E76297CDB774F (void);
// 0x00000463 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::TopKValues(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_TopKValues_m969F8DB757C5334B2E336F4294F9DDC2D5062E44 (void);
// 0x00000464 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::NonZero(Unity.Barracuda.Tensor)
extern void StatsOps_NonZero_mD91EC569F05063B8B4309376455FF7FEF0894E36 (void);
// 0x00000465 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Relu(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Relu_mE54E5B880EDD00483419E047025CD54695414C74 (void);
// 0x00000466 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Softmax_m78145EF68A1CEACE40A7DBAB9AC7207BFDD15410 (void);
// 0x00000467 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogSoftmax(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogSoftmax_m1B1EE7464A4C028052C232D36439DAC66D6908C1 (void);
// 0x00000468 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Tanh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Tanh_m9E8676EC0712BC95B1D9683D7938C0DE55F658B6 (void);
// 0x00000469 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sigmoid(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Sigmoid_m3619FC384891F99F6275C3840BF4C2DF8434246F (void);
// 0x0000046A Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Relu6(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Relu6_mB17F98B70E28AFE4DFBB9815287BA3D8AA2451E0 (void);
// 0x0000046B Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Elu(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Elu_mA62985EA9F49C03232C6568CF4911117899D6E74 (void);
// 0x0000046C Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_LeakyRelu_m0352EEFC540D97DD2B91A82A2CD159357545EA19 (void);
// 0x0000046D Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Selu_mB93CF896D8F8BB545ED33FA79CA2FC91F9251A23 (void);
// 0x0000046E Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_PRelu_m950BC1D90330CFFB2C6DE965BA19FC4A644EE544 (void);
// 0x0000046F Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Swish(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Swish_m05C6CD948F343C6B2796FB6AFCB565B5E35B0A1C (void);
// 0x00000470 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Abs(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Abs_m2D21B044845C0AD444DA08445ECAD9A108E13946 (void);
// 0x00000471 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Neg(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Neg_m571C9CD08795F70C6D0147AB08C129D4E9743E18 (void);
// 0x00000472 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Ceil(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Ceil_m54D7CBD802717DB15183B851091D47FE7E078A3F (void);
// 0x00000473 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Clip_mAAA5E5BB678788B621EB83DC99231337F8CF7A44 (void);
// 0x00000474 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Floor(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Floor_mDE2B5D44FD30DC01B263BF8C158231155CACD2DA (void);
// 0x00000475 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Reciprocal(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Reciprocal_mCA901B88AF7DD98DA72595C0BA8EF3751A00CEB9 (void);
// 0x00000476 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Pow_mBB663E59A8C512C24460FF2408A3EE6E00A8083A (void);
// 0x00000477 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Exp(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Exp_m8DF1CF0FC8EF6645F6834F5DB02386376E96C62A (void);
// 0x00000478 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Log(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Log_m22FC0FC1B22B8EC4337770549A32A0A9F31DBD75 (void);
// 0x00000479 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sqrt(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Sqrt_mE4871B7AC8B8118BB7A88291D2510567E810069D (void);
// 0x0000047A Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Acos(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Acos_m12C766EFCF6489150FB01E5A8C5ADE541A111788 (void);
// 0x0000047B Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Acosh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Acosh_mF99AAD41BF56359E4F75A2ECB16AE459007198AB (void);
// 0x0000047C Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Asin(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Asin_m59BD3A0D52BDAC4D9A279B5CB0912323B3185BD8 (void);
// 0x0000047D Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Asinh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Asinh_mCCCC3760F60CF5353E88A8720E6771273B87B3DE (void);
// 0x0000047E Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Atan(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Atan_mFE856C23C3EC82865A53DE6BCF28B0F8E81C169F (void);
// 0x0000047F Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Atanh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Atanh_m9FBCA059D5FA126A61B550D2392A853A83CCAE4F (void);
// 0x00000480 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Cos(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Cos_m336A910A0BC385CDCD26A70F8D0144E22AE05BBF (void);
// 0x00000481 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Cosh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Cosh_m39EDE5CAEE456CC528027854D9107A496D9EBA77 (void);
// 0x00000482 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sin(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Sin_m54082DDB2CFB11D03C56FF2BBAC394D668581176 (void);
// 0x00000483 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sinh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Sinh_m3806A1B6C46CEE5756E4FBF7516CD57D36F8405A (void);
// 0x00000484 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Tan(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Tan_m33346E21944D1A8223EBF7F64B2A2A239D44820E (void);
// 0x00000485 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Add(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Add_mD041F57BE90C7639B32DF150F40873B7D5B8AD28 (void);
// 0x00000486 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sub(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Sub_mFBDB3E7405CCA43F7B028E130B52B358FCCDEEB9 (void);
// 0x00000487 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Mul(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Mul_m49511CF9FDC1602202CB735A07E73F084AE00DFA (void);
// 0x00000488 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Div(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Div_m68147DF6704AD82F001621B07B35D6D168D048C8 (void);
// 0x00000489 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Pow_mC1196078C7B47AC9680BB97762336AE5D11C5B92 (void);
// 0x0000048A Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Min(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Min_mD1E65B26553E4E79D6C4942F986E5EF9C67166A1 (void);
// 0x0000048B Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Max(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Max_m4401BC9A9F976134EBEA4A4B22250996EB57CD71 (void);
// 0x0000048C Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Mean(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Mean_m424DD02A358D0E2E2390EED53F7C015A8463590B (void);
// 0x0000048D Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ArgMax(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ArgMax_mB4AE35839C76E3B50EE19F3985E6C83F104E2FC9 (void);
// 0x0000048E Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ArgMin(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ArgMin_mB25C7B9B7AC800618AAD1D4C50342B31B97FD76E (void);
// 0x0000048F Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceMax_m6B51AA1F638FBD27006F68BCD4E4C8197557E2EF (void);
// 0x00000490 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceMean_m0E9B9335F88D9CAD56455427DD6AD6E44FA597BE (void);
// 0x00000491 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceMin_m43323EF2841574245A48FFC278A2F029A9D5D7E9 (void);
// 0x00000492 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceProd_m2947CBC21949BC8E4D7B2AB58832C5A3883E2B17 (void);
// 0x00000493 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceSum_m6B34CE0B0AE6C1FECD9FE6F633B5D36DEE34FE47 (void);
// 0x00000494 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Greater_mB5C7FD3183C4FE72CA77F8210F5EAD9B28CC626C (void);
// 0x00000495 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GreaterEqual_m7F6E2FC8FB7111CE826033477C89020630D32754 (void);
// 0x00000496 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Less_mC96F4BB004E4D7CA87DA218D12EE58F0D234B87D (void);
// 0x00000497 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LessEqual_m2995F436852E496C3E1D51190E49CE41A7A2922A (void);
// 0x00000498 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Equal_mD48D5CEACC3946FDA5AFE5114E7419A6AE0A2658 (void);
// 0x00000499 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalOr_mEED76FE248477B4D6F8F93CEEA2E10F6AEEBA871 (void);
// 0x0000049A Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalAnd_m25DDC7BA32B67D64143E811AB023CE9867E38A8A (void);
// 0x0000049B Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalXor_m35CCD9725A8C1749AD930D085B11DA478029DFA2 (void);
// 0x0000049C Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalNot(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalNot_mAFC09015222ED6BB41280E077D65C401B9FBCE6C (void);
// 0x0000049D Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Where_m2D2540B3AC5608E3B75BEAB088FD191BA79ED398 (void);
// 0x0000049E Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Flatten(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Flatten_m7C01E28F6B7B8CA055157B5456185981CB5BA8BC (void);
// 0x0000049F Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void StatsOps_Unity_Barracuda_IOps_Reshape_m108345A389C411666042BDA98739BE0CE795658E (void);
// 0x000004A0 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void StatsOps_Unity_Barracuda_IOps_Expand_m0D43AF862416B9D991318DB6B2FEF8EF8FA0B84A (void);
// 0x000004A1 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Transpose_m17BD831C1FE761B2176516979096E1309251FEEC (void);
// 0x000004A2 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Transpose_mDB41800421C4477EDB1A95868DF5BC7E19380504 (void);
// 0x000004A3 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Gather_m115D968865FD0ED50B64869A35B2B470B6B96F8A (void);
// 0x000004A4 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.NonMaxSuppression(Unity.Barracuda.Tensor[],System.Int32,System.Single,System.Single,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_NonMaxSuppression_mC8509A52B6BC2818F24777816C5E61BBF42585F0 (void);
// 0x000004A5 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Concat_m075F2FE27B82ACA3D74EDEBF6F8372462A3C2793 (void);
// 0x000004A6 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_StridedSlice_mFECA441D86162110720B3688F49134813788D09A (void);
// 0x000004A7 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Tile_m230CA7B56F397226C541C856BF884CD507F9D1B4 (void);
// 0x000004A8 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Shape(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Shape_m9C2E633B166969B8AAFB16D5845B96D28B1186A6 (void);
// 0x000004A9 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Copy(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Copy_mB405E28B8D452484D053A82FA5C31055B7CAF255 (void);
// 0x000004AA Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Prepare(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Prepare_m623D66B0D7EB17F707A24BB4C9E8670AC8A688BE (void);
// 0x000004AB System.Void Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ResetAllocator(System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_ResetAllocator_m5C9D9231B571FA6F2D0DB2F6E81CDF0A9277DD9B (void);
// 0x000004AC System.String Unity.Barracuda.StatsOps::ToString()
extern void StatsOps_ToString_m0F0D6528138F39D98B4C614C390A1125E976E46A (void);
// 0x000004AD System.Void Unity.Barracuda.StatsOps::Elementwise(Unity.Barracuda.Tensor,System.Int64)
extern void StatsOps_Elementwise_m7831154571644B1079DF0173996A9C30C4A16DF5 (void);
// 0x000004AE System.Void Unity.Barracuda.StatsOps::ElementwiseBroadcast(Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor,System.Int64)
extern void StatsOps_ElementwiseBroadcast_m843B1C25365BF29F8A52BE9E9EE3E03DC86CAAD0 (void);
// 0x000004AF System.Void Unity.Barracuda.StatsOps::Reduce(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int64)
extern void StatsOps_Reduce_m1B526270905F6D77CA4383C019250E72993AF67A (void);
// 0x000004B0 System.Void Unity.Barracuda.TensorOperatorNewAllocator::.ctor()
extern void TensorOperatorNewAllocator__ctor_mAE56CBE5C4AF00193DEE0DA0FFF689B7BD4B4F91 (void);
// 0x000004B1 System.Void Unity.Barracuda.TensorOperatorNewAllocator::Finalize()
extern void TensorOperatorNewAllocator_Finalize_m487FCF1D7DE4766A14184A65CB390F6E57D213F5 (void);
// 0x000004B2 Unity.Barracuda.Tensor Unity.Barracuda.TensorOperatorNewAllocator::Alloc(Unity.Barracuda.TensorShape)
extern void TensorOperatorNewAllocator_Alloc_m05CB7AAD1FC577475EDD66A5605B19D1A5D24C28 (void);
// 0x000004B3 Unity.Barracuda.Tensor Unity.Barracuda.TensorOperatorNewAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorOperatorNewAllocator_Alloc_m611468DF7CF11A43BEED190A046ED19A7159CF8E (void);
// 0x000004B4 System.Void Unity.Barracuda.TensorOperatorNewAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void TensorOperatorNewAllocator_Release_m776B645BA01902B512984193A88C5554AEB720C1 (void);
// 0x000004B5 System.Void Unity.Barracuda.TensorOperatorNewAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void TensorOperatorNewAllocator_MoveToDevice_m30AD4B01C93B4036AED6528F47E3B57FFBA50ED8 (void);
// 0x000004B6 System.Void Unity.Barracuda.TensorOperatorNewAllocator::Reset(System.Boolean)
extern void TensorOperatorNewAllocator_Reset_mBD0E75D3F5133349EBE1D0ABB4E345BE81DE92E4 (void);
// 0x000004B7 System.Void Unity.Barracuda.TensorOperatorNewAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
extern void TensorOperatorNewAllocator_WaiveOwnership_mFCF5ACCF2ECDDAD1ED4005C38D0A7F53D81E7E3B (void);
// 0x000004B8 System.Void Unity.Barracuda.TensorOperatorNewAllocator::Dispose()
extern void TensorOperatorNewAllocator_Dispose_mF9E8DF6FA10DC46379F282647621BFF6E9510059 (void);
// 0x000004B9 System.Int64 Unity.Barracuda.TensorOperatorNewAllocator::get_busyBytes()
extern void TensorOperatorNewAllocator_get_busyBytes_m3B1340D6E66133884283A2C5FAFCFDD2D59FFA8F (void);
// 0x000004BA System.Int64 Unity.Barracuda.TensorOperatorNewAllocator::get_freeBytes()
extern void TensorOperatorNewAllocator_get_freeBytes_mF1459220131607D690387D6F2C3DB1C5AB4A8134 (void);
// 0x000004BB System.Int64 Unity.Barracuda.TensorOperatorNewAllocator::get_totalBytes()
extern void TensorOperatorNewAllocator_get_totalBytes_m2EBBFB95292F9C53562CC10D2C6C1592BC509B7E (void);
// 0x000004BC System.String Unity.Barracuda.TensorOperatorNewAllocator::ToString()
extern void TensorOperatorNewAllocator_ToString_m08EDC587CF03566F00A1CB8181F45ED68DD03A8C (void);
// 0x000004BD System.Void Unity.Barracuda.TensorCachingByShapeAllocator::.ctor()
extern void TensorCachingByShapeAllocator__ctor_mE27F5E303947B0A1B5FE4469FDBE88F60994ECFF (void);
// 0x000004BE System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Finalize()
extern void TensorCachingByShapeAllocator_Finalize_m1FAD8D969A5EBC9AC267FC1BAC46A8A1912FED3E (void);
// 0x000004BF System.Void Unity.Barracuda.TensorCachingByShapeAllocator::AddRef(Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_AddRef_m57B351D027ECD148F4AFEE7EBC075C3454AAFB6B (void);
// 0x000004C0 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::DecRef(Unity.Barracuda.ITensorData,System.Action`1<Unity.Barracuda.ITensorData>)
extern void TensorCachingByShapeAllocator_DecRef_m4406F51CC4AC424A1E8DC615BD242707DE760387 (void);
// 0x000004C1 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::AdoptFreeBuffer(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_AdoptFreeBuffer_mDCFF5FE42EE3FA55D977DB3D771301C6929966EC (void);
// 0x000004C2 Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingByShapeAllocator::Alloc(Unity.Barracuda.TensorShape)
extern void TensorCachingByShapeAllocator_Alloc_m0B991F11E5C3B432AF0C41282EADCCC54094F0A7 (void);
// 0x000004C3 Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingByShapeAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_Alloc_m7C9F25A92FB47234E8D3C42C22464ABADE9ED4C7 (void);
// 0x000004C4 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void TensorCachingByShapeAllocator_Release_mF211B6561E434218CE161CCEAE7FD50078E371F8 (void);
// 0x000004C5 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void TensorCachingByShapeAllocator_MoveToDevice_m477465289F6A39F9087E104C83CBEF07EA7F27D4 (void);
// 0x000004C6 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Cast(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_Cast_m94F5708CF2299842B441A40530E555BCF132861A (void);
// 0x000004C7 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Reset(System.Boolean)
extern void TensorCachingByShapeAllocator_Reset_m6B7007531F6F224F2E55815DAC07CF287C45247B (void);
// 0x000004C8 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
extern void TensorCachingByShapeAllocator_WaiveOwnership_mB42F09316A54DCC316A76CDF98BE21CADD3F9B82 (void);
// 0x000004C9 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Dispose()
extern void TensorCachingByShapeAllocator_Dispose_m42F0D8BEB96D22AF5F7F35020ED0433404CCB221 (void);
// 0x000004CA System.Int64 Unity.Barracuda.TensorCachingByShapeAllocator::get_busyBytes()
extern void TensorCachingByShapeAllocator_get_busyBytes_m620EB9D4D52D66B8985E7636FFAB95BBEC5326DF (void);
// 0x000004CB System.Int64 Unity.Barracuda.TensorCachingByShapeAllocator::get_freeBytes()
extern void TensorCachingByShapeAllocator_get_freeBytes_m0A30A8210A6C31799C51BE4746CD18BE513A2EC6 (void);
// 0x000004CC System.Int64 Unity.Barracuda.TensorCachingByShapeAllocator::get_totalBytes()
extern void TensorCachingByShapeAllocator_get_totalBytes_mC96484FEB85DF1D0CE2E0E37F1497B63EFB0AF82 (void);
// 0x000004CD System.String Unity.Barracuda.TensorCachingByShapeAllocator::ToString()
extern void TensorCachingByShapeAllocator_ToString_mDBD1A836B6573F25B6E8FE525242944A23E64952 (void);
// 0x000004CE System.Void Unity.Barracuda.TensorCachingAllocator::.ctor()
extern void TensorCachingAllocator__ctor_mB7AC3254D3B3B3C37A357B914B4F6DFA0977A611 (void);
// 0x000004CF System.Void Unity.Barracuda.TensorCachingAllocator::Finalize()
extern void TensorCachingAllocator_Finalize_mBBD95E33B51CD3090E872952C997733BF4EAE962 (void);
// 0x000004D0 System.Int32 Unity.Barracuda.TensorCachingAllocator::GetAllocationMaxCount(Unity.Barracuda.Tensor)
extern void TensorCachingAllocator_GetAllocationMaxCount_mB7336F541BD951A0E5900BB4AA100092D83E07AE (void);
// 0x000004D1 System.Void Unity.Barracuda.TensorCachingAllocator::AddRef(Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_AddRef_m2A20937971E6461BD7E9F250BC70DC36A0F28EE7 (void);
// 0x000004D2 System.Void Unity.Barracuda.TensorCachingAllocator::DecRef(Unity.Barracuda.ITensorData,System.Action`1<Unity.Barracuda.ITensorData>)
extern void TensorCachingAllocator_DecRef_m9612695FD0AB79BF4BB86962D85E12353EC103F3 (void);
// 0x000004D3 System.Void Unity.Barracuda.TensorCachingAllocator::AdoptFreeBuffer(Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_AdoptFreeBuffer_m562B1052B3BD8229A0CEC85211CE174875586C90 (void);
// 0x000004D4 System.Void Unity.Barracuda.TensorCachingAllocator::DisposeAllocatedBuffer(Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_DisposeAllocatedBuffer_mED4DC2A2C3A4C4FA5729BEF67C859A823970E7AC (void);
// 0x000004D5 Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingAllocator::Alloc(Unity.Barracuda.TensorShape)
extern void TensorCachingAllocator_Alloc_m810153BFC43629BA40EE008B2D7C68846533512E (void);
// 0x000004D6 Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_Alloc_m789CEC6BA038D6F8656EF16F48AAEEFDC46DBB2C (void);
// 0x000004D7 System.Void Unity.Barracuda.TensorCachingAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void TensorCachingAllocator_Release_mE618729F1BCC8D03F3CF111993331ABEA6911B58 (void);
// 0x000004D8 System.Void Unity.Barracuda.TensorCachingAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void TensorCachingAllocator_MoveToDevice_m877C9C0AAC49CA1928EB878A56B9D98E10E867B0 (void);
// 0x000004D9 System.Void Unity.Barracuda.TensorCachingAllocator::Cast(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_Cast_mC023627C98823F79B38346744A9A58288CB99225 (void);
// 0x000004DA System.Void Unity.Barracuda.TensorCachingAllocator::Reset(System.Boolean)
extern void TensorCachingAllocator_Reset_mDB485E97A30418410699F500AECB0854808DC7A8 (void);
// 0x000004DB System.Void Unity.Barracuda.TensorCachingAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
extern void TensorCachingAllocator_WaiveOwnership_m089791DADB6FE4DAD97E1F146DC215EA9229D19B (void);
// 0x000004DC System.Void Unity.Barracuda.TensorCachingAllocator::Dispose()
extern void TensorCachingAllocator_Dispose_m98CC224BD63210CCC85F3817C3CBA2641D979B0B (void);
// 0x000004DD System.Int64 Unity.Barracuda.TensorCachingAllocator::get_busyBytes()
extern void TensorCachingAllocator_get_busyBytes_m7FF0E68879141F696A915A6D27965DFC0625736B (void);
// 0x000004DE System.Int64 Unity.Barracuda.TensorCachingAllocator::get_freeBytes()
extern void TensorCachingAllocator_get_freeBytes_m7BF34424F2ECD60033317208380D208604F3CD31 (void);
// 0x000004DF System.Int64 Unity.Barracuda.TensorCachingAllocator::get_totalBytes()
extern void TensorCachingAllocator_get_totalBytes_mEDABB63FE907C71D225E3B3A4A30215DCE7379AF (void);
// 0x000004E0 System.String Unity.Barracuda.TensorCachingAllocator::ToString()
extern void TensorCachingAllocator_ToString_mD944EA5C5667FBC063061B01E4AB1339BDA3E05A (void);
// 0x000004E1 System.Void Unity.Barracuda.VerboseOps::.ctor(Unity.Barracuda.IOps)
extern void VerboseOps__ctor_m23C897BD870DAD9914ED16D5A929DF9C9EDE4368 (void);
// 0x000004E2 System.Void Unity.Barracuda.VerboseOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void VerboseOps_PrepareModel_m230C28A5F0BA7F442BD503D4EDDC6D0B458DD30B (void);
// 0x000004E3 System.Void Unity.Barracuda.VerboseOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void VerboseOps_PreExecuteLayer_m869ACC58407510CE54515F822B1A552F107623F6 (void);
// 0x000004E4 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_MatMul_mBF8261C20162E566172698A042586D320D10E48F (void);
// 0x000004E5 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Dense_m71ED9F979057C345FA02EECAAD970E0C005056DA (void);
// 0x000004E6 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Conv2D_mD6E1D334F87855A365920C18E32B4A629E47C0BB (void);
// 0x000004E7 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_DepthwiseConv2D_m6D7D2C2DE33DA4CB80045EB4647DE324E6AED0E1 (void);
// 0x000004E8 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Conv2DTrans_mB40048B686662E95631ABA6C1CEA9F72AD7D1827 (void);
// 0x000004E9 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_Upsample2D_m67F80A04FD39F624269964A8A97B1B0AE740E528 (void);
// 0x000004EA Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_Resample2D_mC42CEF5D1EAC8D41B936997B53E9D0F0F092BEF1 (void);
// 0x000004EB Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer/DepthToSpaceMode)
extern void VerboseOps_Unity_Barracuda_IOps_DepthToSpace_m0A758FD52C1D0F11437C3D70E56F6516A4C8705F (void);
// 0x000004EC Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_SpaceToDepth_m7BD57EBCBB34A4181D4B3EB4A2B11BC8C59CAEBF (void);
// 0x000004ED Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_MaxPool2D_mD9C753F71D8D767DF7DF0B42F95EC5107FBF4228 (void);
// 0x000004EE Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_AvgPool2D_m11C7EFEB72C75FDB065F1953018A2C83F23831B1 (void);
// 0x000004EF Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m91B565E82304EC4A0C5C2620C2323E7D55DC2DF9 (void);
// 0x000004F0 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m9A5FCBC8BF5857CC8B9AFFFEF960ABE763612181 (void);
// 0x000004F1 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m5F1294B48B39518FD696C469E5B7652FEFFA1BFF (void);
// 0x000004F2 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Border2D_mCFD82A7FBEAD5894F6D2140AE03BA908051B3540 (void);
// 0x000004F3 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Pad2DReflect_m746CAC0C888BC84071877D2AED57B147B1916DCF (void);
// 0x000004F4 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Pad2DSymmetric_m459CE825D3EF3BD144848F31C077E483FD9EA138 (void);
// 0x000004F5 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Pad2DEdge_m37C3D8658ECF2F23D569F3EC03977550F317AB45 (void);
// 0x000004F6 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_ScaleBias_m41FC38E6C1DF204FDB0567A2BDB276F16129B1F7 (void);
// 0x000004F7 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Normalization_m69957D918EFB214BF452080F4D00C88B0B1797D4 (void);
// 0x000004F8 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_LRN_mCECDE18713DFAEDF044667BFBCCB82F76ECE7B6E (void);
// 0x000004F9 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Dropout(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Dropout_mC1ADFCF3C4728BC6C73AE9C0B4FA39BCD9671B43 (void);
// 0x000004FA Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_RandomNormal_mB9C90348379A06B89CAAEF93F0B77793398F15E9 (void);
// 0x000004FB Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_RandomUniform_mBA1B026C88F1156EE867F179A9BE862274483B8F (void);
// 0x000004FC Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Multinomial_mA6BC71F786057FFEC3289ACED4825B281D251158 (void);
// 0x000004FD Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_OneHot_m4500E248EBF17ABBE88FCA520DBD023B04824BA7 (void);
// 0x000004FE Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.TopKIndices(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_TopKIndices_m75737D80F089B8668257552A28C8BE971F28F871 (void);
// 0x000004FF Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::TopKValues(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_TopKValues_mF5BF36334638E7BCF32917558612DEAF5F30CB5F (void);
// 0x00000500 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::NonZero(Unity.Barracuda.Tensor)
extern void VerboseOps_NonZero_m7A7CF10D1A291441C7127BC8822E99494F77DCC5 (void);
// 0x00000501 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Relu(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Relu_m84E1FE232113F15CBF4774291CF757A66A3D3E62 (void);
// 0x00000502 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Softmax_m7646AD1E3B1010B74ED9AE800CBAB73068EA4510 (void);
// 0x00000503 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogSoftmax(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogSoftmax_m467AE2647C4F253C0EE164E700B6C0D88CC15A76 (void);
// 0x00000504 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Tanh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Tanh_m2B91618AC7A5D018B1253E401B82807744F27B34 (void);
// 0x00000505 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sigmoid(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Sigmoid_m0CC2FB32643CC0644A4723C469B895B08D255245 (void);
// 0x00000506 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Relu6(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Relu6_mEBADF5568A82E14F731B935579C26C1E0125A844 (void);
// 0x00000507 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Elu(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Elu_m9B616EA84835EA49F0CED3334DA5DCB0E044F16C (void);
// 0x00000508 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_LeakyRelu_m6A3637626376D8027DD489856C923BED8E89E969 (void);
// 0x00000509 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Selu_m293A8973B6324E00B2EDB0110C8D3016CD14F91C (void);
// 0x0000050A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_PRelu_m01F20CF1A02CA6FF3C3F58049B4F6F313C5E75E2 (void);
// 0x0000050B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Swish(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Swish_mCA06580C27C2C4E4EA864C66316B0554461F17CB (void);
// 0x0000050C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Abs(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Abs_m6C668E829CCFF82C90484D1D12E114486AD9214C (void);
// 0x0000050D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Neg(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Neg_mAC3DE90D4455FD962344987EF61BC4FB426EC33D (void);
// 0x0000050E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Ceil(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Ceil_m1C232776BC9CAA845C1DE0A2B47C9A6F57E7D4F3 (void);
// 0x0000050F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Clip_mC929E4DAC413C832C4EEA9C0B450080AAA6EFCE0 (void);
// 0x00000510 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Floor(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Floor_m6185290D8C185CB4EB0A7C202256617F366385ED (void);
// 0x00000511 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Reciprocal(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Reciprocal_mEF2B6C652DF867AFCD813A5ABD7F0E5761D67BE5 (void);
// 0x00000512 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Pow_m35D8CB23B3C5810D1CC65C32F0E7AFFF0F2F033B (void);
// 0x00000513 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Exp(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Exp_m86FFFF3007CB0A4C5107A46920FBF119C045E48A (void);
// 0x00000514 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Log(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Log_m0696ADAE062A351BB4244616F6208CA587C2D052 (void);
// 0x00000515 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sqrt(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Sqrt_mC9586A2CCCC87BE424C500D52CDDB20CF376BEF4 (void);
// 0x00000516 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Acos(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Acos_m1DE0DBE1DC94592AFDED617FAD47CF3966815CE2 (void);
// 0x00000517 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Acosh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Acosh_mDAE52F083B7F6386586AF97280642C73D8ECF8DF (void);
// 0x00000518 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Asin(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Asin_m72CA03480011735ACD2869A41D0F4A3FBBB73FA4 (void);
// 0x00000519 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Asinh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Asinh_mCA5BC786A6584A45202264670BBFF4DA0C61A215 (void);
// 0x0000051A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Atan(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Atan_m57F2BE054F10973F6604100895B9527B1D86AA20 (void);
// 0x0000051B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Atanh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Atanh_m68B13C67C1A116C54F428FFED5B2F5BA0118E764 (void);
// 0x0000051C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Cos(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Cos_m305A99CED5F84A3A29B50482F478F58F2C6EF6E4 (void);
// 0x0000051D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Cosh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Cosh_mBF115F062F64B8780E2E77AB0A48386EC011802E (void);
// 0x0000051E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sin(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Sin_m350087EF7FDD52229CA6351D8A4C680CB2FD5B53 (void);
// 0x0000051F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sinh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Sinh_m805B34133D9FDE975605709DCEF0C07530B2F4C6 (void);
// 0x00000520 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Tan(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Tan_m76EE82B5706917CF82B97BE9209B2D898473305C (void);
// 0x00000521 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Add(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Add_mFFA54DE9E287EC645FF33E46EDC52A8F99475E88 (void);
// 0x00000522 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sub(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Sub_m538A488E94A2914A35FC8B31239F985E5A3F3229 (void);
// 0x00000523 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Mul(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Mul_m1759388C58851EC777C31813DE5FA6953FFFB127 (void);
// 0x00000524 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Div(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Div_m5CCCDC1FF5BCC4EDDAF7A8B7D9EE9D500D068003 (void);
// 0x00000525 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Pow_m12D210EBBF451622104E5FBE49A84CA9AD13A8D0 (void);
// 0x00000526 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Min(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Min_m741D6D93397962752F711B3F226D695AD37491D4 (void);
// 0x00000527 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Max(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Max_m10C0DCDA418C16C04B70DEFAAE1B17BABDA877EC (void);
// 0x00000528 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Mean(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Mean_mE4DE47887B7E07ADC10F6D1531D00D6BEE793FD2 (void);
// 0x00000529 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceMax_mB78914D3F927AA189031155721DB0B8B146C6C7A (void);
// 0x0000052A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceMean_mEDB0EF7CB55DF9B3C80501DEFCF9E1A6EE653733 (void);
// 0x0000052B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceMin_mEDFB106E3260481E390A02F820F60CC49FE9776B (void);
// 0x0000052C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceProd_m051ECCB0741BE1E4E1BE75000AB60713C081FB69 (void);
// 0x0000052D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceSum_mFDD7E15416DF7C177D02CEDCF9DA31BD84ABE64B (void);
// 0x0000052E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ArgMax(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ArgMax_m14A3AF0B3940B7D6BDB4D5CB4DE7C01179CC0803 (void);
// 0x0000052F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ArgMin(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ArgMin_m631CCF626A407A91F1A14BCFE7156A3947C4A99C (void);
// 0x00000530 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Greater_m7265CC58D0714F66D7FEB12DAFF56F137B46E9A3 (void);
// 0x00000531 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GreaterEqual_mEECB1871DEB2D04AA265FD048B20D1E37466BEF3 (void);
// 0x00000532 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Less_m0A5E18281C0E87EC1CEFC031798B82240F73BAE1 (void);
// 0x00000533 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LessEqual_m4C21826ECC7CD313540E0942CD1BF6F070A682FD (void);
// 0x00000534 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Equal_m0B53F823B8997017DF03949B1AE5278D21775B49 (void);
// 0x00000535 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalOr_m6D702546468A9C6488DADC986C24DBA2B1654DE8 (void);
// 0x00000536 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalAnd_m521712656F46CDF423D1BF8217225FAB06CC77CD (void);
// 0x00000537 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalXor_m39F88EF7FFAA0CCEED5840439EDE319079F4EE06 (void);
// 0x00000538 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalNot(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalNot_mBDD089261FE4736110F8549E76EE71FF6BEB15E8 (void);
// 0x00000539 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Where_m8E954B0BBF2466EF5176BED386C3BFCFB9D88CDE (void);
// 0x0000053A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Flatten(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Flatten_m298428ED9685885D6D852E20A577BBA21F80BFC7 (void);
// 0x0000053B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void VerboseOps_Unity_Barracuda_IOps_Reshape_m92DC5171C86B0F47AF1209073B50109438E320AE (void);
// 0x0000053C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void VerboseOps_Unity_Barracuda_IOps_Expand_m08A7EB95E30653D9E78DC655612A5F663D9295DB (void);
// 0x0000053D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Transpose_m2BD36D89507E80BAC744D9AD40EE34EAA9585513 (void);
// 0x0000053E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Transpose_mCB53665B80D3A647C4E1ED25D3D8A74D12C95E37 (void);
// 0x0000053F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Gather_m0E20AEC77F5442A221D418AD770C0249EB571FD5 (void);
// 0x00000540 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.NonMaxSuppression(Unity.Barracuda.Tensor[],System.Int32,System.Single,System.Single,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_NonMaxSuppression_m47572422ABDBD8BAA63DDA01BAEBFC3B32B208BA (void);
// 0x00000541 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Concat_m2355EE31DEBB131D0E178ED875D734C821992578 (void);
// 0x00000542 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_StridedSlice_mABEDA5C9BD1C900A2BE748B3FA50DC843869B6D2 (void);
// 0x00000543 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Tile_mB2FC108417D7FEF1E1ACF4C91420EA4602EA2BD6 (void);
// 0x00000544 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Shape(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Shape_m8B86B37A1E43D0A8294117D5C84D0E0059837286 (void);
// 0x00000545 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Copy(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Copy_m7370DF773CA28C7D03926FC00AB3DA3F8FD423B6 (void);
// 0x00000546 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Prepare(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Prepare_mA59ACA3DDB36975E72F502A9C822CF27412955FF (void);
// 0x00000547 System.Void Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ResetAllocator(System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_ResetAllocator_m3A392A1BB5497C4B7F71F69C3EDB574A351AE058 (void);
// 0x00000548 System.Void Unity.Barracuda.DeprecatedTensorExtensions::PinToDeviceAndUploadToIt(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,System.Boolean)
extern void DeprecatedTensorExtensions_PinToDeviceAndUploadToIt_m78721272EDA75D73A87AA5ACD326BA99B500B2ED (void);
// 0x00000549 System.Void Unity.Barracuda.DeprecatedTensorExtensions::PinToDeviceAndDownloadFromIt(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData)
extern void DeprecatedTensorExtensions_PinToDeviceAndDownloadFromIt_m77D14BD28A9030B03548F51CF68183510D3E76C2 (void);
// 0x0000054A Unity.Barracuda.ITensorData Unity.Barracuda.DeprecatedTensorExtensions::Unpin(Unity.Barracuda.Tensor,System.Boolean)
extern void DeprecatedTensorExtensions_Unpin_m1A7ADEFA6A98148C81B9051870A40B1F008B9C27 (void);
// 0x0000054B System.Void Unity.Barracuda.DeprecatedTensorExtensions::CastOnDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData)
extern void DeprecatedTensorExtensions_CastOnDevice_m607EBA0C2EF936C258BFFF5D8B5F1CCD8E41D679 (void);
// 0x0000054C System.Int32 Unity.Barracuda.DeprecatedTensorDataExtensions::GetMaxCount(Unity.Barracuda.ITensorData)
extern void DeprecatedTensorDataExtensions_GetMaxCount_m0B1FB364164F9E1B9FD9EA7B910215C5998A2D8C (void);
// 0x0000054D System.Void Unity.Barracuda.DeprecatedWorkerExtensions::AddInput(Unity.Barracuda.IWorker,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_AddInput_m39DAEC71EF4888EB6E3709A6BA4AFAA0A4BC0811 (void);
// 0x0000054E System.Void Unity.Barracuda.DeprecatedWorkerExtensions::AddInput(Unity.Barracuda.IWorker,System.String,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_AddInput_m70FB5AD204A86A5DC1BD00485813C454B6BB17B7 (void);
// 0x0000054F Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Peek(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_Peek_m79D5287D7C67BE1FCBA4BF019C6F669ADFDB6D6B (void);
// 0x00000550 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Peek(Unity.Barracuda.IWorker,System.String)
extern void DeprecatedWorkerExtensions_Peek_mA1E9E0386675DC7A496AF85B24FF447E2E36F260 (void);
// 0x00000551 System.Collections.IEnumerator Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAsync(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_ExecuteAsync_mB457768210649E0CFF36E78CA9F3D8C11D77D9C9 (void);
// 0x00000552 System.Collections.IEnumerator Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAsync(Unity.Barracuda.IWorker,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_ExecuteAsync_m276C4C066F8584E887E18234F73F5265557BBA12 (void);
// 0x00000553 System.Collections.IEnumerator Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAsync(Unity.Barracuda.IWorker,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void DeprecatedWorkerExtensions_ExecuteAsync_m0043A385AFFB103D02DC5C7B05E91A179B8700DA (void);
// 0x00000554 System.Void Unity.Barracuda.DeprecatedWorkerExtensions::WaitForCompletion(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_WaitForCompletion_m8D759CD7FD4B55885593A9D5D28ECD35CD287A15 (void);
// 0x00000555 System.Single Unity.Barracuda.DeprecatedWorkerExtensions::GetAsyncProgress(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_GetAsyncProgress_mEC970FFF711776B5C833C816420E5E4D146C96F4 (void);
// 0x00000556 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAndWaitForCompletion(Unity.Barracuda.IWorker,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_m2C51DE42F6E7456505F2A36CBDAF63177144C232 (void);
// 0x00000557 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAndWaitForCompletion(Unity.Barracuda.IWorker,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_m0B67BCB9298DF356F43FE6112C1F9B12CB5CB53E (void);
// 0x00000558 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::FetchAndTakeOwnership(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_FetchAndTakeOwnership_m2A531E5D72665F76F1874BFB3CB5E88D232D9D5D (void);
// 0x00000559 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::FetchAndTakeOwnership(Unity.Barracuda.IWorker,System.String)
extern void DeprecatedWorkerExtensions_FetchAndTakeOwnership_mA3AE0140A0876664D0F945B4BD28FA087C9CA264 (void);
// 0x0000055A Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Fetch(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_Fetch_m4518D7DCD8B3833B2D0453ED26F7184AB42CAC56 (void);
// 0x0000055B Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Fetch(Unity.Barracuda.IWorker,System.String)
extern void DeprecatedWorkerExtensions_Fetch_m4B56169B411927C7EAFF146A4B3BB06CCC6F15CE (void);
// 0x0000055C System.Boolean Unity.Barracuda.BarracudaWorkerFactory::IsType(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.BarracudaWorkerFactory/Flags)
extern void BarracudaWorkerFactory_IsType_mBF8CDE51406D7D4DAEFA10ABF4AC2D92CF317BB5 (void);
// 0x0000055D System.Void Unity.Barracuda.BarracudaWorkerFactory::.ctor()
extern void BarracudaWorkerFactory__ctor_m97E5695A1A383D468ABA3B3AB2FC5D4F6A3EBF7F (void);
// 0x0000055E System.Void Unity.Barracuda.BarracudaTextureUtils::TensorToRenderTexture(Unity.Barracuda.Tensor,UnityEngine.RenderTexture,System.Int32,System.Int32,System.Single,System.Single)
extern void BarracudaTextureUtils_TensorToRenderTexture_m101E65EEB89175B12C41F433466897F354AE2832 (void);
// 0x0000055F UnityEngine.RenderTexture Unity.Barracuda.BarracudaTextureUtils::TensorToRenderTexture(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,System.Single)
extern void BarracudaTextureUtils_TensorToRenderTexture_m30A4125199E419186A95D016A995040B7447A8E1 (void);
// 0x00000560 System.Void Unity.Barracuda.BarracudaTextureUtils::.ctor()
extern void BarracudaTextureUtils__ctor_mC653CE3D1454A010D5169F8E14C70EAE5988A510 (void);
// 0x00000561 System.Void Unity.Barracuda.IWorker::PrepareForInput(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
// 0x00000562 System.Void Unity.Barracuda.IWorker::SetInput(Unity.Barracuda.Tensor)
// 0x00000563 System.Void Unity.Barracuda.IWorker::SetInput(System.String,Unity.Barracuda.Tensor)
// 0x00000564 Unity.Barracuda.IWorker Unity.Barracuda.IWorker::Execute()
// 0x00000565 Unity.Barracuda.IWorker Unity.Barracuda.IWorker::Execute(Unity.Barracuda.Tensor)
// 0x00000566 Unity.Barracuda.IWorker Unity.Barracuda.IWorker::Execute(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
// 0x00000567 System.Collections.IEnumerator Unity.Barracuda.IWorker::StartManualSchedule()
// 0x00000568 System.Collections.IEnumerator Unity.Barracuda.IWorker::StartManualSchedule(Unity.Barracuda.Tensor)
// 0x00000569 System.Collections.IEnumerator Unity.Barracuda.IWorker::StartManualSchedule(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
// 0x0000056A System.Void Unity.Barracuda.IWorker::FlushSchedule(System.Boolean)
// 0x0000056B System.Single Unity.Barracuda.IWorker::get_scheduleProgress()
// 0x0000056C Unity.Barracuda.Tensor Unity.Barracuda.IWorker::PeekOutput()
// 0x0000056D Unity.Barracuda.Tensor Unity.Barracuda.IWorker::PeekOutput(System.String)
// 0x0000056E Unity.Barracuda.Tensor[] Unity.Barracuda.IWorker::PeekConstants(System.String)
// 0x0000056F System.String Unity.Barracuda.IWorker::Summary()
// 0x00000570 Unity.Barracuda.Tensor Unity.Barracuda.WorkerExtensions::CopyOutput(Unity.Barracuda.IWorker)
extern void WorkerExtensions_CopyOutput_mDA4EE1BCFA4EB91CB247BD944600785E68F91768 (void);
// 0x00000571 Unity.Barracuda.Tensor Unity.Barracuda.WorkerExtensions::CopyOutput(Unity.Barracuda.IWorker,System.String)
extern void WorkerExtensions_CopyOutput_mC641E3D5F7C260AC105AA7022298C4111FEA7281 (void);
// 0x00000572 System.Void Unity.Barracuda.ITensorData::Reserve(System.Int32)
// 0x00000573 System.Void Unity.Barracuda.ITensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
// 0x00000574 System.Boolean Unity.Barracuda.ITensorData::ScheduleAsyncDownload(System.Int32)
// 0x00000575 System.Single[] Unity.Barracuda.ITensorData::Download(Unity.Barracuda.TensorShape)
// 0x00000576 System.Single[] Unity.Barracuda.ITensorData::SharedAccess(System.Int32&)
// 0x00000577 System.Int32 Unity.Barracuda.ITensorData::get_maxCapacity()
// 0x00000578 Unity.Jobs.JobHandle Unity.Barracuda.IDependableTensorData::get_fence()
// 0x00000579 System.Int32 Unity.Barracuda.RecurrentState::InferBatchSize(System.Int32,System.Int32,System.String)
extern void RecurrentState_InferBatchSize_m4800AB498965A418B55D240C41A2BCCDD64403DA (void);
// 0x0000057A System.Void Unity.Barracuda.RecurrentState::.ctor(Unity.Barracuda.Model,System.Int32,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void RecurrentState__ctor_mE13E115D8821342DDCDCEF862B35670DE3BE1825 (void);
// 0x0000057B System.Void Unity.Barracuda.RecurrentState::Finalize()
extern void RecurrentState_Finalize_mD674F98D708F2AD4453B441A627BE11482B5CF23 (void);
// 0x0000057C System.Void Unity.Barracuda.RecurrentState::Dispose()
extern void RecurrentState_Dispose_m119BAA6CDCCCF7D7E48435FF0BBEE2B28FC2ED77 (void);
// 0x0000057D System.Int32 Unity.Barracuda.RecurrentState::GetBatchSize()
extern void RecurrentState_GetBatchSize_mCEE7CD9006A4D3B3C82BD1CFA399B1799E722775 (void);
// 0x0000057E System.Void Unity.Barracuda.RecurrentState::BeforeExecution(Unity.Barracuda.IWorker)
extern void RecurrentState_BeforeExecution_m692855703485E7AA6979E7075349148828DC4AA2 (void);
// 0x0000057F System.Void Unity.Barracuda.RecurrentState::AfterExecution(Unity.Barracuda.IWorker)
extern void RecurrentState_AfterExecution_mD7517996457ED2F415BFD83B0BFCCF4DC0E06652 (void);
// 0x00000580 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.String[],System.String[],System.Boolean,Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.CompareOpsUtils/LogLevel)
extern void WorkerFactory_CreateWorker_mF3DB62DFA2EE7B92F9FC43AE7660E8B07A1CB2A7 (void);
// 0x00000581 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory/WorkerConfiguration)
extern void WorkerFactory_CreateWorker_mC730C4534FE30FACBF61BF5EAC3C6EB5331CAF55 (void);
// 0x00000582 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void WorkerFactory_CreateWorker_mEFD96330CB1DDB5F998D1311E4B588D8BD3880CB (void);
// 0x00000583 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateWorker_m35690C60B0450AE560A7B3553DC8F0685592F8A2 (void);
// 0x00000584 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.String[],System.Boolean)
extern void WorkerFactory_CreateWorker_mC6FF16879F3DFFF33D2A8D4CEE2486AAE5443491 (void);
// 0x00000585 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.String[],System.String[],System.Boolean)
extern void WorkerFactory_CreateWorker_mFFE48616D2C01B3B5AF373A3F2A76CC9EF571CE9 (void);
// 0x00000586 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.Boolean,Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.CompareOpsUtils/LogLevel)
extern void WorkerFactory_CreateWorker_m79398D0568A27D586649781DBF7B1C04934835E9 (void);
// 0x00000587 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,Unity.Barracuda.WorkerFactory/WorkerConfiguration)
extern void WorkerFactory_CreateWorker_m71D80F629E6593017DF29E6DC70CCE1FC621F290 (void);
// 0x00000588 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateWorker_m10B3A418382219042180DAEB153F130DDBF2134F (void);
// 0x00000589 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void WorkerFactory_CreateWorker_m947195E61AB1075497FFA73922AC01147C5B22F3 (void);
// 0x0000058A Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.String[],Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void WorkerFactory_CreateWorker_m9E30673612D041919380343B61218F7645BEC688 (void);
// 0x0000058B Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateReferenceCPUWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateReferenceCPUWorker_m4763122CF01087CBD801CFD93735473C315AB7E5 (void);
// 0x0000058C Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateReferenceComputeWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateReferenceComputeWorker_mFD638DF376533505F8CC57662A6656FDA6242C7A (void);
// 0x0000058D Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateComputeWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateComputeWorker_mE7DD403EEF192D5F2A74CE9E53A69E1093D6A6F8 (void);
// 0x0000058E System.Boolean Unity.Barracuda.WorkerFactory::IsType(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.WorkerFactory/Device)
extern void WorkerFactory_IsType_mA073C75722AC54806E4B10AF3037411690E05261 (void);
// 0x0000058F Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.WorkerFactory::GetBestTypeForDevice(Unity.Barracuda.WorkerFactory/Device)
extern void WorkerFactory_GetBestTypeForDevice_mED31AA97FC0A79A85B8B69CC1585E54E0B7D896E (void);
// 0x00000590 Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.WorkerFactory::ValidateType(Unity.Barracuda.WorkerFactory/Type)
extern void WorkerFactory_ValidateType_mA9AB88DFB8D12E6F4629D1AD62DD3470429592F4 (void);
// 0x00000591 System.Void Unity.Barracuda.WorkerFactory::.ctor()
extern void WorkerFactory__ctor_mBFCF32F2E357CB4C175FACB41C9D5D9153484461 (void);
// 0x00000592 System.Boolean Unity.Barracuda.WaitForCompletion::get_keepWaiting()
extern void WaitForCompletion_get_keepWaiting_mBF23ECAD845CAB91D8FC8EFAE7F79FE47F7ABF84 (void);
// 0x00000593 System.Void Unity.Barracuda.WaitForCompletion::.ctor(Unity.Barracuda.Tensor)
extern void WaitForCompletion__ctor_m1017DEAC1009E277CFD0FC3B66FFEE61BCDD41E5 (void);
// 0x00000594 Unity.Barracuda.IWorker Unity.Barracuda.ModelExtensions::CreateWorker(Unity.Barracuda.Model,Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void ModelExtensions_CreateWorker_mF0014825B094FF421A3D92D86E925376D2653266 (void);
// 0x00000595 Unity.Barracuda.IWorker Unity.Barracuda.ModelExtensions::CreateWorker(Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void ModelExtensions_CreateWorker_m3BC6025584357E57ED7B56A0FE27F370CB233922 (void);
// 0x00000596 Unity.Barracuda.IWorker Unity.Barracuda.NNModelExtensions::CreateWorker(Unity.Barracuda.NNModel,Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void NNModelExtensions_CreateWorker_mB885DDE1B5200EAC88F9487F34AB5E7C70606F49 (void);
// 0x00000597 Unity.Barracuda.IWorker Unity.Barracuda.NNModelExtensions::CreateWorker(Unity.Barracuda.NNModel,System.String[],System.String[],Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void NNModelExtensions_CreateWorker_m58414D25B9B10565503ADB3B91FD5D81B5A0E1DD (void);
// 0x00000598 System.Void Unity.Barracuda.D::LogWarning(System.Object)
extern void D_LogWarning_m9F2EA37B018ED76F610B0C16531480E5F69DE5E1 (void);
// 0x00000599 System.Void Unity.Barracuda.D::LogWarning(System.Object,UnityEngine.Object)
extern void D_LogWarning_m2D54DC99C8DBE2E1D59B5ACD7ADEFFE439C9E445 (void);
// 0x0000059A System.Void Unity.Barracuda.D::LogError(System.Object)
extern void D_LogError_m29C48C2BBFA4235C1703CF5431AEA741E1CD12FB (void);
// 0x0000059B System.Void Unity.Barracuda.D::LogError(System.Object,UnityEngine.Object)
extern void D_LogError_m031251125070060C6705DE0E3A87FE859BF39AF5 (void);
// 0x0000059C System.Void Unity.Barracuda.D::Log(System.Object)
extern void D_Log_m8BD7A662F7900E84E54A6FB4D3B84E4C2C3D0390 (void);
// 0x0000059D System.Void Unity.Barracuda.D::Log(System.Object,UnityEngine.Object)
extern void D_Log_m74DFCDE67761EE3B891D6B5F546990E0138FE203 (void);
// 0x0000059E System.Void Unity.Barracuda.D::.ctor()
extern void D__ctor_mF1B6948191B46117C0E95D05758A24E68B107B14 (void);
// 0x0000059F System.Void Unity.Barracuda.D::.cctor()
extern void D__cctor_m987A3AE803C9C3D4A8482E1068FA28982F82843A (void);
// 0x000005A0 System.Void Unity.Barracuda.Debug::.ctor()
extern void Debug__ctor_mA36033D25143ED9A6EDAA002B2B9E2DA501F6089 (void);
// 0x000005A1 System.Void Unity.Barracuda.NNModel::.ctor()
extern void NNModel__ctor_m6531996DBDEB256945B6967BA3964BC3296CA08D (void);
// 0x000005A2 System.Void Unity.Barracuda.NNModelData::.ctor()
extern void NNModelData__ctor_m1A0618428CED65B9D76233BEB3D5E727AEF0A870 (void);
// 0x000005A3 System.Boolean Unity.Barracuda.StringStringPair::Equals(Unity.Barracuda.StringStringPair)
extern void StringStringPair_Equals_m7DA8F9205F1A50E519ADC06EADDD5BF9EC53A232 (void);
// 0x000005A4 System.Boolean Unity.Barracuda.StringStringPair::Equals(System.Object)
extern void StringStringPair_Equals_m97CF93669CF94DCEEC14014C47A5395560D86415 (void);
// 0x000005A5 System.Int32 Unity.Barracuda.StringStringPair::GetHashCode()
extern void StringStringPair_GetHashCode_mF36F761AE1C2DF9C388C4DA19674C1F9A8BC4A6E (void);
// 0x000005A6 System.Int32 Unity.Barracuda.StringStringLongTriplet::GetHashCode()
extern void StringStringLongTriplet_GetHashCode_mFFA8FC94E496E653C41A8C8C21C96AD778D28B82 (void);
// 0x000005A7 System.Boolean Unity.Barracuda.StringStringLongTriplet::Equals(Unity.Barracuda.StringStringLongTriplet)
extern void StringStringLongTriplet_Equals_mB804D312895A425AA4C3DD3BCE51165EF174B7CE (void);
// 0x000005A8 System.Boolean Unity.Barracuda.StringStringLongTriplet::Equals(System.Object)
extern void StringStringLongTriplet_Equals_mF77DE64E1E3040423D7018B89C155BC164D0EB0E (void);
// 0x000005A9 System.String Unity.Barracuda.StringCache::Lookup(System.String,System.String)
extern void StringCache_Lookup_mFAAF20AF1BA4EB4D1A3D1223AF8855F606FF97A2 (void);
// 0x000005AA System.String Unity.Barracuda.StringCache::Lookup(System.String,System.String,System.Int64)
extern void StringCache_Lookup_m2B25D7E569358B07E797340C7D99948E83146AFA (void);
// 0x000005AB System.Void Unity.Barracuda.StringCache::Clear()
extern void StringCache_Clear_m11328E0BBC787B5D5B4B85A6CF49D2EAD5EE7DD2 (void);
// 0x000005AC System.Void Unity.Barracuda.StringCache::.ctor()
extern void StringCache__ctor_m52178CA9443C44632413FD6D7E65D380431FD2D7 (void);
// 0x000005AD System.Void Unity.Barracuda.TestSet::.ctor(Unity.Barracuda.RawTestSet)
extern void TestSet__ctor_m97FD2D452E90D57C08A68153C810EA6388E9304E (void);
// 0x000005AE System.Void Unity.Barracuda.TestSet::.ctor(Unity.Barracuda.JSONTestSet)
extern void TestSet__ctor_mEB3C846D70F5DA4E182876ECCC8088350A0D7EB4 (void);
// 0x000005AF System.Void Unity.Barracuda.TestSet::.ctor()
extern void TestSet__ctor_mACFAD170AF5B7A027AB0A7631B754E73C4A56AB4 (void);
// 0x000005B0 System.Boolean Unity.Barracuda.TestSet::SupportsNames()
extern void TestSet_SupportsNames_mEAEBBD639A0D5C1BCB82BF9CB11227C1BAF3916D (void);
// 0x000005B1 System.Int32 Unity.Barracuda.TestSet::GetOutputCount()
extern void TestSet_GetOutputCount_m59FDDD5EF0B6DEFCB814754D780E09F674653B92 (void);
// 0x000005B2 System.Single[] Unity.Barracuda.TestSet::GetOutputData(System.Int32)
extern void TestSet_GetOutputData_mA124D46986B226A327E61A358923410A5E30E773 (void);
// 0x000005B3 System.String Unity.Barracuda.TestSet::GetOutputName(System.Int32)
extern void TestSet_GetOutputName_m86487873E5E246DE0C92BBA82DB8492110F2721C (void);
// 0x000005B4 System.Int32 Unity.Barracuda.TestSet::GetInputCount()
extern void TestSet_GetInputCount_mE3A8F0E48A45DA14F687F02D2B4DE44E31C561B6 (void);
// 0x000005B5 System.String Unity.Barracuda.TestSet::GetInputName(System.Int32)
extern void TestSet_GetInputName_mB3ABBCBB3B42B51AF127C1FB86F59EEAF4EC10FF (void);
// 0x000005B6 System.Single[] Unity.Barracuda.TestSet::GetInputData(System.Int32)
extern void TestSet_GetInputData_mB40575D7C5806A92BF902B98F806349B17D0903F (void);
// 0x000005B7 System.Int32[] Unity.Barracuda.TestSet::GetInputShape(System.Int32)
extern void TestSet_GetInputShape_m81EED5733EFE5703748ECFDE62C34D5350779D1C (void);
// 0x000005B8 System.Int32[] Unity.Barracuda.TestSet::GetOutputShape(System.Int32)
extern void TestSet_GetOutputShape_m1A8E465515F50D11C4D548EA7123EB3B852577B6 (void);
// 0x000005B9 System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor> Unity.Barracuda.TestSet::GetInputsAsTensorDictionary(System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>,System.Int32,System.Int32)
extern void TestSet_GetInputsAsTensorDictionary_m9CC8CA11C6F9BE0A2B85D30F8F264F929F883F80 (void);
// 0x000005BA System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor> Unity.Barracuda.TestSet::GetOutputsAsTensorDictionary(System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>,System.Int32,System.Int32)
extern void TestSet_GetOutputsAsTensorDictionary_m0808CCA1A5693AE00DB79A13B78544F9498DF19C (void);
// 0x000005BB Unity.Barracuda.Tensor Unity.Barracuda.TestSet::GetInputAsTensor(System.Int32,System.Int32,System.Int32)
extern void TestSet_GetInputAsTensor_m15B872C9B96C6D8D5449E349673393721E8F06BE (void);
// 0x000005BC Unity.Barracuda.Tensor Unity.Barracuda.TestSet::GetOutputAsTensor(System.Int32,System.Int32,System.Int32)
extern void TestSet_GetOutputAsTensor_mE7A90272D42441BD7AFA34C8967386BDA0478743 (void);
// 0x000005BD System.Void Unity.Barracuda.RawTestSet::.ctor()
extern void RawTestSet__ctor_m6E7AA2F35379E90D342701725176530812CCB127 (void);
// 0x000005BE System.Void Unity.Barracuda.JSONTestSet::.ctor()
extern void JSONTestSet__ctor_m841884CA4BB1140322AD1AC27F7449C3E63C86EA (void);
// 0x000005BF System.Void Unity.Barracuda.JSONTensorShape::.ctor()
extern void JSONTensorShape__ctor_m4E7385E154EF586C1F05ADE752F1F3D2710B6C68 (void);
// 0x000005C0 System.Void Unity.Barracuda.JSONTensor::.ctor()
extern void JSONTensor__ctor_m681FFF937DB3D0DA1738997EA411FC306CD137F1 (void);
// 0x000005C1 Unity.Barracuda.TestSet Unity.Barracuda.TestSetLoader::Load(System.String)
extern void TestSetLoader_Load_m9C6414C8218D9BB196F57603620786F810144A5A (void);
// 0x000005C2 Unity.Barracuda.TestSet Unity.Barracuda.TestSetLoader::LoadJSON(System.String)
extern void TestSetLoader_LoadJSON_mB7BC8F9F59849F1EC2DDF53859D693318F9AF5CF (void);
// 0x000005C3 Unity.Barracuda.TestSet Unity.Barracuda.TestSetLoader::LoadRaw(System.String)
extern void TestSetLoader_LoadRaw_m82031F4E9989E3F20254B0B4F87B8631EC19DB8E (void);
// 0x000005C4 UnityEngine.Texture Unity.Barracuda.TestSetLoader::LoadImage(System.String)
extern void TestSetLoader_LoadImage_m1B2221FE85A249432E6B42F84D6ADC0A7AEE99DF (void);
// 0x000005C5 System.Single[] Unity.Barracuda.TestSetLoader::LoadFloatArray(System.IO.BinaryReader)
extern void TestSetLoader_LoadFloatArray_m381288B13F71CC8E8917B8DDDA9BA0964B1CEEED (void);
// 0x000005C6 System.IO.BinaryReader Unity.Barracuda.TestSetLoader::Open(System.String)
extern void TestSetLoader_Open_m6CED6B4742EC2388268759DE2E75787FE1AF886F (void);
// 0x000005C7 System.Void Unity.Barracuda.TestSetLoader::.ctor()
extern void TestSetLoader__ctor_mE93F185F8A54CE1EAF66DA2666B73487868320AF (void);
// 0x000005C8 System.Void Unity.Barracuda.Layer::.ctor(System.String)
extern void Layer__ctor_m614E964850585429BBFF5CB37BBF8C44D524FFC6 (void);
// 0x000005C9 System.Void Unity.Barracuda.Layer::.ctor(System.String,Unity.Barracuda.Layer/Type,Unity.Barracuda.Layer/Activation)
extern void Layer__ctor_mC5E4B2F6178176FC89777C18087EA9B71F1A3865 (void);
// 0x000005CA System.Void Unity.Barracuda.Layer::.ctor(System.String,Unity.Barracuda.Layer/Activation)
extern void Layer__ctor_mAB0B5685FB052C34EC235243111A74520F87D2E7 (void);
// 0x000005CB System.String Unity.Barracuda.Layer::ToString()
extern void Layer_ToString_m535BCBB75CD71EB5C2B606717E62293486E54638 (void);
// 0x000005CC Unity.Barracuda.Tensor Unity.Barracuda.Layer::DataSetToTensor(System.Int32)
extern void Layer_DataSetToTensor_m64C6909A29C48DAA35358F212F4EFA181CD15E29 (void);
// 0x000005CD System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning> Unity.Barracuda.Model::get_Warnings()
extern void Model_get_Warnings_m2DC032F3CA0E28A34E4585938118F4DEFACD6F6D (void);
// 0x000005CE Unity.Barracuda.Model Unity.Barracuda.Model::ShallowCopy()
extern void Model_ShallowCopy_m3B9A46F6DB327FEA7477C50CA891E44D5BB1C1AC (void);
// 0x000005CF System.String Unity.Barracuda.Model::ToString()
extern void Model_ToString_m2BBC70715D323501191E6A12445A2B41700905C7 (void);
// 0x000005D0 System.Void Unity.Barracuda.Model::.ctor()
extern void Model__ctor_mAB0AA1DFB45063FC5A4A7CCC46D6C54089708B68 (void);
// 0x000005D1 Unity.Barracuda.Tensor Unity.Barracuda.ModelMetadataExtensions::GetTensorByName(Unity.Barracuda.Model,System.String)
extern void ModelMetadataExtensions_GetTensorByName_mA59A72A52BAF245743AEE553380F5DA1554E7EE4 (void);
// 0x000005D2 System.Nullable`1<Unity.Barracuda.TensorShape> Unity.Barracuda.ModelMetadataExtensions::GetShapeByName(Unity.Barracuda.Model,System.String)
extern void ModelMetadataExtensions_GetShapeByName_mC3A07157F9202BE281DB44EA0335E1754E242BCD (void);
// 0x000005D3 System.Int32 Unity.Barracuda.ModelMetadataExtensions::GetDownStreamLayersCount(Unity.Barracuda.Model,System.String)
extern void ModelMetadataExtensions_GetDownStreamLayersCount_mF8F1A7A99E279B36ACE757B149F818FA7702CA40 (void);
// 0x000005D4 Unity.Barracuda.Model Unity.Barracuda.ModelBuilder::get_model()
extern void ModelBuilder_get_model_m6BB191E538B54B28ECCC07409E6CF9D2B77DA69C (void);
// 0x000005D5 System.Void Unity.Barracuda.ModelBuilder::.ctor(Unity.Barracuda.Model)
extern void ModelBuilder__ctor_m172D2D94CFB57CC54538CFF0566D44700C098409 (void);
// 0x000005D6 Unity.Barracuda.Model/Input Unity.Barracuda.ModelBuilder::Input(System.String,System.Int32[])
extern void ModelBuilder_Input_m25FBDAB7DA50C49BEEBD31E30B796D7E9D2F15FB (void);
// 0x000005D7 Unity.Barracuda.Model/Input Unity.Barracuda.ModelBuilder::Input(System.String,Unity.Barracuda.TensorShape)
extern void ModelBuilder_Input_m745B1C600119DED4D787F3FFA783FAA1DAEDC0D0 (void);
// 0x000005D8 Unity.Barracuda.Model/Input Unity.Barracuda.ModelBuilder::Input(System.String,System.Int32,System.Int32)
extern void ModelBuilder_Input_mC97ADE975D414BB27DFCA33514D45D7B5BA4C3B8 (void);
// 0x000005D9 Unity.Barracuda.Model/Input Unity.Barracuda.ModelBuilder::Input(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ModelBuilder_Input_mE40D11D679187AC4468A01E6B5E3E7CFB4BA4E4B (void);
// 0x000005DA System.String Unity.Barracuda.ModelBuilder::Output(System.Object)
extern void ModelBuilder_Output_mE461EED20B716E8FFCAEB7FBC0138B4C678794E7 (void);
// 0x000005DB Unity.Barracuda.Model/Memory Unity.Barracuda.ModelBuilder::Memory(System.Object,System.Object,Unity.Barracuda.TensorShape)
extern void ModelBuilder_Memory_m6CE678159AA5AD66C66171471EC5C4488F32A5D6 (void);
// 0x000005DC System.String Unity.Barracuda.ModelBuilder::ResolveInput(System.Object)
extern void ModelBuilder_ResolveInput_m7ABCFF45E72D3183E82454798B0C11C6626B6092 (void);
// 0x000005DD Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Const(System.String,Unity.Barracuda.Tensor,System.Int32)
extern void ModelBuilder_Const_m54B440FE0D1CD3508D9C5F0E28BF137B16B74EA4 (void);
// 0x000005DE Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::ScaleBias(System.String,System.Object,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_ScaleBias_m1955144C13DFEAA5CF7386193AC1B0CCFDDF45BF (void);
// 0x000005DF Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LRN(System.String,System.Object,System.Single,System.Single,System.Single,System.Int32)
extern void ModelBuilder_LRN_m7FB15EF213FFB9FB8211CF09616C6201FC097AE8 (void);
// 0x000005E0 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Shape(System.String,System.Object,System.Int32)
extern void ModelBuilder_Shape_mB17E39130E6D193B6B4DDD2717D96D966DDF30D7 (void);
// 0x000005E1 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Normalization(System.String,System.Object,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Single)
extern void ModelBuilder_Normalization_m2910FC2F6354E006CEE585CBD9A0BD7EA93ECB57 (void);
// 0x000005E2 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Dense(System.String,System.Object,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Dense_m3B23156EACF26EA37592E754498AC0706BD59979 (void);
// 0x000005E3 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::MatMul(System.String,System.Object,System.Object)
extern void ModelBuilder_MatMul_m159CAFC30A3E42268B5F7E35FED10FD51ECAEE96 (void);
// 0x000005E4 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Conv(System.String,Unity.Barracuda.Layer/Type,System.Object,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Conv_mD6121DC4E59E726C98700C44AF4BA6B43346E7A1 (void);
// 0x000005E5 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Conv2D(System.String,System.Object,System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Conv2D_m4BDCA014CA68E3A395721B587B318ADF79458723 (void);
// 0x000005E6 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::DepthwiseConv2D(System.String,System.Object,System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_DepthwiseConv2D_m28254A010CB869762AE2939012545E099B0A3EE8 (void);
// 0x000005E7 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Conv2DTrans(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Conv2DTrans_m022A18732C9D73316C59021E181FB59EC6AFC07D (void);
// 0x000005E8 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pool(Unity.Barracuda.Layer/Type,System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_Pool_m0BE31F8131B1E815C6643F1D9F2B2A8F87B16CA7 (void);
// 0x000005E9 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::AvgPool2D(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_AvgPool2D_m637949D48ED7AAD3C4B8DD12BCD5C7FB6093DBD1 (void);
// 0x000005EA Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::MaxPool2D(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_MaxPool2D_m0E68D5F50CFAC15E470732983BB45FA48929B9D2 (void);
// 0x000005EB Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::GlobalAvgPool2D(System.String,System.Object)
extern void ModelBuilder_GlobalAvgPool2D_mFB8D16E9F193693E67197A68032D046DF016A9BC (void);
// 0x000005EC Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::GlobalMaxPool2D(System.String,System.Object)
extern void ModelBuilder_GlobalMaxPool2D_mC06FC8B385959B4E082D6344C7BC20D59DC3A4EE (void);
// 0x000005ED Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Upsample2D(System.String,System.Object,System.Int32[],System.Boolean)
extern void ModelBuilder_Upsample2D_m85A1625C734E1DCA3BF02C099BE0A2A735096A63 (void);
// 0x000005EE Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Upsample2D(System.String,System.Object,System.Object,System.Boolean)
extern void ModelBuilder_Upsample2D_m64D334DCD461DBF6C19E7F999C7E006E00F0055F (void);
// 0x000005EF Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Resample2D(System.String,System.Object,System.Int32[],System.Boolean)
extern void ModelBuilder_Resample2D_m457E10CD5BCD0BBABF6FE5E06967DBFC50C03325 (void);
// 0x000005F0 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::DepthToSpace(System.String,System.Object,System.Int32,System.String)
extern void ModelBuilder_DepthToSpace_m66811E171A6961D475A27BDB7E66FF4323FFC4FB (void);
// 0x000005F1 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::SpaceToDepth(System.String,System.Object,System.Int32)
extern void ModelBuilder_SpaceToDepth_m0BAFED13A439FCB3772EE8962F6EA99BD4560602 (void);
// 0x000005F2 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reshape(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Reshape_mABB131FD4CC33589810EDC0F0D5CCDC6E7C72522 (void);
// 0x000005F3 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reshape(System.String,System.Object,Unity.Barracuda.TensorShape)
extern void ModelBuilder_Reshape_m9AD914E55C45B8B833B2749DFB2F9B316C1745E4 (void);
// 0x000005F4 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reshape(System.String,System.Object,System.Object)
extern void ModelBuilder_Reshape_mD3A1A908BCB50197B53E37A863C1A867A439E2B0 (void);
// 0x000005F5 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Expand(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Expand_m3CA587DD321DA6CA213D93C11E16594D060AA523 (void);
// 0x000005F6 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Flatten(System.String,System.Object)
extern void ModelBuilder_Flatten_m7FB4AC75504A2929E80A0D9A8CE373F46CA780AE (void);
// 0x000005F7 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Concat(System.String,System.Object[],System.Int32,System.Boolean)
extern void ModelBuilder_Concat_mCFF8ADE6AE0D8A049B4B50A9371C2428E478DD1C (void);
// 0x000005F8 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::StridedSlice(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_StridedSlice_m795F3C982A5CB9143DC97FE98796C8CAE9E56F25 (void);
// 0x000005F9 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Tile(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Tile_mC2D772AE99C7FA9CF44CD408C7210EEFC2A83D1B (void);
// 0x000005FA Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Copy(System.String,System.Object)
extern void ModelBuilder_Copy_mAECA913621D7B76824B9A08490593F34BCA2F2F1 (void);
// 0x000005FB Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::OneHot(System.String,System.Object,System.Int32,System.Int32,System.Int32)
extern void ModelBuilder_OneHot_m9494EF95483B223CC868DD4A60E9408064E2CC65 (void);
// 0x000005FC Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::TopKIndices(System.String,System.Object,System.Object,System.Int32,System.Boolean,System.Boolean)
extern void ModelBuilder_TopKIndices_mBA894AD5BCD97868E3E1C9B1D175D3E093CE8AC2 (void);
// 0x000005FD Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::TopKValues(System.String,System.Object,System.Object,System.Int32)
extern void ModelBuilder_TopKValues_m03FCF615BA206E3AD351DC9FA2BB16F9978A66EF (void);
// 0x000005FE Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::NonZero(System.String,System.Object)
extern void ModelBuilder_NonZero_mDF98D49A20B0CDD82C55FF176B89FE640038A7FD (void);
// 0x000005FF Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Transpose(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Transpose_m124FB250DF2FB6CF01403D038F85E60933227BEF (void);
// 0x00000600 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Activation(Unity.Barracuda.Layer/Activation,System.String,System.Object)
extern void ModelBuilder_Activation_m0753E5FC0595579A0BC8138952751E0FDFDC5BC6 (void);
// 0x00000601 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Identity(System.String,System.Object)
extern void ModelBuilder_Identity_m7654E042E529222A278BDB5574C1B7B9BCBCEF1E (void);
// 0x00000602 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Relu(System.String,System.Object)
extern void ModelBuilder_Relu_mD875806A4284978D757F0C88F6020941383A25C9 (void);
// 0x00000603 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Softmax(System.String,System.Object,System.Int32,System.Boolean)
extern void ModelBuilder_Softmax_m9C8CAC70EF6B7DB3F459201F33CC0AF5DAFD3DB9 (void);
// 0x00000604 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogSoftmax(System.String,System.Object)
extern void ModelBuilder_LogSoftmax_m8B372C548883D6E4002BBB3665727101AEEEFB66 (void);
// 0x00000605 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sqrt(System.String,System.Object)
extern void ModelBuilder_Sqrt_m922C71855467B663008401AF19F9F02942A514A8 (void);
// 0x00000606 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Tanh(System.String,System.Object)
extern void ModelBuilder_Tanh_mB33C742ECAE547AC6A9DD8AB281A757BE5E89A6E (void);
// 0x00000607 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sigmoid(System.String,System.Object)
extern void ModelBuilder_Sigmoid_m039414B9D41AB7BA5CE20CB71174A2546664A814 (void);
// 0x00000608 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Elu(System.String,System.Object,System.Single)
extern void ModelBuilder_Elu_mB483750140C2D5DBF1F82FB439E69764AE1873F0 (void);
// 0x00000609 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Relu6(System.String,System.Object)
extern void ModelBuilder_Relu6_m0F36ED6B16CD78479F97692641CEF832F0F3724A (void);
// 0x0000060A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LeakyRelu(System.String,System.Object,System.Single)
extern void ModelBuilder_LeakyRelu_mA7F5BE84412C2A37FDD7E7264395B8A31F2F097B (void);
// 0x0000060B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Selu(System.String,System.Object,System.Single,System.Single)
extern void ModelBuilder_Selu_mFCF31E9929C92EE26F3A3D4C7818E6ACF0DB7BA1 (void);
// 0x0000060C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::PRelu(System.String,System.Object,System.Object)
extern void ModelBuilder_PRelu_m33A9F15D3ED23910370644AD071182304B56080C (void);
// 0x0000060D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Swish(System.String,System.Object)
extern void ModelBuilder_Swish_mB75BA94C9442A35AFE35A0F460A2F7AA5F981E35 (void);
// 0x0000060E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Clip(System.String,System.Object,System.Single,System.Single)
extern void ModelBuilder_Clip_mABA6F9B2C792F4BC4E8BC38C55309189A57A5BC9 (void);
// 0x0000060F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Exp(System.String,System.Object)
extern void ModelBuilder_Exp_m400C497A3E2568DD396912B91C911CD0D2DAD214 (void);
// 0x00000610 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Log(System.String,System.Object)
extern void ModelBuilder_Log_m3FA1F67E3999930CD4792F62A2D07983607067B1 (void);
// 0x00000611 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Neg(System.String,System.Object)
extern void ModelBuilder_Neg_mF6BC01E21393919AFAE703AB0F339C1EAC3D6E4F (void);
// 0x00000612 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reciprocal(System.String,System.Object)
extern void ModelBuilder_Reciprocal_m43FE908BC892839709AF25B015AD337D7302B489 (void);
// 0x00000613 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Abs(System.String,System.Object)
extern void ModelBuilder_Abs_mA6D13018C424511D48156E79BE341B2FCDFDC003 (void);
// 0x00000614 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Ceil(System.String,System.Object)
extern void ModelBuilder_Ceil_m243FA5F7CDAD40238BFDFD566E802753C1C257AA (void);
// 0x00000615 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Floor(System.String,System.Object)
extern void ModelBuilder_Floor_mAF4CEC22813ABF88BF697A2F321168C54A7EE0FA (void);
// 0x00000616 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Round(System.String,System.Object)
extern void ModelBuilder_Round_m209A20A637CE8F87153F65EB1D44246C105995A8 (void);
// 0x00000617 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Acos(System.String,System.Object)
extern void ModelBuilder_Acos_m20F78315A834B937CAD38D6047DCEF53A8D92A8C (void);
// 0x00000618 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Acosh(System.String,System.Object)
extern void ModelBuilder_Acosh_m238F9CCA72B222971017A3235BC636508BBB957C (void);
// 0x00000619 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Asin(System.String,System.Object)
extern void ModelBuilder_Asin_m0E1CD5F966DFD3E2988A7BBCF01240CA33A7FD26 (void);
// 0x0000061A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Asinh(System.String,System.Object)
extern void ModelBuilder_Asinh_m4AB95E7D4A078F46D439B529E3E9DEC781491FBB (void);
// 0x0000061B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Atan(System.String,System.Object)
extern void ModelBuilder_Atan_m993406B5CFFC1707588758FF99E03389E1690D86 (void);
// 0x0000061C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Atanh(System.String,System.Object)
extern void ModelBuilder_Atanh_m66D260FCA6CD0805A379A906473FB14F03FFAE6E (void);
// 0x0000061D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Cos(System.String,System.Object)
extern void ModelBuilder_Cos_m491AF8585348EBEAF1AFC6B6E86F7357202A0B14 (void);
// 0x0000061E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Cosh(System.String,System.Object)
extern void ModelBuilder_Cosh_mAB9A83CC2B7E8E1ECD0C073B1151F741BBA55FB7 (void);
// 0x0000061F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sin(System.String,System.Object)
extern void ModelBuilder_Sin_m1F7076BA4C749B8846A2419ADF9961292784C47A (void);
// 0x00000620 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sinh(System.String,System.Object)
extern void ModelBuilder_Sinh_mF662293E10569B1996163570CB3E989F7B62DFD6 (void);
// 0x00000621 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Tan(System.String,System.Object)
extern void ModelBuilder_Tan_m442E6E941726C8D8CCE38D1985212D33FDE79B79 (void);
// 0x00000622 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Broadcast(Unity.Barracuda.Layer/Type,System.String,System.Object[])
extern void ModelBuilder_Broadcast_m68D19A7EF8B1FF3A245B674D027EA81FA4FD6F30 (void);
// 0x00000623 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Add(System.String,System.Object[])
extern void ModelBuilder_Add_mDC0D0E73AB47B6B23DD65F7E17A2B14BC9FE55F8 (void);
// 0x00000624 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sub(System.String,System.Object[])
extern void ModelBuilder_Sub_m88A7A63EC63307A71B6B226427C81B5CC355FFCE (void);
// 0x00000625 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Mul(System.String,System.Object[])
extern void ModelBuilder_Mul_m427298513DD923BD5EA426F8F69C8F733707B5B3 (void);
// 0x00000626 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Div(System.String,System.Object[])
extern void ModelBuilder_Div_m6DA41473C43D7C2AF5EA67D88868BCFB9D53C124 (void);
// 0x00000627 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pow(System.String,System.Object[])
extern void ModelBuilder_Pow_m0F690210243F248586195574F0991C043C2384D4 (void);
// 0x00000628 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Min(System.String,System.Object[])
extern void ModelBuilder_Min_m4657DE5B8C43CBDCF2E1E5D70AACFA9591854106 (void);
// 0x00000629 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Max(System.String,System.Object[])
extern void ModelBuilder_Max_m98C59915C521C6AF5C0B46B9D64A2B544B1EE7C8 (void);
// 0x0000062A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Mean(System.String,System.Object[])
extern void ModelBuilder_Mean_mEED820DDCCB315A6ADF9EA40BE9B6AE7A2A24ACF (void);
// 0x0000062B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Greater(System.String,System.Object,System.Object)
extern void ModelBuilder_Greater_mFCC8E999D527A7AAD168A73A6493A05D472C5A40 (void);
// 0x0000062C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::GreaterEqual(System.String,System.Object,System.Object)
extern void ModelBuilder_GreaterEqual_mDB247C9B9C217AF877BAE4D8A6FF3CD6737585C4 (void);
// 0x0000062D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Less(System.String,System.Object,System.Object)
extern void ModelBuilder_Less_m077919589DC47EC96C7B613FA57617974694A4B4 (void);
// 0x0000062E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LessEqual(System.String,System.Object,System.Object)
extern void ModelBuilder_LessEqual_m8AE000E11DAF81C547B2BB7E9FD9906F73313474 (void);
// 0x0000062F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Equal(System.String,System.Object,System.Object)
extern void ModelBuilder_Equal_m919A768FED253D28328D9FC1425EE64593168EAE (void);
// 0x00000630 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalAnd(System.String,System.Object,System.Object)
extern void ModelBuilder_LogicalAnd_mD74D6A93F8A0BD4F984260AD5DAD98409A0BE3BF (void);
// 0x00000631 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalOr(System.String,System.Object,System.Object)
extern void ModelBuilder_LogicalOr_m868EFE66BB8662B72F0F6DDE81CB3549FDF8B5C4 (void);
// 0x00000632 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalXor(System.String,System.Object,System.Object)
extern void ModelBuilder_LogicalXor_m7F30F5348B4830FB4C0CEBB14A27268975870DFE (void);
// 0x00000633 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalNot(System.String,System.Object)
extern void ModelBuilder_LogicalNot_m881A259EEB9181CC8DFAD92E17C30709393765BD (void);
// 0x00000634 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Where(System.String,System.Object,System.Object,System.Object)
extern void ModelBuilder_Where_m1A68C43F56A2E01D23338C8AC6531E0200D43D58 (void);
// 0x00000635 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad(Unity.Barracuda.Layer/Type,System.String,System.Object,System.Int32[],System.Single)
extern void ModelBuilder_Pad_mC96AC703E988854391C39A4D37E037166DBB4586 (void);
// 0x00000636 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Border2D(System.String,System.Object,System.Int32[],System.Single)
extern void ModelBuilder_Border2D_mB4E2E5843F85909EF5963031CC6753220D202EEA (void);
// 0x00000637 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad2DEdge(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Pad2DEdge_m74C417D4DE974F3649C44EF263B411D3AEDFBCD7 (void);
// 0x00000638 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad2DReflect(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Pad2DReflect_m3B17E1941B7903D6FA32CF6861485C9B69432F48 (void);
// 0x00000639 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad2Symmetric(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Pad2Symmetric_mBAFAB641D7EF55897468A445796FEB48734680E3 (void);
// 0x0000063A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomNormal(System.String,System.Object,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomNormal_mDE49A3C88B73312D5E7EF7A25C3B74AACB39DEEE (void);
// 0x0000063B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomNormal(System.String,Unity.Barracuda.TensorShape,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomNormal_mB1A55267581E1081899AB18E728CA79D11707ECA (void);
// 0x0000063C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomUniform(System.String,System.Object,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomUniform_mC0EC994ACA539E31FEFE7CA19C07EFBDE95AAF69 (void);
// 0x0000063D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomUniform(System.String,Unity.Barracuda.TensorShape,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomUniform_m57AE05D71FD2BD9CE027405345693B825D9ADE54 (void);
// 0x0000063E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Multinomial(System.String,System.Object,System.Int32,System.Single)
extern void ModelBuilder_Multinomial_m13823765CF7053B3AA1AD2A11688E3511A380BC6 (void);
// 0x0000063F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reduce(Unity.Barracuda.Layer/Type,System.String,System.Object,System.Int32,System.Boolean)
extern void ModelBuilder_Reduce_m4731AAC54B7265063F0A3C366EE86632DF4F328F (void);
// 0x00000640 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Gather(System.String,System.Object,System.Object,System.Int32,System.Boolean)
extern void ModelBuilder_Gather_m593B65922B7826152ACF5CD8F22E3DC2CAE162B4 (void);
// 0x00000641 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::NonMaxSuppression(System.String,System.Object,System.Object,System.Object,System.Object,System.Object,System.Int32)
extern void ModelBuilder_NonMaxSuppression_m0A011C3B7E051805E6A21FFDECF07EE0A97EEDAD (void);
// 0x00000642 System.String Unity.Barracuda.ModelBuilder::<MatMul>b__17_0(System.Object)
extern void ModelBuilder_U3CMatMulU3Eb__17_0_m236BDB4C3B5883E5028AD13F3241A476E6B427DF (void);
// 0x00000643 System.String Unity.Barracuda.ModelBuilder::<Concat>b__37_0(System.Object)
extern void ModelBuilder_U3CConcatU3Eb__37_0_m32F098EBE1237431E876C224D9FA665E2524A174 (void);
// 0x00000644 System.String Unity.Barracuda.ModelBuilder::<PRelu>b__58_0(System.Object)
extern void ModelBuilder_U3CPReluU3Eb__58_0_m807A962E81F649D02BA2DCE83EFE2C13CB8A9791 (void);
// 0x00000645 System.String Unity.Barracuda.ModelBuilder::<Broadcast>b__80_0(System.Object)
extern void ModelBuilder_U3CBroadcastU3Eb__80_0_mA2CF90E1DDE78277973DE2DEFE37E5CFA296A566 (void);
// 0x00000646 System.String Unity.Barracuda.ModelBuilder::<Gather>b__110_0(System.Object)
extern void ModelBuilder_U3CGatherU3Eb__110_0_mFEEBD36BE36031FF19BE9FBC26D51AF03F74CA8E (void);
// 0x00000647 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(Unity.Barracuda.NNModel,System.Boolean,System.Boolean)
extern void ModelLoader_Load_mA0B37DE0AE059570A337C18769EEBF8EDDD56FD1 (void);
// 0x00000648 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::LoadFromStreamingAssets(System.String,System.Boolean,System.Boolean)
extern void ModelLoader_LoadFromStreamingAssets_m5889CA5381D7CB86D2D477C97DCDDCF0CCEE644E (void);
// 0x00000649 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.String,System.Boolean,System.Boolean)
extern void ModelLoader_Load_m419FA5238376E0E9F1E2E0A940598464414284AC (void);
// 0x0000064A Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.Byte[],System.Boolean,System.Boolean)
extern void ModelLoader_Load_m5F6440AF1B89A9B7F77329AB00983EA9C99D358C (void);
// 0x0000064B Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.Byte[],System.Boolean,System.Boolean,System.Boolean)
extern void ModelLoader_Load_m6F7E273BDB27D4EE8844596B2A92CF95A64A92F7 (void);
// 0x0000064C System.Int32 Unity.Barracuda.ModelLoader::ConvertLayerAxisFor8DShapeSupportIfNeeded(System.Int32,System.Int64,Unity.Barracuda.Layer/Type)
extern void ModelLoader_ConvertLayerAxisFor8DShapeSupportIfNeeded_m80A3348F1C568A8920A73C242305ACAE65A1E193 (void);
// 0x0000064D Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.IO.BinaryReader,System.Boolean,System.Boolean,System.Boolean)
extern void ModelLoader_Load_mF7568FDC47B08F1FB084CA679702F8AA3F454C72 (void);
// 0x0000064E System.Void Unity.Barracuda.ModelLoader::PatchLayer(System.Collections.Generic.List`1<Unity.Barracuda.Layer>,Unity.Barracuda.Layer)
extern void ModelLoader_PatchLayer_m43ECCED5139EA8A6CE99CB7AB7AC1C76772B344B (void);
// 0x0000064F System.Void Unity.Barracuda.ModelLoader::SkipLargeFloatArray(System.IO.BinaryReader,System.Int64)
extern void ModelLoader_SkipLargeFloatArray_m9A343C8B92F11DC971AE60CEA4879EC315436E25 (void);
// 0x00000650 System.Single[] Unity.Barracuda.ModelLoader::ReadLargeFloatArray(System.IO.BinaryReader,System.Int64)
extern void ModelLoader_ReadLargeFloatArray_mE9D4067663499A763E65E26A5FEEA901C4006303 (void);
// 0x00000651 System.Int32[] Unity.Barracuda.ModelLoader::ReadInt32Array(System.IO.BinaryReader)
extern void ModelLoader_ReadInt32Array_mCD1A49E9ECE261DA7E00615555B927D54898F352 (void);
// 0x00000652 System.String Unity.Barracuda.ModelLoader::ReadString(System.IO.BinaryReader)
extern void ModelLoader_ReadString_mBD6348A433F287C28DC823F710C6E5508D75EC4E (void);
// 0x00000653 System.String[] Unity.Barracuda.ModelLoader::ReadStringArray(System.IO.BinaryReader)
extern void ModelLoader_ReadStringArray_mED767C3EBC7161C448314061A133B296540CEFED (void);
// 0x00000654 System.IO.BinaryReader Unity.Barracuda.ModelLoader::Open(System.String)
extern void ModelLoader_Open_mA20D6368B66E6D396A5641577A708924FFA73926 (void);
// 0x00000655 System.IO.BinaryReader Unity.Barracuda.ModelLoader::Open(System.Byte[])
extern void ModelLoader_Open_m8B6D465E4D90B7C8C09655267DF43FC08F78C266 (void);
// 0x00000656 System.Void Unity.Barracuda.ModelWriter::Save(System.String,Unity.Barracuda.Model,System.Boolean)
extern void ModelWriter_Save_m8E4125667D645D5A57766A6131878032B27A26B3 (void);
// 0x00000657 System.Void Unity.Barracuda.ModelWriter::Save(System.IO.BinaryWriter,Unity.Barracuda.Model,System.Boolean)
extern void ModelWriter_Save_mD9E121ECD1E0EAD9BC7B3A272882BB8AF4984DE7 (void);
// 0x00000658 System.Void Unity.Barracuda.ModelWriter::WriteInt32Array(System.IO.BinaryWriter,System.Int32[])
extern void ModelWriter_WriteInt32Array_m952DB86EBF9859AE571319E8B0194C987263AC38 (void);
// 0x00000659 System.Void Unity.Barracuda.ModelWriter::WriteString(System.IO.BinaryWriter,System.String)
extern void ModelWriter_WriteString_m1ECC9CDC5E10D1A2A4675266840A4B563F4B986A (void);
// 0x0000065A System.Void Unity.Barracuda.ModelWriter::WriteStringArray(System.IO.BinaryWriter,System.String[])
extern void ModelWriter_WriteStringArray_m5DA0E98CEB453935A6944FEFAF6A72E4EBE243BA (void);
// 0x0000065B System.Void Unity.Barracuda.ModelWriter::WriteStringArray(System.IO.BinaryWriter,System.Collections.Generic.List`1<System.String>)
extern void ModelWriter_WriteStringArray_mD6A2EEF69F88A825CEBA424A16551E44BD0C3415 (void);
// 0x0000065C System.Void Unity.Barracuda.ModelWriter::.ctor()
extern void ModelWriter__ctor_m224FD97E5D87530BC399495F63F54BD968CC6367 (void);
// 0x0000065D System.Boolean Unity.Barracuda.BLASPlugin::IsNative()
// 0x0000065E System.Boolean Unity.Barracuda.BLASPlugin::IsCurrentPlatformSupported()
// 0x0000065F System.Void Unity.Barracuda.BLASPlugin::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
// 0x00000660 Unity.Jobs.JobHandle Unity.Barracuda.BLASPlugin::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
// 0x00000661 Unity.Barracuda.BLASPlugin Unity.Barracuda.BLASPluginFactory::CreateBLASPlugin()
extern void BLASPluginFactory_CreateBLASPlugin_m1EE904E669146C93438E41C298CF50F4B5D6D7DE (void);
// 0x00000662 System.Void Unity.Barracuda.BLASPluginFactory::.ctor()
extern void BLASPluginFactory__ctor_m9EC8AA1157A3A107CCEE2F204F42ED309B68CD11 (void);
// 0x00000663 System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape__ctor_m3BC1FADB0422E2F288BC57E0986F84CC116A68CF (void);
// 0x00000664 System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape__ctor_m276E04664C4EBCC2B74152C62B2F1BB7B5741715 (void);
// 0x00000665 System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape__ctor_mE0B0A01539F0810B3B76C7B8FAF011A7F3366C0C (void);
// 0x00000666 System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32,System.Int32)
extern void TensorShape__ctor_mEDA3BE8A9C9C8A3DF9B57C5F606CF15E13D9A0BA (void);
// 0x00000667 System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32[])
extern void TensorShape__ctor_m2C2A6C6637B7D6C3E3273A288BC65C96C8F5BED7 (void);
// 0x00000668 System.Int32 Unity.Barracuda.TensorShape::get_kernelSpatialDepth()
extern void TensorShape_get_kernelSpatialDepth_m1AD4B73B2BDCE2BE75B2B74955DAB7B8978AC31A (void);
// 0x00000669 System.Int32 Unity.Barracuda.TensorShape::get_kernelHeight()
extern void TensorShape_get_kernelHeight_m8FEA6D90C78E10C90263AAD2811F39B932C110FD (void);
// 0x0000066A System.Int32 Unity.Barracuda.TensorShape::get_kernelWidth()
extern void TensorShape_get_kernelWidth_mD5E24EB5EBC2EA98D63E5C0F399214ECF527351D (void);
// 0x0000066B System.Int32 Unity.Barracuda.TensorShape::get_kernelDepth()
extern void TensorShape_get_kernelDepth_m3F108CAE154F28F2DEC79F8AD45017DB69D721B1 (void);
// 0x0000066C System.Int32 Unity.Barracuda.TensorShape::get_kernelCount()
extern void TensorShape_get_kernelCount_m0D8CC69DF7F8E02FA3ED0C6F8147724A230448D9 (void);
// 0x0000066D System.Int32 Unity.Barracuda.TensorShape::get_flatHeight()
extern void TensorShape_get_flatHeight_m22BC47B73FD0DE60CED750BA3B66228BF5ABD436 (void);
// 0x0000066E System.Int32 Unity.Barracuda.TensorShape::get_flatWidth()
extern void TensorShape_get_flatWidth_m4A3EBEAB7298EC534EFB8D587D132522B2A196C5 (void);
// 0x0000066F System.Int32 Unity.Barracuda.TensorShape::get_length()
extern void TensorShape_get_length_mE0387DEB5A86F017114EB542A8320DCD03D4E01F (void);
// 0x00000670 System.Int32 Unity.Barracuda.TensorShape::get_rank()
extern void TensorShape_get_rank_m9CB191221D391C6F6964BB36CA3ACB6DC3AE6681 (void);
// 0x00000671 System.Int32 Unity.Barracuda.TensorShape::get_dimensions()
extern void TensorShape_get_dimensions_m520933925370ECC630A68FEA74A6067A74EFCDF2 (void);
// 0x00000672 System.Int32 Unity.Barracuda.TensorShape::Axis(System.Int32)
extern void TensorShape_Axis_m90F1B94BAFEC7F41CACD1B373527E83507912F73 (void);
// 0x00000673 System.Void Unity.Barracuda.TensorShape::GetPositionsFromIndex(System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern void TensorShape_GetPositionsFromIndex_m9C70427FA1E9A5833135C3654264D13364ED56DD (void);
// 0x00000674 System.Void Unity.Barracuda.TensorShape::GetPositionsFromIndex(System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern void TensorShape_GetPositionsFromIndex_m4ADBB2B058ABD7B05C22A37E9AD03F02A3974DA0 (void);
// 0x00000675 System.Void Unity.Barracuda.TensorShape::GetPositionsFromIndexChannelFirst(System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern void TensorShape_GetPositionsFromIndexChannelFirst_mCDB861B23F9B5A23B2D15B17A945C8D890E6D0E0 (void);
// 0x00000676 System.Void Unity.Barracuda.TensorShape::GetPositionsFromIndexChannelFirst(System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern void TensorShape_GetPositionsFromIndexChannelFirst_m1965ACCF88C23F6F2552B874731F9EDECBEC0716 (void);
// 0x00000677 System.Int32 Unity.Barracuda.TensorShape::IndexWithBroadcast(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexWithBroadcast_m449129D5D5804D3534275EF54A0D2061415D122A (void);
// 0x00000678 System.Int32 Unity.Barracuda.TensorShape::IndexWithBroadcast(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexWithBroadcast_m9C812E0998746F76D50827B2D490708DB2F2354A (void);
// 0x00000679 System.Int32 Unity.Barracuda.TensorShape::IndexWithClamp(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexWithClamp_m6BE22BA784FC8A2C48F3EBFF9CB67C89E118C14D (void);
// 0x0000067A System.Int32 Unity.Barracuda.TensorShape::IndexWithClamp(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexWithClamp_mD4D60ACBCEC30D1B02CF9A145DD90C5678D245D8 (void);
// 0x0000067B System.Int32 Unity.Barracuda.TensorShape::Index(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_Index_m0D825F8B9E869E70261C9A830102FEC7D2EEF90F (void);
// 0x0000067C System.Int32 Unity.Barracuda.TensorShape::Index(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_Index_m8C05F20BAE38D9AD7CAB47D747A2BF568A02515F (void);
// 0x0000067D System.Int32 Unity.Barracuda.TensorShape::IndexChannelFirst(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexChannelFirst_mEF4444DBB9F3E1CF5E47B3B5E9404BC1CB553347 (void);
// 0x0000067E System.Int32 Unity.Barracuda.TensorShape::IndexChannelFirst(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexChannelFirst_mBA41A819ADA6B2506C24AE35BDD52EE3E0B8EB09 (void);
// 0x0000067F System.Int32 Unity.Barracuda.TensorShape::Index(System.Int32,System.Int32)
extern void TensorShape_Index_m63AC95D02D5F91992922F367C2A8AA6293B8E577 (void);
// 0x00000680 System.Int32 Unity.Barracuda.TensorShape::get_Item(System.Int32)
extern void TensorShape_get_Item_m4F040918ED634C91FF7C47CB7E6765382AA4E165 (void);
// 0x00000681 System.Void Unity.Barracuda.TensorShape::set_Item(System.Int32,System.Int32)
extern void TensorShape_set_Item_m34B0A369910C1AD80D88B0E3A696E2F77403C9F0 (void);
// 0x00000682 System.Int32[] Unity.Barracuda.TensorShape::ToArray()
extern void TensorShape_ToArray_m67854F029B584A4B18A7C18BF292D50826645F0E (void);
// 0x00000683 Unity.Barracuda.TensorShape Unity.Barracuda.TensorShape::Squeeze()
extern void TensorShape_Squeeze_mACAC9A6C9904C95B6FBC3ECC2E70F60670D124E4 (void);
// 0x00000684 Unity.Barracuda.TensorShape Unity.Barracuda.TensorShape::Flatten()
extern void TensorShape_Flatten_m83462AE079448FD0B0F8BB498CCE762122028F9D (void);
// 0x00000685 System.Boolean Unity.Barracuda.TensorShape::op_Equality(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void TensorShape_op_Equality_mE3C9440585BBF08084DB023FF5D15A720A1F9D2C (void);
// 0x00000686 System.Boolean Unity.Barracuda.TensorShape::op_Inequality(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void TensorShape_op_Inequality_mB47FF1BD8B450E17B857073484FFBAE38FB0E195 (void);
// 0x00000687 System.Boolean Unity.Barracuda.TensorShape::Equals(System.Object)
extern void TensorShape_Equals_m42E034684CC22E8D12A5D3EACD8E2AF679C8F1F4 (void);
// 0x00000688 System.Int32 Unity.Barracuda.TensorShape::GetHashCode()
extern void TensorShape_GetHashCode_m505117616EECD23D215F0A22B10EC3EBCC4AAEEB (void);
// 0x00000689 System.String Unity.Barracuda.TensorShape::ToString()
extern void TensorShape_ToString_m2AEFB5AAFB8C431CF0A1F18AC289A5B985190C0B (void);
// 0x0000068A System.Void Unity.Barracuda.TensorShape::.cctor()
extern void TensorShape__cctor_mACE4E65A34134E7CE9577D023DFCCCD1108B32D0 (void);
// 0x0000068B System.Void Unity.Barracuda.TensorIterator::.ctor(Unity.Barracuda.TensorShape,System.Int32)
extern void TensorIterator__ctor_m7C1B78FF7236816755899FCDF88960D76230F055 (void);
// 0x0000068C System.Void Unity.Barracuda.TensorIterator::.ctor(Unity.Barracuda.Tensor,System.Int32)
extern void TensorIterator__ctor_m67F087887A6346461C32CCBF735ED83766FB76EA (void);
// 0x0000068D System.Void Unity.Barracuda.TensorIterator::AssignIndexAndInvalidateDimensions(System.Int32)
extern void TensorIterator_AssignIndexAndInvalidateDimensions_mCE43E53426BDFD6D900512A503D3EE563510B88F (void);
// 0x0000068E System.Void Unity.Barracuda.TensorIterator::Next()
extern void TensorIterator_Next_m00658806CBF44EE7AC8B761C498CE4CF8EF7CD0F (void);
// 0x0000068F System.Void Unity.Barracuda.TensorIterator::Advance(System.Int32)
extern void TensorIterator_Advance_mB95B0C1420D7FDB1FDF8611C06EB6FBA3BF1B215 (void);
// 0x00000690 System.Boolean Unity.Barracuda.TensorIterator::IsValid()
extern void TensorIterator_IsValid_mA185B7A32FDD6162C9448CDD6479CE8D9C46B509 (void);
// 0x00000691 System.Int32 Unity.Barracuda.TensorIterator::IndexInReducedShape(Unity.Barracuda.TensorShape)
extern void TensorIterator_IndexInReducedShape_m65002D28C0DA55FF78E67020E67CD36964838424 (void);
// 0x00000692 System.Int32 Unity.Barracuda.TensorIterator::IndexWithReplacedAxis(System.Int32,System.Int32)
extern void TensorIterator_IndexWithReplacedAxis_m35AE2B8DD5B3EBC59C1B09D87BA19D6F0472D69C (void);
// 0x00000693 System.Int32 Unity.Barracuda.TensorIterator::get_Item(System.Int32)
extern void TensorIterator_get_Item_m79EA1D301F192CD79297CBBEC241B127EE6B0070 (void);
// 0x00000694 System.Boolean Unity.Barracuda.Tensor::get_disposed()
extern void Tensor_get_disposed_m3D35E9201D836BBC2BA91417C36B3EBB699DD28B (void);
// 0x00000695 Unity.Barracuda.ITensorAllocator Unity.Barracuda.Tensor::get_allocator()
extern void Tensor_get_allocator_mD186C09D0F3D1D7C9D54BF1C7290A701E222EA80 (void);
// 0x00000696 System.Int32 Unity.Barracuda.Tensor::get_sequenceLength()
extern void Tensor_get_sequenceLength_m116D76179A3F81A7DE6627646739AC462FA4493A (void);
// 0x00000697 System.Int32 Unity.Barracuda.Tensor::get_numberOfDirections()
extern void Tensor_get_numberOfDirections_mB200882AE1F0955DA631C9BBA2D08FFED796736C (void);
// 0x00000698 System.Int32 Unity.Barracuda.Tensor::get_batch()
extern void Tensor_get_batch_mF7AA3F42A7E87A67667FB21E6953503679D63AFE (void);
// 0x00000699 System.Int32 Unity.Barracuda.Tensor::get_extraDimension()
extern void Tensor_get_extraDimension_m53712742F520A606051F798C13EF6AC91A689CAD (void);
// 0x0000069A System.Int32 Unity.Barracuda.Tensor::get_depth()
extern void Tensor_get_depth_m3064356CFB7F04BE0C219E039983F5B8270B1EE9 (void);
// 0x0000069B System.Int32 Unity.Barracuda.Tensor::get_height()
extern void Tensor_get_height_mDF1362128221F25309910F90D516B25C4B05F09F (void);
// 0x0000069C System.Int32 Unity.Barracuda.Tensor::get_width()
extern void Tensor_get_width_m1BD8484C323B816CED0E5A792C6B50786FB030E5 (void);
// 0x0000069D System.Int32 Unity.Barracuda.Tensor::get_channels()
extern void Tensor_get_channels_m8E3F9C0B71F7B0675A6DB466F4A6CE677F9FCB5F (void);
// 0x0000069E System.Int32 Unity.Barracuda.Tensor::get_kernelSpatialDepth()
extern void Tensor_get_kernelSpatialDepth_m013AEDB4585E397DAC05B38E76F2DCD3FD880772 (void);
// 0x0000069F System.Int32 Unity.Barracuda.Tensor::get_kernelWidth()
extern void Tensor_get_kernelWidth_m3ADB493A7C0C96CB563B75388B299AF95C677BA7 (void);
// 0x000006A0 System.Int32 Unity.Barracuda.Tensor::get_kernelHeight()
extern void Tensor_get_kernelHeight_m43D8E7270F6B16AFE4A5CC0D75B9A98788B3BE09 (void);
// 0x000006A1 System.Int32 Unity.Barracuda.Tensor::get_kernelDepth()
extern void Tensor_get_kernelDepth_m46EF782C993A540EA4DDBF39356C44850EAD2A32 (void);
// 0x000006A2 System.Int32 Unity.Barracuda.Tensor::get_kernelCount()
extern void Tensor_get_kernelCount_mC4D50A1CA655BB6218AC12492F033AC3927966DE (void);
// 0x000006A3 System.Int32 Unity.Barracuda.Tensor::get_flatHeight()
extern void Tensor_get_flatHeight_mB53D7BC2500206798300C938637E51E96BE14D44 (void);
// 0x000006A4 System.Int32 Unity.Barracuda.Tensor::get_flatWidth()
extern void Tensor_get_flatWidth_m31709D54C84075AE729980752C5C0B540BCDDED9 (void);
// 0x000006A5 System.Int32 Unity.Barracuda.Tensor::get_length()
extern void Tensor_get_length_m8952D942C064F6BDAEB3AB189ED7D7CC0CBBFB3F (void);
// 0x000006A6 System.Int32 Unity.Barracuda.Tensor::get_dimensions()
extern void Tensor_get_dimensions_m0AC79B00342752E36B780E9C4EDFBC078D5CB8F7 (void);
// 0x000006A7 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.Single[],System.String)
extern void Tensor__ctor_mD429E18D3FD6C3C7535EEC8E5D0E1605BC798F1A (void);
// 0x000006A8 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[],System.String)
extern void Tensor__ctor_m869110522FBD873EB6C54E9872A544FB9DDFE9AD (void);
// 0x000006A9 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Single[],System.String)
extern void Tensor__ctor_mEEA32071CD91E32BED27C5311014A743F9627502 (void);
// 0x000006AA System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Single[],System.String)
extern void Tensor__ctor_m1F2AAE2698AD74B74FE8F83FF84D6760686D6215 (void);
// 0x000006AB System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.Single[][],System.String)
extern void Tensor__ctor_m2BCB790E5545B55957815F50A18FBFE99D603D9B (void);
// 0x000006AC System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[][],System.String)
extern void Tensor__ctor_mEAE629DB3128A2DE326D02BC752B83E8E2F77E52 (void);
// 0x000006AD System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Single[][],System.String)
extern void Tensor__ctor_mF84132C4DF569EBAFD69F606FC9F9435EEA6A7B5 (void);
// 0x000006AE System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Single[][],System.String)
extern void Tensor__ctor_m79999763F6F0DCCB37D3F0B532774CFE3F8B5490 (void);
// 0x000006AF System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.Single[0...,0...],System.String)
extern void Tensor__ctor_mEDF2D6E4EF58F1B7BDB6B526338EB3E48269076B (void);
// 0x000006B0 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Single[0...,0...],System.String)
extern void Tensor__ctor_m749E2EE7A6FE7BB8F774AC5E7F81A12C8A23604F (void);
// 0x000006B1 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Single[0...,0...],System.String)
extern void Tensor__ctor_m35415292EB86B8B940232D408DA0CA625750225F (void);
// 0x000006B2 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Array,System.String)
extern void Tensor__ctor_m5825FC11D01EA585FD84424CDE0DC3B13DFE21E7 (void);
// 0x000006B3 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.Single[0...,0...,0...,0...],System.String)
extern void Tensor__ctor_m4FB04BFB9ED3A555C6F5C64750AC3939073C8CBF (void);
// 0x000006B4 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[0...,0...,0...,0...],System.String)
extern void Tensor__ctor_mF8F6D3053D145B1034D7DE642912E479FDAF5657 (void);
// 0x000006B5 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Single[0...,0...,0...,0...],System.String)
extern void Tensor__ctor_m8DB53461D5D44D61C7FF995DA431162EF7BCC76D (void);
// 0x000006B6 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_m126D2BB997DD312ECB26EF7882E3A718C9DDEA18 (void);
// 0x000006B7 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_m829E30A9179A1BBC50AC126C8632404054D6E070 (void);
// 0x000006B8 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_m28E6237F06B749CBD2AE77BBAC4CE94EDA623373 (void);
// 0x000006B9 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_mC42E48C26EB28273CD92CB59939F3538AB335115 (void);
// 0x000006BA System.Void Unity.Barracuda.Tensor::.ctor(UnityEngine.Texture,System.Int32,System.String)
extern void Tensor__ctor_mCE653209E64E699D323AD92DD0C7A205553C136F (void);
// 0x000006BB System.Void Unity.Barracuda.Tensor::.ctor(UnityEngine.Texture[],System.Int32,System.String)
extern void Tensor__ctor_m2DE59D3DA3114D197F45AEE8F408DD950017285E (void);
// 0x000006BC System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_mFC694BB0E93D2499BC0F2C595BA84203460F4CBB (void);
// 0x000006BD System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_m6BCB34AB1286B40D2195842CC4258F5247439FD7 (void);
// 0x000006BE System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_mD1D3687E76265F87B2A4366DF39FB4F21D5E37D4 (void);
// 0x000006BF System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_m2AAB7E3CEBE09D9B10ABF1DC90CC5CB2093FE5CC (void);
// 0x000006C0 System.Void Unity.Barracuda.Tensor::.ctor(System.String)
extern void Tensor__ctor_m8BF0892A6B35BBD9C4C009AB4DE83403E2F73879 (void);
// 0x000006C1 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.String)
extern void Tensor__ctor_mAA8BB34542D0363998A105E1A61BB05896FE3F54 (void);
// 0x000006C2 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.String)
extern void Tensor__ctor_m3DC7F2778FAAA2E1DCC10928C9B4701931D20AE4 (void);
// 0x000006C3 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.String)
extern void Tensor__ctor_m2E3D0134A28B521FD1C135FD8F17B627F910BC5B (void);
// 0x000006C4 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.String)
extern void Tensor__ctor_m72D8247FE59C0461E4B45FFFA7C58B8C7A83A377 (void);
// 0x000006C5 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m3B301D76F48C1752FC8576A43127E4EDFA1A10D3 (void);
// 0x000006C6 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m09E3BAC3450A7CC4E62799B4CCDEAC4D8BA9B297 (void);
// 0x000006C7 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mCCEA8C399D46D4FD205087C6874B8CF6CC2CB38E (void);
// 0x000006C8 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mA1B541018684884BBD41C94F0CF5122DDA71F863 (void);
// 0x000006C9 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m9B4439381ACD27A0DAB471085F0029E8A58520F2 (void);
// 0x000006CA System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mBCA3AAD61F48F7510AED5BB310618C6C85B9DA5B (void);
// 0x000006CB System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m6D697F477CC08D8D27607B0D7AF71B428386FF03 (void);
// 0x000006CC System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m22C7BA6B2FF6FCA530CFFD539CCF025F98D0CBA9 (void);
// 0x000006CD System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m14518AFB348BD5D0C000CD0E4DA90858ACD9D8E2 (void);
// 0x000006CE System.Void Unity.Barracuda.Tensor::Finalize()
extern void Tensor_Finalize_mA0AC407ACC702E8060BA88E04057054C51B023F6 (void);
// 0x000006CF System.Void Unity.Barracuda.Tensor::PinToDevice(Unity.Barracuda.ITensorData,System.Boolean)
extern void Tensor_PinToDevice_m4BDEA07DF1F03E71AC197284BB12530A8A88DD28 (void);
// 0x000006D0 System.Void Unity.Barracuda.Tensor::UploadToDevice(Unity.Barracuda.ITensorData,System.Boolean)
extern void Tensor_UploadToDevice_m69258C144C4BCE24B4E96FF38C62ADF0C421A888 (void);
// 0x000006D1 System.Void Unity.Barracuda.Tensor::AttachToDevice(Unity.Barracuda.ITensorData)
extern void Tensor_AttachToDevice_m44ECB09CD6FD73862A783C2017924EE999F3A4F8 (void);
// 0x000006D2 Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::DetachFromDevice(System.Boolean)
extern void Tensor_DetachFromDevice_m05D9D2F260294280CA884584ACBDC31952F3D221 (void);
// 0x000006D3 System.Void Unity.Barracuda.Tensor::UploadIfDirty()
extern void Tensor_UploadIfDirty_m3CBF3EE9D81B0AF8A03B893B23781C66B4A83624 (void);
// 0x000006D4 System.Void Unity.Barracuda.Tensor::UploadAndInvalidateCache()
extern void Tensor_UploadAndInvalidateCache_mBB2B6AEE15E9504B4C50C33CE1F1D5EA4F1C161E (void);
// 0x000006D5 System.Boolean Unity.Barracuda.Tensor::PrepareCacheForAccess(System.Boolean)
extern void Tensor_PrepareCacheForAccess_mDF8F23CE42173763867E4046235490EBEF7721DB (void);
// 0x000006D6 System.Void Unity.Barracuda.Tensor::FlushCache()
extern void Tensor_FlushCache_mE98ADE6F6365D223D5CB24FA204A97CF3E7BD5DA (void);
// 0x000006D7 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::ShallowCopy(Unity.Barracuda.TensorShape,System.String)
extern void Tensor_ShallowCopy_m2C46D63CF00199F76BB485075CE6024591A73559 (void);
// 0x000006D8 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::ShallowCopy(System.String)
extern void Tensor_ShallowCopy_m0CD430C6A92964B04A1B6D9D52534C10BDB7015F (void);
// 0x000006D9 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::Flatten(System.String)
extern void Tensor_Flatten_m4896A94D5456585243DD45DDB0D646C084F3DDA2 (void);
// 0x000006DA Unity.Barracuda.Tensor Unity.Barracuda.Tensor::Reshape(Unity.Barracuda.TensorShape,System.String)
extern void Tensor_Reshape_m27BD1EC721D6E36B8F95AEEAF570168107C0A424 (void);
// 0x000006DB Unity.Barracuda.Tensor Unity.Barracuda.Tensor::DeepCopy()
extern void Tensor_DeepCopy_mFC05AC1B2A78A264BDF8FC6CDDC2CE5C3F2654A8 (void);
// 0x000006DC System.Void Unity.Barracuda.Tensor::TakeOwnership()
extern void Tensor_TakeOwnership_m7C952AB0DF269FFA0F344FCB543CAE17E5AB15BF (void);
// 0x000006DD Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::Invalidate()
extern void Tensor_Invalidate_m4D26A6CA02BF7CAC2FC75247C59532A9068C25DF (void);
// 0x000006DE System.Void Unity.Barracuda.Tensor::Dispose()
extern void Tensor_Dispose_m6145BFEFDC36D84148B88AC99428694AC953F9EF (void);
// 0x000006DF System.Void Unity.Barracuda.Tensor::ToRenderTexture(UnityEngine.RenderTexture,System.Int32,System.Int32,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_mAB213C9BEE8426D7126F80027E019F1D1A18CB2C (void);
// 0x000006E0 System.Void Unity.Barracuda.Tensor::ToRenderTexture(UnityEngine.RenderTexture,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_m71337CE73D3CC56E74DBE1F514D81242D5D0DA7A (void);
// 0x000006E1 UnityEngine.RenderTexture Unity.Barracuda.Tensor::ToRenderTexture(UnityEngine.RenderTextureFormat,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_mDD8221FEBC9B5A1A98FD5613FA786AD5BACD83DB (void);
// 0x000006E2 UnityEngine.RenderTexture Unity.Barracuda.Tensor::ToRenderTexture(System.Int32,System.Int32,System.Single,System.Single,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_m11E8064F699BB4BB5223B008C6E5251E0933B106 (void);
// 0x000006E3 System.Int32 Unity.Barracuda.Tensor::Axis(System.Int32)
extern void Tensor_Axis_mCC5A19CCD3A5AEC206587F5F12152A2862CBA00E (void);
// 0x000006E4 System.Int32 Unity.Barracuda.Tensor::Index(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_Index_mF0DF1DCCE38D76416A5CCDF9856FA9ED8A6F8794 (void);
// 0x000006E5 System.Int32 Unity.Barracuda.Tensor::Index(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_Index_m98F9269C9237967AB083F39F4338FA94BCD78085 (void);
// 0x000006E6 System.Int32 Unity.Barracuda.Tensor::IndexWithClamp(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_IndexWithClamp_mAD9D5022ED489E4A99DEE819BC38D5D941C2BB01 (void);
// 0x000006E7 System.Int32 Unity.Barracuda.Tensor::IndexWithBroadcast(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_IndexWithBroadcast_m30B4EC84B1F3CE865D8B223EDFEACE93C4FEB121 (void);
// 0x000006E8 System.Int32 Unity.Barracuda.Tensor::Index(System.Int32,System.Int32)
extern void Tensor_Index_m07C664C34090E308B327432868F56730A21C8FDD (void);
// 0x000006E9 System.Single Unity.Barracuda.Tensor::get_Item(System.Int32)
extern void Tensor_get_Item_m7A2E0F70C4652F7B136DF2B121EC794EEDE87DF3 (void);
// 0x000006EA System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Single)
extern void Tensor_set_Item_m2CC22324656A79003E26DC03377048E9A8F7D89C (void);
// 0x000006EB System.Single Unity.Barracuda.Tensor::get_Item(System.Int32,System.Int32)
extern void Tensor_get_Item_mB9D9C35BC2283E31FCE5468841F24D046CE4282A (void);
// 0x000006EC System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Int32,System.Single)
extern void Tensor_set_Item_mB50F348EE7302EF15D54C58CBC6FB640A296A869 (void);
// 0x000006ED System.Single Unity.Barracuda.Tensor::get_Item(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_get_Item_m7D0030D759626FDE3A4DAEF3515F5F5A8EA1DA0B (void);
// 0x000006EE System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Int32,System.Int32,System.Int32,System.Single)
extern void Tensor_set_Item_mD99EB916D7A0C28DEF973E5FE557606CC9AC5451 (void);
// 0x000006EF System.Single Unity.Barracuda.Tensor::get_Item(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_get_Item_m2F40BB29F752FAD6AEB3DD50504ED835CB6F5AC2 (void);
// 0x000006F0 System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single)
extern void Tensor_set_Item_mB5D201C98370FE4B18518B102262A115D1871F17 (void);
// 0x000006F1 System.Single[] Unity.Barracuda.Tensor::ToReadOnlyArray()
extern void Tensor_ToReadOnlyArray_mD4D02BE23296319B80FFAB1DC17867C998D3AFEB (void);
// 0x000006F2 Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::get_tensorOnDevice()
extern void Tensor_get_tensorOnDevice_m7CCA5EE573B51FA2D7266E17AA1831D0AE41E10F (void);
// 0x000006F3 Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::get_data()
extern void Tensor_get_data_m3BF73E9F9E2CEE78F4E6F9A11CF403455B53667F (void);
// 0x000006F4 System.String Unity.Barracuda.Tensor::ToString()
extern void Tensor_ToString_m280F525064CECE04AEDDF8AD1B5B39AE4C48A959 (void);
// 0x000006F5 Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::UnpinAndDisposeTensor()
extern void Tensor_UnpinAndDisposeTensor_m26BF24A009ED1D53E653F9E6A1D8C06F2BB305C8 (void);
// 0x000006F6 System.Single[] Unity.Barracuda.Tensor::get_readonlyArray()
extern void Tensor_get_readonlyArray_m5208A6940977854FDB9AAE5F5426AC2C1FCE40DC (void);
// 0x000006F7 System.Int32 Unity.Barracuda.Tensor::get_readonlyArrayOffset()
extern void Tensor_get_readonlyArrayOffset_m49F461B79B4D6BA0F51A24F76220DCC611A74EB3 (void);
// 0x000006F8 System.Void Unity.Barracuda.TensorExtensions::TestInit(Unity.Barracuda.Tensor,System.Int32)
extern void TensorExtensions_TestInit_mC0CADEC5D824AD680DEECBD3A5F69782DBCB8C41 (void);
// 0x000006F9 System.Void Unity.Barracuda.TensorExtensions::TestInitCos(Unity.Barracuda.Tensor,System.Int32,System.Single)
extern void TensorExtensions_TestInitCos_mF9F2D462ED9B11469F65E6DE8E6439A39DEE6FD7 (void);
// 0x000006FA System.Void Unity.Barracuda.TensorExtensions::TestInitValue(Unity.Barracuda.Tensor,System.Single,System.Int32)
extern void TensorExtensions_TestInitValue_m5DF9E96AFD57E02A86F2358530252E6ACE338AFF (void);
// 0x000006FB System.Single[] Unity.Barracuda.TensorExtensions::AsFloats(Unity.Barracuda.Tensor)
extern void TensorExtensions_AsFloats_m8F3F69F84180ABC0D7AA4B2A68778126F05C935F (void);
// 0x000006FC System.Int32[] Unity.Barracuda.TensorExtensions::AsInts(Unity.Barracuda.Tensor)
extern void TensorExtensions_AsInts_m7A66FFEE1D451A306851E8344216CEDA21F3A79C (void);
// 0x000006FD System.String Unity.Barracuda.TensorExtensions::DataToString(Unity.Barracuda.Tensor,System.Int32)
extern void TensorExtensions_DataToString_mB34BB27A0AAC32E7403C228F0925B75E89368D70 (void);
// 0x000006FE System.Void Unity.Barracuda.TensorExtensions::Print(Unity.Barracuda.Tensor,System.String)
extern void TensorExtensions_Print_mBB6163B079069110500A0F80679FF66DA4ACE0D4 (void);
// 0x000006FF System.Void Unity.Barracuda.TensorExtensions::PrintDataPart(Unity.Barracuda.Tensor,System.Int32,System.String)
extern void TensorExtensions_PrintDataPart_m342A5D8BB69F171C2436B81FBED09EEC22B32A3A (void);
// 0x00000700 System.Boolean Unity.Barracuda.TensorExtensions::Equals(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void TensorExtensions_Equals_mEC377772E41BB34195BDF1465947504ABCFDA947 (void);
// 0x00000701 System.Boolean Unity.Barracuda.TensorExtensions::Approximately(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Single,System.Int32)
extern void TensorExtensions_Approximately_m9F8CE6C103A5096F97E92D1A2A28DCCC962EA5E6 (void);
// 0x00000702 System.Single Unity.Barracuda.TensorExtensions::MaxDifference(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void TensorExtensions_MaxDifference_m9446E42BE4BE9FACC6134088FBFD1A54FE0F601C (void);
// 0x00000703 Unity.Barracuda.Tensor Unity.Barracuda.TensorExtensions::Reshape(Unity.Barracuda.Tensor,System.Int32[])
extern void TensorExtensions_Reshape_m6EA2C0A646709BCABCB738E384870F5F6C62D98C (void);
// 0x00000704 System.Int32[] Unity.Barracuda.TensorExtensions::ArgMax(Unity.Barracuda.Tensor)
extern void TensorExtensions_ArgMax_mFBF966C8E6046738F136D81A7DB3433BC1D07980 (void);
// 0x00000705 System.Int32[][] Unity.Barracuda.TensorExtensions::ArgSort(Unity.Barracuda.Tensor)
extern void TensorExtensions_ArgSort_m49E7998F9FFDB6DF803E4EAD245D0F0C80AF129A (void);
// 0x00000706 System.Void Unity.Barracuda.TensorExtensions::Fill(Unity.Barracuda.Tensor,System.Single)
extern void TensorExtensions_Fill_m64FF211597BA20775D0A51BCF271ED5A940BC6A3 (void);
// 0x00000707 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Gather(Unity.Barracuda.TensorShape[],System.Int32)
extern void TensorExtensions_Gather_m146494B0951A76648CFE3F9580FDADA448668546 (void);
// 0x00000708 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void TensorExtensions_Concat_mEBA582B2D372814C2A1442AE3FE0BBBAE1985C86 (void);
// 0x00000709 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Concat(Unity.Barracuda.TensorShape[],System.Int32)
extern void TensorExtensions_Concat_mA79BAE1FC2592A5EDEE01728587AC4A44C907CCE (void);
// 0x0000070A Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Max(Unity.Barracuda.TensorShape[])
extern void TensorExtensions_Max_m7944AF1E51CC1949B60197BF4F5A436C2CEEF600 (void);
// 0x0000070B Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::MaxShape(Unity.Barracuda.Tensor[])
extern void TensorExtensions_MaxShape_m04EC961503096890486CD6453B26E78C534E3840 (void);
// 0x0000070C Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Scale(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void TensorExtensions_Scale_mD6F3419C162322BB5A8849D457C3AF8AEEEB93A5 (void);
// 0x0000070D Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Scale(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_Scale_mE3556CEE605D0A814EA2A8510449E2C3A8CC5793 (void);
// 0x0000070E Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Reduce(Unity.Barracuda.TensorShape,System.Int32)
extern void TensorExtensions_Reduce_m967FF14C2787C567EC1225235C11D0183C249560 (void);
// 0x0000070F Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Reshape(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_Reshape_m1F76B219D0EEDEB108B9E435B067294DD027D7BB (void);
// 0x00000710 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyBorder(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_ApplyBorder_mFE4EC1900382257B2AB8B92E0849E12110400691 (void);
// 0x00000711 System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToKernel(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToKernel_m2547057CCD88C1822070E764DDBA30617A5CE7A3 (void);
// 0x00000712 System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToKernel(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToKernel_m8EE3F5341CE186FA862D2EFB9F46C7B8700E36D9 (void);
// 0x00000713 System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_m3908587EEC5E4CA6BFD0BE4DCCAF3DEA2891909D (void);
// 0x00000714 System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_mB166BFD0D916D77E02D64E994E94CF17160758AE (void);
// 0x00000715 System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.Tensor,System.ValueTuple`2<System.Int32,System.Int32>,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_m3B000B3822DE6273C7C514A2D8B3581F48CBBAD6 (void);
// 0x00000716 System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.TensorShape,System.ValueTuple`2<System.Int32,System.Int32>,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_m3A88FBFBA7D76F2C73E759D287C970FA92E66E81 (void);
// 0x00000717 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyPool(Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[],System.Boolean)
extern void TensorExtensions_ApplyPool_mD4998E5386B08F19E945F28F723421791C7D7709 (void);
// 0x00000718 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyPool(Unity.Barracuda.TensorShape,System.ValueTuple`2<System.Int32,System.Int32>,System.Int32[],System.Int32[],System.Boolean)
extern void TensorExtensions_ApplyPool_m870638EF6A03DB66B70E8077E79D4A069F1497FC (void);
// 0x00000719 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyKernel(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[])
extern void TensorExtensions_ApplyKernel_m3272DF54EAA676A3AA52BF560CF9526A224D6FDA (void);
// 0x0000071A Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyKernelInverse(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_ApplyKernelInverse_m89434B166C735E125CBD53B8B04422C8313C696B (void);
// 0x0000071B System.Int32 Unity.Barracuda.TensorExtensions::WrapIndex(System.Int32,System.Int32)
extern void TensorExtensions_WrapIndex_m04794682FBF18EC4A15BD1CBD4EBE395B44BF398 (void);
// 0x0000071C System.Boolean Unity.Barracuda.TensorExtensions::IsNHWC(Unity.Barracuda.TensorShape)
extern void TensorExtensions_IsNHWC_mF7641564037239B0832EADF8519B6253C738A299 (void);
// 0x0000071D System.Int32 Unity.Barracuda.TensorExtensions::NHWCTo8DAxis(System.Int32)
extern void TensorExtensions_NHWCTo8DAxis_mE07C1188ED18ED4024734FC644B31F35743A511A (void);
// 0x0000071E System.Boolean Unity.Barracuda.TensorExtensions::Is8DAxisConvertibleToNHWC(System.Int32)
extern void TensorExtensions_Is8DAxisConvertibleToNHWC_m30CBD84F412B79FEEE0A45C46CED942C24BC3003 (void);
// 0x0000071F System.Boolean Unity.Barracuda.TensorExtensions::AreAllTensorsConvertibleToNCHW(Unity.Barracuda.Tensor[])
extern void TensorExtensions_AreAllTensorsConvertibleToNCHW_mA027641E3D3A3D3890DC036DF76C05E7AFC3FFB8 (void);
// 0x00000720 System.Int32 Unity.Barracuda.TensorExtensions::Convert8DAxisToNHWC(System.Int32)
extern void TensorExtensions_Convert8DAxisToNHWC_mF482F86C228CC4CFB0E8DA29FC0224D4F8A79807 (void);
// 0x00000721 System.Int32[] Unity.Barracuda.TensorExtensions::GetNHWCParametersFrom8DParameterAndShape(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_GetNHWCParametersFrom8DParameterAndShape_m0B12C2A3A1F8C3AF23F0CFE90C24FB21161C9BBE (void);
// 0x00000722 System.Int32[] Unity.Barracuda.TensorExtensions::Get8DParametersFromNHWCParametersAndShape(Unity.Barracuda.TensorShape,System.Int32[],System.Int32)
extern void TensorExtensions_Get8DParametersFromNHWCParametersAndShape_mF4D76E2534B4AA9726B6380005308E4005E66749 (void);
// 0x00000723 System.Int32[] Unity.Barracuda.TensorExtensions::Get8DPermutationsForNHWCPermutationsAndShape(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_Get8DPermutationsForNHWCPermutationsAndShape_m359E106B1CEABEE874E8E8A7BE95E42D0A02BD1A (void);
// 0x00000724 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyStridedSlice(Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_ApplyStridedSlice_m79E57D1D9EC3C27950B6B8D6841658096AB15AFD (void);
// 0x00000725 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Permute(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_Permute_m58F7C02C42FB50EB7DCB1E98CF71E80E10D227D5 (void);
// 0x00000726 Unity.Barracuda.ITensorData Unity.Barracuda.TensorExtensions::CreateFromTexture(UnityEngine.Texture,Unity.Barracuda.TensorShape)
extern void TensorExtensions_CreateFromTexture_mE5B296E2E918A23C481B720D5EE7F1BC5F8A7FBC (void);
// 0x00000727 System.Void Unity.Barracuda.BarracudaBackendsFactory/<>c::.cctor()
extern void U3CU3Ec__cctor_mC2B02D167CB06775087434B03CA5960CBC6E3F48 (void);
// 0x00000728 System.Void Unity.Barracuda.BarracudaBackendsFactory/<>c::.ctor()
extern void U3CU3Ec__ctor_m38D50AA118D7552C9C118D5973982C1C8E30A113 (void);
// 0x00000729 System.String Unity.Barracuda.BarracudaBackendsFactory/<>c::<PatchModel>b__5_1(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CPatchModelU3Eb__5_1_mA93E4809B1E6FF8EB40BEB1B35E9577F8C7E00D7 (void);
// 0x0000072A System.String Unity.Barracuda.BarracudaBackendsFactory/<>c::<PatchModel>b__5_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CPatchModelU3Eb__5_0_mEE586D1EF293E08503046ADF7FF00715C0514566 (void);
// 0x0000072B System.String Unity.Barracuda.BarracudaBackendsFactory/<>c::<ValidateModel>b__6_0(System.String)
extern void U3CU3Ec_U3CValidateModelU3Eb__6_0_m3F4B32775BDABC7164923EF7C540D62CA7E2195A (void);
// 0x0000072C System.Boolean Unity.Barracuda.BarracudaBackendsFactory/<>c::<ValidateModel>b__6_1(System.Linq.IGrouping`2<System.String,System.String>)
extern void U3CU3Ec_U3CValidateModelU3Eb__6_1_m02E7D72A0F8FC3306D1841DFEE3D415EBA41E6B5 (void);
// 0x0000072D System.String Unity.Barracuda.BarracudaBackendsFactory/<>c::<ValidateModel>b__6_2(System.Linq.IGrouping`2<System.String,System.String>)
extern void U3CU3Ec_U3CValidateModelU3Eb__6_2_mA8A639DC5D873D8E71A225FD34B9814C6480A8B9 (void);
// 0x0000072E Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps/MatrixMultiplyJob::Schedule(Unity.Jobs.JobHandle)
extern void MatrixMultiplyJob_Schedule_mBC7FDEAADB2F5C4386251D6B85CE9ECB3EA51C67 (void);
// 0x0000072F Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps/MatrixMultiplyJob::Schedule(System.Int32,Unity.Jobs.JobHandle)
extern void MatrixMultiplyJob_Schedule_m71BDC879FDD69CF78015A11C0968B397F4E05C0A (void);
// 0x00000730 System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiplyJob::Execute(System.Int32)
extern void MatrixMultiplyJob_Execute_mF34FAD85443E53549A1B1825E69721AB479C0B52 (void);
// 0x00000731 System.Single* Unity.Barracuda.BurstCPUOps/MatrixMultiplyJob::AllocBlock()
extern void MatrixMultiplyJob_AllocBlock_mA983E9D3927D2A4696F273BED8BBBF723AFF091A (void);
// 0x00000732 System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiplyJob::FreeBlock(System.Single*)
extern void MatrixMultiplyJob_FreeBlock_m9338113F0EEA7D1D717ED6A8515857F3732B10AB (void);
// 0x00000733 System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiplyJob::MultiplyBlockUnroll16xh(System.Single*,System.Int32,System.Single*,System.Int32,System.Single*,System.Int32)
extern void MatrixMultiplyJob_MultiplyBlockUnroll16xh_mE99F03ADB645159F78DCE6F87550C408D542D0D2 (void);
// 0x00000734 System.Void Unity.Barracuda.BurstCPUOps/Im2ColSliceJob::Execute(System.Int32)
extern void Im2ColSliceJob_Execute_m34BFA654159A0A3F1CD8C1E9B0F7AAF2840C90DA (void);
// 0x00000735 System.Void Unity.Barracuda.BurstCPUOps/MaxPool2DJob::Execute(System.Int32)
extern void MaxPool2DJob_Execute_mC6D4C5AC6879C0B4D1416148E3BD414FFE26F47D (void);
// 0x00000736 System.Void Unity.Barracuda.BurstCPUOps/AvgPool2DJob::Execute(System.Int32)
extern void AvgPool2DJob_Execute_m279C78483BDAAB972A4AD48BC1F494C100F74BD6 (void);
// 0x00000737 System.Void Unity.Barracuda.BurstCPUOps/DepthwiseConv2DJob::Execute(System.Int32)
extern void DepthwiseConv2DJob_Execute_m9C4A2B52C843317FB8844686416DA6F48644C285 (void);
// 0x00000738 System.Void Unity.Barracuda.BurstCPUOps/PReluJob::Execute(System.Int32)
extern void PReluJob_Execute_m5D4C6E11318A359C191306B33306C1A0E8967AF1 (void);
// 0x00000739 System.Single Unity.Barracuda.BurstCPUOps/PReluJob::PRelu(System.Single,System.Single)
extern void PReluJob_PRelu_m851ED135331EBA79D5474974CB6270F1C0968C3A (void);
// 0x0000073A System.Void Unity.Barracuda.BurstCPUOps/ReluJob::Execute(System.Int32)
extern void ReluJob_Execute_m5B0E555026FDCD1332AD1CC06CB079F7A618D1C7 (void);
// 0x0000073B System.Void Unity.Barracuda.BurstCPUOps/Relu6Job::Execute(System.Int32)
extern void Relu6Job_Execute_m68182EFAAA04B5B5D5D39CD39C2FFD1C1149A4CC (void);
// 0x0000073C System.Single Unity.Barracuda.BurstCPUOps/LeakyReluJob::get_alpha()
extern void LeakyReluJob_get_alpha_m1716FF70F2C8765B99E16E5ABEF95DC574345186 (void);
// 0x0000073D System.Void Unity.Barracuda.BurstCPUOps/LeakyReluJob::set_alpha(System.Single)
extern void LeakyReluJob_set_alpha_mCB82BD5CD019364F6EB61C03326EC0DAD53AB5D5 (void);
// 0x0000073E System.Void Unity.Barracuda.BurstCPUOps/LeakyReluJob::Execute(System.Int32)
extern void LeakyReluJob_Execute_mD0B0F64BCB8222CB527B61F8E7E07624E3D33890 (void);
// 0x0000073F System.Void Unity.Barracuda.BurstCPUOps/TanhJob::Execute(System.Int32)
extern void TanhJob_Execute_mE2E4964E986C114F752991A62D398459A21071F8 (void);
// 0x00000740 System.Void Unity.Barracuda.BurstCPUOps/SigmoidJob::Execute(System.Int32)
extern void SigmoidJob_Execute_m64E3A3081C86344E7A7A4765F83D36CAB3E2F138 (void);
// 0x00000741 System.Void Unity.Barracuda.BurstCPUOps/EluJob::Execute(System.Int32)
extern void EluJob_Execute_mC2F619EDAB66202F25AF9DDD5D7EE06A566701BC (void);
// 0x00000742 System.Void Unity.Barracuda.BurstCPUOps/SeluJob::Execute(System.Int32)
extern void SeluJob_Execute_m11D02E7F0552F597D63DBF3005A138B4856810BC (void);
// 0x00000743 System.Void Unity.Barracuda.BurstCPUOps/SwishJob::Execute(System.Int32)
extern void SwishJob_Execute_mAACDF3C25402589E333C4A46243C9A3E43DB7FF4 (void);
// 0x00000744 System.Void Unity.Barracuda.BurstCPUOps/SoftmaxJob::Execute(System.Int32)
extern void SoftmaxJob_Execute_m64690B935CF2A6839E310E74C1EEF33E6E887509 (void);
// 0x00000745 System.Void Unity.Barracuda.BurstCPUOps/AbsJob::Execute(System.Int32)
extern void AbsJob_Execute_mF7F9F39D830690952E16CCFFB7749584FAA869C3 (void);
// 0x00000746 System.Void Unity.Barracuda.BurstCPUOps/NegJob::Execute(System.Int32)
extern void NegJob_Execute_m1495961EE447F58C8D0ABE236E476F3300784FB8 (void);
// 0x00000747 System.Void Unity.Barracuda.BurstCPUOps/CeilJob::Execute(System.Int32)
extern void CeilJob_Execute_m4E2966906D56A2CDBCB614A15864A37F68F35524 (void);
// 0x00000748 System.Void Unity.Barracuda.BurstCPUOps/ClipJob::Execute(System.Int32)
extern void ClipJob_Execute_m9254D05EE5C50E20C81A4757D9AA2DE46298320D (void);
// 0x00000749 System.Void Unity.Barracuda.BurstCPUOps/FloorJob::Execute(System.Int32)
extern void FloorJob_Execute_mC438769AA3A88C6D737CF28D5E5E406EBB85BDBF (void);
// 0x0000074A System.Void Unity.Barracuda.BurstCPUOps/ReciprocalJob::Execute(System.Int32)
extern void ReciprocalJob_Execute_m367D8821D93435EE97F1E6C7CC2C9CAA03FF73D8 (void);
// 0x0000074B System.Void Unity.Barracuda.BurstCPUOps/PowJob::Execute(System.Int32)
extern void PowJob_Execute_mE9D0270F9E97B97CFBB1859419C90E910E39A15A (void);
// 0x0000074C System.Void Unity.Barracuda.BurstCPUOps/ExpJob::Execute(System.Int32)
extern void ExpJob_Execute_mB04C9960E8A25404B9BBD386A7D6704C24426388 (void);
// 0x0000074D System.Void Unity.Barracuda.BurstCPUOps/LogJob::Execute(System.Int32)
extern void LogJob_Execute_m23DF747BEA45380C0C5E31CF12622D9288A769BC (void);
// 0x0000074E System.Void Unity.Barracuda.BurstCPUOps/SqrtJob::Execute(System.Int32)
extern void SqrtJob_Execute_m67D619D3BE047A42DC12A4AF3177D56A89138378 (void);
// 0x0000074F System.Void Unity.Barracuda.BurstCPUOps/AcosJob::Execute(System.Int32)
extern void AcosJob_Execute_m0557845EEF870095C534DD1D0E3AB63D9F6E6C23 (void);
// 0x00000750 System.Void Unity.Barracuda.BurstCPUOps/AcoshJob::Execute(System.Int32)
extern void AcoshJob_Execute_mBE946D3E3D433DE9718745EACD4D5137332215D6 (void);
// 0x00000751 System.Void Unity.Barracuda.BurstCPUOps/AsinJob::Execute(System.Int32)
extern void AsinJob_Execute_mB36B55A9A1287100525CFB3D727A3112044B1A32 (void);
// 0x00000752 System.Void Unity.Barracuda.BurstCPUOps/AsinhJob::Execute(System.Int32)
extern void AsinhJob_Execute_m509D3A488A49105DAE48CFC9BBB702CB53425412 (void);
// 0x00000753 System.Void Unity.Barracuda.BurstCPUOps/AtanJob::Execute(System.Int32)
extern void AtanJob_Execute_m81B50AB152005DD204A285A67B754D79330DC130 (void);
// 0x00000754 System.Void Unity.Barracuda.BurstCPUOps/AtanhJob::Execute(System.Int32)
extern void AtanhJob_Execute_m9A2B9A5165D2158579466975EB3A27FA1396F7AF (void);
// 0x00000755 System.Void Unity.Barracuda.BurstCPUOps/CosJob::Execute(System.Int32)
extern void CosJob_Execute_m26D5357F4822DFD88EC954B087FF3CEA183A010E (void);
// 0x00000756 System.Void Unity.Barracuda.BurstCPUOps/CoshJob::Execute(System.Int32)
extern void CoshJob_Execute_m9D3442ABA8B56B495A709B7DD371F18164179FF3 (void);
// 0x00000757 System.Void Unity.Barracuda.BurstCPUOps/SinJob::Execute(System.Int32)
extern void SinJob_Execute_m20C01B51AD63119432F763FAE24D9577AC4CB4A9 (void);
// 0x00000758 System.Void Unity.Barracuda.BurstCPUOps/SinhJob::Execute(System.Int32)
extern void SinhJob_Execute_m0A947605F1BECC10C3E64FBA2D4EAC7D0768763B (void);
// 0x00000759 System.Void Unity.Barracuda.BurstCPUOps/TanJob::Execute(System.Int32)
extern void TanJob_Execute_mEF91C2D49C589E225DEDBEBB106962D9AC05B819 (void);
// 0x0000075A System.Void Unity.Barracuda.BurstCPUOps/ElementwiseAddJob::Execute(System.Int32)
extern void ElementwiseAddJob_Execute_m022C623FC40B9D89351B5089FDDDE83D3D7A9063 (void);
// 0x0000075B System.Void Unity.Barracuda.BurstCPUOps/ElementwiseMulJob::Execute(System.Int32)
extern void ElementwiseMulJob_Execute_m2833A1A5E62C23B57E2FD5CC5B76711A8A6AF57C (void);
// 0x0000075C System.Void Unity.Barracuda.BurstCPUOps/ElementwiseDivJob::Execute(System.Int32)
extern void ElementwiseDivJob_Execute_mD5E46272556614F3E5C1147BEFBDA362DACCA9B9 (void);
// 0x0000075D System.Void Unity.Barracuda.BurstCPUOps/ElementwisePowJob::Execute(System.Int32)
extern void ElementwisePowJob_Execute_m1A322C4427864D6BDA6349EB75A54A9C520B0822 (void);
// 0x0000075E System.Void Unity.Barracuda.BurstCPUOps/ElementwiseMaxJob::Execute(System.Int32)
extern void ElementwiseMaxJob_Execute_mBFDE22564C3167440C8A6413804D28CBEFFCB4EA (void);
// 0x0000075F System.Void Unity.Barracuda.BurstCPUOps/ElementwiseMinJob::Execute(System.Int32)
extern void ElementwiseMinJob_Execute_m3EA5B9FB2218065675B635C4731A608D1650FBC6 (void);
// 0x00000760 System.Void Unity.Barracuda.BurstCPUOps/ZeroBroadcastJob::Execute()
extern void ZeroBroadcastJob_Execute_mE5BF8936EEFB598F7C53C934715675DC236F4B66 (void);
// 0x00000761 System.Void Unity.Barracuda.BurstCPUOps/CopyJob::Execute()
extern void CopyJob_Execute_mC647ABED93530C5C245916068A9F2735336DCE3D (void);
// 0x00000762 System.Void Unity.Barracuda.BurstCPUOps/VectorBroadcastJob::Execute()
extern void VectorBroadcastJob_Execute_m096E6015CC5FE47159D517F1878B7B1DDA5EABCD (void);
// 0x00000763 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastAddJob::Execute(System.Int32)
extern void ScalarBroadcastAddJob_Execute_mA9787E94EC1246EF0E746CC900AA6B884F5403D5 (void);
// 0x00000764 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastMulJob::Execute(System.Int32)
extern void ScalarBroadcastMulJob_Execute_mEFD366C6336C5453A47B2629A85416060BF18DA1 (void);
// 0x00000765 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastDivJob::Execute(System.Int32)
extern void ScalarBroadcastDivJob_Execute_m07026CC3017E74E780663A91618C22B75A962B75 (void);
// 0x00000766 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastBiasedExpJob::Execute(System.Int32)
extern void ScalarBroadcastBiasedExpJob_Execute_m7AE94B8793BB2E9136E68C73ABD5AC6597E691CC (void);
// 0x00000767 System.Void Unity.Barracuda.BurstCPUOps/GenericBroadcastJob::Execute(System.Int32)
extern void GenericBroadcastJob_Execute_m24008BA401258A8D3C355F9950BEA46D712FCEBE (void);
// 0x00000768 System.Void Unity.Barracuda.BurstCPUOps/GenericBroadcastAddJob::Execute(System.Int32)
extern void GenericBroadcastAddJob_Execute_m17DBF894A4BF260853A4338FB44AA0EB151150FC (void);
// 0x00000769 System.Void Unity.Barracuda.BurstCPUOps/GenericBroadcastMulJob::Execute(System.Int32)
extern void GenericBroadcastMulJob_Execute_m41B7B20B65BC1521905B2A64989D119AC54B88F4 (void);
// 0x0000076A System.Void Unity.Barracuda.BurstCPUOps/VectorBroadcastScaleBiasJob::Execute(System.Int32)
extern void VectorBroadcastScaleBiasJob_Execute_m8797181998A988761CD37C28DDED9DB8CE2F3C36 (void);
// 0x0000076B System.Void Unity.Barracuda.BurstCPUOps/ChannelReduceMaxJob::Execute(System.Int32)
extern void ChannelReduceMaxJob_Execute_mC2A3AFCB7DF15D8230CF89D35D2D2062CE52415F (void);
// 0x0000076C System.Void Unity.Barracuda.BurstCPUOps/ChannelReduceSumJob::Execute(System.Int32)
extern void ChannelReduceSumJob_Execute_m9F67AE08E550BBF2F5E0334F811D5AB796A0697C (void);
// 0x0000076D System.Void Unity.Barracuda.ComputeKernelLibrary/Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,System.Boolean,System.Boolean)
extern void Entry__ctor_mB1F087CFE2B0D8A568D6B294A76F667880C2480E (void);
// 0x0000076E System.Void Unity.Barracuda.ComputeKernelLibrary/Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,System.UInt32)
extern void Entry__ctor_mF224CFCC76879AD71EEEADB5A320F02132CACB74 (void);
// 0x0000076F System.Void Unity.Barracuda.ComputeKernelLibrary/Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,Unity.Barracuda.ComputeKernelLibrary/StrictDimensions)
extern void Entry__ctor_m9481F232249846FDFE0CF326330D134C60A4ADF1 (void);
// 0x00000770 System.Void Unity.Barracuda.ComputeKernelLibrary/Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,Unity.Barracuda.ComputeKernelLibrary/StrictDimensions,System.Boolean)
extern void Entry__ctor_m5EA693B7934059F23B65B58CCC2863327B292DFD (void);
// 0x00000771 System.Void Unity.Barracuda.ComputeDebugUtils/KernelAssertInfo::.ctor(System.UInt32[])
extern void KernelAssertInfo__ctor_m6BC1385E86260E6F83F40B43C8E77EFB54A8B310 (void);
// 0x00000772 Unity.Barracuda.ComputeKernel Unity.Barracuda.PrecompiledComputeOps/CompiledLayer::get_kernel()
extern void CompiledLayer_get_kernel_m8933276E9939C717B3ADFA0DE484D677A1E5825C (void);
// 0x00000773 System.Void Unity.Barracuda.ReferenceCPUOps/Seed::.ctor(UnityEngine.Random/State[]&,System.Int32)
extern void Seed__ctor_m435178FF6CC71F8B37FA4D95BDBB97F296A3A165 (void);
// 0x00000774 System.Void Unity.Barracuda.ReferenceCPUOps/Seed::Dispose()
extern void Seed_Dispose_mF0DD2EB9F49A988B22E66883C75FD8133F040744 (void);
// 0x00000775 System.Void Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass26_0::.ctor()
extern void U3CU3Ec__DisplayClass26_0__ctor_mA95D9915AEDD912D43D81F58DB0388B8D7558980 (void);
// 0x00000776 System.Single Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass26_0::<Border2D>b__0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32)
extern void U3CU3Ec__DisplayClass26_0_U3CBorder2DU3Eb__0_m4463312EB833580BA8DEA15BA1261DA3E65F6E85 (void);
// 0x00000777 System.Void Unity.Barracuda.ReferenceCPUOps/<>c::.cctor()
extern void U3CU3Ec__cctor_m997AD7793B4E02A5696268006B6A7455F478C0F8 (void);
// 0x00000778 System.Void Unity.Barracuda.ReferenceCPUOps/<>c::.ctor()
extern void U3CU3Ec__ctor_mFB34F61487235A6A31529C02150D1303A4065923 (void);
// 0x00000779 System.Int64 Unity.Barracuda.ReferenceCPUOps/<>c::<Concat>b__81_1(System.Int64,System.Int32)
extern void U3CU3Ec_U3CConcatU3Eb__81_1_mC0C473E76349008A5015493CF26796EDF38BA4D8 (void);
// 0x0000077A System.Int64 Unity.Barracuda.ReferenceCPUOps/<>c::<Concat>b__81_0(System.Int64,System.Int32)
extern void U3CU3Ec_U3CConcatU3Eb__81_0_mB0B98BF35B0FD64CABF45F2E6C6E9F9FA761B8E3 (void);
// 0x0000077B System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Add>b__86_0(System.Single,System.Single)
extern void U3CU3Ec_U3CAddU3Eb__86_0_m55F2977E64C3DC6A140656F4642E234E297EA53F (void);
// 0x0000077C System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Sub>b__87_0(System.Single,System.Single)
extern void U3CU3Ec_U3CSubU3Eb__87_0_m70F6CDAC565E868DF3DB08C4D5D903C91C97E41E (void);
// 0x0000077D System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Mul>b__88_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMulU3Eb__88_0_mEA68C07BD8094C0D21D810280DDE2D6D1E3A7231 (void);
// 0x0000077E System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Div>b__89_0(System.Single,System.Single)
extern void U3CU3Ec_U3CDivU3Eb__89_0_m97490AA5051A5D0B6BA05893C40F7CD1C50804B1 (void);
// 0x0000077F System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Pow>b__90_0(System.Single,System.Single)
extern void U3CU3Ec_U3CPowU3Eb__90_0_mE7043F932D7BBA9889818AA64C871E73777D890C (void);
// 0x00000780 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Min>b__91_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMinU3Eb__91_0_mA40A8E07FF09A8DA450AAF266AE4E7A905AAC413 (void);
// 0x00000781 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Max>b__92_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMaxU3Eb__92_0_mBA6F30F53097D174CDDE64F22989BC561E46F60A (void);
// 0x00000782 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Mean>b__93_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMeanU3Eb__93_0_m52D0B2430B29887774EBD8E6FBEEC3555DDEB09F (void);
// 0x00000783 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Greater>b__102_0(System.Single,System.Single)
extern void U3CU3Ec_U3CGreaterU3Eb__102_0_mCD50FD2D915139C53F005E258B7C4BBFB150DF24 (void);
// 0x00000784 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<GreaterEqual>b__103_0(System.Single,System.Single)
extern void U3CU3Ec_U3CGreaterEqualU3Eb__103_0_m8EF9184AEB4C2A4E2BF712F3C702D1739A5726DF (void);
// 0x00000785 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Less>b__104_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLessU3Eb__104_0_mB4FAB06C65353125DDAD0FF492D2D97CD6EF4D8E (void);
// 0x00000786 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<LessEqual>b__105_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLessEqualU3Eb__105_0_m70CC6207329C60C43330D2BAEAF886CF7F772CAF (void);
// 0x00000787 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Equal>b__106_0(System.Single,System.Single)
extern void U3CU3Ec_U3CEqualU3Eb__106_0_m180BD6680BD7CB44540305F3CB613A71E7C52F10 (void);
// 0x00000788 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<LogicalOr>b__107_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLogicalOrU3Eb__107_0_m5AECF339D86895427D67364D5BE40CBF8DAB4999 (void);
// 0x00000789 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<LogicalAnd>b__108_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLogicalAndU3Eb__108_0_m742DB81810678AA8AD51591F223005E6AC7A3D69 (void);
// 0x0000078A System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<LogicalXor>b__109_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLogicalXorU3Eb__109_0_m676199F6DDFEC5AC30354FE0C12E18D8286C9610 (void);
// 0x0000078B System.Void Unity.Barracuda.ComputeTensorData/ConvertFromOnDeviceFormatHelper::.ctor()
extern void ConvertFromOnDeviceFormatHelper__ctor_mAC24ADF64428C3AE1DA88256EB33838F66D4A2EF (void);
// 0x0000078C System.Single[] Unity.Barracuda.ComputeTensorData/ConvertFromOnDeviceFormatHelper::GetNHWCData(Unity.Barracuda.TensorShape,System.Single[],Unity.Barracuda.ComputeInfo/ChannelsOrder,System.Boolean)
extern void ConvertFromOnDeviceFormatHelper_GetNHWCData_m156051C950052D1641DAD3B11D22A48012BA6982 (void);
// 0x0000078D System.Void Unity.Barracuda.ComputeTensorData/ConvertFromOnDeviceFormatHelper::ApplyConversion()
extern void ConvertFromOnDeviceFormatHelper_ApplyConversion_m137A953B4EAF41E52223A4C38F4822B71C5710FE (void);
// 0x0000078E System.Void Unity.Barracuda.ComputeTensorData/ConvertFromOnDeviceFormatHelper::UnrolledInnerLoop(System.Int64)
extern void ConvertFromOnDeviceFormatHelper_UnrolledInnerLoop_mFD1A99913E870713D25BF32D3445094578D82D61 (void);
// 0x0000078F System.Int32 Unity.Barracuda.ComputeFunc/TensorDecl::get_ShapeId()
extern void TensorDecl_get_ShapeId_mBFE84999078BE027B38A5C2C463C92549B88C4BF (void);
// 0x00000790 System.Int32 Unity.Barracuda.ComputeFunc/TensorDecl::get_InfoId()
extern void TensorDecl_get_InfoId_mB6D6BC23AF9D32911D83B789DB460A0605AB0264 (void);
// 0x00000791 System.Void Unity.Barracuda.ComputeFunc/TensorDecl::.ctor(System.Int32,System.Int32)
extern void TensorDecl__ctor_m643E5715F2C3F9730F1D6740ED8ABB3AA8C0A67B (void);
// 0x00000792 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass75_0::.ctor()
extern void U3CU3Ec__DisplayClass75_0__ctor_m82D4A752B39692963C0FD12E6E2F5059CDB26918 (void);
// 0x00000793 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass75_0::<MaxPool2DInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass75_0_U3CMaxPool2DInnerLoopU3Eb__0_mA0653B6493E63E6F6689601DA35946B55C8E7CD6 (void);
// 0x00000794 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass77_0::.ctor()
extern void U3CU3Ec__DisplayClass77_0__ctor_m55C2B19E56CD26FC27B0B4F77065B0905CD56E55 (void);
// 0x00000795 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass77_0::<AvgPool2DInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass77_0_U3CAvgPool2DInnerLoopU3Eb__0_m9C5C20E0D430E908D1EA2E5704C632A19027AAE7 (void);
// 0x00000796 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass82_0::.ctor()
extern void U3CU3Ec__DisplayClass82_0__ctor_m7F7E083A15C2A1967AB2E0B511A45894C10A7019 (void);
// 0x00000797 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass82_0::<Im2ColInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass82_0_U3CIm2ColInnerLoopU3Eb__0_m5BAD6321FFED461CC407AB0AA18A904FC66C3406 (void);
// 0x00000798 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass86_0::.ctor()
extern void U3CU3Ec__DisplayClass86_0__ctor_mA21D00F80DD5FF23B65EA2E7CAB53A00700034B7 (void);
// 0x00000799 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass86_0::<DepthwiseConv2DInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass86_0_U3CDepthwiseConv2DInnerLoopU3Eb__0_mF201A7A54500AB6C861165DC7252737CCF0BF9F7 (void);
// 0x0000079A System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass87_0::.ctor()
extern void U3CU3Ec__DisplayClass87_0__ctor_m885381113C85A79EEF285693C46BD7265882CB64 (void);
// 0x0000079B System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass87_0::<ApplyPadding>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass87_0_U3CApplyPaddingU3Eb__0_m65FE7045E774364F8191C7F3700324DA467C4FA0 (void);
// 0x0000079C System.Void Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::.ctor(System.Int32)
extern void U3CStartManualScheduleU3Ed__33__ctor_mE034D88479A61CD207F99F44E86AA74A3189C3F6 (void);
// 0x0000079D System.Void Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::System.IDisposable.Dispose()
extern void U3CStartManualScheduleU3Ed__33_System_IDisposable_Dispose_m4EBAD4BB0C8822F7891C228EEF87EAA53FFC5C69 (void);
// 0x0000079E System.Boolean Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::MoveNext()
extern void U3CStartManualScheduleU3Ed__33_MoveNext_m0A9BEC765F7680286DEB46E3C5B46C176D732498 (void);
// 0x0000079F System.Void Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::<>m__Finally1()
extern void U3CStartManualScheduleU3Ed__33_U3CU3Em__Finally1_m61BCFBDDB982617FB19CED83114BB97CA0FF227B (void);
// 0x000007A0 System.Object Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CStartManualScheduleU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m75A1E6DA99DE45580EDB18986B983EE2CDCA12FC (void);
// 0x000007A1 System.Void Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::System.Collections.IEnumerator.Reset()
extern void U3CStartManualScheduleU3Ed__33_System_Collections_IEnumerator_Reset_m0C51F46D7A58A98ED7A59BDBB140A8CE7DFE3031 (void);
// 0x000007A2 System.Object Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::System.Collections.IEnumerator.get_Current()
extern void U3CStartManualScheduleU3Ed__33_System_Collections_IEnumerator_get_Current_mEDFBF8F4DB8AB1051117B857D9A18D0873D3AD5C (void);
// 0x000007A3 System.Void Unity.Barracuda.LinearLayerFusing/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_mB2D4FEAD01748226171901903B64D3BF80575FC7 (void);
// 0x000007A4 System.Boolean Unity.Barracuda.LinearLayerFusing/<>c__DisplayClass0_0::<IsLayerLinear>b__0(System.String)
extern void U3CU3Ec__DisplayClass0_0_U3CIsLayerLinearU3Eb__0_mFC9E4B9E56F7C20AE11E89ABA50D703BE844BB39 (void);
// 0x000007A5 System.Void Unity.Barracuda.LinearLayerFusing/<>c::.cctor()
extern void U3CU3Ec__cctor_m1324B997605B6625E84C85359D1DB385D5AE85C9 (void);
// 0x000007A6 System.Void Unity.Barracuda.LinearLayerFusing/<>c::.ctor()
extern void U3CU3Ec__ctor_m798523ACC4A4831BCC8C4C4B0B8B522689B60EC7 (void);
// 0x000007A7 System.Boolean Unity.Barracuda.LinearLayerFusing/<>c::<AreLayersFusable>b__2_0(System.Int32)
extern void U3CU3Ec_U3CAreLayersFusableU3Eb__2_0_mDCCD48B85F271515518BAF4DE271A68A7509B4FC (void);
// 0x000007A8 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing/<>c::<.ctor>b__6_5(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__6_5_m7EB573875FB1CE1BE47EA180C8415F289C9A1443 (void);
// 0x000007A9 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing/<>c::<.ctor>b__6_7(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__6_7_m0A2299AF9DD4CF11D0E7735601FA3D55CC645B3D (void);
// 0x000007AA Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing/<>c::<.ctor>b__6_10(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__6_10_m765EF1D4904D6F41D8A85DD4C13BBC9EE1BF8E81 (void);
// 0x000007AB Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing/<>c::<.ctor>b__6_12(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__6_12_mCF026C316D811E14326545DF7250EC13A0B28246 (void);
// 0x000007AC System.Void Unity.Barracuda.CSharpBLAS/SGEMMJob::Execute()
extern void SGEMMJob_Execute_m1035E462C7BED83C1B91349C462EFB7C8CB47A04 (void);
// 0x000007AD System.Void Unity.Barracuda.MatrixUtils/<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_m5A18DF215A1EF9545C7B6B06597C399139171E62 (void);
// 0x000007AE System.Void Unity.Barracuda.MatrixUtils/<>c__DisplayClass7_0::<MultiplyBlockUnroll8xhParallelWithPadding>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass7_0_U3CMultiplyBlockUnroll8xhParallelWithPaddingU3Eb__0_m8D2F76A268F58E93C5B17054629BAC9EF3005E92 (void);
// 0x000007AF System.Void Unity.Barracuda.ModelAnalyzer/<>c::.cctor()
extern void U3CU3Ec__cctor_m9654CE13C0C86B7B3C36B2FEC28B62117B5518F4 (void);
// 0x000007B0 System.Void Unity.Barracuda.ModelAnalyzer/<>c::.ctor()
extern void U3CU3Ec__ctor_mE2090FD7BD69F7BF6520E6ACF27BB278C7C759EA (void);
// 0x000007B1 System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindUnusedLayers>b__10_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__10_0_mE440F980ECB7D2082694761818DF15E65F8189ED (void);
// 0x000007B2 System.Boolean Unity.Barracuda.ModelAnalyzer/<>c::<FindUnusedLayers>b__10_1(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__10_1_m4BAF357BCE09EDFCF2CE5A58ACA8C5422B452D9C (void);
// 0x000007B3 System.Boolean Unity.Barracuda.ModelAnalyzer/<>c::<FindUnusedLayers>b__10_2(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__10_2_m1AB91900E499A1D0FB8B209DF28D87368E2D8598 (void);
// 0x000007B4 System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindUnusedLayers>b__10_3(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__10_3_m6EE33DF741B1359068A38F36614FFF22C7BC43CF (void);
// 0x000007B5 System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindBrokenLinks>b__11_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__11_0_m53A77C9520E25E339EC93049F1E838E57350D2FC (void);
// 0x000007B6 System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindBrokenLinks>b__11_1(Unity.Barracuda.Model/Input)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__11_1_m62EC7520DCA8689DD8FEC43906D4D0D840D88F9E (void);
// 0x000007B7 System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindBrokenLinks>b__11_2(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__11_2_m7E4F2DCF1444B6C0610CA517D59FC09967D902B8 (void);
// 0x000007B8 System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindUnconnectedInputs>b__14_0(Unity.Barracuda.Model/Input)
extern void U3CU3Ec_U3CFindUnconnectedInputsU3Eb__14_0_m5FB7156849C7D32EDE5EDA22405C5DFFCA44A62F (void);
// 0x000007B9 System.Boolean Unity.Barracuda.ModelAnalyzer/<>c::<FindUnconnectedInputs>b__14_1(Unity.Barracuda.Model/Input)
extern void U3CU3Ec_U3CFindUnconnectedInputsU3Eb__14_1_m3F7AC35C6C5C05A98FAF2650982AEC6303FAC958 (void);
// 0x000007BA System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_mEC4EA202D172376F10DAC04FEA2E6433A77DC48E (void);
// 0x000007BB System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass1_0::<RemoveUnused>b__2(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass1_0_U3CRemoveUnusedU3Eb__2_mB753AE3B54E606E75F4DBD5F05D0F6D1E42ED3AA (void);
// 0x000007BC System.Void Unity.Barracuda.ModelOptimizer/<>c::.cctor()
extern void U3CU3Ec__cctor_m6194BD5B784C8F6D6AC886D835D313FB6C2C463E (void);
// 0x000007BD System.Void Unity.Barracuda.ModelOptimizer/<>c::.ctor()
extern void U3CU3Ec__ctor_m40A6D11F301229468F69DA1D5246D3ADB3539B7E (void);
// 0x000007BE System.String Unity.Barracuda.ModelOptimizer/<>c::<RemoveUnused>b__1_0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CRemoveUnusedU3Eb__1_0_m09FEF45F58EEA98267C5F359FBD9E5A64702D6D5 (void);
// 0x000007BF System.String Unity.Barracuda.ModelOptimizer/<>c::<RemoveUnused>b__1_1(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CRemoveUnusedU3Eb__1_1_m35616CB90BEE6CE1C27ECF013D32BED3DFA46070 (void);
// 0x000007C0 System.Boolean Unity.Barracuda.ModelOptimizer/<>c::<FuseActivations>b__5_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFuseActivationsU3Eb__5_0_m830DB8BD52D323F2A260AAF025345F347DD97A41 (void);
// 0x000007C1 System.Boolean Unity.Barracuda.ModelOptimizer/<>c::<IsLayerNoop>b__7_0(System.Int32)
extern void U3CU3Ec_U3CIsLayerNoopU3Eb__7_0_m94754885243F6FFDC16AD904371DD310CE71F54E (void);
// 0x000007C2 System.Boolean Unity.Barracuda.ModelOptimizer/<>c::<IsLayerNoop>b__7_1(System.Int32)
extern void U3CU3Ec_U3CIsLayerNoopU3Eb__7_1_mA904784CD433FD4D6AB63C4AF4EDD8FCCEBE8EBB (void);
// 0x000007C3 System.Boolean Unity.Barracuda.ModelOptimizer/<>c::<IsLayerNoop>b__7_2(System.Int32)
extern void U3CU3Ec_U3CIsLayerNoopU3Eb__7_2_mF298BDCA5F1173D54F530111361D9B262152956C (void);
// 0x000007C4 System.String Unity.Barracuda.ModelOptimizer/<>c::<RemoveNoop>b__8_0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CRemoveNoopU3Eb__8_0_mAF9179FFF3575437AC36F4EC191D24F8CB60E2A1 (void);
// 0x000007C5 System.String Unity.Barracuda.ModelOptimizer/<>c::<RemoveNoop>b__8_1(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CRemoveNoopU3Eb__8_1_m465B43B47E9942F4B5A119EBBDF1173E0788D153 (void);
// 0x000007C6 System.String Unity.Barracuda.ModelOptimizer/<>c::<FuseLinear>b__18_0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CFuseLinearU3Eb__18_0_mBB6D2D3DBFF42F25715030E422890A330D5D4A09 (void);
// 0x000007C7 System.String Unity.Barracuda.ModelOptimizer/<>c::<FuseLinear>b__18_1(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CFuseLinearU3Eb__18_1_m9C96A4128AC40917BA75DF863557F426AA9CB708 (void);
// 0x000007C8 System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_mDA21A2179AECD3CC661C4D6061DEF614752A8CDF (void);
// 0x000007C9 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass4_0::<FuseActivation>b__0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec__DisplayClass4_0_U3CFuseActivationU3Eb__0_m76A01B2E8737F60A6D33A2BE6EA9A9CED4D611E6 (void);
// 0x000007CA System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m2826ED5543DEA406B0D58A7CF2D97D0CFACD5AA7 (void);
// 0x000007CB System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_0::<FuseActivations>b__1(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass5_0_U3CFuseActivationsU3Eb__1_mDF58CC6F1B0D6AB01CB4512E378F4E8494F55C74 (void);
// 0x000007CC System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_1::.ctor()
extern void U3CU3Ec__DisplayClass5_1__ctor_mAA5AF9DB6728C99248F9C51734C3AAB531F22F48 (void);
// 0x000007CD System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_1::<FuseActivations>b__2(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec__DisplayClass5_1_U3CFuseActivationsU3Eb__2_mDC9A86562922D60202793F15F13BA798C25F7F6C (void);
// 0x000007CE System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_1::<FuseActivations>b__3(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass5_1_U3CFuseActivationsU3Eb__3_m8976A1EFA95EF7F1A0ED0A81C448AA718FBA5D35 (void);
// 0x000007CF System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_0::.ctor()
extern void U3CU3Ec__DisplayClass16_0__ctor_mE9F64C9125078B3C0E4F32CC22F11BBE2BC145E6 (void);
// 0x000007D0 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_0::<PackConstants>b__0(System.String)
extern void U3CU3Ec__DisplayClass16_0_U3CPackConstantsU3Eb__0_mC03194024F04BDFA88031B67B80BD9C94CF50020 (void);
// 0x000007D1 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_0::<PackConstants>b__1(System.String)
extern void U3CU3Ec__DisplayClass16_0_U3CPackConstantsU3Eb__1_mC5AB961F5215DBD383E708D130AE53578982F387 (void);
// 0x000007D2 System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_1::.ctor()
extern void U3CU3Ec__DisplayClass16_1__ctor_m84E777C5205C8D61A094599BD2E74A232495C476 (void);
// 0x000007D3 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_1::<PackConstants>b__2(System.String)
extern void U3CU3Ec__DisplayClass16_1_U3CPackConstantsU3Eb__2_m0143C6DCFA921BDCD50F75D07ACE2470537F1CFF (void);
// 0x000007D4 System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::.ctor()
extern void U3CU3Ec__DisplayClass18_0__ctor_m150683584874772CA3D97E03080096A5B71F93B7 (void);
// 0x000007D5 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::<FuseLinear>b__4(System.String)
extern void U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__4_mEAA565945BE2CED248977754D49E1602CF2ADA9F (void);
// 0x000007D6 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::<FuseLinear>b__5(System.String)
extern void U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__5_mABC1F3727FE94F9C9C0C02C2AF9797DC6D3A5EB6 (void);
// 0x000007D7 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::<FuseLinear>b__2(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__2_mDC68077A91AC5FE517150E2CF43ABC108255F31F (void);
// 0x000007D8 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::<FuseLinear>b__3(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__3_mC107E9E6BC972B436451D7835BB75EB23D7573BD (void);
// 0x000007D9 System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_1::.ctor()
extern void U3CU3Ec__DisplayClass18_1__ctor_m5B70C3E8EE2CD4F17E5C338FF50F5B0004A833B1 (void);
// 0x000007DA System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_1::<FuseLinear>b__6(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass18_1_U3CFuseLinearU3Eb__6_mCA0A6B1D53F72F1B6DA00B56E2A0968B487167B2 (void);
// 0x000007DB System.Void Unity.Barracuda.StaticLayerOppComplexity/<>c::.cctor()
extern void U3CU3Ec__cctor_mF91B1BCEAA3DCC587F9E4FDDD2B767F78D946A2C (void);
// 0x000007DC System.Void Unity.Barracuda.StaticLayerOppComplexity/<>c::.ctor()
extern void U3CU3Ec__ctor_m0898F405AE2DC89531FAAB040C8BB0ECDC5CA22D (void);
// 0x000007DD System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_0_m28E7C312C56693BF2064D34D2C293980D412DBF0 (void);
// 0x000007DE System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_1(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_1_mDD0761F56C44BDE3B9F99FBC9F5E258D49F4E611 (void);
// 0x000007DF System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_2(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_2_m5814B7781EBEC87B70A76E571100573DAFBBC76E (void);
// 0x000007E0 System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_3(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_3_mD0030C68A75230B21C498D59C96F4E58EFDACCF8 (void);
// 0x000007E1 System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_4(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_4_m138E9093F2C0126B11E52B95DCFD3697B8B0A725 (void);
// 0x000007E2 System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_5(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_5_m2FF9B82B52307CA3CCBA4367B9F5561F1BABB387 (void);
// 0x000007E3 System.Void Unity.Barracuda.StatsOps/Transcendental::.ctor()
extern void Transcendental__ctor_mE0B084F3C360934317E5BE2735BADE658E55A217 (void);
// 0x000007E4 System.Void Unity.Barracuda.TensorCachingByShapeAllocator/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_mF5E1299A2A3EBBF17A613FBBE4CB815702178F18 (void);
// 0x000007E5 System.Void Unity.Barracuda.TensorCachingByShapeAllocator/<>c__DisplayClass13_0::<MoveToDevice>b__0(Unity.Barracuda.ITensorData)
extern void U3CU3Ec__DisplayClass13_0_U3CMoveToDeviceU3Eb__0_m024E8E550CAA6071C77C547E703DA9A8D1A6B7D5 (void);
// 0x000007E6 System.Void Unity.Barracuda.VerboseOps/<>c::.cctor()
extern void U3CU3Ec__cctor_mE3AEEE246901FF610BC59ACCC171D698794474A6 (void);
// 0x000007E7 System.Void Unity.Barracuda.VerboseOps/<>c::.ctor()
extern void U3CU3Ec__ctor_m2E8E82B89A3A883ACD56007D19AD59C815DBA1C5 (void);
// 0x000007E8 System.String Unity.Barracuda.VerboseOps/<>c::<Unity.Barracuda.IOps.NonMaxSuppression>b__97_0(Unity.Barracuda.Tensor)
extern void U3CU3Ec_U3CUnity_Barracuda_IOps_NonMaxSuppressionU3Eb__97_0_m4435EB675669D75AF305A2BE7148ACC851B4AF21 (void);
// 0x000007E9 System.Void Unity.Barracuda.WorkerFactory/WorkerConfiguration::.ctor(Unity.Barracuda.WorkerFactory/Type,System.Boolean,Unity.Barracuda.CompareOpsUtils/LogLevel,System.Single)
extern void WorkerConfiguration__ctor_m2A2F5BF4B0F6EAA327B9E9C9C78CA0E737669CF7 (void);
// 0x000007EA System.Void Unity.Barracuda.Layer/<>c::.cctor()
extern void U3CU3Ec__cctor_m38E729AA218EF866AD115DABFE5285691A218AF5 (void);
// 0x000007EB System.Void Unity.Barracuda.Layer/<>c::.ctor()
extern void U3CU3Ec__ctor_m6D2460A92F887118B4055E4A361C5919D8BF7D90 (void);
// 0x000007EC System.String Unity.Barracuda.Layer/<>c::<ToString>b__21_0(Unity.Barracuda.Layer/DataSet)
extern void U3CU3Ec_U3CToStringU3Eb__21_0_m18AC0BC8B3D6C4B5F2992C19FE66C190ABAD0681 (void);
// 0x000007ED Unity.Barracuda.Model/Input Unity.Barracuda.Model/Input::WithName(System.String)
extern void Input_WithName_m8DEE62CF7E1B57ED764A2478790EE4A2AC09E635 (void);
// 0x000007EE System.String Unity.Barracuda.Model/ImporterWarning::get_Message()
extern void ImporterWarning_get_Message_m67AFEDE7CBFB245539782838AA0117F1965FCE3F (void);
// 0x000007EF System.String Unity.Barracuda.Model/ImporterWarning::get_LayerName()
extern void ImporterWarning_get_LayerName_mB844902E0152F48B1432007188110B55F4F98338 (void);
// 0x000007F0 System.Void Unity.Barracuda.Model/ImporterWarning::.ctor(System.String,System.String)
extern void ImporterWarning__ctor_mB5FF345B4EF4ADACF7AAC3BD52E8C7F8ED280674 (void);
// 0x000007F1 System.Void Unity.Barracuda.Model/<>c::.cctor()
extern void U3CU3Ec__cctor_m7E86582D58DE596BDDCD014B7C3E5D27F6DCC85D (void);
// 0x000007F2 System.Void Unity.Barracuda.Model/<>c::.ctor()
extern void U3CU3Ec__ctor_m9AC74209EF904FBDC0C20B5C96B0D90466A1BB07 (void);
// 0x000007F3 System.String Unity.Barracuda.Model/<>c::<ToString>b__16_0(Unity.Barracuda.Model/Input)
extern void U3CU3Ec_U3CToStringU3Eb__16_0_m11242CF24CF6A66DDAF5157731F351927ECB5ADD (void);
// 0x000007F4 System.String Unity.Barracuda.Model/<>c::<ToString>b__16_1(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CToStringU3Eb__16_1_m712717DDB1123B28C8D97305556CC36DE7D11F24 (void);
// 0x000007F5 System.String Unity.Barracuda.Model/<>c::<ToString>b__16_2(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CToStringU3Eb__16_2_m633C24DE26004EC3026558E33B635F0906A06A2B (void);
// 0x000007F6 System.Void Unity.Barracuda.ModelMetadataExtensions/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m84E0268A6E13BFFB219EBF9A557EFFACBD5F0980 (void);
// 0x000007F7 System.Boolean Unity.Barracuda.ModelMetadataExtensions/<>c__DisplayClass2_0::<GetDownStreamLayersCount>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass2_0_U3CGetDownStreamLayersCountU3Eb__0_m27C1A87B20C25B46745444FDE37E0B1942740BE2 (void);
// 0x000007F8 System.Void Unity.Barracuda.TensorExtensions/<>c::.cctor()
extern void U3CU3Ec__cctor_mEA5046D26C8B22F946701DFF87F9CF27BA2282C3 (void);
// 0x000007F9 System.Void Unity.Barracuda.TensorExtensions/<>c::.ctor()
extern void U3CU3Ec__ctor_mF564A86677F89FFA0F63320DFBE82B82A2285ADE (void);
// 0x000007FA System.Int32 Unity.Barracuda.TensorExtensions/<>c::<AsInts>b__4_0(System.Single)
extern void U3CU3Ec_U3CAsIntsU3Eb__4_0_m3C07C6CB0EDBA72F7FB769664200CCD079AC18CB (void);
// 0x000007FB System.Void Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_m99135328072648CB742367568ACCD2E0A236718B (void);
// 0x000007FC System.Void Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_1::.ctor()
extern void U3CU3Ec__DisplayClass13_1__ctor_m27418236482C8737DFB265F92CF052DCC2CA01BA (void);
// 0x000007FD System.Int32 Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_1::<ArgSort>b__0(System.Int32,System.Int32)
extern void U3CU3Ec__DisplayClass13_1_U3CArgSortU3Eb__0_m530CA07C3CBE297593403E6A65ABE2134EAAF9CA (void);
static Il2CppMethodPointer s_methodPointers[2045] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BarracudaBackendsFactory_ResolveAutoType_m28CE935B0E3949FBAB7FBC5641823DAB7D3C306D,
	BarracudaBackendsFactory_GetBestTypeForDevice_m52385C708937A9057B27288BA0F6A179635DE46E,
	BarracudaBackendsFactory_ValidateType_m34E32F266815B96A6E83EAC33B102646CEF46088,
	BarracudaBackendsFactory_CreateOps_m39450C66A43DC48F7A4DA2D5D4B7D04B17D0618C,
	BarracudaBackendsFactory_CreateWorker_mAEC4CBBD3D900EAABB52844AEBA3B74CD4122C10,
	BarracudaBackendsFactory_PatchModel_m409963E090FD3F6BE798240D2F6A6DE8FFC8B5A2,
	BarracudaBackendsFactory_ValidateModel_mCF3673E8EB821D4C16AF452CB79D94018E13EE1A,
	BarracudaBackendsFactory__ctor_mFF7FD99D000185A98984AF97188DF9BA476D089C,
	BurstTensorData_get_fence_m2B4B782416E6B3953934D5BD9D4D712948B8DADC,
	BurstTensorData_set_fence_mD28DCC2FA467E6FA393FDB0662C461E4B917CD8A,
	BurstTensorData_get_reuse_m75E91005BA79E385DE70077EE91FE82DA60DEC29,
	BurstTensorData_set_reuse_m29230C8D79E164FECEB55C170123BA2378F1887B,
	BurstTensorData__ctor_m21CF799109D17AFEBEC646237F43E3579D265C2C,
	BurstTensorData__ctor_m1E537EE48A6F319A4D20202FCB7AFCF2DD157FE5,
	BurstTensorData__ctor_m23133BF1AB9A5C6577F9F6120ADCEAEF5FEEF4B1,
	BurstTensorData__ctor_m718E95D48B410BE608887CB8B63AB6DF36203B0A,
	BurstTensorData__ctor_m61AD92B5321F06BDC48ABEF0E20DC5759713FCF4,
	BurstTensorData_Finalize_mF3E2BB55001CC06CFFE85273E29BB98D6F1A4E17,
	BurstTensorData_Dispose_mAC90562AB7296D6DD47A9A5D70D76D89CD55C75C,
	BurstTensorData_CompleteAllPendingOperations_m02AECFE93EEF99880D685B8807A8664631DEA350,
	BurstTensorData_Reserve_m3223EAB628E3424C1C0104BA1E08FDB38455F13E,
	BurstTensorData_Upload_mF16C68421FE96EDEE9AACFEDCB8B6CAB3CA085F5,
	BurstTensorData_Download_m23B9A90D894DBD38B352E129429030C7E23C3A9C,
	BurstTensorData_SharedAccess_m2B8F6C615AE2E83EA790FE3466F1C11E3F4CE9D6,
	BurstTensorData_ScheduleAsyncDownload_mE9BC225019B56490507EB0FD17FC187726673984,
	BurstTensorData_ToString_mD44067BF647564D5679D0164DA4F720AAD6BB2B9,
	BurstCPUOps__ctor_mA244377CF8A3120047C6D490B40756A73A73A834,
	BurstCPUOps_Pin_m5FA0BD2B0A9B5B2315CB49F1EAB58BFFB066B064,
	BurstCPUOps_Prepare_mB357F7CFFD1509F57A68F8543601A1BF29CA6F3F,
	BurstCPUOps_Dependencies_m599120DD91F207BC76768413FDCECA505347DFE0,
	BurstCPUOps_Dependencies_m5D89C51B472A907C0561C22A6775C2F4F8F01CCA,
	BurstCPUOps_MatMul2D_mEC3152702129D760AEA118D966C8E632C80CFC1F,
	BurstCPUOps_Dense_mC9FB27CC7A07F261CF885B1F7A04ED2DC75E7163,
	BurstCPUOps_Conv2D_m9F397666E79C7B4FD3EF9A90FF634F55C92185D9,
	BurstCPUOps_Conv2DUsingIm2ColSliced_m8BF3EB7863E93A3641B24D290D8AD831F5883A7F,
	BurstCPUOps_MaxPool2D_mF3C4EEB1EE50AA41E6390A9AC19A2728E2755B78,
	BurstCPUOps_AvgPool2D_m0BAD3431C261CEB8DC7C9D55B811417437D76238,
	BurstCPUOps_GlobalMaxPool2D_m46DBC404BDB7B30EEA384FE9646366EB08DF716A,
	BurstCPUOps_GlobalAvgPool2D_mCB53AE21A818616F414AB4E3F9BFE12C3719C58F,
	BurstCPUOps_DepthwiseConv2D_m24C3E201F83D90C634A61689E4E810DD73B3AD4A,
	BurstCPUOps_ScaleBias_mA2AC56C38DAB9FE041DB2AB600BC1A18A0F7B96A,
	BurstCPUOps_Relu_m18A142F16CD93ABF40E9C27B3CAC2A1ABA1864C2,
	BurstCPUOps_Relu6_mCD7D2C2F484A03D718C7669BF0F89CD7C266A4BA,
	BurstCPUOps_LeakyRelu_mEBEE7DC7F91816909CFDD5439D718D37E1E11263,
	BurstCPUOps_Tanh_m89D486984258AA947DA140FB38BE30398860162F,
	BurstCPUOps_Sigmoid_mE9137DAC74FE1F322960873EF71660BD44AFE010,
	BurstCPUOps_Elu_m8AB640CD7C8CB3BE8B7B0F6C8EEE644C349044EF,
	BurstCPUOps_Selu_mF404571276085155FDBF21C4FF121549F9198533,
	BurstCPUOps_Swish_m99064ADFC5C531AA0B2C9B6F2F88F72977197628,
	BurstCPUOps_PRelu_m81BE68AF2324D2DDAB335AE84EFB2978BB56038F,
	BurstCPUOps_Softmax_m9F19A219EC95C439B6F862E609EA9C70F50012EE,
	BurstCPUOps_LogSoftmax_m0AC75FF937F9BAC747091712E75A0C6352B1045D,
	BurstCPUOps_Abs_m2277D22F319E1E84769BC316083A98536A6A6898,
	BurstCPUOps_Neg_mCF0CC4E5B7B8CEF22A5EDDA68A994368B92CB67E,
	BurstCPUOps_Ceil_m8D624C7988441067B8A161EE1807BF6B563A3D15,
	BurstCPUOps_Clip_m39EFE7A9CC4366D2B63F8E567B23AD9C3F839215,
	BurstCPUOps_Floor_m991915B7118CA3BF4268DC412D1F6308F36D35B9,
	BurstCPUOps_Reciprocal_m8BC546084C618EAB1F6093CE410924072029C075,
	BurstCPUOps_Pow_mF59120997DF5851F73DE44536E9214528A119C29,
	BurstCPUOps_Exp_m6F3E0472D6AAE4FBFEDFB8C7160CA554178293E9,
	BurstCPUOps_Log_m436E1580E68CBB6EB1A94F5C7922C565112A2CA5,
	BurstCPUOps_Sqrt_m3FA20019E3C125A4F1DA5EA28C295CC25D7AA476,
	BurstCPUOps_Acos_mAFD3734D98AA336FA6772253E62E2C0C2A357470,
	BurstCPUOps_Acosh_mC54FEFAAAAC886D28D7FC50BE0133916D5F9AD65,
	BurstCPUOps_Asin_mD68E0EA4F5C31F2EAB23888A29EBC8B5DACDA1FF,
	BurstCPUOps_Asinh_m07D7C6CBF1BB3B86ACEC0770F7FF016DF965A138,
	BurstCPUOps_Atan_m0EE9241CC4A161C9202049AD540097CDF15953DC,
	BurstCPUOps_Atanh_mEB222A29279C0242D49F6D290AB6B65A9E241345,
	BurstCPUOps_Cos_m17F00E2995DD303884E216197F437B1D43A4B441,
	BurstCPUOps_Cosh_mA7C29EDC3D7F7CDDE49EA71078B1D00C2D29520D,
	BurstCPUOps_Sin_m5DBBF2007AA443F4B72C6EAC0B6C7134D609B468,
	BurstCPUOps_Sinh_m7C52065544C1D4BC57ADC507868C2744949BB422,
	BurstCPUOps_Tan_m2779034F91A3845E7FD2505DBFAB3B0F70871966,
	BurstCPUOps_GenericBroadcast_m010297A7C770F6186A7594F07F9E11187F31D9BF,
	BurstCPUOps_BroadcastAdd_m44717BC40F41AF22FCD4B2A7EA02684D6D2F13A4,
	BurstCPUOps_BroadcastSub_mB761D423822CAFF926072243FAAE0904394580BE,
	BurstCPUOps_BroadcastMul_m5A57AAFC94A7AF5C4E1E419A6929D34EC2AEDD77,
	BurstCPUOps_BroadcastDiv_m54EC6772CBA05AA5AC2FC6ECB7C3746B3F1AED7B,
	BurstCPUOps_BroadcastPow_mF328C34F6C521BD36BC7E6C3D676B07FAD09445D,
	BurstCPUOps_BroadcastMin_m402EA5F596B7593768121F2154B2D902BF93B5E3,
	BurstCPUOps_BroadcastMax_mB3E0BD9E99979708EF01169E92647E85078CBE02,
	BurstCPUOps_Add_m20DD2B08FCA9E03D88FDE9D7EFB981935A743F91,
	BurstCPUOps_Sub_mD5F75F2E8754D7923DD37E816449F8AE9A59A685,
	BurstCPUOps_Mul_mE7F119785256E495ED169607DE48D5749387D5E2,
	BurstCPUOps_Div_m5A1DBD771D1DE17DDB02108D89111F4817767117,
	BurstCPUOps_Pow_mCBBB6266B7F183A848F3949298686494200D2F7D,
	BurstCPUOps_Min_m2417A09A0F1782FA40BC980A5C0EB8493E6C4BB1,
	BurstCPUOps_Max_m836D0B65337096F3124B797F17D241C2813D51AE,
	BurstCPUOps_CopyAndReshape_mF81B6E4B4A840A9732090D68148740F80A1FCBFB,
	ComputeKernelLibrary_Dense_m927AD0845D3C3C28678A449B3353599D4B351A25,
	ComputeKernelLibrary_IsT8x8_R8x8KernelValid_m17D81DD26736477EE192181271393079786FC2FA,
	ComputeKernelLibrary_IsT2x32_R8x8KernelValid_mA0B3DC86744A28792E32ADF9874D172460316D8C,
	ComputeKernelLibrary_IsWinograd16x16_R4x4KernelValid_m6EF71B5B3956738D592EAFAA392AF118ABAB4AE0,
	ComputeKernelLibrary_Conv2D_m017FD7EB24D1F1A5BB24107824377E507EB84BC4,
	ComputeKernelLibrary_DepthwiseConv2D_mCF8D37E3AFD0EFC1BFB4741E6C1500333703E7D9,
	ComputeKernelLibrary_Conv2DTrans_mF2022E7DFBEC0492E137729ADC22E3EE9592923D,
	ComputeKernelLibrary_Activation_m845A8ECC733C74B6E7D7B5BC40AF010EED7A34C0,
	ComputeKernelLibrary_PRelu_m29F4EA6B588A9BD6799B810FB31DDBD7A3105E17,
	ComputeKernelLibrary_Softmax_mBFF42B167052DFF334A932D1E581F7360D0CEF9E,
	ComputeKernelLibrary_LogSoftmax_m85F14E0BDEA1168DE0E5069975D8CB9A946092CC,
	ComputeKernelLibrary_ScaleBias_mDCA85EAC54C5D966603AEA2DEB5A972B02F6BB84,
	ComputeKernelLibrary_Upsample2D_m3643D2CD8A89E196A65607D82C74FC7A7028936D,
	ComputeKernelLibrary_Pool2DReduce_mC3AD7B27895912FFCE8309404D96CEFC67B8295A,
	ComputeKernelLibrary_Pool2D_m8F9B31F20B553F1C3EEF463EFF561DB72271423B,
	ComputeKernelLibrary_PoolAvgVar2D_m251441C8AA5FF98A25F3753C36023FF6BFFA94AD,
	ComputeKernelLibrary_GlobalPool2D_mA696BCB34FCDF34425D771CFC76496DB318214BD,
	ComputeKernelLibrary_NormalizationTail_mB6D322CE5CE98CD3E02A79D5791E6480BD510D5A,
	ComputeKernelLibrary_Copy_m4456EEA3204AE2A815E9F4D4E1447CBCCF6A65B4,
	ComputeKernelLibrary_ReshapeFromNHWCModel_mE1C9773604D1EAE25094F128D0A5AE52065D5D78,
	ComputeKernelLibrary_Padding_m23361A5216936B0C8C0B9FF16FE4556F8B34C599,
	ComputeKernelLibrary_Broadcast_mDB9646682D72D04A06764AE59DEF2E712663FAED,
	ComputeKernelLibrary_Int3_m773A827448DAC87E1790F87C3E6DAEF1E2820165,
	ComputeKernelLibrary_BigO_m7C61D2EFC8A784DF9A58EA59C7BD0BD3DBF47A34,
	ComputeKernelLibrary_StrictAnd_m49B6BA8A04156AFEBE875BFF7C26F3E7430576A4,
	ComputeKernelLibrary_Strict_m78154B83BD98CACF54FC9E68E09A7D0B6E8E9322,
	ComputeKernelLibrary__ctor_mBE4528DE25661C5A94DB9370103B5AFD6763BF55,
	ComputeKernelLibrary__cctor_m04606DBC6355C9BBEB79AD66CBED61642D179164,
	ComputeKernel_get_shader_m0D447F51A2319E95F356F6409F4003CA216C6A81,
	ComputeKernel__ctor_m552489B273AB8DB0CEA61A187E41A6392758D96A,
	ComputeKernel_SetTensor_m238FF4E5BD04D539AB1B60437D05C37831834F6A,
	ComputeKernel_SetTensor_m9753CC570CA8E7CC3889160611D26023B4F83005,
	ComputeKernel_SetTensorDecl_m3D81D3C1964201D26BECA256815ABA4672B7FF90,
	ComputeKernel_SetTensorDecl_mEA777019F6EA126001772B6D6D0BF1619DF917C4,
	ComputeKernel_SetTensorBuffer_mDA34F2A92056E075A8640D9A4B4960FCAE647A31,
	ComputeKernel_SetTensorBuffer_m257F015B13D22F03617043A780612B46A0D6A944,
	ComputeKernel_Dispatch_m056450E3439528399CDB0710C7C0B694CE02F1E5,
	ComputeKernel_CalculateEntryScore_m6267B58821BB5B0416664F72AC33340CE92D8E5E,
	ComputeKernel_BestKernel_mECBD57B0FD95E70D6F6F07F17D552AB52F5898D5,
	ComputeOps__ctor_m91204BBA1F07E7F7BA1008C28771EB3DF835E5DD,
	ComputeOps_BestKernel_m8015CD19B0395FA5F682C179BCA2EBC285C4E197,
	ComputeOps_CompileKernel_m643DAA0664FC2BD9D08264EA76FBBA659497F8EC,
	ComputeOps_MatMul2D_m21CCB12A0D26E904AD2E61624E8543F454AB99A3,
	ComputeOps_Dense_mB36C149B3ADE6BBFBBED1CBDA7A1FDE7088F28BA,
	ComputeOps_Conv2DWinograd_m80B0A61B2BE1C52A36F11314F1E570C783416F6A,
	ComputeOps_Conv2D_m69BDCD90F5E5456C0468D967C78831AEEBC2E27F,
	ComputeOps_DepthwiseConv2D_mD9713EE32A9C8C9310085092F69BF82B85F2DE96,
	ComputeOps_Conv2DTrans_m06C266849C93E7AE04E83BA1F25334B4945CB582,
	ComputeOps_Upsample2D_m527F5C2A0355425B2B387913ED3892C561071954,
	ComputeOps_Pool2D_mC393A59B63BBCE8A22A1DEA87C074A00F870F68A,
	ComputeOps_GlobalMaxPool2D_mFDA638AA82AD1CF20FB7C054523F2FA51AC962A4,
	ComputeOps_GlobalAvgPool2D_m7F7250195BB931464FFCBE000CCD3771DDFE4C0C,
	ComputeOps_GlobalAvgVariancePool2DReduce_mA1355CB84A85A27D3568217064880DF165BC9CA9,
	ComputeOps_GlobalAvgVariancePool2D_mB3D4DD371A1AC01E93F3B720CEE95D0940F44F2D,
	ComputeOps_GlobalPool2DReduce_m378816F5D14765084E3FDB7E9B4BBD3ECF85C4D4,
	ComputeOps_GlobalPool2D_m637CCA1F2726D408645F3F2271D29A009377AE16,
	ComputeOps_ScaleBias_m79B5A84BB8806000AC439713E218FBDFD6AED982,
	ComputeOps_Normalization_mAB61776FC9AB0F91A8CFF29BC3A04E0212C073CF,
	ComputeOps_Activation_m69E5A616914E1F16A651396B2972B9913E83FEDB,
	ComputeOps_PRelu_m7D30C8D1986C875BACE52BB1AAC1144CE2EE73CD,
	ComputeOps_Softmax_m08F974AAE2A5B2894A0B61F37738BCE6D5C731E8,
	ComputeOps_LogSoftmax_mAE9C89A65E223EE2B5DDB588A7BB9E3E92533B14,
	ComputeOps_RandomNormal_mA0A49C2D3FCDC8FCAF9DA371A518FD784B402968,
	ComputeOps_RandomUniform_mC632C7A35405E41CFF97D2185D5BB046DB608AA0,
	ComputeOps_Concat_mE42D264AF6C1FE9E407B4C58807C997513EBFAF0,
	ComputeOps_GetInputTensorStridesOnDevice_mB89CF8A83E745BA7A14C99C38EF913862A2F6BB8,
	ComputeOps_ElementwiseWithBroadcast_mC3586A8978BF6BECF580C36ABF82D4D36DDB644A,
	ComputeOps_ApplyPadding_m84A7429DF9AF9426BA4569BA6423A12CC5891408,
	ComputeOps_LogicalNot_mAF2DF864BE1BF681A3F1B4962AA5ABA7017CBD44,
	ComputeOps_Where_mE33E2EF8E253C9C8CEEAAEA909DF1A4BEFC29F34,
	ComputeOps_CopyAndReshape_NCHW_mC8434DB855CF81E54258498D86E0BBE5808C24B4,
	ComputeOps_CopyAndReshape_mBE78463CD4614BD3CE225D0634E70BEF5016E951,
	ComputeVarsWithSharedModel_Dispose_m53F35E818E246B266C32D1271720FD2EFD97D10F,
	ComputeVarsWithSharedModel_PrepareLayerInputTensors_m8281D819EED363597A5081DD03A1170C59C425C9,
	ComputeVarsWithSharedModel_CreateComputeBufferForModelTensors_m9FE13162F42C5CA05D4A47506A9A38140DA2A411,
	ComputeVarsWithSharedModel__ctor_m39E3A59EBDE7BEF89E3DCD0C5F208A648B25CA12,
	ComputeDebugUtils__cctor_m83C12BD3CCB5B742DF197286CA154E2C219574B8,
	ComputeDebugUtils_LogAssertion_mADEB6EDD58399AFB776F8FF9F7791164A890C56F,
	ComputeDebugUtils_PrepareDispatch_m43C3237215D40F0CA3AC232686260DFB1D2C502E,
	ComputeDebugUtils_VerifyDispatch_m3E6C40F27B354A7D27FDE77595AB8B8FE0B38A4A,
	ComputeDebugUtils__ctor_m4EDC24A509AA53400E157EB80FCA40829BE0E9EF,
	PrecompiledComputeOps__ctor_m1324EBEBEE7412AEB34D306B640662327F958F39,
	PrecompiledComputeOps_NewComputeBuffer_m2ACF248AF6128BF0F4DFBF4BE6923C207CEAC029,
	PrecompiledComputeOps_ResetAllocator_m536262A7ED56A1E4AFC086F16F4D47F5E839019D,
	PrecompiledComputeOps_CalcModelWithInputsHashCode_m503DECAEFF10F75C59503A003C8C0CF3F06E4D3D,
	PrecompiledComputeOps_PrepareConv2dWinograd_m953B6C60F5D4E9FF793C1E9BAD238E0D61B3F621,
	PrecompiledComputeOps_PrepareConv2DTrans_m6E2227D97B667FB3759B19DD39057B80489E9B2E,
	PrecompiledComputeOps_PrepareModel_m212A36FC70AD2F4DE6AAC14F4DB0689A672F1638,
	PrecompiledComputeOps_PreExecuteLayer_mB07049A8AB9665F69FA42CC65BF68BC2744A0BC1,
	PrecompiledComputeOps_ApplyUnsupportedFusedActivationIfNeeded_mD7FEE6FB4E63DD109F419E06302644B965D7F170,
	PrecompiledComputeOps_Dense_mB0DB65FB26BF1728B70A44C15959A83B5937896A,
	PrecompiledComputeOps_Conv2D_m6EADEEB3293A4C862D5319341CEA68FFC2ADA95B,
	PrecompiledComputeOps_DepthwiseConv2D_m49EF0A8B1046727495F361EF10D66BC89EE46DB3,
	PrecompiledComputeOps_Conv2DTrans_mD593A52789D40E7AD2D650C40FBE989929457D58,
	PrecompiledComputeOps_Upsample2D_mE2F69DC8FAFAC05F474424A926609F30897587BC,
	PrecompiledComputeOps_Pool2D_mB5276E6025E362BFFD2779883DA563A4544EA46A,
	PrecompiledComputeOps_ScaleBias_mB13EB708BE89534B4D731CB9CE850382FC562521,
	PrecompiledComputeOps_GlobalPool2D_m0632D3B083BE9F4634C3A9FF458523E313F33EF4,
	PrecompiledComputeOps_GlobalMaxPool2D_m284BF1F093178A962C882C7B3F74E691B4391B83,
	PrecompiledComputeOps_GlobalAvgPool2D_m98B876A705B0F0B08A855FD73F37C71A6B2E80EE,
	PrecompiledComputeOps_Normalization_mB76FB404D339F869F3BA65F9076FEBC94B2CB2CD,
	PrecompiledComputeOps_Activation_mC424B15AA6409B04AF4065FAD564427138D5D020,
	PrecompiledComputeOps_PRelu_m79133E80CDFEE1784689BF77E86E771BB1555237,
	PrecompiledComputeOps_Softmax_m9EDFDC51A532206D3AD5803641C046805D9895C7,
	PrecompiledComputeOps_LogSoftmax_mDB1243AE50A4CE9D308AEAECDCAC7696DD87C955,
	PrecompiledComputeOps_ElementwiseWithBroadcast_mEDAE28828CA413F66147B72ABD517071E162019B,
	PrecompiledComputeOps_Concat_mC129501AE0473C455BD16A797C2525411ADA6580,
	PrecompiledComputeOps__cctor_mC62AEF19638218ABD44DF2B1729FB92D7DE593A4,
	ArrayTensorData_get_array_m836519BC3644D59738EEB8ADE8425CC76824357C,
	ArrayTensorData__ctor_m42BBDDD0588AA63AA3ACD8CD46B6CEF0AA9DC1C0,
	ArrayTensorData__ctor_mCDC62F547A97D8A855016D648295412F1EBBE796,
	ArrayTensorData_Finalize_m1B9012A7982FF98C490235FFAE0B02FF12023334,
	ArrayTensorData_Dispose_m0A1ABE5D48423B861B0866EBF0B2610EFC563DCE,
	ArrayTensorData_Reserve_m61339451429776DFF1315B1691FDA2AB54800877,
	ArrayTensorData_Upload_mB74B0CBC8F93CE893E9443024535F4F8A7749B60,
	ArrayTensorData_ScheduleAsyncDownload_mA8E070B01F28CBD1D61DCDCFE95CBAB7CDBA586C,
	ArrayTensorData_Download_m02921B321095079F08ADF0680683086D512D1E44,
	ArrayTensorData_SharedAccess_m8B5C1DE86E6CEABFEBBEB4AD8E328FE2E0540065,
	ArrayTensorData_get_maxCapacity_m0D069231C0CC3AE4669D009E5606DB0A9D7F2441,
	ArrayTensorData_ToString_m1C787E8CA41F36C3857B258161FA99804A5208CD,
	SharedArrayTensorData_get_array_m6740FDF32CB957B6A5003ABB907E9B77D49A4BFD,
	SharedArrayTensorData_get_offset_m52686EF31C240E34B1990F5DB478F46FE27AE03D,
	SharedArrayTensorData_get_count_mF2816181483F62C6ED11F0C71D23BA05483F8BE1,
	SharedArrayTensorData__ctor_m7FC6C181E8420A72F4D2BD18A7FC76A34D2A3BE2,
	SharedArrayTensorData_Finalize_m2839DDED1244F08F201D6E01CD4C6763B4373D3D,
	SharedArrayTensorData_Dispose_m4D5A6F8758CC266967AC42B742B9D5AAC8C9C527,
	SharedArrayTensorData_Reserve_m2F7A66809956297CD24742339F4081A56186591F,
	SharedArrayTensorData_Upload_m141677D60D3D71AA093AE664D749742740F0C073,
	SharedArrayTensorData_ScheduleAsyncDownload_m76BF54E4A56E1475FAD4AA3FE695931CD5846901,
	SharedArrayTensorData_Download_m2E08C69189574E40294E63D479F342B5B2BEEEE9,
	SharedArrayTensorData_SharedAccess_m487C0052054B51677362050FFE921F5CFB0FE695,
	SharedArrayTensorData_get_maxCapacity_m0DFD32325D83266F1A4A66B83C3ED43A4403806F,
	SharedArrayTensorData_ToString_m79DA31FF4DD6F0C7901D085DDEED6E138EF1EE60,
	ReferenceCPUOps__ctor_m187AC0503D8A1EBBC71CBD34EBB16C4A6DF368BA,
	ReferenceCPUOps_NewTensor_m3394A6CA474BC120BB32B2C42C967BF96B974805,
	ReferenceCPUOps_NewTensorLike_mFD9FAAF62870BC5BBF74BA92B48F7CCDF3650D93,
	ReferenceCPUOps_NewTensorLike_mCACFC647D88F2F880616AEB793F01B02417C6A16,
	ReferenceCPUOps_NewTensor_m7CC1AD7F8CF8239DE70777AB904A9B57217B4CFA,
	ReferenceCPUOps_NewTensor_m651AED9E8E92BA4B9A9CFB80BA2D81315BEB2BDE,
	ReferenceCPUOps_ResetAllocator_mCE6FC9B1E0F58930FE50727DB1D27223AB6BD24C,
	ReferenceCPUOps_ApplyFusedActivation_mE5807BB74FCE09F3FC435976826CA4F1D953B4EB,
	ReferenceCPUOps_MatMul_mA5D9FB55168B23C7E008DE206FF90CE2A95DCBF2,
	ReferenceCPUOps_MatMul2D_mB4378FF67F57ACF97E458BD736870BB585B14327,
	ReferenceCPUOps_Dense_m3E8898E45AC98C8F738385358A55F87D49C529B3,
	ReferenceCPUOps_Conv2D_m3F8A6671C22A6F381FDFE04EFF100FB80A33C1BB,
	ReferenceCPUOps_DepthwiseConv2D_mB4611A97CAFF6BA7DBBC0C7B457BC663B47E5BF6,
	ReferenceCPUOps_Conv2DTrans_m733D612FED875543A5529F06519A4EDF0A84FDA6,
	ReferenceCPUOps_Upsample2D_mEFF601B3399E2D6861C2DB35C6A7D384493D66D8,
	ReferenceCPUOps_Resample2D_m46C1CE04BE49B88DF39E48BFE10938FA77420667,
	ReferenceCPUOps_DepthToSpace_m3FA276D7388EA94E1CE6C3CC50332FF5424E59E4,
	ReferenceCPUOps_SpaceToDepth_m6F6651C39BC6ADBD4EE0767A087A25B5DC7EE21C,
	ReferenceCPUOps_MaxPool2D_m41BE51753BF206A1838799C09414D811FD2F1827,
	ReferenceCPUOps_AvgPool2D_m22F95391C12745DF51FBFAFB68A63F6C51575CBA,
	ReferenceCPUOps_GlobalMaxPool2D_mBA717FADAB1C5B7B1CDCA41E1FBEED7E1817924B,
	ReferenceCPUOps_GlobalAvgPool2D_mA789567EC0537E87B81737D9752472B8216D7F9D,
	ReferenceCPUOps_GlobalAvgVariancePool2D_mEB90D19A498FEC509BB7B85752DCEBE302407122,
	ReferenceCPUOps_ApplyPadding_m3377BE03FD1B66DEFFB9A04B2EC185D8DB559088,
	ReferenceCPUOps_Border2D_m3D89F6B05C440F311786C4B23B5A575AF02FC0AD,
	ReferenceCPUOps_ClampHWToTensorShape_m9200544EAB48E7971D03F00039C3CC0EE6A6DAC0,
	ReferenceCPUOps_Pad2DReflect_mDB6DE594E5C15DE160B1786A18E93E54E6971D04,
	ReferenceCPUOps_Pad2DSymmetric_mA47A9E3CB29393CC6D4F5D0D2C0890B886BCC064,
	ReferenceCPUOps_Pad2DEdge_m87E28989EF287F336A26B988CF71C371A617CC01,
	ReferenceCPUOps_ScaleBias_m24F6230338CEEBE150FDB5BD9605645FA086AE02,
	ReferenceCPUOps_LRN_m26DFF3BBEB9546CB225AEB294EB50A46793D9F2A,
	ReferenceCPUOps_Normalization_m8E5685615C0F863A42A50D67C38A2A84C03FE7CC,
	ReferenceCPUOps_Bernoulli_mF0D3D6D3EEE902AA60695B12F18113AD7B614E4F,
	ReferenceCPUOps_Gaussian_m7173E241179D1498E1CFBF06A224359AED2A8FE4,
	ReferenceCPUOps_Dropout_mF22FF7C3A0F2F1E123E2CFA2C774CE45CEF363BF,
	ReferenceCPUOps_RandomNormal_m022083B1141F71762251E8505507CD41B4A41254,
	ReferenceCPUOps_RandomUniform_m786CFE6A69225711D4583A6436C5EAC44FE8C064,
	ReferenceCPUOps_Multinomial_m890FDEDE4BB4AA758653B47C118EB60955A8EE9F,
	ReferenceCPUOps_OneHot_mCD3C0B65D948FBA6538FD95BCD6CFCE3F06F439C,
	ReferenceCPUOps_TopKIndices_mD3F612B59F57BFB64104998275F1CC06029658F1,
	ReferenceCPUOps_NonZero_m2BEF07BA95BF42B8839BBAB8B1A034E5EB29CAAF,
	ReferenceCPUOps_TopKValues_m9B3B1B5200E7FC4A2EFD0ADCF2BB4B695137A180,
	ReferenceCPUOps_Relu_m9BA71F6FAD4A51D2C2A2D5F9B03A8EF8EFCF74D0,
	ReferenceCPUOps_PRelu_mE7CCC122B70AC307FA97D58EFFE99A2B84B7072A,
	ReferenceCPUOps_Softmax_m8A41523484C79F87776A847E338D842C0B6DB879,
	ReferenceCPUOps_LogSoftmax_mFB58915887CEE36BEF64D3AABFBB3993B138DC62,
	ReferenceCPUOps_Tanh_mB1AE9DB40D0B11B86811E991865146049A525ACE,
	ReferenceCPUOps_Sigmoid_mB77A489BAEAB32E5FEA47AC910EA60CFE5C39ACF,
	ReferenceCPUOps_Relu6_mFD3CD70ECB02C947CEE629BBDCEC581A26DB6914,
	ReferenceCPUOps_Elu_mB1249FF6FD3F28A7BDF9C830AF45C72C0E20EBE8,
	ReferenceCPUOps_LeakyRelu_m1DC27809DF28E3B42054C4C57393846A09A9DEC5,
	ReferenceCPUOps_Selu_m158F8F259A058ED5E23A9EF584F8F70100B2F487,
	ReferenceCPUOps_Swish_mF03010613A501896B97DC9AD7A733FD28F256AE8,
	ReferenceCPUOps_Abs_m75BC0EA3A605A86A60A9A77B077C6C0BDE8FC69F,
	ReferenceCPUOps_Neg_mF94628AD2A8420BB83003E58C76C04B7FF7D07BA,
	ReferenceCPUOps_Ceil_m5E5298B133687BEBC72545B67D9F44415F6994AC,
	ReferenceCPUOps_Clip_m200D51F2EF8F105B568E2715599AB477D0E4F88F,
	ReferenceCPUOps_Floor_mA0166F7746E7C7900838A1CD2BFF6D9D7E98305C,
	ReferenceCPUOps_Reciprocal_m010E3D0E9F162B67EB42C96D73C182C9A3E48B66,
	ReferenceCPUOps_Pow_m82B3A03D3282ECC69F18CCF25A33576C2D5D62A1,
	ReferenceCPUOps_Exp_m67D956204736D8ACD1E643704DEF5D5E13F38267,
	ReferenceCPUOps_Log_m3995E828BB9BD06464C7FAD26CBF40A4460702EA,
	ReferenceCPUOps_Sqrt_mD573B103021452D0A16A3B493FAB839E13A1FE9A,
	ReferenceCPUOps_Acos_mC79E7BA290FE33213C23EE403D0D33EEA883C1B7,
	ReferenceCPUOps_Acosh_m28FFF4CD2D36F39EDCEC31EE0F016A717340D6BE,
	ReferenceCPUOps_Asin_m197E8463E6D6481059FE87DAEE516AAF9E3A026A,
	ReferenceCPUOps_Asinh_m108DB063734948EC7A82AA8D55366D7EBF8729C2,
	ReferenceCPUOps_Atan_mA2D17F97EE4AC093082B740CF8BFDC754100092A,
	ReferenceCPUOps_Atanh_m102610E7DE7433D87ED4CEEF3030BEA97D1415D5,
	ReferenceCPUOps_Cos_m78044719342FDB82A7B206BE75E03C1C02551AC9,
	ReferenceCPUOps_Cosh_m32B2F581A07BA299E22571BCAEB751A887EDC471,
	ReferenceCPUOps_Sin_m3CB203397D68564BBAFECEDDCFE88864E9452DF3,
	ReferenceCPUOps_Sinh_m7BE1C1DD1E43CE5E4808DA00554E1D882F7FDACD,
	ReferenceCPUOps_Tan_mEFAEC9DE2E960D9CE80EF0E3FC101FDE49C2DBEA,
	ReferenceCPUOps_Concat_m0F22431440EF8B82D6E402508B3DFD16C5682CB8,
	ReferenceCPUOps_StridedSlice_m75DE11950740D7BC629BFCE36F8BDA619CFC99B3,
	ReferenceCPUOps_Tile_m879FA76DB34D614882B47F5950EB597F168DAF35,
	ReferenceCPUOps_Shape_mAA41CACC7C8C351439B21E61868AA5012B050B63,
	ReferenceCPUOps_ApplyElementwiseWithBroadcast_m22706D60436F2BDB20E9AC36F42607319DB28326,
	ReferenceCPUOps_Add_m436720B4F85470C72BFAC75F78FAF4CFC31711C8,
	ReferenceCPUOps_Sub_mEB54A8B91273A5C053D0777F2E8CAEA255402B66,
	ReferenceCPUOps_Mul_mAB485185C9F18F8EAF5C73BD7B42A07FA58A6302,
	ReferenceCPUOps_Div_m552D3C589AD362F87B6C04252203621F8084886E,
	ReferenceCPUOps_Pow_mAFCF2CF2D204A5C642EBABD4E9E004C1CB923631,
	ReferenceCPUOps_Min_mC151AFBAD733E31DD4E1D560276F0ED682E5E453,
	ReferenceCPUOps_Max_mF14B1FD03478FB5BDAF64193CBE5BAF1FCA34CDC,
	ReferenceCPUOps_Mean_m77C6029ED68818A64577A62290823269C41ABB2B,
	ReferenceCPUOps_ReduceMin_m827DA311318F56FAA2F11AFFC9447EF7DAC3226C,
	ReferenceCPUOps_ReduceMax_m6890C07CA5D4732B7C8DBACBBA98E63A3680DCAF,
	ReferenceCPUOps_ArgMax_m2490E4E249D2311A38EBB37F186091924DDD217B,
	ReferenceCPUOps_ArgMin_m5552D30E8CB52AAC844048F2D5F759BC934DA15B,
	ReferenceCPUOps_ReduceSum_m0CED1518246176B8E1B823BC361C6E18D24B6E44,
	ReferenceCPUOps_ReduceMean_mF62D4A1193E83F59783FC4CFD0FB70B28291F955,
	ReferenceCPUOps_ReduceProd_mC3237D159A7E5E1B991C6E89ADD7A708DB3AC3C9,
	ReferenceCPUOps_ApplyLogicalOperator_m52C3751C972DC0A0306850296F334E16B20ED4E2,
	ReferenceCPUOps_Greater_mA83940D946611007D5E55298E8E21CB862B7C399,
	ReferenceCPUOps_GreaterEqual_m2865D542F81E514717DDD06C63181508915BE028,
	ReferenceCPUOps_Less_m16C8827FC107E6168EC560B38AE15B9826F76281,
	ReferenceCPUOps_LessEqual_mEE600311A6D61CE9D2DFE443B9986D846BA66896,
	ReferenceCPUOps_Equal_mCF597FA945D7C2B08E3E4A47605FAE386477FAE6,
	ReferenceCPUOps_LogicalOr_m4681975F596DCDD2EF72197E69A8B6604705CCE3,
	ReferenceCPUOps_LogicalAnd_mCB8C179D5E1CDF02236D14F8EF62CDC030CEC851,
	ReferenceCPUOps_LogicalXor_m8018A82CBCC46C98137F9BAF8C68833D304964DD,
	ReferenceCPUOps_LogicalNot_m9670166C671375DA12D2F92BFE66E40EC13A4BA8,
	ReferenceCPUOps_Where_mDBFE0A5ECFEB7A135B4BEF0EE14504D10A62CD3D,
	ReferenceCPUOps_CopyAndReshape_m5E57E0A32497A8DCA865C608FDCE141354E93F5F,
	ReferenceCPUOps_Copy_m7375E1687E5B62B5554F2F0497C16CEBF3E187B9,
	ReferenceCPUOps_Flatten_mDE409CD9FA29F0FEE6C7FD833DFADDF66823D9C8,
	ReferenceCPUOps_Reshape_m0F7FBC735D4E22068595E60D731F52BED3F3F043,
	ReferenceCPUOps_Expand_m034F930539AF13DABCAA60532240C2B1B765398A,
	ReferenceCPUOps_Gather_mEEFC510CF0E6CC43CBFC3B2C688B8BDA328E8D07,
	ReferenceCPUOps_NonMaxSuppression_m058928F64C34CF391981C609BC91CAE9F1465554,
	ReferenceCPUOps_Transpose_mC13A4D4BF3D0150428070E8E97BE031B8CBD8A1D,
	ReferenceCPUOps_Transpose_mCA3A3E41FAC1A5242B87EEC76C5050B147C2D4DE,
	ReferenceCPUOps_Prepare_m14D0AEDDABBA57441847F985031FFA058D4487C1,
	ReferenceCPUOps_U3CPad2DReflectU3Eg__GetReflectPaddingU7C28_0_m4DC41E092ED76451299ABE039125CF1A61E86E58,
	ReferenceCPUOps_U3CPad2DSymmetricU3Eg__GetSymmetricPaddingU7C29_0_mB543B855B62A566EA3D1B17D53B9D01795E805A6,
	ReferenceCPUOps_U3CPad2DEdgeU3Eg__GetEdgePaddingU7C30_0_m40C9EB5950DCE3A2B63754D16D922090DC951B1A,
	ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetIntersectionOverUnionAreaU7C118_0_m5099E1E7A0CEA993DC3AEE4E9C9EFA8C9AA65E07,
	ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetIntersectionAreaU7C118_1_mBF2A15FAE35BAA163C43DCA1E719B860DE3D629E,
	ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetRectU7C118_2_mCECCC48C6DC9BE59CEDB41D31E71A6A1EDE91D21,
	ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetRectFromCenterU7C118_3_mDF4869860B8E9D563FECAC53AB6D87698C5A6CDE,
	MathfEx_Tanh_mD40CD862465006E3C4F67C9FD7F3A4653F04B4FD,
	MathfEx__ctor_m89F50F2C1BABC6B41C4CD0A3CD9EAB2D2592C1E4,
	ComputeHelper_IDivC_m112D61B0AAFFC0B6381D3282C88BC065C794C7CD,
	ComputeTensorData_get_buffer_m3E38E936BBB4B44DF6AE3B4227FD419D128FE889,
	ComputeTensorData_get_offset_mF2285541C6233F7C669A3B06FC68010B878B857A,
	ComputeTensorData_get_channelsOrder_m2DCBC97A3D57C2B97B5ED8CB36F4DCDC9D60D2C7,
	ComputeTensorData__ctor_mC3D4428FCFB9BDC2B9033061D8FD2E69F4C4829D,
	ComputeTensorData__ctor_mF1BA7A178632E4D2D1F27A8066E9F48D7F4AE909,
	ComputeTensorData_Finalize_m3F643C49D9D44B7558B944B460BAF81764D43BA2,
	ComputeTensorData_Dispose_mC5225AB54C8F1B71A1CD6DAF81011DEE2965E955,
	ComputeTensorData_Reserve_mF81BD04F645CC5DE49AAFA238BDE3D222E482215,
	ComputeTensorData_Upload_mF775E2C1074223719DC11E5ACD837FAC8A4F0FF3,
	ComputeTensorData_ScheduleAsyncDownload_m5CB44D627B975294BF891CFC80F989EDE0FECBC4,
	ComputeTensorData_WaitFor3Frames_mF117D026C263BD8D7F11E867DA6BBEA25B4C0243,
	ComputeTensorData_WaitForAsyncReadback_m148A39E7520EC53B81DC4F74EF8AE35184C803DB,
	ComputeTensorData_ConvertFromOnDeviceFormat_m00E9A196EA80520E4FED2A8EA5D4C6AD1F27B767,
	ComputeTensorData_Download_m9F1B8E05AC4E30295E02E0806F84BE99C5E1254D,
	ComputeTensorData_SharedAccess_m2C2EE49B064E230D4654545F6BCC47524A006101,
	ComputeTensorData_get_maxCapacity_m5ED509607E7990B2A4DEDCA17EF3740610F2C601,
	ComputeTensorData_ToString_m6EA012BA98633EB45D2AD0A1CC6F3A8AB719F7AF,
	SharedComputeTensorData__ctor_mC932651263F720967C743924558AC4B27E8E8A92,
	TextureFormatUtils_IsRedOnly_m08540FA401DECD1C17DF7542CFA9B07C9B7ED491,
	TextureFormatUtils_IsRedOnly_m5F7FC52B573A4663CA74A920FF9461B3F8F4C730,
	TextureFormatUtils_IsRedGreen_m4E91D422DB86F0C32F857A5704846A1869AB335B,
	TextureFormatUtils_IsRedGreen_m59D70DBA7AFAA01810D1BD77D8C08E3A1B53CC0F,
	TextureFormatUtils_IsRedGreenBlue_m2188D6DFFC0644B3BEA4F302D2B055B35633AC56,
	TextureFormatUtils_IsRedGreenBlue_mCCC016AD208DA06B4888E1EA06932AAEE699EEB1,
	TextureFormatUtils_IsAlphaOnly_m80E23E65F0CC7EDCE0355F60BD8291FA3FBC8C29,
	TextureFormatUtils_IsRedOnly_m60A832BA0F9EDED6A3D3049D7DA334AEC6BCD88C,
	TextureFormatUtils_IsRedGreen_m447631743ACD2B1B530ABF262559547748BCB1F2,
	TextureFormatUtils_IsRedGreenBlue_m32CE19143C1FE9C7A6E49B3A8884C01D8A7DDAED,
	TextureFormatUtils_FormatToChannelCount_m21CC9761974C9C2A5FAC003124F6B1655A5620FA,
	TextureFormatUtils_FormatToChannelMask_m9407E1D4E8A263423BA6C313CFDDA6C9F207CDA5,
	TextureFormatUtils_FormatToChannelMask_mB707AA43CC988281BBBF9EAC7E2F62BBF55BD3A8,
	TextureFormatUtils__ctor_m0549E58810F9AAAB439F23DD845E62CA8C5E494A,
	TextureAsTensorData_get_shape_m90CA898AF99E70B8E1E1362D8782A70F5662DB86,
	TextureAsTensorData_get_textures_m3028544D22B672E25C72FE45BA6A0184AA7822A2,
	TextureAsTensorData_get_interpretPixelAsChannels_m52DF58AFDCA39049E423E61361A1E9E732A6E50F,
	TextureAsTensorData_get_interpretDepthAs_m7E96FD3A781E9FF259B51861CCF73E13D24DDEF6,
	TextureAsTensorData_get_interpretColorAs_mA414135991F1D316DCE8FB5AFBF7E308F86879B4,
	TextureAsTensorData_get_flip_m79F5D1CC019FA39218DDE7856AB951DB60264D66,
	TextureAsTensorData__ctor_mA6980EB5C457E954EF149E58B6B28958BA2FF964,
	TextureAsTensorData__ctor_m1929EECD59BA3DE86060198FBD709D57EC342106,
	TextureAsTensorData_Reserve_m6DD080BF42E4722D4C24CD89265BDF5D23AD1FE0,
	TextureAsTensorData_Upload_m5C1A651B8EE3130E4468F4EE8DD4594202EBF43F,
	TextureAsTensorData_ScheduleAsyncDownload_m18027CB2335F2D06FC1C54092C87941B81ED39CD,
	TextureAsTensorData_Download_mFAA1815AFD2B561D3DAF3CFDADB9A945A72B16CD,
	TextureAsTensorData_SharedAccess_m6841A9BBFD2A58A5C1BBE96549060ECCE7A2E4F0,
	TextureAsTensorData_get_maxCapacity_mCD706DF2F2FB3CDF6EC4E8ACB7345C61F068C424,
	TextureAsTensorData_Dispose_m45C6F62CF9015749EE7FE84F958B1F367B4127BD,
	ReferenceComputeOps__ctor_mE1BC3B83556917B404A19CD7D6CD29876B1C05FF,
	ReferenceComputeOps_Pin_m4F863D0040A591A9CC201DA6653026FDA7853D41,
	ReferenceComputeOps_SetTensor_m8B1A21659E7D8F1D7B259851E0B464CCF0629F6C,
	ReferenceComputeOps_NewTensor_m48C30282546D467A0C8541E15FAE003DCBB7FAA0,
	ReferenceComputeOps_Dispatch_m9FEB07D86E5DEF40568815771372276528EADF89,
	ReferenceComputeOps_TextureToTensorData_m5627426E7CE74250F64BA1E57CF39F7EC52F879D,
	ReferenceComputeOps_TensorToRenderTexture_mE45C99D1B59E26881994F3BB73A98ED20F7FFE4F,
	ReferenceComputeOps_ShouldFlattenInputForDenseLayer_m7E077B45CC302A2B72D2388FCE43FD1616937F1D,
	ReferenceComputeOps_IsFusedActivationSupported_mEB092E1CF1A785A7023D57B82C5F2ACEAA74F0EA,
	ReferenceComputeOps_MatMul_mD9AC8CD8354400E23520D744144AC1703C4D28B8,
	ReferenceComputeOps_MatMul2D_mB63FC11BF648A28E20E3804BF063C08AC380CC0C,
	ReferenceComputeOps_Dense_mDD8420287504047C7EA9C500BFFB2CB407247ADE,
	ReferenceComputeOps_Conv2DWinograd_m9ABAAAE5639EAA5C4478BE92C78FE425F45C947A,
	ReferenceComputeOps_Conv2D_m03B7656CBC9CE84C416194340D70842FD846CC6A,
	ReferenceComputeOps_DepthwiseConv2D_m8FE3896DEC034BD8F46422B20580F16A2AC4D3C2,
	ReferenceComputeOps_Conv2DTrans_m5443C84395A7D7C2BDB56F1C7EE64FD687CD02D1,
	ReferenceComputeOps_Upsample2D_mC52F1E13EABA8B96F90427DAB654A8F8F9ED6AD1,
	ReferenceComputeOps_Resample2D_m06ADA07E7BC3A504FBB1182942EFBA6BBD85C850,
	ReferenceComputeOps_DepthToSpace_m3587AACCBC03423AFC56A46921739504CA32C1B8,
	ReferenceComputeOps_SpaceToDepth_m60C6F44AC31FAB260489F18D664AED5A8828193F,
	ReferenceComputeOps_Pool2D_mC7F2EA38C21EDA503CA10230EEB63318B36E4144,
	ReferenceComputeOps_MaxPool2D_m1057F4C32E9B29589A88107BB97B0D371FF98EE5,
	ReferenceComputeOps_AvgPool2D_mD3F38197A593B91051159F88AC46E7CD67F8051A,
	ReferenceComputeOps_GlobalPool2D_m3F95A899D09B45B69171E75B88CD154B92F93AFD,
	ReferenceComputeOps_GlobalMaxPool2D_m9E03A860C0FA047C79A3022144B3CD7D49CC235D,
	ReferenceComputeOps_GlobalAvgPool2D_mDA5D47DFD8F33BF30E1D13CD57D1FF5A3AED2782,
	ReferenceComputeOps_GlobalAvgVariancePool2D_m0613AE824103CF03053401F1EB256C2A4FDC8877,
	ReferenceComputeOps_ApplyPadding_mF8A708CFD2DA773EE152F5E5C2CA0030998D4968,
	ReferenceComputeOps_Border2D_mB1E603E97AD90DF98D0CDF36C21DA7B26A910C76,
	ReferenceComputeOps_Pad2DReflect_m3B2AED708045A5E6A84C068627ADBF5ACB33A21F,
	ReferenceComputeOps_Pad2DSymmetric_m321EBD4DA22FB4F1E1A7C67C06AC8A47223A75B8,
	ReferenceComputeOps_Pad2DEdge_m3EB62D0AE53F10703B8157455E1E58E4EA33389A,
	ReferenceComputeOps_ScaleBias_m9E78E5EEF79197DBD2B4BF18B26199E4ECFD6468,
	ReferenceComputeOps_Normalization_m7216E14C8D7F2E08D2C5DAE3ABACB61399D86DD3,
	ReferenceComputeOps_LRN_m3B4B74A7A7F3728CA236CEF6EDBEFC084825F081,
	ReferenceComputeOps_Dropout_m10756ECB8AB627FBC98B59F355364C600EA8D002,
	ReferenceComputeOps_Activation_m9AE9E76AB61D8C3D0782CF1ED4786491AF1F7309,
	ReferenceComputeOps_Relu_mD608A21EAF4A72454F2918E52CA5FFD9F7B91CB9,
	ReferenceComputeOps_PRelu_mFC275C56AA5AAC35D821228E30B7A2A0B835E509,
	ReferenceComputeOps_Softmax_m980D264C32E4A25A7621AB374EAE991F48B91E3B,
	ReferenceComputeOps_LogSoftmax_mB400072251A87E95BD900B797FA1FDBED0C2D328,
	ReferenceComputeOps_Tanh_m28D2478812962EC79BCBD2E853EE0707D99F73A2,
	ReferenceComputeOps_Sigmoid_mA93D30F3B86C1F5E474D80391F3301E6A66F8510,
	ReferenceComputeOps_Relu6_m79156FE91A238F37CE983176A4A086DBED37A512,
	ReferenceComputeOps_Elu_mA856E5E1FE54523BD8BDF73338FE33739E910B2C,
	ReferenceComputeOps_LeakyRelu_mC3258A52ECF646FAAAF52C92D67F6EC2407126AE,
	ReferenceComputeOps_Selu_mBC647ABE669911C58AF75B8BDFE156DA4DA0D193,
	ReferenceComputeOps_Swish_m2C976FEA5C74EA49CA9C83C10E6ED72BD2211591,
	ReferenceComputeOps_Abs_m24C5BB86A739E7F6EBF698846DC6C2E38C07208C,
	ReferenceComputeOps_Neg_m7E66635C4C6486154D18320296AE8AA43F111BDB,
	ReferenceComputeOps_Ceil_mB38CF11607864E3B3660185A40404F6E5C9CECE5,
	ReferenceComputeOps_Clip_mACD76E09AA2661702DC39B8BCB7596A0F557D274,
	ReferenceComputeOps_Floor_mEA07C3C64BEDCB212001FE35801ED7C5B2E6EF8D,
	ReferenceComputeOps_Reciprocal_mB64F440ECFEF946BFE58FFAA2BED218012B3E96D,
	ReferenceComputeOps_Pow_m7545D377E3CDB149DD274DB147A469685028C0FB,
	ReferenceComputeOps_Exp_m81362403DDC0C15072FEFC19154CDF15EA1D3804,
	ReferenceComputeOps_Log_m23E6760E5A90C237EFF3A9A611661F1C5DF64943,
	ReferenceComputeOps_Sqrt_m18D7A819AAF5823F5057B1E420D41668865627F9,
	ReferenceComputeOps_Acos_m0F31F75DDA82D6D8AFC2B571B6E899C50B16D50A,
	ReferenceComputeOps_Acosh_m2A2A041C00F815DA5E15F082E2759FFDAEA81B6F,
	ReferenceComputeOps_Asin_mB9283E302AC662D4A81C61E58008CD3FEF2338B2,
	ReferenceComputeOps_Asinh_m303CEB6224ED9A5E9A37EA83D6A29FA042ADBF75,
	ReferenceComputeOps_Atan_m7D750739511E163FA8327621528CB0ED0CA816A3,
	ReferenceComputeOps_Atanh_mB3D7BE2DB5188C7BF6BAFD7E6458311CBD43C31F,
	ReferenceComputeOps_Cos_m68CAC71A7F48104A4243664E2059A62D9AF2A5E8,
	ReferenceComputeOps_Cosh_m88ADBB997065E1283893B8EDCD65F50DB068D3DA,
	ReferenceComputeOps_Sin_m74F371A7EDDCD96EA034933AE70142622AC38A3C,
	ReferenceComputeOps_Sinh_mBF3728FEED2F68C6E642B4A9D78788004EDC5EF4,
	ReferenceComputeOps_Tan_m6F7BB6DF12D4F2CE07A6A88B0B18A314ACD48207,
	ReferenceComputeOps_Expand_m0A54B16C1024DE5182609D9F80F4406A181F51ED,
	ReferenceComputeOps_ElementwiseWithBroadcast_m079C1ABA9FC5842E571EEFF0541B640F55E8E54E,
	ReferenceComputeOps_Add_mAE1D2057C16442A63C2E1D0C00879EEFB87F10E7,
	ReferenceComputeOps_Sub_mE441A82683EB366D19AED39DAE586B20016CA112,
	ReferenceComputeOps_Mul_m70F312488094ABAFFA30CB264DABFAB11693C774,
	ReferenceComputeOps_Div_mB14F87A216CE57C848B291FEA85F7A537634A745,
	ReferenceComputeOps_Pow_m34BF73CA407903BACA791E1050F3A4B00366719E,
	ReferenceComputeOps_Min_mA3832FECC9ACF74D42CA2DD9A9BE31BCF75921D5,
	ReferenceComputeOps_Max_m5BAA66841E5F33B23BCC5783F927448D2FBAA14C,
	ReferenceComputeOps_Mean_m5B036866ECD233F5D62D3A5E4F34ED0768BF3191,
	ReferenceComputeOps_Reduce_m9454070856DD5285081BDF898D1B7CE81FC4C9E2,
	ReferenceComputeOps_ArgMax_mE4C39435A75D16919F95A6AC2F12D885A60F6CF9,
	ReferenceComputeOps_ArgMin_mF0C9219880BEEDAC54CB79ABFD25508EDE42698F,
	ReferenceComputeOps_ReduceMin_mEFA2BBCD0225EB9312B80AB50A46BDB9550FAA83,
	ReferenceComputeOps_ReduceMax_m6CEF1B7A1DC0D239D2E0FC84D05AD6476AA04BE7,
	ReferenceComputeOps_ReduceSum_m737E5922C432A952DDB77FE84E993FAC78218B8E,
	ReferenceComputeOps_ReduceMean_m95C517F0032C535F21DF0A81F2F4E63A13F69736,
	ReferenceComputeOps_ReduceProd_m7DE667E3B17DCB8C9A7D4A793B70B611CC82AC23,
	ReferenceComputeOps_Greater_m4F6E8C86322767A571FD932A67EFEC08C4E93BEB,
	ReferenceComputeOps_GreaterEqual_m1A4F6A6D6270DF95772BB4C21C64777B05A3BCBF,
	ReferenceComputeOps_Less_m9F834FD07C26FC596CE86F8035683B0B5ABECE6D,
	ReferenceComputeOps_LessEqual_m3EE344B9C09B561AC35742DC8AC904C05D1B1F4A,
	ReferenceComputeOps_Equal_m668960AD530B55A3245DEA823657E5D9275105E0,
	ReferenceComputeOps_LogicalOr_mAD0238556B6BB83127834CC3356A9863DA9095F6,
	ReferenceComputeOps_LogicalAnd_mB70B370C96499FD123BE017BDE11667DB4C6061B,
	ReferenceComputeOps_LogicalXor_m426AC6E8CFD1F2D255AA2437FEE41A74BD270486,
	ReferenceComputeOps_LogicalNot_mE84DBC6216D732AB41F4DCAC93D62B8BDAAA0582,
	ReferenceComputeOps_CopyAndReshape_NCHW_m6248F4B5E2E1B8C0DF84381F2A4A9EF98BF92FB5,
	ReferenceComputeOps_CopyAndReshape_m0799F5A1EEF72685A7E8856CF5DDF5ABF2CFF509,
	ReferenceComputeOps_Flatten_m6B84394F4DC026D79B000FE308E6540F2665AF42,
	ReferenceComputeOps_Reshape_mDA1BB0D0A2880A9465D1EEC802FC22DC25316443,
	ReferenceComputeOps_Transpose_m6D22F0A94A6C3A66220F06F6B6EDF47E9092F7B3,
	ReferenceComputeOps_GetOnDeviceShape_mF7EC25DC531001B9EBF1DD54DE7759E5EC1982AF,
	ReferenceComputeOps_ConvertPermutationToDeviceLayout_mDAA5A1BCCAFA8B161A52541D78966A3A7F39ABB2,
	ReferenceComputeOps_Transpose8D_m2388D838B3186F899D70AF3F28A21E98FAD5F115,
	ReferenceComputeOps_Transpose_mDA593380BEF7C195299D4A31EF6238F73CCF6FAB,
	ReferenceComputeOps_TransposeToNCHW_mD41667551967CA10FC36445484364E57742EB628,
	ReferenceComputeOps_Concat_mEB1FDE6F4883BFA419874C7330ADDB7204A00A93,
	ReferenceComputeOps_StridedSlice_mC403F92BBBE9B8F19C76D3DBA6D803AC2B4356E9,
	ReferenceComputeOps_Tile_mB19AD60F3EFBB0BECC58847FE76E37BAB57B4ACD,
	ReferenceComputeOps_Gather_m203FD88951F3AD2FB68DBF845AB95E2B9A212DE2,
	ReferenceComputeOps_Copy_mE553C51789FAAF99DD171A95D885579A60E1767E,
	ReferenceComputeOps_Prepare_m49B332BF7E943EC1DC0E1730BAABC44C84E70BDB,
	ReferenceComputeOps__cctor_m02D97E12C5ED85CA5010E9732454687457EA1D19,
	ComputeFunc_get_threadGroupSize_m0D4C76AB91DAD77954CD10606968DF86A4141A96,
	ComputeFunc_get_width_m52666C3EB651D499B423628F273A82CF793AA49D,
	ComputeFunc_get_height_m1D83A6306B459071CEDD1A1F856D4D1D74523498,
	ComputeFunc_get_depth_mF80DB0BF4CE080FBB94B2681D232DDDC351D22B3,
	ComputeFunc_GetTensorDecl_m7C095A20ABDF5C703C7B7B29B08A6AEB3CA190FF,
	ComputeFunc_GetTensorData_mF0BE430DE4519A67A57F8B7073981DE8EEF33CF5,
	ComputeFunc_get_dummyTexture2D_mE0382A2EB19F68C30F26EAA8F4FD3D196BDF4784,
	ComputeFunc_get_dummyTexture3D_m976D6F1396BB9AF59955CA9B9EBA0F4BB62E1AD5,
	ComputeFunc_get_dummyTexture2DArray_m2ACD34FB87E7EE56FE6784868FE3F07D72C2E8A8,
	ComputeFunc__ctor_m516FC5C43314B8775F24F8628CA508ABB70DA19B,
	ComputeFunc__ctor_m03606D90574B46C307C05DFA57789A691F771820,
	ComputeFunc__ctor_mA6AC93E5232318E2A3D9C30B33E3E3D28956D683,
	ComputeFunc__ctor_mECAF4AB96858DA16566617DBE6FFB753CBA27D08,
	ComputeFunc_SetTensor_m08238C3C82DF681F372CBCB840298C731ABB4A6F,
	ComputeFunc_SetTensor_m1A97DB943C1A405B615A95E7C3A6DB40175DE34A,
	ComputeFunc_SetTensor_m50FEE0FAACA9469DEB8F0DE3BF8784D3FD81D628,
	ComputeFunc_SetTensorDecl_mE46880E6219A059E43600E8957876A150EBC8AF4,
	ComputeFunc_SetTensorDecl_m1839141DA57D310B2B17ABA5458547217056FAF4,
	ComputeFunc_SetTensorBuffer_mCDA021CD1499CB191BA2A670C718B9CEF1F1D1DC,
	ComputeFunc_SetTensorBuffer_mBA3E062D655641E95E610DCB18EC66E81D982497,
	ComputeFunc_SetTexture_m188532280C002E7606C577659965F217FC8DCC98,
	ComputeFunc_Dispatch_m34CD2C8473012C2F76918931F90E1D0C1C6E9ADB,
	ComputeFunc_Dispatch_m1D1AFE51AE6EA502AD1ACA3834D381122DF58AE3,
	ComputeFunc_IntDivCeil_m2C6CA16D71D1BB8EE751CF20F99C0F4D7368E711,
	ComputeFunc_FindBestKernelMatchingDimensions_mEE5411F7D485D45B3CEEFB94DBC431908CFBCDA2,
	ComputeFunc__cctor_m1F347D8CD86655EC333B347F215CF2101A0BF28F,
	UnsafeArrayTensorData__ctor_mC637B8B6BDD11787CE759CA87A9CC89663C65B33,
	UnsafeArrayTensorData__ctor_m50342CDE3782335B00E702E320EE551E533927BC,
	UnsafeArrayTensorData__ctor_m022BE11242EC18AD3DF0F9EB7C02FE645C55CC50,
	UnsafeArrayTensorData__ctor_mAB49C7F7AD8C25BD10DD72EA84DBF8D818DBDD8C,
	UnsafeArrayTensorData__ctor_m4C9127FC072A060188553F527C528AC9831488A0,
	UnsafeArrayTensorData_Finalize_mF35078DCEC3382A7F3F27C3EDF59397226F6B5F8,
	UnsafeArrayTensorData_Dispose_mC4D7ACB581CA1FB65D66A10917B14E1BAF17DE3D,
	UnsafeArrayTensorData_Reserve_mD882D17459B3B806B659FB3A16B836AD00159FB5,
	UnsafeArrayTensorData_Upload_mCE613BFD6FCB68C1484CD52C6C96AE0AF92CAABA,
	UnsafeArrayTensorData_Download_mD6F5A12A661012958866E9718243541B5F1EF54C,
	UnsafeArrayTensorData_ToString_m569516EC08D966DD69815C0574B41CE1C7FCE8B3,
	UnsafeArrayCPUOps_get_blas_m6CA8069C56E42C6C490D4B50BDCC6CB99C6B0736,
	UnsafeArrayCPUOps__ctor_mF91D841991B22F51C1818CECFAA676FC0D4C07F3,
	UnsafeArrayCPUOps_Pin_m6A0FDF638CECEB3312615D24392EE56184722A53,
	UnsafeArrayCPUOps_Parallel_For_m5B1EC87E0E1B1EE365B52053A7F7E93784F863E7,
	UnsafeArrayCPUOps_Neg_m41E3AE26C680D69E99793FD26CDC7EB322349845,
	UnsafeArrayCPUOps_NegInnerLoop_m1499A5C104D679136E7DB90D2C78D0C10C06C845,
	UnsafeArrayCPUOps_Relu_mD1430432B1395BBDBB4C1C297FE009ACA63C23ED,
	UnsafeArrayCPUOps_ReluInnerLoop_m2BC320EB3164496952BA562248A1E773342918AF,
	UnsafeArrayCPUOps_Relu6_mED1B4F51F5B2330A93B80FC624E314459D078DAC,
	UnsafeArrayCPUOps_Relu6InnerLoop_m6DE99073F962F9AB71F63318F8FBCFCE2DF82610,
	UnsafeArrayCPUOps_LeakyRelu_mA2F8414ADF1A825550F0FC8D7B1523402356F103,
	UnsafeArrayCPUOps_LeakyReluInnerLoop_m1B4B15EB80EB31048C799A51C2CCC9D4541B02BE,
	UnsafeArrayCPUOps_Elu_mAC38831B90DA87E80D9F2EBEEE6D14A23FAE6DDB,
	UnsafeArrayCPUOps_EluInnerLoop_m1C83143450417A66E353EE8CDE7FA641900EAFDC,
	UnsafeArrayCPUOps_PRelu_m3F9AF6C475166A6C09BA077C0E932350CC83A5B0,
	UnsafeArrayCPUOps_PReluInnerLoop_m215108D499437427C2D7D8EC9BA281EEA05915B8,
	UnsafeArrayCPUOps_Sigmoid_m5CAB417BB50D6C2FB7F2C52C4D61D79D6BC33F76,
	UnsafeArrayCPUOps_SigmoidInnerLoop_mB1804C6ABBE1829F4D56769EB469A2B006089D75,
	UnsafeArrayCPUOps_Swish_m3BA38E02435FDE5FC9BD0D0E2E8CF79BD72D638A,
	UnsafeArrayCPUOps_SwishInnerLoop_m4D920058746469FD0FE3D988C131EDBE0039FB9A,
	UnsafeArrayCPUOps_Exp_m0C219C75B05A3152432D14E43CE594479826726E,
	UnsafeArrayCPUOps_ExpInnerLoop_m613D3462E0EE5CCE7A5B82117D2CD61B0451F9A2,
	UnsafeArrayCPUOps_Sqrt_m931AECAA61E3223132A3A47A0D4F50967868DF8B,
	UnsafeArrayCPUOps_SqrtInnerLoop_mFECAA560F680F151FE3985D6B1D567BD4BF80146,
	UnsafeArrayCPUOps_Tanh_m1775DA30C140F09A495C96A3C1D08D9E5549564E,
	UnsafeArrayCPUOps_TanhInnerLoop_m72213E1143BCAA617039F65EAD59FD1F9AE62CF9,
	UnsafeArrayCPUOps_Acos_m79434EB2569F8C4C54F6E152C886BC2E0DC14E5A,
	UnsafeArrayCPUOps_AcosInnerLoop_m5472CF2C88F09E5B18FB450FF7BFD59F8242E5C9,
	UnsafeArrayCPUOps_Acosh_m6A6FDC5C2053DD2D7160F21B751BE1C8DF70A3AB,
	UnsafeArrayCPUOps_AcoshInnerLoop_m94B87C0E2CEE897D5B0778C08E80F69AE739040F,
	UnsafeArrayCPUOps_Asin_m68DA1DD329EC741F042FB3191882EB516909D899,
	UnsafeArrayCPUOps_AsinInnerLoop_m6BA1ABBF873A80E4A239CCC5F1F5F8F81A350143,
	UnsafeArrayCPUOps_Asinh_m8170ADF4E56FEF46FCA67C3B91A38B76AB1C7FD2,
	UnsafeArrayCPUOps_AsinhInnerLoop_m5F614A2B53E01E6EEECF0E89B13DD44C17BF3242,
	UnsafeArrayCPUOps_Atan_m8A7ACAB435B950F941C0CFE36AA6FAFEAADE9DB9,
	UnsafeArrayCPUOps_AtanInnerLoop_m44A0B45672F5CF6D5EF6C7E452E9FD5EE052D333,
	UnsafeArrayCPUOps_Atanh_m2BAB37C9941FFF805B40B47F38134FD362832AAB,
	UnsafeArrayCPUOps_AtanhInnerLoop_mC58A037C906DE8BCB3955DE8CD0E13B03B739AA4,
	UnsafeArrayCPUOps_Cos_mA2A6225AD07C9EC3073B5A1A2EDE6DA74F473855,
	UnsafeArrayCPUOps_CosInnerLoop_m3CA080563522F84ADC4C9B0E1A1F935387943DE8,
	UnsafeArrayCPUOps_Cosh_mD18C938D218E3FD8ED321C8EAD244F56B4568E79,
	UnsafeArrayCPUOps_CoshInnerLoop_m2F6A68C26F1ADE9F9001A9ADD80D861D1EE0DFB5,
	UnsafeArrayCPUOps_Sin_m96450F420DC30B0A72B2437928C756850043AB0A,
	UnsafeArrayCPUOps_SinInnerLoop_mE15B16C57ECA1DC93D3B15290F4BC4D8BF3CFC31,
	UnsafeArrayCPUOps_Sinh_mEB1BD929216D8627D54B5EE3E994B9C9781E5612,
	UnsafeArrayCPUOps_SinhInnerLoop_m7EA3F0883B402B968849B106CDFC0B52DEE9A209,
	UnsafeArrayCPUOps_Tan_m1E9FBC1A0F2F6347DC2F87C80A4F8F0C675084E7,
	UnsafeArrayCPUOps_TanInnerLoop_m6B632B6F6551C8DA1A6496AFA44ACFA92BFC5E28,
	UnsafeArrayCPUOps_CanUseModuloForBroadcasting_mA5E11D32CA57471B3554AD7AABCD93839021B465,
	UnsafeArrayCPUOps_CanUseModuloForBroadcasting_m044C3C607B16F7462DE8C9FA53257F74C0F0593E,
	UnsafeArrayCPUOps_ApplyElementwiseWithBroadcast_mDCC67DE246E0F63FF28A6E977F86E45732C961EA,
	UnsafeArrayCPUOps_Add_m9CEF53E9F040EFFEDAD967294D977C45A975F23F,
	UnsafeArrayCPUOps_Sub_m77590F1B089699C5C9E8159E52A793EE7418FBF3,
	UnsafeArrayCPUOps_Mul_mC1DA30B01D3E68C3AE3EF7277989EF9CBB737EB9,
	UnsafeArrayCPUOps_Div_m5B8AA42A974D6E7BB834046830B6F40DAD0DAF27,
	UnsafeArrayCPUOps_Min_m454D2C92B5F8B4D7C788543CFA3E6FCED0E4A157,
	UnsafeArrayCPUOps_Max_m42A57C3830A23FC40596124289E0585EFDA4FAFC,
	UnsafeArrayCPUOps_Greater_m2F3A9B59AB9AB652978C4F1CB4A5B615F15B1683,
	UnsafeArrayCPUOps_GreaterEqual_mF924B9A302AACDEE0B3EB8E4AB97000CDCA82D69,
	UnsafeArrayCPUOps_Less_m7B7E89980F7E29DA693BB415E81AB4C4ABF6F5C3,
	UnsafeArrayCPUOps_LessEqual_mB0A59D086D0E480677EE210F851EADC8D8BFEFC4,
	UnsafeArrayCPUOps_Equal_m17CB9237146995D813637A72E3B0A55FCC1B6B0C,
	UnsafeArrayCPUOps_LogicalOr_mDED497E079A3DBD3252BB8AE08BF9616F6693709,
	UnsafeArrayCPUOps_LogicalAnd_m90D34BE10522B15B44FD2F3E6FA5CCE796D15DD2,
	UnsafeArrayCPUOps_LogicalXor_m3BEC1679F25EE454D05E747E24AD260B9AEB03AE,
	UnsafeArrayCPUOps_LogicalNot_mBF031979D068ADDF159B7697ACA5992BC16B9E79,
	UnsafeArrayCPUOps_Where_m7D3799515754BD6219E3F7C5DB110A1C2016FD85,
	UnsafeArrayCPUOps_ApplyLogicalOperator_m0A0B549CE649B40FE31E5E9B8CC978D937F6B206,
	UnsafeArrayCPUOps_MatMul2D_mE2D071A1345D4442C4A090095DE8CE9CAD505A57,
	UnsafeArrayCPUOps_Dense_mC6A97D1998BCE58847B886F5E5C7CCBD50E08106,
	UnsafeArrayCPUOps_ApplyFusedActivation_mBBCF4E5703997C17FA4762DD79FAC60E88BF90B8,
	UnsafeArrayCPUOps_MaxPool2D_m7CD5150A899BF56FE560AEE889B18E30D21D4E5C,
	UnsafeArrayCPUOps_MaxPool2DInnerLoop_m79764D40B272F5199D17F9029E400BEEFEEFABF1,
	UnsafeArrayCPUOps_AvgPool2D_m8F0294E59D35C0CB35E1AD1E9B4CD60990D176C8,
	UnsafeArrayCPUOps_AvgPool2DInnerLoop_mED79E51BFA24AD69E66A3ACC2FEA5A4B13E2D636,
	UnsafeArrayCPUOps_GlobalMaxPool2D_m8B7CB96E4535D85F02385DD4C7725F42D6F7BC83,
	UnsafeArrayCPUOps_GlobalAvgPool2D_m68B6C9FF779F870E60DC1D622140893E01FA9B40,
	UnsafeArrayCPUOps_Conv2D_m4312501B10427A68654BBAB790632CC767F1F642,
	UnsafeArrayCPUOps_Conv2DUsingIm2Col_mD541128F4B00C1D4E97BCCC06DC2C8FDF9229329,
	UnsafeArrayCPUOps_Im2ColInnerLoop_m53ECB0960EB7F2B2491A6F0A3CB1B9EE02D0641F,
	UnsafeArrayCPUOps_SafeIntDivCeil_mB77457BC2FD92DAFF1FFEBA05FD49598C3ED6ED0,
	UnsafeArrayCPUOps_Conv2DUsingIm2ColSliced_m7E64913B7E86D41CE41EF531E766B05E54F5C724,
	UnsafeArrayCPUOps_DepthwiseConv2D_mE377C849BEB73446298399F8B48BE07CB56C51B2,
	UnsafeArrayCPUOps_DepthwiseConv2DInnerLoop_mDAAE9D999E9670B5C40C30994A18E6E2DF4FC70A,
	UnsafeArrayCPUOps_ApplyPadding_mD6859A150B36FE9A217696ECB98D0BE5FCE2AB79,
	UnsafeArrayCPUOps_Border2D_m035344FC49F830C07C48578B74B2FABAC60E0BF1,
	UnsafeArrayCPUOps_Pad2DEdge_m4700E4F782DA2900314D5ABC48FA701288E4A392,
	UnsafeArrayCPUOps_Pad2DReflect_m9FD2DE9EF9FD5B9B7BCBBA19EA7226A9D62052CE,
	UnsafeArrayCPUOps_Pad2DSymmetric_m8AC5EDA655131548A6D9B5C1042089885CA9659B,
	UnsafeArrayCPUOps_CopyAndReshape_m01EBEAD3CB7DE6F0BF2C05B93BC8AFB4FD4C1506,
	UnsafeArrayCPUOps_ScaleBias_m70EBAD16F026BFDCB970CA3BE935E7DB30E45D5B,
	UnsafeArrayCPUOps_ScaleBiasInnerLoop_mD267EDB2D6739D8E556F4375E6D1E0BFC6DF32E7,
	UnsafeArrayCPUOps_Prepare_m225C9CC6AFE49FE3BABF58DDFF9071AD0EF9F90F,
	InnerLoop__ctor_m76C687AF7F2B2AF21D30C656152DB1E4BA570146,
	InnerLoop_SetState_mAF373F0D23E2D50D5E411AC76C2A5BD4A1B4746B,
	InnerLoop_SetState_mEBF505B7CFE031F427AB4903329E27720D433EDF,
	InnerLoop_SetState_m8C07162B7A1C0A4C616B043DA35B9CBA94BA0CC7,
	InnerLoop_SetState_m5D53346C06D7E12047EE89DDF401621EEBD9FB74,
	InnerLoop_SetState_m4DD603CB15FF1C4C1D65EA29D6108F77F2D0CECD,
	InnerLoop_SetState_mE5E1195176C4F7F0913E08408EC79C82AF01C456,
	InnerLoop_SetState_mD6CD9DA793BA86B5742ECF5B0F09258D86422B21,
	InnerLoop_SetState_m63B8640BB66C4D8E6C5CBB776190D4A3E4617E38,
	InnerLoop_SetState_m4C6364106EEFFF1BFEE7B04BD05643AFFA0085F1,
	InnerLoop_NegInnerLoop_m357CFE90283C683DAB92A51247A77F6EA48DFBE8,
	InnerLoop_ReluInnerLoop_mAC565931FF9C9592CB74BEBB522313AFB4293576,
	InnerLoop_Relu6InnerLoop_m03FD62F3AD0987A5189A2411A2A77C035757D0A3,
	InnerLoop_LeakyReluInnerLoop_mA7B42AED5718C89448907717C43A9D2DC82814F6,
	InnerLoop_EluInnerLoop_m50CC65AC82BE2E7AD6D591AAAB06C0FF53F0C781,
	InnerLoop_PReluInnerLoop_mE70E533CA0E158D8DC4849C50F6D8E7C46486403,
	InnerLoop_SigmoidInnerLoop_mBB444CD27E13DF7FEB0132124FAEF1588D3F3599,
	InnerLoop_SwishInnerLoop_mADA950F489F012E024C0B74230B304FE2259DFF9,
	InnerLoop_ExpInnerLoop_mD6F78FCFA87703759FB270586222EC031CDAFE91,
	InnerLoop_SqrtInnerLoop_m6935D5D15D302C89ADA4E436D66365D79948D2ED,
	InnerLoop_TanhInnerLoop_m97D206CE09C03E4723EB0144D73A4643C5180253,
	InnerLoop_AcosInnerLoop_m0DA7B3C3555DAFE9CE519A0CEE32D8156DA1F504,
	InnerLoop_AcoshInnerLoop_m0C10A63CAE75469E5A492A6EE658331C1A7E087A,
	InnerLoop_AsinInnerLoop_m8B75C2B176734A98E9175DB0D88A7C623261BD42,
	InnerLoop_AsinhInnerLoop_m23B8A46E6AEAD3095FBE987A9B553B11D6C30284,
	InnerLoop_AtanInnerLoop_mD252E6356BC12E9BE45160E7265B3A3821C7A122,
	InnerLoop_AtanhInnerLoop_m6D79F14E2E1AE8D050A7922F2EB958D67377D10A,
	InnerLoop_CosInnerLoop_m525FEF0D754F4CF18D36B026D38ADCE364DF0F0C,
	InnerLoop_CoshInnerLoop_m7A74A490EC8842EE264DA65FDB6B0F7D85423D5A,
	InnerLoop_SinInnerLoop_m0042A654E9CF6A70946D8DB2BB7D67A4D1122A51,
	InnerLoop_SinhInnerLoop_m5077720ACEF5873A9EC4357E3A995E0AB718FC08,
	InnerLoop_TanInnerLoop_m17C1493FECBBE3D76D1376E36537980283C40859,
	InnerLoop_AddInnerLoop_m1F6EBB39DC6430811EA44C2C3DD6383C0B22E642,
	InnerLoop_SubInnerLoop_m43D7F92AF56CEEA12C2CD9224031153F99355356,
	InnerLoop_MulInnerLoop_m8040ED2B00D23F59706EBB610F7AAF4A145E2CBF,
	InnerLoop_DivInnerLoop_m739741F58F0CF4B780038883A49BAC3D4BA1AEE1,
	InnerLoop_MinInnerLoop_mEBE1D2586BBE33A83530C5A810C8694A2F930E3E,
	InnerLoop_MaxInnerLoop_mA0BC1F35F291641FEDA33C8EF8DDD923728983CD,
	InnerLoop_GreaterInnerLoop_mA4371E88899ABCB7E6CE82C7285678AC7D8F237E,
	InnerLoop_GreaterEqualInnerLoop_mDBDE497B8A54636A1C87BA2C132E5901E2AF6112,
	InnerLoop_LessInnerLoop_m3FE1522E30618108010B206330D888E8C3019E64,
	InnerLoop_LessEqualInnerLoop_m03CBCF62528CC5533A5632F944155B9801E6C1D6,
	InnerLoop_EqualInnerLoop_m16B2C7CB44B62A22D688CD39C6CB61D5AA1C2973,
	InnerLoop_LogicalOrInnerLoop_mC5E143D64AA017CDAB12D58F92DCE86EFCF77D95,
	InnerLoop_LogicalAndInnerLoop_m4A4F83D40701BC41A22D0473932014D067FCEA42,
	InnerLoop_LogicalXorInnerLoop_mD7D256724F16E3E9CE1B131DDABA2A1CE94DC0B3,
	InnerLoop_WhereInnerLoop_mA47276730259F37141EEF8F3D1CE687318056D18,
	InnerLoop_AddInnerLoopNoBroadcast_mDEC8C44980E03D6C6F9B06716D19C2CD9365074E,
	InnerLoop_SubInnerLoopNoBroadcast_m0C51981BA10B91F0B4A59EA05D0E56EB777C2364,
	InnerLoop_MulInnerLoopNoBroadcast_m11994E5FAA2D6CAAFC6A3AED768A652D2DC98B7E,
	InnerLoop_DivInnerLoopNoBroadcast_m5530A515173FEE1869401088C3D9B1923AD9358F,
	InnerLoop_MinInnerLoopNoBroadcast_m16A73CF394C7B6EE162D7601CCD30CE2B53CA259,
	InnerLoop_MaxInnerLoopNoBroadcast_m11B07793FDF011BC3817DFBA0BEFE48ED4FFA94B,
	InnerLoop_GreaterInnerLoopNoBroadcast_mA52A45E1B446E45EC0AD5B438A60E4FA60EEFF36,
	InnerLoop_GreaterEqualInnerLoopNoBroadcast_m77A1C44878B0275D2E0ABFD838A0BF33BE648CEA,
	InnerLoop_LessInnerLoopNoBroadcast_mA3541C932ACB5B5C523C7D42563B27351EF7EB84,
	InnerLoop_LessEqualInnerLoopNoBroadcast_m770BBB333C1A9EA898094779D3C25A2C07E49249,
	InnerLoop_EqualInnerLoopNoBroadcast_m3347D2970A159DBE5922E37A4968146113FF1134,
	InnerLoop_LogicalOrInnerLoopNoBroadcast_m5D0D9C1054A78C622152D1DED529CE01DEDF5F56,
	InnerLoop_LogicalAndInnerLoopNoBroadcast_m0C4A3B61408CBA40B871A4548C12FAE60397B377,
	InnerLoop_LogicalXorInnerLoopNoBroadcast_mD2000DA7F9B291CF6F78CC783BFCE82D05137ABF,
	InnerLoop_LogicalNotInnerLoop_m38B819A6578EE836F24D5A88A61C63D736F6EA56,
	InnerLoop_WhereInnerLoopNoBroadcast_mD6B66B5D99123D92BCE15717F90EA94B8BE99DF3,
	InnerLoop_ClampHWToTensorShape_m180281F53613C436CC4B7CE53FBBB67A750B8C88,
	InnerLoop_Border2DInnerLoop_m7B8405C0C502BAEAFB3C836FBE03F5699A598762,
	InnerLoop_Pad2DEdgeInnerLoop_m1221BE4F0D29A5F14533F5A0F30B6F5A47900FBF,
	InnerLoop_Pad2DReflectInnerLoop_mD00C1EF5BA804F512D82F709EE73465A9CA202AE,
	InnerLoop_Pad2DSymmetricInnerLoop_m05FCFB67E68B9A0AB56906FD9E91F42998AA8E00,
	InnerLoop_ScaleBiasInnerLoop_mB4914D497FBA5EAF411E419368DE449F43B0D8C2,
	InnerLoop_Add_mE5094DB749D8010B124E22B904ACF8060B73607E,
	InnerLoop_Sub_mBAF57BC19AF314609C0EE4D1CF322BBBBB0D0C00,
	InnerLoop_Mul_m181FF4C5B6ACFC5F307846BA20E33C78B9998ED6,
	InnerLoop_Div_mBD3C2009D6878D4D9F057A01EE70CBDB7ADF075B,
	InnerLoop_Min_mC45E818ABA4001224B19A9E99D896BF121ED0307,
	InnerLoop_Max_m6CE1FE740BDFAEDB02E35B5709E20220A1FE0BD3,
	InnerLoop_Greater_m7A8245DD8817ABA6FB2BCD5EBA9765BA39926FC7,
	InnerLoop_GreaterEqual_m43D4A6D2E32AAB06AB130C3D05C2B3891599FAF1,
	InnerLoop_Less_m7E4A29CEEBDC50CEF84BCB67C20B0857E4FD5FF0,
	InnerLoop_LessEqual_mFED0D87F4E00A4C0B2CE69AEA18EDE1823A821B2,
	InnerLoop_Equal_mDF27C8C85F27DBBB731D907E8F86269614AE0283,
	InnerLoop_LogicalOr_mCE1060A32B0AC6FB47734581CD791422AE0786EB,
	InnerLoop_LogicalAnd_mEC55477818E6D110A15981D3A016A102693A38F6,
	InnerLoop_LogicalXor_m758251BE505FAF027694F04F16B8AC4F22D98300,
	InnerLoop_LogicalNot_m3CC58D3265F002C8ED8A371B4A18494BA5E07EEA,
	InnerLoop_Where_mC0C7C270FF81C51C0B3B48833350D3DC1641DE5A,
	CompareOps__ctor_m03C4874330EBE65CB239213637B627CC24C601F0,
	CompareOps_PrepareModel_m89F84D6D8598A98FDD36260A5535796C2DCFDB92,
	CompareOps_PreExecuteLayer_m214D2B150B61D6CA415CDDE76FD0895A9ACC049D,
	CompareOps_Unity_Barracuda_IOps_MatMul_m75ECA68A0F6A5A3A4402AE8A41DA93DB7021A573,
	CompareOps_Unity_Barracuda_IOps_Dense_m8EBBE3AD4FB797919B7FA99E3B876175EC69E106,
	CompareOps_Unity_Barracuda_IOps_Conv2D_m597E3BE11E0A869AF50A8CDDCC5C91678DC3B0D3,
	CompareOps_Unity_Barracuda_IOps_DepthwiseConv2D_m60D8BD6D195B247CF817E8A9F0DA6848027B253D,
	CompareOps_Unity_Barracuda_IOps_Conv2DTrans_mF5CC98F3C9548FA2A6677EDAEEE7EBF3F076018C,
	CompareOps_Unity_Barracuda_IOps_Upsample2D_m72BA57B1E89A378A16237040EC9E78F169216B05,
	CompareOps_Unity_Barracuda_IOps_Resample2D_m413CFE3ADCED2A7573522F415846682771F0778F,
	CompareOps_Unity_Barracuda_IOps_DepthToSpace_m3ECBE30E33FD2D3EC91B3447AC1E059BAA52D7EA,
	CompareOps_Unity_Barracuda_IOps_SpaceToDepth_m3BC64178B9E48D39A3C7F781D62EF4B508F7D0DC,
	CompareOps_Unity_Barracuda_IOps_MaxPool2D_m69DD9DE7A7DDAD37AE26167F443B73955390251C,
	CompareOps_Unity_Barracuda_IOps_AvgPool2D_mA87F0F8BBDB63A312C2164A00368C56F65ED53EE,
	CompareOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m6A09D3434186B79D21B20B1F73DB787B24058DE1,
	CompareOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m0AC1796D79A6D263B41BE022F019457F34E4E023,
	CompareOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_mEF687591499BCB0B8291E5E3C14EBDE6D01C679A,
	CompareOps_Unity_Barracuda_IOps_Border2D_mD3296AF7370F679B32968325362E129889230C64,
	CompareOps_Unity_Barracuda_IOps_Pad2DReflect_m8E15F8102E63A2A9BAE4A5BAEB8BFB478283E8ED,
	CompareOps_Unity_Barracuda_IOps_Pad2DSymmetric_m7A96EDBB6B7D690983D26788A3904FD9D304713C,
	CompareOps_Unity_Barracuda_IOps_Pad2DEdge_m280A9C936150FEB6AC5026E9647124D8944FD10A,
	CompareOps_Unity_Barracuda_IOps_ScaleBias_mB850621028F415D71FC597EFFFEACDC5CA54A719,
	CompareOps_Unity_Barracuda_IOps_Normalization_mBD4068618C6043AA936F84FFE709F376FFDF2BF7,
	CompareOps_Unity_Barracuda_IOps_LRN_m310B70624EC7AD02E0F4CBE519C3D7A1CB01CCB6,
	CompareOps_Unity_Barracuda_IOps_Dropout_mC13A91180E077E221A81137B73FE9A7432B474BC,
	CompareOps_Unity_Barracuda_IOps_RandomNormal_mE3F8B5E6D5BC13252FD3411962E9273000D44157,
	CompareOps_Unity_Barracuda_IOps_RandomUniform_m6E9678D0BAC89229A26C38F3225B1B3E958578B2,
	CompareOps_Unity_Barracuda_IOps_Multinomial_m89BFAEE78A3B7FB9611A1E58C8D073094EE7150E,
	CompareOps_Unity_Barracuda_IOps_OneHot_m81B854E4631D6BD79C477B22AEAA9A1CC5FE789F,
	CompareOps_Unity_Barracuda_IOps_TopKIndices_m9DE5DF7AD3B6D374954206E3DB6CC8766046BFEA,
	CompareOps_TopKValues_mB299D2EFFF1C12FF35A2175279F05CECB7A1DE2F,
	CompareOps_NonZero_mFA1CC24FB3753A8DD07E658D98CE9F8458E77D1E,
	CompareOps_Unity_Barracuda_IOps_Relu_m70E72FD032DF56084C52C56CD523AAF81DE8E0FF,
	CompareOps_Unity_Barracuda_IOps_Softmax_mF5B0120A26C4F86D8D6CB24E284B54218E5E090C,
	CompareOps_Unity_Barracuda_IOps_LogSoftmax_mB7D2FBC9BEAD067FD506FD9248187371B0221CBC,
	CompareOps_Unity_Barracuda_IOps_Tanh_m125E051EFA6D05715F41F8EF4BBCF2CE6077CDC6,
	CompareOps_Unity_Barracuda_IOps_Sigmoid_mB20BE2907FBFCE7C61CA5435015BECC8BFE178D4,
	CompareOps_Unity_Barracuda_IOps_Elu_mAB5312413BD6A9F8A0372FECCBC9C806DB5AA925,
	CompareOps_Unity_Barracuda_IOps_Relu6_mE952F97481391317A83D1919582DB8D2BA5A588B,
	CompareOps_Unity_Barracuda_IOps_LeakyRelu_m1795C37FA33013F48B9AA8E0D39BD430DCF7648C,
	CompareOps_Unity_Barracuda_IOps_Selu_mC84EB94011DD67C4471048E6FABC023965A0B262,
	CompareOps_Unity_Barracuda_IOps_PRelu_m2640C3E81B4BBCBC01758B2AEE336C8B8066E4AD,
	CompareOps_Unity_Barracuda_IOps_Swish_mA230ACF73644BB1885D0E87D3E00CE7AAED442FB,
	CompareOps_Unity_Barracuda_IOps_Abs_mD33787572F47F256DDBD4A2C43F3356804BBD36A,
	CompareOps_Unity_Barracuda_IOps_Neg_m053238B90C3EEBA89A2DD002A89D689ACC419DBF,
	CompareOps_Unity_Barracuda_IOps_Ceil_mC8C4B7A7B2C8C5EBC7940EC1BA2B6D78029494A7,
	CompareOps_Unity_Barracuda_IOps_Clip_mC7D11D5199C92013EA233E848CE06FCB8263E544,
	CompareOps_Unity_Barracuda_IOps_Floor_m89A2CD3B245FEC97DB01DB563198AFD766BE4D7C,
	CompareOps_Unity_Barracuda_IOps_Reciprocal_m7A365817567624EF195E5E3E5831F7C8F4FCDB1E,
	CompareOps_Unity_Barracuda_IOps_Pow_m3566FB75695EE939F4A9D31BB90E07FBC61BFD55,
	CompareOps_Unity_Barracuda_IOps_Exp_m8FF0FF5CB2CB84396BC30E6BAABE0D0518ADA031,
	CompareOps_Unity_Barracuda_IOps_Log_m6102663EE5F01D070D29701039C0E54FBD2DFE76,
	CompareOps_Unity_Barracuda_IOps_Sqrt_mF1F47794AD5CF248024D0A5803825987FBC3F0C9,
	CompareOps_Unity_Barracuda_IOps_Acos_mBB1E227D3BE6E5DCA79A4803DBA767765567FBDB,
	CompareOps_Unity_Barracuda_IOps_Acosh_mB6140F3491AF5DF068BDC476828E7C4EEAF2B177,
	CompareOps_Unity_Barracuda_IOps_Asin_mC11E7A896A8C7A7F2AF6189E8C1E713F8C478BA4,
	CompareOps_Unity_Barracuda_IOps_Asinh_m14830A6A05E18C184DE1CFB81E4F7218E55D1269,
	CompareOps_Unity_Barracuda_IOps_Atan_mF878DCC94755B5E4437388549BDF46BD42EE5BBF,
	CompareOps_Unity_Barracuda_IOps_Atanh_m3D0F7FB5BA29AA28775B0FF13BE689F1C5FDB74A,
	CompareOps_Unity_Barracuda_IOps_Cos_m455C8469D81B82245D5420CA334677F95DD1CC91,
	CompareOps_Unity_Barracuda_IOps_Cosh_mE0C2F50C4953EC8304C88F38ABD4C94CF9B7CF07,
	CompareOps_Unity_Barracuda_IOps_Sin_mCB258A9DB29A5E6C3B4C61DB1C169DD7BDFB7E85,
	CompareOps_Unity_Barracuda_IOps_Sinh_m7DC9DBFB2D06ABBDFB2BDBAF1F263F90BC14E589,
	CompareOps_Unity_Barracuda_IOps_Tan_m011D0A54CDD89D60FB5FDA5ED26684EA24D2BE9F,
	CompareOps_Unity_Barracuda_IOps_Add_mD90C8BBB2E2C9885C6226BBBBABB87F2EE41B30F,
	CompareOps_Unity_Barracuda_IOps_Sub_m03DA72640F801F89DC6015CB3042C6A2FB5B9A20,
	CompareOps_Unity_Barracuda_IOps_Mul_m0814EE3E11ED48542C11FD92D725E0045154ADA8,
	CompareOps_Unity_Barracuda_IOps_Div_m0154C0D3D2CB169875269BCE0D8F0FC031BF5D51,
	CompareOps_Unity_Barracuda_IOps_Pow_mAABC00948678B50CCB150A99B29FF0B33966758A,
	CompareOps_Unity_Barracuda_IOps_Min_m55AFD7CF68B23DEB933179BED03C897D96C901DB,
	CompareOps_Unity_Barracuda_IOps_Max_mA3A1EE6F83FDE7B186A54CF54E50923EF8168F83,
	CompareOps_Unity_Barracuda_IOps_Mean_m643FA085B4A967A7882756BF9A77DD86AF957CB1,
	CompareOps_Unity_Barracuda_IOps_ArgMax_m1E20F24A0937F82DD29E21389F073EBFA925F679,
	CompareOps_Unity_Barracuda_IOps_ArgMin_m2B8A7A9EFBF04518E1E2C4419627591221139037,
	CompareOps_Unity_Barracuda_IOps_ReduceMax_m3C46C7FC2AF9904B25DB4583DD880BB862871B00,
	CompareOps_Unity_Barracuda_IOps_ReduceMean_m53E0CC72A046A1C20DBCBCA147C8099DA51ADA43,
	CompareOps_Unity_Barracuda_IOps_ReduceMin_mA30D885EAA64E95A52083C0161E5A410EEFA92D4,
	CompareOps_Unity_Barracuda_IOps_ReduceProd_m3564B33E788F57AE925917D1C5FD0D285F898B23,
	CompareOps_Unity_Barracuda_IOps_ReduceSum_mB69FFD67BBF82E9FBA72E0AB09306FC7E8248EEB,
	CompareOps_Unity_Barracuda_IOps_Greater_mBD9B9C9C8B6E98F0ADFAD9211C66EABF3CB9FA44,
	CompareOps_Unity_Barracuda_IOps_GreaterEqual_mDB701424D2F484A3B477BC1C5C299D13D5A27314,
	CompareOps_Unity_Barracuda_IOps_Less_m38CCECB96B0A40E2DE9A1065FD79098CE193BBB9,
	CompareOps_Unity_Barracuda_IOps_LessEqual_mDA8B9313D7C8AC4E0BA34663F20FF3BAFA03016B,
	CompareOps_Unity_Barracuda_IOps_Equal_mD1F7B4BDB6E5ACB1BBC5FED993FCC9E918FD2320,
	CompareOps_Unity_Barracuda_IOps_LogicalOr_mAC2EE37C5B606E9EB7A4A307D620099A1CAB2DD0,
	CompareOps_Unity_Barracuda_IOps_LogicalAnd_mAFF3B9CFC2B9176386BBF6E7A9B64E1F98E0E99A,
	CompareOps_Unity_Barracuda_IOps_LogicalXor_mA40151A358A1D75B35FB5FBD8B3E04CBF2B83191,
	CompareOps_Unity_Barracuda_IOps_LogicalNot_m38A50D79059C65CBF29F8C38C312B8B9B7E00A6E,
	CompareOps_Unity_Barracuda_IOps_Where_m423FBE5C307FA04A06283CC87C091A0D7BBD745B,
	CompareOps_Unity_Barracuda_IOps_Flatten_m30E781CE6C551B99E5EEB01242E018A0F3075095,
	CompareOps_Unity_Barracuda_IOps_Reshape_mAD2A402CBC0C64DF96431FF5827477DD8C3EAC3B,
	CompareOps_Unity_Barracuda_IOps_Expand_mA3B98063DB0F4783AC9BC3C39035B1F7D4009DE5,
	CompareOps_Unity_Barracuda_IOps_Transpose_m94F03CE0DF753D3A7BE1A7D1F6D324F9BA7FD205,
	CompareOps_Unity_Barracuda_IOps_Transpose_mD9432211B3D0397C760C46D7CA42096F3A7C1CA0,
	CompareOps_Unity_Barracuda_IOps_Gather_m9F844035E6B5D4074B387B83686F6ED779EE5923,
	CompareOps_Unity_Barracuda_IOps_NonMaxSuppression_mF07972EB5BBC5E705C96D794382E01CEA5766A7D,
	CompareOps_Unity_Barracuda_IOps_Concat_m5C65C4DE26575249FF2153AAA81985241FE8810B,
	CompareOps_Unity_Barracuda_IOps_StridedSlice_m8AAE647C8C5B4D0BF90081AF3E16395A3D8F0225,
	CompareOps_Unity_Barracuda_IOps_Tile_mE85C8550FB2A955B1B8AFCE14A45C40C8CCEEF4F,
	CompareOps_Unity_Barracuda_IOps_Shape_mB2A88EC1BD60EA917B45F0C2367DFE1642CFDF21,
	CompareOps_Unity_Barracuda_IOps_Copy_mE916D8822C45BAC9E51B7458683939756E91D31E,
	CompareOps_Unity_Barracuda_IOps_Prepare_m41F936182DCDA953F5530E01C64A438D13A14F0A,
	CompareOps_Unity_Barracuda_IOps_ResetAllocator_mE853807A95FB6154834DF837AD428F64FFE98C37,
	CompareOps_CheckSame_m1460E873ECFC34CC27D62CDE12484064F485E1C4,
	CompareOps_CheckSame_mDFF23F453A033AE68883D66096F70377DE5448BB,
	CompareOpsUtils_CheckSame_mC3EAD74388C452A6B1C1491F059DBD801CA054AB,
	CompareOpsUtils_CheckSame_mFC75D32E31558000DA819A145644213259ECEA8C,
	CompareOpsUtils_CheckApproximately_mFA9DFC784159545DA532EB1EDF4F75712BAF0CCA,
	CompareOpsUtils_CheckApproximately_m20DF1B221D5439B724EDF17A83A6E2901B024DE1,
	CompareOpsUtils__ctor_mC7FD5E3C16361D97372C0041C2B3B699C2FEA14D,
	ComputeInfo__cctor_m8908DF9F660AF64EBEAE2E3B22C2FCF690A5928A,
	ComputeInfo__ctor_mD6DE7282AD7B060E484B2BF3E383A3761B257608,
	ComputeShaderSingleton_get_referenceKernels_mB1052E94997DD3070D2B6B5D4F3EFCA97F340251,
	ComputeShaderSingleton_get_kernels_mAC01CC4498A362357BB69CE1EC4652D357D9066E,
	ComputeShaderSingleton_get_texureKernels_m9FC97F6E12C681683D78A1B991D54FBFFF2B578D,
	ComputeShaderSingleton__ctor_m29B9E816827DE5D2EED42FC58C86B0DBDBEEBB33,
	ComputeShaderSingleton_LoadReferenceKernels_m1A619F174782FBE1AC7C70AEA5DEA408C2ADBFBE,
	ComputeShaderSingleton_LoadTextureKernels_m8F093231D4F91D2C043D31EAFB62C84E0C33C2E1,
	ComputeShaderSingleton_LoadKernels_mD4EE0FA1BB795E867A7CE83AF2DA94C24B9A2608,
	ComputeShaderSingleton_get_Instance_m39E2EFA148C75B43DA543DAD32D635561A0630F9,
	ComputeShaderSingleton_LoadIf_mDE3CB07A2DBF87D47F873A39F8EE78CF149167B2,
	ComputeShaderSingleton_LoadIf_m6681B5C6E532687447F5F49FAD85F541767116D0,
	ComputeShaderSingleton_get_supported_m6A76BC26B2BDB724FDC92D9B83C8F1EF4E121950,
	ComputeShaderSingleton__cctor_m00C0DEC97DC1D06CD0B056DF20B1BC1C8DEAB1B1,
	GenericWorker__ctor_mAB691690D4961DF86FC0EF4E41D6950B6D06C308,
	GenericWorker_Finalize_mFD1CD71643CF655721404944E62AF3A017B9AB60,
	GenericWorker_OccupyAllocator_m16A6058CE5FD11553A41637941745E0B25779828,
	GenericWorker_ResetAllocatorIfStale_mB5B8AD44C4D3E9E2106F408F1308BDB13F95C058,
	GenericWorker_ResetAllocatorIfStaleAndNotOccupied_mA31D2274938ED0327206C04FD2BB45EEEEFCE38D,
	GenericWorker_Dispose_mADB23BE11AD7100B6281DCBF7FFD21539F2CC64E,
	GenericWorker_PrepareForInput_mF9F93F2C654D57F11775CF1BD7B966F850CD04FB,
	GenericWorker_SetInput_mB9E3FDC2936D0B78887E9DCA34AE1B893117241B,
	GenericWorker_SetInput_m6006D2DE4B9B1ECB2AC1DE6009097C78C4D0F99D,
	GenericWorker_Execute_m75BA1044AD01E92D120AC7CDC23E69B5B2101129,
	GenericWorker_Execute_mA007D5093B711E50EA097FBD2BB6617CC10E47F3,
	GenericWorker_Execute_m39E1A9A6D7DAEA201C8F45360A8DF26A2765D68B,
	GenericWorker_StartManualSchedule_m96C17FA706A646F7862C35E740AB0D271C9D789A,
	GenericWorker_FlushSchedule_mEBCEBBDF8DA2812424F7D4CA8A1862DAAAC54B13,
	GenericWorker_StartManualSchedule_m18FDE88CAB5E55D9AFC224DD4920BB5CB39295D8,
	GenericWorker_get_scheduleProgress_m7132FAECE9DEC2D5DE9CEC308E469B84948D1E42,
	GenericWorker_GetAndVerifyFusedActivation_m63C4783C3CB6758FEBF8767A08527BED69E33877,
	GenericWorker_StartManualSchedule_m1A0B9E0A17AC44582217E622097F80EA15F2CE07,
	GenericWorker_PeekOutput_mAA65AF44AAB820E0B7F8B1042FCAE39582BFF099,
	GenericWorker_PeekOutput_mF03C0FE470CE952499FEA8914A44537056B966B5,
	GenericWorker_PeekConstants_m3AA8A9C5F1E1659B994F6C83B0587247C1A74DE5,
	GenericWorker_Summary_mFB9C13857AA2F68C1E3D7C49EB415FF129A06F62,
	GenericVars__ctor_mAC99D397D1B1849BE5ECEBC747B35C2BF235E6FB,
	GenericVars_Finalize_m6BA83D4D103B5063376B876CA1E06B7AD4541E53,
	GenericVars_Dispose_m772F21345C85909C13DFA57928D58C87546A0A21,
	GenericVars_GetAllocator_m0436E686C6F8DC62A2A15AD1B27DE226C59DAD29,
	GenericVars_IsTensorOwnedByInternalAllocator_mDA864CB2C278F1151D312CEB59AA9D7C4C885180,
	GenericVars_ValidateGlobalInputs_m9BEE55A2F55DCA0B811C1617572C82DB0247DD3D,
	GenericVars_PrepareLayerInputTensors_mCE160D6182CDC0756B211F0E95063285ED0733D5,
	GenericVars_SetInput_mBFA49C0979ABAC11194EE80063A1FE42C825CE18,
	GenericVars_PrepareStorage_m054284595FCA2988DA36D76B14997512EA224C9C,
	GenericVars_GatherInputs_m10DFA45036AF190AA9F7C99929F2D8E9353129EB,
	GenericVars_PrepareStorage_mA4B57A9AF2123E053A37A61E217609DFF1B310A5,
	GenericVars_Store_mFB3FA4BF6121BCCB90884D2101F1724657256D06,
	GenericVars_PeekOutput_m1E539114E673361C6A80BAB25E5C4AF0272A8FCE,
	GenericVars_PeekConstants_mC972AF922A3BF5FD3C6E49208426E58B4E492164,
	GenericVarsWithReuse_get_layerRequiresStorage_m7B60D3E4A97752C6C8C3AB4CCF0313FD57F63524,
	GenericVarsWithReuse_get_temporary_mE4EC1FEEB363983D0D79505EB74682E7F9A0E650,
	GenericVarsWithReuse_ReleaseTemporary_m0044D573537DCF77470B0CD3A9A4500C6313493F,
	GenericVarsWithReuse_PrepareStorage_m2C3EB3659B7CBA88FC83A2C4A0AB9F6D72E9FDA2,
	GenericVarsWithReuse_PrepareStorage_mB98CCE8C0032BD8D3C71A7B608D4D842E5BD57F2,
	GenericVarsWithReuse_Store_m67AFAA1E6F473802BB9149836948EFF2163DD524,
	GenericVarsWithReuse_PeekOutput_m1BB3B36E6A4F7CE6AA503A4BFDBADAB83B44E9D3,
	GenericVarsWithReuse__ctor_m804FF9BED22BE2191962BA162D2F80B931C47D10,
	GenericVarsWithPreallocation_PrepareStorage_mD9EA365A1D68ABAA009962B0023C70C29D4E33CE,
	GenericVarsWithPreallocation_GetAllocator_m98C7D86771F7C54470F230F7370389EBEB964DD4,
	GenericVarsWithPreallocation_IsTensorOwnedByInternalAllocator_m8E51DD101B608D1186ECE68E3B41ED42E19FE054,
	GenericVarsWithPreallocation_Alloc_m38513583317BE8595F82F0F9A60140A8DD5A1EF4,
	GenericVarsWithPreallocation_Alloc_m06C7B1CCE0E1F39745CC234B8A9DE5654D13E927,
	GenericVarsWithPreallocation_MoveToDevice_m7ECAA3469FD15994A0D47DD1A79E84D3E17FB3EE,
	GenericVarsWithPreallocation_Release_m1E7702FDA9FB9DE8333A502CB1C811F76B644A28,
	GenericVarsWithPreallocation_WaiveOwnership_m4C685131032179FDCC0953F7B2B3E47C7C30E5AC,
	GenericVarsWithPreallocation_Reset_mAA5B41695F74034E79614614D50495A3FA778477,
	GenericVarsWithPreallocation_get_busyBytes_m1DF7C1F827A76C626BBDD93FE9B408700884D3BD,
	GenericVarsWithPreallocation_get_freeBytes_m86308FE7D2BBFBCB21000F640689A84AD5E1E1D3,
	GenericVarsWithPreallocation_get_totalBytes_m38761F4158611FEDB8637B45BC7D59F2A6E34DA3,
	GenericVarsWithPreallocation_ToString_m4D6EB2713354CF0A1FD70D6266EF5EED111CCF02,
	GenericVarsWithPreallocation__ctor_mC45D375117BF4E435C41247229AAF5532386400D,
	DefaultTensorAllocator__ctor_mA044DAC90A5754FCCBB7A6587C8EF504675CFCD0,
	DefaultVars__ctor_mCDC292426EE7F4FEB67D33BB6E87FDBA6BDFCA71,
	LinearLayerFusing_IsLayerLinear_mC33442357ED684CFA8D46027F45A4371C7E3E858,
	LinearLayerFusing_IsLayerLinearMathOp_mD751840167C97E67FF1FD123455DE386EFEAE6BB,
	LinearLayerFusing_AreLayersFusable_m0963D12FC1A8BEF92A8F7A2972ECBAE18523F1EF,
	LinearLayerFusing_Add_m74417B35F0A1F769BE2931B7DCC3E84F92CD43E6,
	LinearLayerFusing__ctor_m4D2C588FA7BD30F958511849145B10BDC3811750,
	LinearLayerFusing_FuseLayers_m9CA50809C3867C5F621AE6A3DB3A50EA442BDDED,
	LinearLayerFusing_U3C_ctorU3Eb__6_0_mD381516081FA4766AA358333DF89B0918B61E11F,
	LinearLayerFusing_U3C_ctorU3Eb__6_1_m7402800301CC265B31BEF2E275F3051791FB8349,
	LinearLayerFusing_U3C_ctorU3Eb__6_2_m11B13D923C8710C23CE479436E09C30A97526135,
	LinearLayerFusing_U3C_ctorU3Eb__6_3_m372481F7F08A2CD88C75A4BE9A2EB54F00C7F18E,
	LinearLayerFusing_U3C_ctorU3Eb__6_4_m051E51DFD1F7613C1B3EF7E9F644F14714E8F43C,
	LinearLayerFusing_U3C_ctorU3Eb__6_6_m99AC9DB58666AC9ACDFCECED24B16101E6960D15,
	LinearLayerFusing_U3C_ctorU3Eb__6_8_m114067FCF1D00609D4E8AE36CC151843E5A68832,
	LinearLayerFusing_U3C_ctorU3Eb__6_9_mE500FA0EA1BCC77CCD69D45868DA70163C698721,
	LinearLayerFusing_U3C_ctorU3Eb__6_11_mFBD752659CE63F553A9D36674A4B9BEEB533AF6B,
	LinearLayerFusing_U3C_ctorU3Eb__6_13_m8E6DBF6009926913AE1EE6A23EA7D2FF2BB509DE,
	LinearLayerFusing_U3C_ctorU3Eb__6_14_mD6A2DE7D2191EBE3135E1834D68C7D7131D7E07A,
	CSharpBLAS_IsNative_mEA6E7323B0A9F118BFC796D87F6DDA8703E3DF1D,
	CSharpBLAS_IsCurrentPlatformSupported_m7D32FC17BE2DBE5BD756D732C8FA300F9AFA14D5,
	CSharpBLAS_SGEMM_mF3B9F4BA5F6454E3FF3482F26A7511361514BEE1,
	CSharpBLAS_ScheduleSGEMM_m048890D46A7E35FEBB23647B8B2E5DEE3651D092,
	CSharpBLAS__ctor_mFE971B6C2FCA8F9D737C13C0B7D59E78668A2F30,
	MatrixUtils_CopyBlockWithPadding_m3779A858A6E333F0F7F5CC00C101E8B17D346535,
	MatrixUtils_ClearFloatArray_mA18BDA9CA3A71843FE248A55315422F00976A74B,
	MatrixUtils_CopyFloatArray_mD9695169C4883FDFB9906D36E086CFBEA5D0BE4E,
	MatrixUtils_CopyBlockWithPadding_m191D4BDBB9FB3CFE275DC2E60B81C8EDB2D5461A,
	MatrixUtils_CopyBlockWithPadding_m01FD5FFFFEB3B40809AED7B9147E2A45182BA57A,
	MatrixUtils_CopyBlockWithPadding_m5179FB99C9C9142EE036DAB0A8E2089577574451,
	MatrixUtils_MultiplyBlockUnroll8xhPadded_m723A00DE1702DA1A405E9381BCF820E8FA6F3A26,
	MatrixUtils_MultiplyBlockUnroll8xhParallelWithPadding_mAB581F1C85CFAF5E5256F95A69E22B8446AF1FF8,
	MatrixUtils__ctor_mB44EF7D5855131DB7B090E927B8C1533530FD69B,
	ModelAnalyzer_GetDefaultInputName_m88E5327BCDB391AE09CB98BAB88FCD22DF2BF149,
	ModelAnalyzer_GetDefaultOutputName_mF86682F121431070214D0053EEC37FD13F5D38E4,
	ModelAnalyzer_ListTemporaryTensorShapes_mF88929E17807C4989435DC533775093DBD520AF4,
	ModelAnalyzer_ListTemporaryTensorShapes_m3EEB4867C1950F234C50362EC735E6276059B217,
	ModelAnalyzer_TryGetOutputTensorShape_m10CC6BC0BC1A0E8AF6C1744C9792E2142CFF666F,
	ModelAnalyzer_TryGetOutputTensorShape_m894CDD6D14B9EB2D275822951F73D0F3EC9A5896,
	ModelAnalyzer_FindLayersThatRequireStorage_mD589A57DEECCE986711137EF5F5690820DB48B34,
	ModelAnalyzer_FindUpstreamLayers_mDF58BEAAE03EB9416CA837D844CB3E003D64C974,
	ModelAnalyzer_FindLargestNecessaryTensorShape_m171450CF2E325184DD3ED46A51DB741374DC1312,
	ModelAnalyzer_FindLargestArgumentTensorShape_m281F74AB4B01BD6EABC243038557DB2CA65B0E7F,
	ModelAnalyzer_FindUnusedLayers_m905E152E745631FD3099D124C41D46EDF3E6E8B9,
	ModelAnalyzer_FindBrokenLinks_m812B620655383528EAB2E0745FE434D649617754,
	ModelAnalyzer_FindBrokenLinks_m48877A3665C63A152C1E8212564BB8FD8B29E207,
	ModelAnalyzer_FindBrokenLinks_mA7738327D572A5268F70FFB8C5BA92515D498AC9,
	ModelAnalyzer_FindUnconnectedInputs_mD7A296D8F844A6BF44540B4C1911AF2F663A4230,
	ModelAnalyzer_FindUnconnectedOutputs_mCFD053F7E5A0D2C10E806F1FA89CA591669473B8,
	ModelAnalyzer__ctor_m5D8729F8EFBCC294A567C34EA9D0F16185F2937A,
	ModelOptimizer_Optimize_m5308ECE71A91C520EBA71729F4E3C31C6E027A4D,
	ModelOptimizer_RemoveUnused_m409A3939800976B70F1719DA445510F5F441EB4E,
	ModelOptimizer_IsLayerSupportingActivationFusing_mCBC3E9B23E9051AEDB391EDA6A48811E3FD85C7B,
	ModelOptimizer_IsActivationFusable_m2693A142A77AC257A523087E7F38236F3FEE59C9,
	ModelOptimizer_FuseActivation_m5F0F4017DFAD5450D81E9236CBC3A14724527E64,
	ModelOptimizer_FuseActivations_m1DC1BEFBC56538A594566CBDF7187CF2E4B06F78,
	ModelOptimizer_IsPermutationNoop_m4CCC20EBA97E2608C602BE0EB2EF7DDF482D182F,
	ModelOptimizer_IsLayerNoop_m82A35E1848AC8ABA8F01334F1697726EDFF97703,
	ModelOptimizer_RemoveNoop_m299DA8A6FD35E22215C78B0121579D42EB830411,
	ModelOptimizer_IsLayerConstant_mDD13FCA29714DECD40C3A0FD726524D252331E93,
	ModelOptimizer_IsLayerFusedActivation_m378111FE3EEF6913B913B0D3D51A6E5FF8CCEE0A,
	ModelOptimizer_LayerComplextity_mD0813D332318313012E277232E598058E8AF59EB,
	ModelOptimizer_FuseConsecutiveLayers_mDD194B6FD6BCB6D0D0B7CACE78CDAB86D83869D5,
	ModelOptimizer_AreLayersFusable_mF4A8A8AEECDBBC95BE1975D518A5639D0DFA78A0,
	ModelOptimizer_PackConstants_m546164696A81C54D55BBCBFFD190C2027F18ED5E,
	ModelOptimizer_UnpackConstants_mCFBEFC0A231444FE0DA2BF730FB5C575D9AC43FB,
	ModelOptimizer_FuseLinear_mB7F2C9D0E10BA1BCCB0487AFD8ADCAE42B362C5D,
	ModelOptimizer__ctor_m0B2118383282283DEBEA96026687A507AD444376,
	ModelOptimizer__cctor_m1DA59AB55F0C5B203AD926DE9C856345D423305F,
	StaticLayerOppComplexity_Add_mA40AB893741E12256B6851555AEA6AFA799F42DC,
	StaticLayerOppComplexity__ctor_m59C0EE23986A384357F9B71DC99222D31A71E919,
	StaticLayerOppComplexity_LayerComplextity_mB8FC23AB294E295A1FB0B93F28EB5741484FF88D,
	StatsOps__ctor_m41C83BB3427AD7ED1CE7634B15B0ED208D90AB41,
	StatsOps_PrepareModel_m20AA1E0E7A37C09DB561FC1E7B941B32075A8C47,
	StatsOps_PreExecuteLayer_m32C2B9D785879452FBEA9877870D6FA27BB58598,
	StatsOps_Unity_Barracuda_IOps_MatMul_m4F4FFEED3A056D29FE199FBEED7983841DAE1852,
	StatsOps_Unity_Barracuda_IOps_Dense_mE0391D15E8459A2F6155729FA6ADD6ADD41F8F82,
	StatsOps_Unity_Barracuda_IOps_Conv2D_m63F673B34CC0244CAF41BB3B0164C0C64EC5784F,
	StatsOps_Unity_Barracuda_IOps_DepthwiseConv2D_m910CCBF7E52B8E2483B8EBF943D4D417C5D0B5A0,
	StatsOps_Unity_Barracuda_IOps_Conv2DTrans_mFDED1367F9A58BBA30C397D7FE3417374EC789C7,
	StatsOps_Unity_Barracuda_IOps_Upsample2D_m80AE466378AE2F3C6C7261B38ECE86F51D266156,
	StatsOps_Unity_Barracuda_IOps_Resample2D_m77FA441FCED7D3C438BC6393FB68C2FECEEE8226,
	StatsOps_Unity_Barracuda_IOps_DepthToSpace_m51DC6AE470D9962D1D992B92A6D559F73D9F460A,
	StatsOps_Unity_Barracuda_IOps_SpaceToDepth_m64440C44AD99A38B6CEA589C9C800D99F8D323A0,
	StatsOps_Unity_Barracuda_IOps_MaxPool2D_m0EF270B3E89D46F84AFCDC3BE9BF501F7B4CE5D6,
	StatsOps_Unity_Barracuda_IOps_AvgPool2D_m35BDE34301B513AABB103E0DC53959072082DD00,
	StatsOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m7739D6D4C3C4DA1F0BE96551744B1BDDEB0A7C3F,
	StatsOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m1A09DE15F583F938C05932C812696AE03F1C03CB,
	StatsOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m9C11AB45D60EA691EC7A0E463F3E3AEB44835176,
	StatsOps_Unity_Barracuda_IOps_Border2D_m76BFE13EC9B1D047F24641EA6719A1249A88DCBF,
	StatsOps_Unity_Barracuda_IOps_Pad2DReflect_m0F585032C967526234C70CC8E3678DADEDCA76A3,
	StatsOps_Unity_Barracuda_IOps_Pad2DSymmetric_mFA45740E09A5EBA1289521ACC9EFDD513947AA22,
	StatsOps_Unity_Barracuda_IOps_Pad2DEdge_m4AE88E5C516B23BA7A7BF3522DD51190D13069C1,
	StatsOps_Unity_Barracuda_IOps_ScaleBias_mB69C66B4B6A8B8AA4DDE20F9D3A25400DC871948,
	StatsOps_Unity_Barracuda_IOps_Normalization_mDF8E0294624F7769FD85A201F4D0288F2847B812,
	StatsOps_Unity_Barracuda_IOps_LRN_m85501BAAD608CD919BEC1C23A6044D048D9D7289,
	StatsOps_Unity_Barracuda_IOps_Dropout_mF7AC3EFF204313DB5D1451FF2012E46CA75882DD,
	StatsOps_Unity_Barracuda_IOps_RandomNormal_mC17B426C897CD545E39C9B7898E726BDD71C9400,
	StatsOps_Unity_Barracuda_IOps_RandomUniform_mEAB624932CC5D320A880CE7964A67DA8D8B0CD12,
	StatsOps_Unity_Barracuda_IOps_Multinomial_mABB030B2D0457D61695FDB19B85D0DAC44FB505A,
	StatsOps_Unity_Barracuda_IOps_OneHot_mA7CE2B80D1ACD642BC7E73938C67767AB4D3172C,
	StatsOps_Unity_Barracuda_IOps_TopKIndices_mCF8B0219EB7936AAA1D77FE2138E76297CDB774F,
	StatsOps_TopKValues_m969F8DB757C5334B2E336F4294F9DDC2D5062E44,
	StatsOps_NonZero_mD91EC569F05063B8B4309376455FF7FEF0894E36,
	StatsOps_Unity_Barracuda_IOps_Relu_mE54E5B880EDD00483419E047025CD54695414C74,
	StatsOps_Unity_Barracuda_IOps_Softmax_m78145EF68A1CEACE40A7DBAB9AC7207BFDD15410,
	StatsOps_Unity_Barracuda_IOps_LogSoftmax_m1B1EE7464A4C028052C232D36439DAC66D6908C1,
	StatsOps_Unity_Barracuda_IOps_Tanh_m9E8676EC0712BC95B1D9683D7938C0DE55F658B6,
	StatsOps_Unity_Barracuda_IOps_Sigmoid_m3619FC384891F99F6275C3840BF4C2DF8434246F,
	StatsOps_Unity_Barracuda_IOps_Relu6_mB17F98B70E28AFE4DFBB9815287BA3D8AA2451E0,
	StatsOps_Unity_Barracuda_IOps_Elu_mA62985EA9F49C03232C6568CF4911117899D6E74,
	StatsOps_Unity_Barracuda_IOps_LeakyRelu_m0352EEFC540D97DD2B91A82A2CD159357545EA19,
	StatsOps_Unity_Barracuda_IOps_Selu_mB93CF896D8F8BB545ED33FA79CA2FC91F9251A23,
	StatsOps_Unity_Barracuda_IOps_PRelu_m950BC1D90330CFFB2C6DE965BA19FC4A644EE544,
	StatsOps_Unity_Barracuda_IOps_Swish_m05C6CD948F343C6B2796FB6AFCB565B5E35B0A1C,
	StatsOps_Unity_Barracuda_IOps_Abs_m2D21B044845C0AD444DA08445ECAD9A108E13946,
	StatsOps_Unity_Barracuda_IOps_Neg_m571C9CD08795F70C6D0147AB08C129D4E9743E18,
	StatsOps_Unity_Barracuda_IOps_Ceil_m54D7CBD802717DB15183B851091D47FE7E078A3F,
	StatsOps_Unity_Barracuda_IOps_Clip_mAAA5E5BB678788B621EB83DC99231337F8CF7A44,
	StatsOps_Unity_Barracuda_IOps_Floor_mDE2B5D44FD30DC01B263BF8C158231155CACD2DA,
	StatsOps_Unity_Barracuda_IOps_Reciprocal_mCA901B88AF7DD98DA72595C0BA8EF3751A00CEB9,
	StatsOps_Unity_Barracuda_IOps_Pow_mBB663E59A8C512C24460FF2408A3EE6E00A8083A,
	StatsOps_Unity_Barracuda_IOps_Exp_m8DF1CF0FC8EF6645F6834F5DB02386376E96C62A,
	StatsOps_Unity_Barracuda_IOps_Log_m22FC0FC1B22B8EC4337770549A32A0A9F31DBD75,
	StatsOps_Unity_Barracuda_IOps_Sqrt_mE4871B7AC8B8118BB7A88291D2510567E810069D,
	StatsOps_Unity_Barracuda_IOps_Acos_m12C766EFCF6489150FB01E5A8C5ADE541A111788,
	StatsOps_Unity_Barracuda_IOps_Acosh_mF99AAD41BF56359E4F75A2ECB16AE459007198AB,
	StatsOps_Unity_Barracuda_IOps_Asin_m59BD3A0D52BDAC4D9A279B5CB0912323B3185BD8,
	StatsOps_Unity_Barracuda_IOps_Asinh_mCCCC3760F60CF5353E88A8720E6771273B87B3DE,
	StatsOps_Unity_Barracuda_IOps_Atan_mFE856C23C3EC82865A53DE6BCF28B0F8E81C169F,
	StatsOps_Unity_Barracuda_IOps_Atanh_m9FBCA059D5FA126A61B550D2392A853A83CCAE4F,
	StatsOps_Unity_Barracuda_IOps_Cos_m336A910A0BC385CDCD26A70F8D0144E22AE05BBF,
	StatsOps_Unity_Barracuda_IOps_Cosh_m39EDE5CAEE456CC528027854D9107A496D9EBA77,
	StatsOps_Unity_Barracuda_IOps_Sin_m54082DDB2CFB11D03C56FF2BBAC394D668581176,
	StatsOps_Unity_Barracuda_IOps_Sinh_m3806A1B6C46CEE5756E4FBF7516CD57D36F8405A,
	StatsOps_Unity_Barracuda_IOps_Tan_m33346E21944D1A8223EBF7F64B2A2A239D44820E,
	StatsOps_Unity_Barracuda_IOps_Add_mD041F57BE90C7639B32DF150F40873B7D5B8AD28,
	StatsOps_Unity_Barracuda_IOps_Sub_mFBDB3E7405CCA43F7B028E130B52B358FCCDEEB9,
	StatsOps_Unity_Barracuda_IOps_Mul_m49511CF9FDC1602202CB735A07E73F084AE00DFA,
	StatsOps_Unity_Barracuda_IOps_Div_m68147DF6704AD82F001621B07B35D6D168D048C8,
	StatsOps_Unity_Barracuda_IOps_Pow_mC1196078C7B47AC9680BB97762336AE5D11C5B92,
	StatsOps_Unity_Barracuda_IOps_Min_mD1E65B26553E4E79D6C4942F986E5EF9C67166A1,
	StatsOps_Unity_Barracuda_IOps_Max_m4401BC9A9F976134EBEA4A4B22250996EB57CD71,
	StatsOps_Unity_Barracuda_IOps_Mean_m424DD02A358D0E2E2390EED53F7C015A8463590B,
	StatsOps_Unity_Barracuda_IOps_ArgMax_mB4AE35839C76E3B50EE19F3985E6C83F104E2FC9,
	StatsOps_Unity_Barracuda_IOps_ArgMin_mB25C7B9B7AC800618AAD1D4C50342B31B97FD76E,
	StatsOps_Unity_Barracuda_IOps_ReduceMax_m6B51AA1F638FBD27006F68BCD4E4C8197557E2EF,
	StatsOps_Unity_Barracuda_IOps_ReduceMean_m0E9B9335F88D9CAD56455427DD6AD6E44FA597BE,
	StatsOps_Unity_Barracuda_IOps_ReduceMin_m43323EF2841574245A48FFC278A2F029A9D5D7E9,
	StatsOps_Unity_Barracuda_IOps_ReduceProd_m2947CBC21949BC8E4D7B2AB58832C5A3883E2B17,
	StatsOps_Unity_Barracuda_IOps_ReduceSum_m6B34CE0B0AE6C1FECD9FE6F633B5D36DEE34FE47,
	StatsOps_Unity_Barracuda_IOps_Greater_mB5C7FD3183C4FE72CA77F8210F5EAD9B28CC626C,
	StatsOps_Unity_Barracuda_IOps_GreaterEqual_m7F6E2FC8FB7111CE826033477C89020630D32754,
	StatsOps_Unity_Barracuda_IOps_Less_mC96F4BB004E4D7CA87DA218D12EE58F0D234B87D,
	StatsOps_Unity_Barracuda_IOps_LessEqual_m2995F436852E496C3E1D51190E49CE41A7A2922A,
	StatsOps_Unity_Barracuda_IOps_Equal_mD48D5CEACC3946FDA5AFE5114E7419A6AE0A2658,
	StatsOps_Unity_Barracuda_IOps_LogicalOr_mEED76FE248477B4D6F8F93CEEA2E10F6AEEBA871,
	StatsOps_Unity_Barracuda_IOps_LogicalAnd_m25DDC7BA32B67D64143E811AB023CE9867E38A8A,
	StatsOps_Unity_Barracuda_IOps_LogicalXor_m35CCD9725A8C1749AD930D085B11DA478029DFA2,
	StatsOps_Unity_Barracuda_IOps_LogicalNot_mAFC09015222ED6BB41280E077D65C401B9FBCE6C,
	StatsOps_Unity_Barracuda_IOps_Where_m2D2540B3AC5608E3B75BEAB088FD191BA79ED398,
	StatsOps_Unity_Barracuda_IOps_Flatten_m7C01E28F6B7B8CA055157B5456185981CB5BA8BC,
	StatsOps_Unity_Barracuda_IOps_Reshape_m108345A389C411666042BDA98739BE0CE795658E,
	StatsOps_Unity_Barracuda_IOps_Expand_m0D43AF862416B9D991318DB6B2FEF8EF8FA0B84A,
	StatsOps_Unity_Barracuda_IOps_Transpose_m17BD831C1FE761B2176516979096E1309251FEEC,
	StatsOps_Unity_Barracuda_IOps_Transpose_mDB41800421C4477EDB1A95868DF5BC7E19380504,
	StatsOps_Unity_Barracuda_IOps_Gather_m115D968865FD0ED50B64869A35B2B470B6B96F8A,
	StatsOps_Unity_Barracuda_IOps_NonMaxSuppression_mC8509A52B6BC2818F24777816C5E61BBF42585F0,
	StatsOps_Unity_Barracuda_IOps_Concat_m075F2FE27B82ACA3D74EDEBF6F8372462A3C2793,
	StatsOps_Unity_Barracuda_IOps_StridedSlice_mFECA441D86162110720B3688F49134813788D09A,
	StatsOps_Unity_Barracuda_IOps_Tile_m230CA7B56F397226C541C856BF884CD507F9D1B4,
	StatsOps_Unity_Barracuda_IOps_Shape_m9C2E633B166969B8AAFB16D5845B96D28B1186A6,
	StatsOps_Unity_Barracuda_IOps_Copy_mB405E28B8D452484D053A82FA5C31055B7CAF255,
	StatsOps_Unity_Barracuda_IOps_Prepare_m623D66B0D7EB17F707A24BB4C9E8670AC8A688BE,
	StatsOps_Unity_Barracuda_IOps_ResetAllocator_m5C9D9231B571FA6F2D0DB2F6E81CDF0A9277DD9B,
	StatsOps_ToString_m0F0D6528138F39D98B4C614C390A1125E976E46A,
	StatsOps_Elementwise_m7831154571644B1079DF0173996A9C30C4A16DF5,
	StatsOps_ElementwiseBroadcast_m843B1C25365BF29F8A52BE9E9EE3E03DC86CAAD0,
	StatsOps_Reduce_m1B526270905F6D77CA4383C019250E72993AF67A,
	TensorOperatorNewAllocator__ctor_mAE56CBE5C4AF00193DEE0DA0FFF689B7BD4B4F91,
	TensorOperatorNewAllocator_Finalize_m487FCF1D7DE4766A14184A65CB390F6E57D213F5,
	TensorOperatorNewAllocator_Alloc_m05CB7AAD1FC577475EDD66A5605B19D1A5D24C28,
	TensorOperatorNewAllocator_Alloc_m611468DF7CF11A43BEED190A046ED19A7159CF8E,
	TensorOperatorNewAllocator_Release_m776B645BA01902B512984193A88C5554AEB720C1,
	TensorOperatorNewAllocator_MoveToDevice_m30AD4B01C93B4036AED6528F47E3B57FFBA50ED8,
	TensorOperatorNewAllocator_Reset_mBD0E75D3F5133349EBE1D0ABB4E345BE81DE92E4,
	TensorOperatorNewAllocator_WaiveOwnership_mFCF5ACCF2ECDDAD1ED4005C38D0A7F53D81E7E3B,
	TensorOperatorNewAllocator_Dispose_mF9E8DF6FA10DC46379F282647621BFF6E9510059,
	TensorOperatorNewAllocator_get_busyBytes_m3B1340D6E66133884283A2C5FAFCFDD2D59FFA8F,
	TensorOperatorNewAllocator_get_freeBytes_mF1459220131607D690387D6F2C3DB1C5AB4A8134,
	TensorOperatorNewAllocator_get_totalBytes_m2EBBFB95292F9C53562CC10D2C6C1592BC509B7E,
	TensorOperatorNewAllocator_ToString_m08EDC587CF03566F00A1CB8181F45ED68DD03A8C,
	TensorCachingByShapeAllocator__ctor_mE27F5E303947B0A1B5FE4469FDBE88F60994ECFF,
	TensorCachingByShapeAllocator_Finalize_m1FAD8D969A5EBC9AC267FC1BAC46A8A1912FED3E,
	TensorCachingByShapeAllocator_AddRef_m57B351D027ECD148F4AFEE7EBC075C3454AAFB6B,
	TensorCachingByShapeAllocator_DecRef_m4406F51CC4AC424A1E8DC615BD242707DE760387,
	TensorCachingByShapeAllocator_AdoptFreeBuffer_mDCFF5FE42EE3FA55D977DB3D771301C6929966EC,
	TensorCachingByShapeAllocator_Alloc_m0B991F11E5C3B432AF0C41282EADCCC54094F0A7,
	TensorCachingByShapeAllocator_Alloc_m7C9F25A92FB47234E8D3C42C22464ABADE9ED4C7,
	TensorCachingByShapeAllocator_Release_mF211B6561E434218CE161CCEAE7FD50078E371F8,
	TensorCachingByShapeAllocator_MoveToDevice_m477465289F6A39F9087E104C83CBEF07EA7F27D4,
	TensorCachingByShapeAllocator_Cast_m94F5708CF2299842B441A40530E555BCF132861A,
	TensorCachingByShapeAllocator_Reset_m6B7007531F6F224F2E55815DAC07CF287C45247B,
	TensorCachingByShapeAllocator_WaiveOwnership_mB42F09316A54DCC316A76CDF98BE21CADD3F9B82,
	TensorCachingByShapeAllocator_Dispose_m42F0D8BEB96D22AF5F7F35020ED0433404CCB221,
	TensorCachingByShapeAllocator_get_busyBytes_m620EB9D4D52D66B8985E7636FFAB95BBEC5326DF,
	TensorCachingByShapeAllocator_get_freeBytes_m0A30A8210A6C31799C51BE4746CD18BE513A2EC6,
	TensorCachingByShapeAllocator_get_totalBytes_mC96484FEB85DF1D0CE2E0E37F1497B63EFB0AF82,
	TensorCachingByShapeAllocator_ToString_mDBD1A836B6573F25B6E8FE525242944A23E64952,
	TensorCachingAllocator__ctor_mB7AC3254D3B3B3C37A357B914B4F6DFA0977A611,
	TensorCachingAllocator_Finalize_mBBD95E33B51CD3090E872952C997733BF4EAE962,
	TensorCachingAllocator_GetAllocationMaxCount_mB7336F541BD951A0E5900BB4AA100092D83E07AE,
	TensorCachingAllocator_AddRef_m2A20937971E6461BD7E9F250BC70DC36A0F28EE7,
	TensorCachingAllocator_DecRef_m9612695FD0AB79BF4BB86962D85E12353EC103F3,
	TensorCachingAllocator_AdoptFreeBuffer_m562B1052B3BD8229A0CEC85211CE174875586C90,
	TensorCachingAllocator_DisposeAllocatedBuffer_mED4DC2A2C3A4C4FA5729BEF67C859A823970E7AC,
	TensorCachingAllocator_Alloc_m810153BFC43629BA40EE008B2D7C68846533512E,
	TensorCachingAllocator_Alloc_m789CEC6BA038D6F8656EF16F48AAEEFDC46DBB2C,
	TensorCachingAllocator_Release_mE618729F1BCC8D03F3CF111993331ABEA6911B58,
	TensorCachingAllocator_MoveToDevice_m877C9C0AAC49CA1928EB878A56B9D98E10E867B0,
	TensorCachingAllocator_Cast_mC023627C98823F79B38346744A9A58288CB99225,
	TensorCachingAllocator_Reset_mDB485E97A30418410699F500AECB0854808DC7A8,
	TensorCachingAllocator_WaiveOwnership_m089791DADB6FE4DAD97E1F146DC215EA9229D19B,
	TensorCachingAllocator_Dispose_m98CC224BD63210CCC85F3817C3CBA2641D979B0B,
	TensorCachingAllocator_get_busyBytes_m7FF0E68879141F696A915A6D27965DFC0625736B,
	TensorCachingAllocator_get_freeBytes_m7BF34424F2ECD60033317208380D208604F3CD31,
	TensorCachingAllocator_get_totalBytes_mEDABB63FE907C71D225E3B3A4A30215DCE7379AF,
	TensorCachingAllocator_ToString_mD944EA5C5667FBC063061B01E4AB1339BDA3E05A,
	VerboseOps__ctor_m23C897BD870DAD9914ED16D5A929DF9C9EDE4368,
	VerboseOps_PrepareModel_m230C28A5F0BA7F442BD503D4EDDC6D0B458DD30B,
	VerboseOps_PreExecuteLayer_m869ACC58407510CE54515F822B1A552F107623F6,
	VerboseOps_Unity_Barracuda_IOps_MatMul_mBF8261C20162E566172698A042586D320D10E48F,
	VerboseOps_Unity_Barracuda_IOps_Dense_m71ED9F979057C345FA02EECAAD970E0C005056DA,
	VerboseOps_Unity_Barracuda_IOps_Conv2D_mD6E1D334F87855A365920C18E32B4A629E47C0BB,
	VerboseOps_Unity_Barracuda_IOps_DepthwiseConv2D_m6D7D2C2DE33DA4CB80045EB4647DE324E6AED0E1,
	VerboseOps_Unity_Barracuda_IOps_Conv2DTrans_mB40048B686662E95631ABA6C1CEA9F72AD7D1827,
	VerboseOps_Unity_Barracuda_IOps_Upsample2D_m67F80A04FD39F624269964A8A97B1B0AE740E528,
	VerboseOps_Unity_Barracuda_IOps_Resample2D_mC42CEF5D1EAC8D41B936997B53E9D0F0F092BEF1,
	VerboseOps_Unity_Barracuda_IOps_DepthToSpace_m0A758FD52C1D0F11437C3D70E56F6516A4C8705F,
	VerboseOps_Unity_Barracuda_IOps_SpaceToDepth_m7BD57EBCBB34A4181D4B3EB4A2B11BC8C59CAEBF,
	VerboseOps_Unity_Barracuda_IOps_MaxPool2D_mD9C753F71D8D767DF7DF0B42F95EC5107FBF4228,
	VerboseOps_Unity_Barracuda_IOps_AvgPool2D_m11C7EFEB72C75FDB065F1953018A2C83F23831B1,
	VerboseOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m91B565E82304EC4A0C5C2620C2323E7D55DC2DF9,
	VerboseOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m9A5FCBC8BF5857CC8B9AFFFEF960ABE763612181,
	VerboseOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m5F1294B48B39518FD696C469E5B7652FEFFA1BFF,
	VerboseOps_Unity_Barracuda_IOps_Border2D_mCFD82A7FBEAD5894F6D2140AE03BA908051B3540,
	VerboseOps_Unity_Barracuda_IOps_Pad2DReflect_m746CAC0C888BC84071877D2AED57B147B1916DCF,
	VerboseOps_Unity_Barracuda_IOps_Pad2DSymmetric_m459CE825D3EF3BD144848F31C077E483FD9EA138,
	VerboseOps_Unity_Barracuda_IOps_Pad2DEdge_m37C3D8658ECF2F23D569F3EC03977550F317AB45,
	VerboseOps_Unity_Barracuda_IOps_ScaleBias_m41FC38E6C1DF204FDB0567A2BDB276F16129B1F7,
	VerboseOps_Unity_Barracuda_IOps_Normalization_m69957D918EFB214BF452080F4D00C88B0B1797D4,
	VerboseOps_Unity_Barracuda_IOps_LRN_mCECDE18713DFAEDF044667BFBCCB82F76ECE7B6E,
	VerboseOps_Unity_Barracuda_IOps_Dropout_mC1ADFCF3C4728BC6C73AE9C0B4FA39BCD9671B43,
	VerboseOps_Unity_Barracuda_IOps_RandomNormal_mB9C90348379A06B89CAAEF93F0B77793398F15E9,
	VerboseOps_Unity_Barracuda_IOps_RandomUniform_mBA1B026C88F1156EE867F179A9BE862274483B8F,
	VerboseOps_Unity_Barracuda_IOps_Multinomial_mA6BC71F786057FFEC3289ACED4825B281D251158,
	VerboseOps_Unity_Barracuda_IOps_OneHot_m4500E248EBF17ABBE88FCA520DBD023B04824BA7,
	VerboseOps_Unity_Barracuda_IOps_TopKIndices_m75737D80F089B8668257552A28C8BE971F28F871,
	VerboseOps_TopKValues_mF5BF36334638E7BCF32917558612DEAF5F30CB5F,
	VerboseOps_NonZero_m7A7CF10D1A291441C7127BC8822E99494F77DCC5,
	VerboseOps_Unity_Barracuda_IOps_Relu_m84E1FE232113F15CBF4774291CF757A66A3D3E62,
	VerboseOps_Unity_Barracuda_IOps_Softmax_m7646AD1E3B1010B74ED9AE800CBAB73068EA4510,
	VerboseOps_Unity_Barracuda_IOps_LogSoftmax_m467AE2647C4F253C0EE164E700B6C0D88CC15A76,
	VerboseOps_Unity_Barracuda_IOps_Tanh_m2B91618AC7A5D018B1253E401B82807744F27B34,
	VerboseOps_Unity_Barracuda_IOps_Sigmoid_m0CC2FB32643CC0644A4723C469B895B08D255245,
	VerboseOps_Unity_Barracuda_IOps_Relu6_mEBADF5568A82E14F731B935579C26C1E0125A844,
	VerboseOps_Unity_Barracuda_IOps_Elu_m9B616EA84835EA49F0CED3334DA5DCB0E044F16C,
	VerboseOps_Unity_Barracuda_IOps_LeakyRelu_m6A3637626376D8027DD489856C923BED8E89E969,
	VerboseOps_Unity_Barracuda_IOps_Selu_m293A8973B6324E00B2EDB0110C8D3016CD14F91C,
	VerboseOps_Unity_Barracuda_IOps_PRelu_m01F20CF1A02CA6FF3C3F58049B4F6F313C5E75E2,
	VerboseOps_Unity_Barracuda_IOps_Swish_mCA06580C27C2C4E4EA864C66316B0554461F17CB,
	VerboseOps_Unity_Barracuda_IOps_Abs_m6C668E829CCFF82C90484D1D12E114486AD9214C,
	VerboseOps_Unity_Barracuda_IOps_Neg_mAC3DE90D4455FD962344987EF61BC4FB426EC33D,
	VerboseOps_Unity_Barracuda_IOps_Ceil_m1C232776BC9CAA845C1DE0A2B47C9A6F57E7D4F3,
	VerboseOps_Unity_Barracuda_IOps_Clip_mC929E4DAC413C832C4EEA9C0B450080AAA6EFCE0,
	VerboseOps_Unity_Barracuda_IOps_Floor_m6185290D8C185CB4EB0A7C202256617F366385ED,
	VerboseOps_Unity_Barracuda_IOps_Reciprocal_mEF2B6C652DF867AFCD813A5ABD7F0E5761D67BE5,
	VerboseOps_Unity_Barracuda_IOps_Pow_m35D8CB23B3C5810D1CC65C32F0E7AFFF0F2F033B,
	VerboseOps_Unity_Barracuda_IOps_Exp_m86FFFF3007CB0A4C5107A46920FBF119C045E48A,
	VerboseOps_Unity_Barracuda_IOps_Log_m0696ADAE062A351BB4244616F6208CA587C2D052,
	VerboseOps_Unity_Barracuda_IOps_Sqrt_mC9586A2CCCC87BE424C500D52CDDB20CF376BEF4,
	VerboseOps_Unity_Barracuda_IOps_Acos_m1DE0DBE1DC94592AFDED617FAD47CF3966815CE2,
	VerboseOps_Unity_Barracuda_IOps_Acosh_mDAE52F083B7F6386586AF97280642C73D8ECF8DF,
	VerboseOps_Unity_Barracuda_IOps_Asin_m72CA03480011735ACD2869A41D0F4A3FBBB73FA4,
	VerboseOps_Unity_Barracuda_IOps_Asinh_mCA5BC786A6584A45202264670BBFF4DA0C61A215,
	VerboseOps_Unity_Barracuda_IOps_Atan_m57F2BE054F10973F6604100895B9527B1D86AA20,
	VerboseOps_Unity_Barracuda_IOps_Atanh_m68B13C67C1A116C54F428FFED5B2F5BA0118E764,
	VerboseOps_Unity_Barracuda_IOps_Cos_m305A99CED5F84A3A29B50482F478F58F2C6EF6E4,
	VerboseOps_Unity_Barracuda_IOps_Cosh_mBF115F062F64B8780E2E77AB0A48386EC011802E,
	VerboseOps_Unity_Barracuda_IOps_Sin_m350087EF7FDD52229CA6351D8A4C680CB2FD5B53,
	VerboseOps_Unity_Barracuda_IOps_Sinh_m805B34133D9FDE975605709DCEF0C07530B2F4C6,
	VerboseOps_Unity_Barracuda_IOps_Tan_m76EE82B5706917CF82B97BE9209B2D898473305C,
	VerboseOps_Unity_Barracuda_IOps_Add_mFFA54DE9E287EC645FF33E46EDC52A8F99475E88,
	VerboseOps_Unity_Barracuda_IOps_Sub_m538A488E94A2914A35FC8B31239F985E5A3F3229,
	VerboseOps_Unity_Barracuda_IOps_Mul_m1759388C58851EC777C31813DE5FA6953FFFB127,
	VerboseOps_Unity_Barracuda_IOps_Div_m5CCCDC1FF5BCC4EDDAF7A8B7D9EE9D500D068003,
	VerboseOps_Unity_Barracuda_IOps_Pow_m12D210EBBF451622104E5FBE49A84CA9AD13A8D0,
	VerboseOps_Unity_Barracuda_IOps_Min_m741D6D93397962752F711B3F226D695AD37491D4,
	VerboseOps_Unity_Barracuda_IOps_Max_m10C0DCDA418C16C04B70DEFAAE1B17BABDA877EC,
	VerboseOps_Unity_Barracuda_IOps_Mean_mE4DE47887B7E07ADC10F6D1531D00D6BEE793FD2,
	VerboseOps_Unity_Barracuda_IOps_ReduceMax_mB78914D3F927AA189031155721DB0B8B146C6C7A,
	VerboseOps_Unity_Barracuda_IOps_ReduceMean_mEDB0EF7CB55DF9B3C80501DEFCF9E1A6EE653733,
	VerboseOps_Unity_Barracuda_IOps_ReduceMin_mEDFB106E3260481E390A02F820F60CC49FE9776B,
	VerboseOps_Unity_Barracuda_IOps_ReduceProd_m051ECCB0741BE1E4E1BE75000AB60713C081FB69,
	VerboseOps_Unity_Barracuda_IOps_ReduceSum_mFDD7E15416DF7C177D02CEDCF9DA31BD84ABE64B,
	VerboseOps_Unity_Barracuda_IOps_ArgMax_m14A3AF0B3940B7D6BDB4D5CB4DE7C01179CC0803,
	VerboseOps_Unity_Barracuda_IOps_ArgMin_m631CCF626A407A91F1A14BCFE7156A3947C4A99C,
	VerboseOps_Unity_Barracuda_IOps_Greater_m7265CC58D0714F66D7FEB12DAFF56F137B46E9A3,
	VerboseOps_Unity_Barracuda_IOps_GreaterEqual_mEECB1871DEB2D04AA265FD048B20D1E37466BEF3,
	VerboseOps_Unity_Barracuda_IOps_Less_m0A5E18281C0E87EC1CEFC031798B82240F73BAE1,
	VerboseOps_Unity_Barracuda_IOps_LessEqual_m4C21826ECC7CD313540E0942CD1BF6F070A682FD,
	VerboseOps_Unity_Barracuda_IOps_Equal_m0B53F823B8997017DF03949B1AE5278D21775B49,
	VerboseOps_Unity_Barracuda_IOps_LogicalOr_m6D702546468A9C6488DADC986C24DBA2B1654DE8,
	VerboseOps_Unity_Barracuda_IOps_LogicalAnd_m521712656F46CDF423D1BF8217225FAB06CC77CD,
	VerboseOps_Unity_Barracuda_IOps_LogicalXor_m39F88EF7FFAA0CCEED5840439EDE319079F4EE06,
	VerboseOps_Unity_Barracuda_IOps_LogicalNot_mBDD089261FE4736110F8549E76EE71FF6BEB15E8,
	VerboseOps_Unity_Barracuda_IOps_Where_m8E954B0BBF2466EF5176BED386C3BFCFB9D88CDE,
	VerboseOps_Unity_Barracuda_IOps_Flatten_m298428ED9685885D6D852E20A577BBA21F80BFC7,
	VerboseOps_Unity_Barracuda_IOps_Reshape_m92DC5171C86B0F47AF1209073B50109438E320AE,
	VerboseOps_Unity_Barracuda_IOps_Expand_m08A7EB95E30653D9E78DC655612A5F663D9295DB,
	VerboseOps_Unity_Barracuda_IOps_Transpose_m2BD36D89507E80BAC744D9AD40EE34EAA9585513,
	VerboseOps_Unity_Barracuda_IOps_Transpose_mCB53665B80D3A647C4E1ED25D3D8A74D12C95E37,
	VerboseOps_Unity_Barracuda_IOps_Gather_m0E20AEC77F5442A221D418AD770C0249EB571FD5,
	VerboseOps_Unity_Barracuda_IOps_NonMaxSuppression_m47572422ABDBD8BAA63DDA01BAEBFC3B32B208BA,
	VerboseOps_Unity_Barracuda_IOps_Concat_m2355EE31DEBB131D0E178ED875D734C821992578,
	VerboseOps_Unity_Barracuda_IOps_StridedSlice_mABEDA5C9BD1C900A2BE748B3FA50DC843869B6D2,
	VerboseOps_Unity_Barracuda_IOps_Tile_mB2FC108417D7FEF1E1ACF4C91420EA4602EA2BD6,
	VerboseOps_Unity_Barracuda_IOps_Shape_m8B86B37A1E43D0A8294117D5C84D0E0059837286,
	VerboseOps_Unity_Barracuda_IOps_Copy_m7370DF773CA28C7D03926FC00AB3DA3F8FD423B6,
	VerboseOps_Unity_Barracuda_IOps_Prepare_mA59ACA3DDB36975E72F502A9C822CF27412955FF,
	VerboseOps_Unity_Barracuda_IOps_ResetAllocator_m3A392A1BB5497C4B7F71F69C3EDB574A351AE058,
	DeprecatedTensorExtensions_PinToDeviceAndUploadToIt_m78721272EDA75D73A87AA5ACD326BA99B500B2ED,
	DeprecatedTensorExtensions_PinToDeviceAndDownloadFromIt_m77D14BD28A9030B03548F51CF68183510D3E76C2,
	DeprecatedTensorExtensions_Unpin_m1A7ADEFA6A98148C81B9051870A40B1F008B9C27,
	DeprecatedTensorExtensions_CastOnDevice_m607EBA0C2EF936C258BFFF5D8B5F1CCD8E41D679,
	DeprecatedTensorDataExtensions_GetMaxCount_m0B1FB364164F9E1B9FD9EA7B910215C5998A2D8C,
	DeprecatedWorkerExtensions_AddInput_m39DAEC71EF4888EB6E3709A6BA4AFAA0A4BC0811,
	DeprecatedWorkerExtensions_AddInput_m70FB5AD204A86A5DC1BD00485813C454B6BB17B7,
	DeprecatedWorkerExtensions_Peek_m79D5287D7C67BE1FCBA4BF019C6F669ADFDB6D6B,
	DeprecatedWorkerExtensions_Peek_mA1E9E0386675DC7A496AF85B24FF447E2E36F260,
	DeprecatedWorkerExtensions_ExecuteAsync_mB457768210649E0CFF36E78CA9F3D8C11D77D9C9,
	DeprecatedWorkerExtensions_ExecuteAsync_m276C4C066F8584E887E18234F73F5265557BBA12,
	DeprecatedWorkerExtensions_ExecuteAsync_m0043A385AFFB103D02DC5C7B05E91A179B8700DA,
	DeprecatedWorkerExtensions_WaitForCompletion_m8D759CD7FD4B55885593A9D5D28ECD35CD287A15,
	DeprecatedWorkerExtensions_GetAsyncProgress_mEC970FFF711776B5C833C816420E5E4D146C96F4,
	DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_m2C51DE42F6E7456505F2A36CBDAF63177144C232,
	DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_m0B67BCB9298DF356F43FE6112C1F9B12CB5CB53E,
	DeprecatedWorkerExtensions_FetchAndTakeOwnership_m2A531E5D72665F76F1874BFB3CB5E88D232D9D5D,
	DeprecatedWorkerExtensions_FetchAndTakeOwnership_mA3AE0140A0876664D0F945B4BD28FA087C9CA264,
	DeprecatedWorkerExtensions_Fetch_m4518D7DCD8B3833B2D0453ED26F7184AB42CAC56,
	DeprecatedWorkerExtensions_Fetch_m4B56169B411927C7EAFF146A4B3BB06CCC6F15CE,
	BarracudaWorkerFactory_IsType_mBF8CDE51406D7D4DAEFA10ABF4AC2D92CF317BB5,
	BarracudaWorkerFactory__ctor_m97E5695A1A383D468ABA3B3AB2FC5D4F6A3EBF7F,
	BarracudaTextureUtils_TensorToRenderTexture_m101E65EEB89175B12C41F433466897F354AE2832,
	BarracudaTextureUtils_TensorToRenderTexture_m30A4125199E419186A95D016A995040B7447A8E1,
	BarracudaTextureUtils__ctor_mC653CE3D1454A010D5169F8E14C70EAE5988A510,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	WorkerExtensions_CopyOutput_mDA4EE1BCFA4EB91CB247BD944600785E68F91768,
	WorkerExtensions_CopyOutput_mC641E3D5F7C260AC105AA7022298C4111FEA7281,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	RecurrentState_InferBatchSize_m4800AB498965A418B55D240C41A2BCCDD64403DA,
	RecurrentState__ctor_mE13E115D8821342DDCDCEF862B35670DE3BE1825,
	RecurrentState_Finalize_mD674F98D708F2AD4453B441A627BE11482B5CF23,
	RecurrentState_Dispose_m119BAA6CDCCCF7D7E48435FF0BBEE2B28FC2ED77,
	RecurrentState_GetBatchSize_mCEE7CD9006A4D3B3C82BD1CFA399B1799E722775,
	RecurrentState_BeforeExecution_m692855703485E7AA6979E7075349148828DC4AA2,
	RecurrentState_AfterExecution_mD7517996457ED2F415BFD83B0BFCCF4DC0E06652,
	WorkerFactory_CreateWorker_mF3DB62DFA2EE7B92F9FC43AE7660E8B07A1CB2A7,
	WorkerFactory_CreateWorker_mC730C4534FE30FACBF61BF5EAC3C6EB5331CAF55,
	WorkerFactory_CreateWorker_mEFD96330CB1DDB5F998D1311E4B588D8BD3880CB,
	WorkerFactory_CreateWorker_m35690C60B0450AE560A7B3553DC8F0685592F8A2,
	WorkerFactory_CreateWorker_mC6FF16879F3DFFF33D2A8D4CEE2486AAE5443491,
	WorkerFactory_CreateWorker_mFFE48616D2C01B3B5AF373A3F2A76CC9EF571CE9,
	WorkerFactory_CreateWorker_m79398D0568A27D586649781DBF7B1C04934835E9,
	WorkerFactory_CreateWorker_m71D80F629E6593017DF29E6DC70CCE1FC621F290,
	WorkerFactory_CreateWorker_m10B3A418382219042180DAEB153F130DDBF2134F,
	WorkerFactory_CreateWorker_m947195E61AB1075497FFA73922AC01147C5B22F3,
	WorkerFactory_CreateWorker_m9E30673612D041919380343B61218F7645BEC688,
	WorkerFactory_CreateReferenceCPUWorker_m4763122CF01087CBD801CFD93735473C315AB7E5,
	WorkerFactory_CreateReferenceComputeWorker_mFD638DF376533505F8CC57662A6656FDA6242C7A,
	WorkerFactory_CreateComputeWorker_mE7DD403EEF192D5F2A74CE9E53A69E1093D6A6F8,
	WorkerFactory_IsType_mA073C75722AC54806E4B10AF3037411690E05261,
	WorkerFactory_GetBestTypeForDevice_mED31AA97FC0A79A85B8B69CC1585E54E0B7D896E,
	WorkerFactory_ValidateType_mA9AB88DFB8D12E6F4629D1AD62DD3470429592F4,
	WorkerFactory__ctor_mBFCF32F2E357CB4C175FACB41C9D5D9153484461,
	WaitForCompletion_get_keepWaiting_mBF23ECAD845CAB91D8FC8EFAE7F79FE47F7ABF84,
	WaitForCompletion__ctor_m1017DEAC1009E277CFD0FC3B66FFEE61BCDD41E5,
	ModelExtensions_CreateWorker_mF0014825B094FF421A3D92D86E925376D2653266,
	ModelExtensions_CreateWorker_m3BC6025584357E57ED7B56A0FE27F370CB233922,
	NNModelExtensions_CreateWorker_mB885DDE1B5200EAC88F9487F34AB5E7C70606F49,
	NNModelExtensions_CreateWorker_m58414D25B9B10565503ADB3B91FD5D81B5A0E1DD,
	D_LogWarning_m9F2EA37B018ED76F610B0C16531480E5F69DE5E1,
	D_LogWarning_m2D54DC99C8DBE2E1D59B5ACD7ADEFFE439C9E445,
	D_LogError_m29C48C2BBFA4235C1703CF5431AEA741E1CD12FB,
	D_LogError_m031251125070060C6705DE0E3A87FE859BF39AF5,
	D_Log_m8BD7A662F7900E84E54A6FB4D3B84E4C2C3D0390,
	D_Log_m74DFCDE67761EE3B891D6B5F546990E0138FE203,
	D__ctor_mF1B6948191B46117C0E95D05758A24E68B107B14,
	D__cctor_m987A3AE803C9C3D4A8482E1068FA28982F82843A,
	Debug__ctor_mA36033D25143ED9A6EDAA002B2B9E2DA501F6089,
	NNModel__ctor_m6531996DBDEB256945B6967BA3964BC3296CA08D,
	NNModelData__ctor_m1A0618428CED65B9D76233BEB3D5E727AEF0A870,
	StringStringPair_Equals_m7DA8F9205F1A50E519ADC06EADDD5BF9EC53A232,
	StringStringPair_Equals_m97CF93669CF94DCEEC14014C47A5395560D86415,
	StringStringPair_GetHashCode_mF36F761AE1C2DF9C388C4DA19674C1F9A8BC4A6E,
	StringStringLongTriplet_GetHashCode_mFFA8FC94E496E653C41A8C8C21C96AD778D28B82,
	StringStringLongTriplet_Equals_mB804D312895A425AA4C3DD3BCE51165EF174B7CE,
	StringStringLongTriplet_Equals_mF77DE64E1E3040423D7018B89C155BC164D0EB0E,
	StringCache_Lookup_mFAAF20AF1BA4EB4D1A3D1223AF8855F606FF97A2,
	StringCache_Lookup_m2B25D7E569358B07E797340C7D99948E83146AFA,
	StringCache_Clear_m11328E0BBC787B5D5B4B85A6CF49D2EAD5EE7DD2,
	StringCache__ctor_m52178CA9443C44632413FD6D7E65D380431FD2D7,
	TestSet__ctor_m97FD2D452E90D57C08A68153C810EA6388E9304E,
	TestSet__ctor_mEB3C846D70F5DA4E182876ECCC8088350A0D7EB4,
	TestSet__ctor_mACFAD170AF5B7A027AB0A7631B754E73C4A56AB4,
	TestSet_SupportsNames_mEAEBBD639A0D5C1BCB82BF9CB11227C1BAF3916D,
	TestSet_GetOutputCount_m59FDDD5EF0B6DEFCB814754D780E09F674653B92,
	TestSet_GetOutputData_mA124D46986B226A327E61A358923410A5E30E773,
	TestSet_GetOutputName_m86487873E5E246DE0C92BBA82DB8492110F2721C,
	TestSet_GetInputCount_mE3A8F0E48A45DA14F687F02D2B4DE44E31C561B6,
	TestSet_GetInputName_mB3ABBCBB3B42B51AF127C1FB86F59EEAF4EC10FF,
	TestSet_GetInputData_mB40575D7C5806A92BF902B98F806349B17D0903F,
	TestSet_GetInputShape_m81EED5733EFE5703748ECFDE62C34D5350779D1C,
	TestSet_GetOutputShape_m1A8E465515F50D11C4D548EA7123EB3B852577B6,
	TestSet_GetInputsAsTensorDictionary_m9CC8CA11C6F9BE0A2B85D30F8F264F929F883F80,
	TestSet_GetOutputsAsTensorDictionary_m0808CCA1A5693AE00DB79A13B78544F9498DF19C,
	TestSet_GetInputAsTensor_m15B872C9B96C6D8D5449E349673393721E8F06BE,
	TestSet_GetOutputAsTensor_mE7A90272D42441BD7AFA34C8967386BDA0478743,
	RawTestSet__ctor_m6E7AA2F35379E90D342701725176530812CCB127,
	JSONTestSet__ctor_m841884CA4BB1140322AD1AC27F7449C3E63C86EA,
	JSONTensorShape__ctor_m4E7385E154EF586C1F05ADE752F1F3D2710B6C68,
	JSONTensor__ctor_m681FFF937DB3D0DA1738997EA411FC306CD137F1,
	TestSetLoader_Load_m9C6414C8218D9BB196F57603620786F810144A5A,
	TestSetLoader_LoadJSON_mB7BC8F9F59849F1EC2DDF53859D693318F9AF5CF,
	TestSetLoader_LoadRaw_m82031F4E9989E3F20254B0B4F87B8631EC19DB8E,
	TestSetLoader_LoadImage_m1B2221FE85A249432E6B42F84D6ADC0A7AEE99DF,
	TestSetLoader_LoadFloatArray_m381288B13F71CC8E8917B8DDDA9BA0964B1CEEED,
	TestSetLoader_Open_m6CED6B4742EC2388268759DE2E75787FE1AF886F,
	TestSetLoader__ctor_mE93F185F8A54CE1EAF66DA2666B73487868320AF,
	Layer__ctor_m614E964850585429BBFF5CB37BBF8C44D524FFC6,
	Layer__ctor_mC5E4B2F6178176FC89777C18087EA9B71F1A3865,
	Layer__ctor_mAB0B5685FB052C34EC235243111A74520F87D2E7,
	Layer_ToString_m535BCBB75CD71EB5C2B606717E62293486E54638,
	Layer_DataSetToTensor_m64C6909A29C48DAA35358F212F4EFA181CD15E29,
	Model_get_Warnings_m2DC032F3CA0E28A34E4585938118F4DEFACD6F6D,
	Model_ShallowCopy_m3B9A46F6DB327FEA7477C50CA891E44D5BB1C1AC,
	Model_ToString_m2BBC70715D323501191E6A12445A2B41700905C7,
	Model__ctor_mAB0AA1DFB45063FC5A4A7CCC46D6C54089708B68,
	ModelMetadataExtensions_GetTensorByName_mA59A72A52BAF245743AEE553380F5DA1554E7EE4,
	ModelMetadataExtensions_GetShapeByName_mC3A07157F9202BE281DB44EA0335E1754E242BCD,
	ModelMetadataExtensions_GetDownStreamLayersCount_mF8F1A7A99E279B36ACE757B149F818FA7702CA40,
	ModelBuilder_get_model_m6BB191E538B54B28ECCC07409E6CF9D2B77DA69C,
	ModelBuilder__ctor_m172D2D94CFB57CC54538CFF0566D44700C098409,
	ModelBuilder_Input_m25FBDAB7DA50C49BEEBD31E30B796D7E9D2F15FB,
	ModelBuilder_Input_m745B1C600119DED4D787F3FFA783FAA1DAEDC0D0,
	ModelBuilder_Input_mC97ADE975D414BB27DFCA33514D45D7B5BA4C3B8,
	ModelBuilder_Input_mE40D11D679187AC4468A01E6B5E3E7CFB4BA4E4B,
	ModelBuilder_Output_mE461EED20B716E8FFCAEB7FBC0138B4C678794E7,
	ModelBuilder_Memory_m6CE678159AA5AD66C66171471EC5C4488F32A5D6,
	ModelBuilder_ResolveInput_m7ABCFF45E72D3183E82454798B0C11C6626B6092,
	ModelBuilder_Const_m54B440FE0D1CD3508D9C5F0E28BF137B16B74EA4,
	ModelBuilder_ScaleBias_m1955144C13DFEAA5CF7386193AC1B0CCFDDF45BF,
	ModelBuilder_LRN_m7FB15EF213FFB9FB8211CF09616C6201FC097AE8,
	ModelBuilder_Shape_mB17E39130E6D193B6B4DDD2717D96D966DDF30D7,
	ModelBuilder_Normalization_m2910FC2F6354E006CEE585CBD9A0BD7EA93ECB57,
	ModelBuilder_Dense_m3B23156EACF26EA37592E754498AC0706BD59979,
	ModelBuilder_MatMul_m159CAFC30A3E42268B5F7E35FED10FD51ECAEE96,
	ModelBuilder_Conv_mD6121DC4E59E726C98700C44AF4BA6B43346E7A1,
	ModelBuilder_Conv2D_m4BDCA014CA68E3A395721B587B318ADF79458723,
	ModelBuilder_DepthwiseConv2D_m28254A010CB869762AE2939012545E099B0A3EE8,
	ModelBuilder_Conv2DTrans_m022A18732C9D73316C59021E181FB59EC6AFC07D,
	ModelBuilder_Pool_m0BE31F8131B1E815C6643F1D9F2B2A8F87B16CA7,
	ModelBuilder_AvgPool2D_m637949D48ED7AAD3C4B8DD12BCD5C7FB6093DBD1,
	ModelBuilder_MaxPool2D_m0E68D5F50CFAC15E470732983BB45FA48929B9D2,
	ModelBuilder_GlobalAvgPool2D_mFB8D16E9F193693E67197A68032D046DF016A9BC,
	ModelBuilder_GlobalMaxPool2D_mC06FC8B385959B4E082D6344C7BC20D59DC3A4EE,
	ModelBuilder_Upsample2D_m85A1625C734E1DCA3BF02C099BE0A2A735096A63,
	ModelBuilder_Upsample2D_m64D334DCD461DBF6C19E7F999C7E006E00F0055F,
	ModelBuilder_Resample2D_m457E10CD5BCD0BBABF6FE5E06967DBFC50C03325,
	ModelBuilder_DepthToSpace_m66811E171A6961D475A27BDB7E66FF4323FFC4FB,
	ModelBuilder_SpaceToDepth_m0BAFED13A439FCB3772EE8962F6EA99BD4560602,
	ModelBuilder_Reshape_mABB131FD4CC33589810EDC0F0D5CCDC6E7C72522,
	ModelBuilder_Reshape_m9AD914E55C45B8B833B2749DFB2F9B316C1745E4,
	ModelBuilder_Reshape_mD3A1A908BCB50197B53E37A863C1A867A439E2B0,
	ModelBuilder_Expand_m3CA587DD321DA6CA213D93C11E16594D060AA523,
	ModelBuilder_Flatten_m7FB4AC75504A2929E80A0D9A8CE373F46CA780AE,
	ModelBuilder_Concat_mCFF8ADE6AE0D8A049B4B50A9371C2428E478DD1C,
	ModelBuilder_StridedSlice_m795F3C982A5CB9143DC97FE98796C8CAE9E56F25,
	ModelBuilder_Tile_mC2D772AE99C7FA9CF44CD408C7210EEFC2A83D1B,
	ModelBuilder_Copy_mAECA913621D7B76824B9A08490593F34BCA2F2F1,
	ModelBuilder_OneHot_m9494EF95483B223CC868DD4A60E9408064E2CC65,
	ModelBuilder_TopKIndices_mBA894AD5BCD97868E3E1C9B1D175D3E093CE8AC2,
	ModelBuilder_TopKValues_m03FCF615BA206E3AD351DC9FA2BB16F9978A66EF,
	ModelBuilder_NonZero_mDF98D49A20B0CDD82C55FF176B89FE640038A7FD,
	ModelBuilder_Transpose_m124FB250DF2FB6CF01403D038F85E60933227BEF,
	ModelBuilder_Activation_m0753E5FC0595579A0BC8138952751E0FDFDC5BC6,
	ModelBuilder_Identity_m7654E042E529222A278BDB5574C1B7B9BCBCEF1E,
	ModelBuilder_Relu_mD875806A4284978D757F0C88F6020941383A25C9,
	ModelBuilder_Softmax_m9C8CAC70EF6B7DB3F459201F33CC0AF5DAFD3DB9,
	ModelBuilder_LogSoftmax_m8B372C548883D6E4002BBB3665727101AEEEFB66,
	ModelBuilder_Sqrt_m922C71855467B663008401AF19F9F02942A514A8,
	ModelBuilder_Tanh_mB33C742ECAE547AC6A9DD8AB281A757BE5E89A6E,
	ModelBuilder_Sigmoid_m039414B9D41AB7BA5CE20CB71174A2546664A814,
	ModelBuilder_Elu_mB483750140C2D5DBF1F82FB439E69764AE1873F0,
	ModelBuilder_Relu6_m0F36ED6B16CD78479F97692641CEF832F0F3724A,
	ModelBuilder_LeakyRelu_mA7F5BE84412C2A37FDD7E7264395B8A31F2F097B,
	ModelBuilder_Selu_mFCF31E9929C92EE26F3A3D4C7818E6ACF0DB7BA1,
	ModelBuilder_PRelu_m33A9F15D3ED23910370644AD071182304B56080C,
	ModelBuilder_Swish_mB75BA94C9442A35AFE35A0F460A2F7AA5F981E35,
	ModelBuilder_Clip_mABA6F9B2C792F4BC4E8BC38C55309189A57A5BC9,
	ModelBuilder_Exp_m400C497A3E2568DD396912B91C911CD0D2DAD214,
	ModelBuilder_Log_m3FA1F67E3999930CD4792F62A2D07983607067B1,
	ModelBuilder_Neg_mF6BC01E21393919AFAE703AB0F339C1EAC3D6E4F,
	ModelBuilder_Reciprocal_m43FE908BC892839709AF25B015AD337D7302B489,
	ModelBuilder_Abs_mA6D13018C424511D48156E79BE341B2FCDFDC003,
	ModelBuilder_Ceil_m243FA5F7CDAD40238BFDFD566E802753C1C257AA,
	ModelBuilder_Floor_mAF4CEC22813ABF88BF697A2F321168C54A7EE0FA,
	ModelBuilder_Round_m209A20A637CE8F87153F65EB1D44246C105995A8,
	ModelBuilder_Acos_m20F78315A834B937CAD38D6047DCEF53A8D92A8C,
	ModelBuilder_Acosh_m238F9CCA72B222971017A3235BC636508BBB957C,
	ModelBuilder_Asin_m0E1CD5F966DFD3E2988A7BBCF01240CA33A7FD26,
	ModelBuilder_Asinh_m4AB95E7D4A078F46D439B529E3E9DEC781491FBB,
	ModelBuilder_Atan_m993406B5CFFC1707588758FF99E03389E1690D86,
	ModelBuilder_Atanh_m66D260FCA6CD0805A379A906473FB14F03FFAE6E,
	ModelBuilder_Cos_m491AF8585348EBEAF1AFC6B6E86F7357202A0B14,
	ModelBuilder_Cosh_mAB9A83CC2B7E8E1ECD0C073B1151F741BBA55FB7,
	ModelBuilder_Sin_m1F7076BA4C749B8846A2419ADF9961292784C47A,
	ModelBuilder_Sinh_mF662293E10569B1996163570CB3E989F7B62DFD6,
	ModelBuilder_Tan_m442E6E941726C8D8CCE38D1985212D33FDE79B79,
	ModelBuilder_Broadcast_m68D19A7EF8B1FF3A245B674D027EA81FA4FD6F30,
	ModelBuilder_Add_mDC0D0E73AB47B6B23DD65F7E17A2B14BC9FE55F8,
	ModelBuilder_Sub_m88A7A63EC63307A71B6B226427C81B5CC355FFCE,
	ModelBuilder_Mul_m427298513DD923BD5EA426F8F69C8F733707B5B3,
	ModelBuilder_Div_m6DA41473C43D7C2AF5EA67D88868BCFB9D53C124,
	ModelBuilder_Pow_m0F690210243F248586195574F0991C043C2384D4,
	ModelBuilder_Min_m4657DE5B8C43CBDCF2E1E5D70AACFA9591854106,
	ModelBuilder_Max_m98C59915C521C6AF5C0B46B9D64A2B544B1EE7C8,
	ModelBuilder_Mean_mEED820DDCCB315A6ADF9EA40BE9B6AE7A2A24ACF,
	ModelBuilder_Greater_mFCC8E999D527A7AAD168A73A6493A05D472C5A40,
	ModelBuilder_GreaterEqual_mDB247C9B9C217AF877BAE4D8A6FF3CD6737585C4,
	ModelBuilder_Less_m077919589DC47EC96C7B613FA57617974694A4B4,
	ModelBuilder_LessEqual_m8AE000E11DAF81C547B2BB7E9FD9906F73313474,
	ModelBuilder_Equal_m919A768FED253D28328D9FC1425EE64593168EAE,
	ModelBuilder_LogicalAnd_mD74D6A93F8A0BD4F984260AD5DAD98409A0BE3BF,
	ModelBuilder_LogicalOr_m868EFE66BB8662B72F0F6DDE81CB3549FDF8B5C4,
	ModelBuilder_LogicalXor_m7F30F5348B4830FB4C0CEBB14A27268975870DFE,
	ModelBuilder_LogicalNot_m881A259EEB9181CC8DFAD92E17C30709393765BD,
	ModelBuilder_Where_m1A68C43F56A2E01D23338C8AC6531E0200D43D58,
	ModelBuilder_Pad_mC96AC703E988854391C39A4D37E037166DBB4586,
	ModelBuilder_Border2D_mB4E2E5843F85909EF5963031CC6753220D202EEA,
	ModelBuilder_Pad2DEdge_m74C417D4DE974F3649C44EF263B411D3AEDFBCD7,
	ModelBuilder_Pad2DReflect_m3B17E1941B7903D6FA32CF6861485C9B69432F48,
	ModelBuilder_Pad2Symmetric_mBAFAB641D7EF55897468A445796FEB48734680E3,
	ModelBuilder_RandomNormal_mDE49A3C88B73312D5E7EF7A25C3B74AACB39DEEE,
	ModelBuilder_RandomNormal_mB1A55267581E1081899AB18E728CA79D11707ECA,
	ModelBuilder_RandomUniform_mC0EC994ACA539E31FEFE7CA19C07EFBDE95AAF69,
	ModelBuilder_RandomUniform_m57AE05D71FD2BD9CE027405345693B825D9ADE54,
	ModelBuilder_Multinomial_m13823765CF7053B3AA1AD2A11688E3511A380BC6,
	ModelBuilder_Reduce_m4731AAC54B7265063F0A3C366EE86632DF4F328F,
	ModelBuilder_Gather_m593B65922B7826152ACF5CD8F22E3DC2CAE162B4,
	ModelBuilder_NonMaxSuppression_m0A011C3B7E051805E6A21FFDECF07EE0A97EEDAD,
	ModelBuilder_U3CMatMulU3Eb__17_0_m236BDB4C3B5883E5028AD13F3241A476E6B427DF,
	ModelBuilder_U3CConcatU3Eb__37_0_m32F098EBE1237431E876C224D9FA665E2524A174,
	ModelBuilder_U3CPReluU3Eb__58_0_m807A962E81F649D02BA2DCE83EFE2C13CB8A9791,
	ModelBuilder_U3CBroadcastU3Eb__80_0_mA2CF90E1DDE78277973DE2DEFE37E5CFA296A566,
	ModelBuilder_U3CGatherU3Eb__110_0_mFEEBD36BE36031FF19BE9FBC26D51AF03F74CA8E,
	ModelLoader_Load_mA0B37DE0AE059570A337C18769EEBF8EDDD56FD1,
	ModelLoader_LoadFromStreamingAssets_m5889CA5381D7CB86D2D477C97DCDDCF0CCEE644E,
	ModelLoader_Load_m419FA5238376E0E9F1E2E0A940598464414284AC,
	ModelLoader_Load_m5F6440AF1B89A9B7F77329AB00983EA9C99D358C,
	ModelLoader_Load_m6F7E273BDB27D4EE8844596B2A92CF95A64A92F7,
	ModelLoader_ConvertLayerAxisFor8DShapeSupportIfNeeded_m80A3348F1C568A8920A73C242305ACAE65A1E193,
	ModelLoader_Load_mF7568FDC47B08F1FB084CA679702F8AA3F454C72,
	ModelLoader_PatchLayer_m43ECCED5139EA8A6CE99CB7AB7AC1C76772B344B,
	ModelLoader_SkipLargeFloatArray_m9A343C8B92F11DC971AE60CEA4879EC315436E25,
	ModelLoader_ReadLargeFloatArray_mE9D4067663499A763E65E26A5FEEA901C4006303,
	ModelLoader_ReadInt32Array_mCD1A49E9ECE261DA7E00615555B927D54898F352,
	ModelLoader_ReadString_mBD6348A433F287C28DC823F710C6E5508D75EC4E,
	ModelLoader_ReadStringArray_mED767C3EBC7161C448314061A133B296540CEFED,
	ModelLoader_Open_mA20D6368B66E6D396A5641577A708924FFA73926,
	ModelLoader_Open_m8B6D465E4D90B7C8C09655267DF43FC08F78C266,
	ModelWriter_Save_m8E4125667D645D5A57766A6131878032B27A26B3,
	ModelWriter_Save_mD9E121ECD1E0EAD9BC7B3A272882BB8AF4984DE7,
	ModelWriter_WriteInt32Array_m952DB86EBF9859AE571319E8B0194C987263AC38,
	ModelWriter_WriteString_m1ECC9CDC5E10D1A2A4675266840A4B563F4B986A,
	ModelWriter_WriteStringArray_m5DA0E98CEB453935A6944FEFAF6A72E4EBE243BA,
	ModelWriter_WriteStringArray_mD6A2EEF69F88A825CEBA424A16551E44BD0C3415,
	ModelWriter__ctor_m224FD97E5D87530BC399495F63F54BD968CC6367,
	NULL,
	NULL,
	NULL,
	NULL,
	BLASPluginFactory_CreateBLASPlugin_m1EE904E669146C93438E41C298CF50F4B5D6D7DE,
	BLASPluginFactory__ctor_m9EC8AA1157A3A107CCEE2F204F42ED309B68CD11,
	TensorShape__ctor_m3BC1FADB0422E2F288BC57E0986F84CC116A68CF,
	TensorShape__ctor_m276E04664C4EBCC2B74152C62B2F1BB7B5741715,
	TensorShape__ctor_mE0B0A01539F0810B3B76C7B8FAF011A7F3366C0C,
	TensorShape__ctor_mEDA3BE8A9C9C8A3DF9B57C5F606CF15E13D9A0BA,
	TensorShape__ctor_m2C2A6C6637B7D6C3E3273A288BC65C96C8F5BED7,
	TensorShape_get_kernelSpatialDepth_m1AD4B73B2BDCE2BE75B2B74955DAB7B8978AC31A,
	TensorShape_get_kernelHeight_m8FEA6D90C78E10C90263AAD2811F39B932C110FD,
	TensorShape_get_kernelWidth_mD5E24EB5EBC2EA98D63E5C0F399214ECF527351D,
	TensorShape_get_kernelDepth_m3F108CAE154F28F2DEC79F8AD45017DB69D721B1,
	TensorShape_get_kernelCount_m0D8CC69DF7F8E02FA3ED0C6F8147724A230448D9,
	TensorShape_get_flatHeight_m22BC47B73FD0DE60CED750BA3B66228BF5ABD436,
	TensorShape_get_flatWidth_m4A3EBEAB7298EC534EFB8D587D132522B2A196C5,
	TensorShape_get_length_mE0387DEB5A86F017114EB542A8320DCD03D4E01F,
	TensorShape_get_rank_m9CB191221D391C6F6964BB36CA3ACB6DC3AE6681,
	TensorShape_get_dimensions_m520933925370ECC630A68FEA74A6067A74EFCDF2,
	TensorShape_Axis_m90F1B94BAFEC7F41CACD1B373527E83507912F73,
	TensorShape_GetPositionsFromIndex_m9C70427FA1E9A5833135C3654264D13364ED56DD,
	TensorShape_GetPositionsFromIndex_m4ADBB2B058ABD7B05C22A37E9AD03F02A3974DA0,
	TensorShape_GetPositionsFromIndexChannelFirst_mCDB861B23F9B5A23B2D15B17A945C8D890E6D0E0,
	TensorShape_GetPositionsFromIndexChannelFirst_m1965ACCF88C23F6F2552B874731F9EDECBEC0716,
	TensorShape_IndexWithBroadcast_m449129D5D5804D3534275EF54A0D2061415D122A,
	TensorShape_IndexWithBroadcast_m9C812E0998746F76D50827B2D490708DB2F2354A,
	TensorShape_IndexWithClamp_m6BE22BA784FC8A2C48F3EBFF9CB67C89E118C14D,
	TensorShape_IndexWithClamp_mD4D60ACBCEC30D1B02CF9A145DD90C5678D245D8,
	TensorShape_Index_m0D825F8B9E869E70261C9A830102FEC7D2EEF90F,
	TensorShape_Index_m8C05F20BAE38D9AD7CAB47D747A2BF568A02515F,
	TensorShape_IndexChannelFirst_mEF4444DBB9F3E1CF5E47B3B5E9404BC1CB553347,
	TensorShape_IndexChannelFirst_mBA41A819ADA6B2506C24AE35BDD52EE3E0B8EB09,
	TensorShape_Index_m63AC95D02D5F91992922F367C2A8AA6293B8E577,
	TensorShape_get_Item_m4F040918ED634C91FF7C47CB7E6765382AA4E165,
	TensorShape_set_Item_m34B0A369910C1AD80D88B0E3A696E2F77403C9F0,
	TensorShape_ToArray_m67854F029B584A4B18A7C18BF292D50826645F0E,
	TensorShape_Squeeze_mACAC9A6C9904C95B6FBC3ECC2E70F60670D124E4,
	TensorShape_Flatten_m83462AE079448FD0B0F8BB498CCE762122028F9D,
	TensorShape_op_Equality_mE3C9440585BBF08084DB023FF5D15A720A1F9D2C,
	TensorShape_op_Inequality_mB47FF1BD8B450E17B857073484FFBAE38FB0E195,
	TensorShape_Equals_m42E034684CC22E8D12A5D3EACD8E2AF679C8F1F4,
	TensorShape_GetHashCode_m505117616EECD23D215F0A22B10EC3EBCC4AAEEB,
	TensorShape_ToString_m2AEFB5AAFB8C431CF0A1F18AC289A5B985190C0B,
	TensorShape__cctor_mACE4E65A34134E7CE9577D023DFCCCD1108B32D0,
	TensorIterator__ctor_m7C1B78FF7236816755899FCDF88960D76230F055,
	TensorIterator__ctor_m67F087887A6346461C32CCBF735ED83766FB76EA,
	TensorIterator_AssignIndexAndInvalidateDimensions_mCE43E53426BDFD6D900512A503D3EE563510B88F,
	TensorIterator_Next_m00658806CBF44EE7AC8B761C498CE4CF8EF7CD0F,
	TensorIterator_Advance_mB95B0C1420D7FDB1FDF8611C06EB6FBA3BF1B215,
	TensorIterator_IsValid_mA185B7A32FDD6162C9448CDD6479CE8D9C46B509,
	TensorIterator_IndexInReducedShape_m65002D28C0DA55FF78E67020E67CD36964838424,
	TensorIterator_IndexWithReplacedAxis_m35AE2B8DD5B3EBC59C1B09D87BA19D6F0472D69C,
	TensorIterator_get_Item_m79EA1D301F192CD79297CBBEC241B127EE6B0070,
	Tensor_get_disposed_m3D35E9201D836BBC2BA91417C36B3EBB699DD28B,
	Tensor_get_allocator_mD186C09D0F3D1D7C9D54BF1C7290A701E222EA80,
	Tensor_get_sequenceLength_m116D76179A3F81A7DE6627646739AC462FA4493A,
	Tensor_get_numberOfDirections_mB200882AE1F0955DA631C9BBA2D08FFED796736C,
	Tensor_get_batch_mF7AA3F42A7E87A67667FB21E6953503679D63AFE,
	Tensor_get_extraDimension_m53712742F520A606051F798C13EF6AC91A689CAD,
	Tensor_get_depth_m3064356CFB7F04BE0C219E039983F5B8270B1EE9,
	Tensor_get_height_mDF1362128221F25309910F90D516B25C4B05F09F,
	Tensor_get_width_m1BD8484C323B816CED0E5A792C6B50786FB030E5,
	Tensor_get_channels_m8E3F9C0B71F7B0675A6DB466F4A6CE677F9FCB5F,
	Tensor_get_kernelSpatialDepth_m013AEDB4585E397DAC05B38E76F2DCD3FD880772,
	Tensor_get_kernelWidth_m3ADB493A7C0C96CB563B75388B299AF95C677BA7,
	Tensor_get_kernelHeight_m43D8E7270F6B16AFE4A5CC0D75B9A98788B3BE09,
	Tensor_get_kernelDepth_m46EF782C993A540EA4DDBF39356C44850EAD2A32,
	Tensor_get_kernelCount_mC4D50A1CA655BB6218AC12492F033AC3927966DE,
	Tensor_get_flatHeight_mB53D7BC2500206798300C938637E51E96BE14D44,
	Tensor_get_flatWidth_m31709D54C84075AE729980752C5C0B540BCDDED9,
	Tensor_get_length_m8952D942C064F6BDAEB3AB189ED7D7CC0CBBFB3F,
	Tensor_get_dimensions_m0AC79B00342752E36B780E9C4EDFBC078D5CB8F7,
	Tensor__ctor_mD429E18D3FD6C3C7535EEC8E5D0E1605BC798F1A,
	Tensor__ctor_m869110522FBD873EB6C54E9872A544FB9DDFE9AD,
	Tensor__ctor_mEEA32071CD91E32BED27C5311014A743F9627502,
	Tensor__ctor_m1F2AAE2698AD74B74FE8F83FF84D6760686D6215,
	Tensor__ctor_m2BCB790E5545B55957815F50A18FBFE99D603D9B,
	Tensor__ctor_mEAE629DB3128A2DE326D02BC752B83E8E2F77E52,
	Tensor__ctor_mF84132C4DF569EBAFD69F606FC9F9435EEA6A7B5,
	Tensor__ctor_m79999763F6F0DCCB37D3F0B532774CFE3F8B5490,
	Tensor__ctor_mEDF2D6E4EF58F1B7BDB6B526338EB3E48269076B,
	Tensor__ctor_m749E2EE7A6FE7BB8F774AC5E7F81A12C8A23604F,
	Tensor__ctor_m35415292EB86B8B940232D408DA0CA625750225F,
	Tensor__ctor_m5825FC11D01EA585FD84424CDE0DC3B13DFE21E7,
	Tensor__ctor_m4FB04BFB9ED3A555C6F5C64750AC3939073C8CBF,
	Tensor__ctor_mF8F6D3053D145B1034D7DE642912E479FDAF5657,
	Tensor__ctor_m8DB53461D5D44D61C7FF995DA431162EF7BCC76D,
	Tensor__ctor_m126D2BB997DD312ECB26EF7882E3A718C9DDEA18,
	Tensor__ctor_m829E30A9179A1BBC50AC126C8632404054D6E070,
	Tensor__ctor_m28E6237F06B749CBD2AE77BBAC4CE94EDA623373,
	Tensor__ctor_mC42E48C26EB28273CD92CB59939F3538AB335115,
	Tensor__ctor_mCE653209E64E699D323AD92DD0C7A205553C136F,
	Tensor__ctor_m2DE59D3DA3114D197F45AEE8F408DD950017285E,
	Tensor__ctor_mFC694BB0E93D2499BC0F2C595BA84203460F4CBB,
	Tensor__ctor_m6BCB34AB1286B40D2195842CC4258F5247439FD7,
	Tensor__ctor_mD1D3687E76265F87B2A4366DF39FB4F21D5E37D4,
	Tensor__ctor_m2AAB7E3CEBE09D9B10ABF1DC90CC5CB2093FE5CC,
	Tensor__ctor_m8BF0892A6B35BBD9C4C009AB4DE83403E2F73879,
	Tensor__ctor_mAA8BB34542D0363998A105E1A61BB05896FE3F54,
	Tensor__ctor_m3DC7F2778FAAA2E1DCC10928C9B4701931D20AE4,
	Tensor__ctor_m2E3D0134A28B521FD1C135FD8F17B627F910BC5B,
	Tensor__ctor_m72D8247FE59C0461E4B45FFFA7C58B8C7A83A377,
	Tensor__ctor_m3B301D76F48C1752FC8576A43127E4EDFA1A10D3,
	Tensor__ctor_m09E3BAC3450A7CC4E62799B4CCDEAC4D8BA9B297,
	Tensor__ctor_mCCEA8C399D46D4FD205087C6874B8CF6CC2CB38E,
	Tensor__ctor_mA1B541018684884BBD41C94F0CF5122DDA71F863,
	Tensor__ctor_m9B4439381ACD27A0DAB471085F0029E8A58520F2,
	Tensor__ctor_mBCA3AAD61F48F7510AED5BB310618C6C85B9DA5B,
	Tensor__ctor_m6D697F477CC08D8D27607B0D7AF71B428386FF03,
	Tensor__ctor_m22C7BA6B2FF6FCA530CFFD539CCF025F98D0CBA9,
	Tensor__ctor_m14518AFB348BD5D0C000CD0E4DA90858ACD9D8E2,
	Tensor_Finalize_mA0AC407ACC702E8060BA88E04057054C51B023F6,
	Tensor_PinToDevice_m4BDEA07DF1F03E71AC197284BB12530A8A88DD28,
	Tensor_UploadToDevice_m69258C144C4BCE24B4E96FF38C62ADF0C421A888,
	Tensor_AttachToDevice_m44ECB09CD6FD73862A783C2017924EE999F3A4F8,
	Tensor_DetachFromDevice_m05D9D2F260294280CA884584ACBDC31952F3D221,
	Tensor_UploadIfDirty_m3CBF3EE9D81B0AF8A03B893B23781C66B4A83624,
	Tensor_UploadAndInvalidateCache_mBB2B6AEE15E9504B4C50C33CE1F1D5EA4F1C161E,
	Tensor_PrepareCacheForAccess_mDF8F23CE42173763867E4046235490EBEF7721DB,
	Tensor_FlushCache_mE98ADE6F6365D223D5CB24FA204A97CF3E7BD5DA,
	Tensor_ShallowCopy_m2C46D63CF00199F76BB485075CE6024591A73559,
	Tensor_ShallowCopy_m0CD430C6A92964B04A1B6D9D52534C10BDB7015F,
	Tensor_Flatten_m4896A94D5456585243DD45DDB0D646C084F3DDA2,
	Tensor_Reshape_m27BD1EC721D6E36B8F95AEEAF570168107C0A424,
	Tensor_DeepCopy_mFC05AC1B2A78A264BDF8FC6CDDC2CE5C3F2654A8,
	Tensor_TakeOwnership_m7C952AB0DF269FFA0F344FCB543CAE17E5AB15BF,
	Tensor_Invalidate_m4D26A6CA02BF7CAC2FC75247C59532A9068C25DF,
	Tensor_Dispose_m6145BFEFDC36D84148B88AC99428694AC953F9EF,
	Tensor_ToRenderTexture_mAB213C9BEE8426D7126F80027E019F1D1A18CB2C,
	Tensor_ToRenderTexture_m71337CE73D3CC56E74DBE1F514D81242D5D0DA7A,
	Tensor_ToRenderTexture_mDD8221FEBC9B5A1A98FD5613FA786AD5BACD83DB,
	Tensor_ToRenderTexture_m11E8064F699BB4BB5223B008C6E5251E0933B106,
	Tensor_Axis_mCC5A19CCD3A5AEC206587F5F12152A2862CBA00E,
	Tensor_Index_mF0DF1DCCE38D76416A5CCDF9856FA9ED8A6F8794,
	Tensor_Index_m98F9269C9237967AB083F39F4338FA94BCD78085,
	Tensor_IndexWithClamp_mAD9D5022ED489E4A99DEE819BC38D5D941C2BB01,
	Tensor_IndexWithBroadcast_m30B4EC84B1F3CE865D8B223EDFEACE93C4FEB121,
	Tensor_Index_m07C664C34090E308B327432868F56730A21C8FDD,
	Tensor_get_Item_m7A2E0F70C4652F7B136DF2B121EC794EEDE87DF3,
	Tensor_set_Item_m2CC22324656A79003E26DC03377048E9A8F7D89C,
	Tensor_get_Item_mB9D9C35BC2283E31FCE5468841F24D046CE4282A,
	Tensor_set_Item_mB50F348EE7302EF15D54C58CBC6FB640A296A869,
	Tensor_get_Item_m7D0030D759626FDE3A4DAEF3515F5F5A8EA1DA0B,
	Tensor_set_Item_mD99EB916D7A0C28DEF973E5FE557606CC9AC5451,
	Tensor_get_Item_m2F40BB29F752FAD6AEB3DD50504ED835CB6F5AC2,
	Tensor_set_Item_mB5D201C98370FE4B18518B102262A115D1871F17,
	Tensor_ToReadOnlyArray_mD4D02BE23296319B80FFAB1DC17867C998D3AFEB,
	Tensor_get_tensorOnDevice_m7CCA5EE573B51FA2D7266E17AA1831D0AE41E10F,
	Tensor_get_data_m3BF73E9F9E2CEE78F4E6F9A11CF403455B53667F,
	Tensor_ToString_m280F525064CECE04AEDDF8AD1B5B39AE4C48A959,
	Tensor_UnpinAndDisposeTensor_m26BF24A009ED1D53E653F9E6A1D8C06F2BB305C8,
	Tensor_get_readonlyArray_m5208A6940977854FDB9AAE5F5426AC2C1FCE40DC,
	Tensor_get_readonlyArrayOffset_m49F461B79B4D6BA0F51A24F76220DCC611A74EB3,
	TensorExtensions_TestInit_mC0CADEC5D824AD680DEECBD3A5F69782DBCB8C41,
	TensorExtensions_TestInitCos_mF9F2D462ED9B11469F65E6DE8E6439A39DEE6FD7,
	TensorExtensions_TestInitValue_m5DF9E96AFD57E02A86F2358530252E6ACE338AFF,
	TensorExtensions_AsFloats_m8F3F69F84180ABC0D7AA4B2A68778126F05C935F,
	TensorExtensions_AsInts_m7A66FFEE1D451A306851E8344216CEDA21F3A79C,
	TensorExtensions_DataToString_mB34BB27A0AAC32E7403C228F0925B75E89368D70,
	TensorExtensions_Print_mBB6163B079069110500A0F80679FF66DA4ACE0D4,
	TensorExtensions_PrintDataPart_m342A5D8BB69F171C2436B81FBED09EEC22B32A3A,
	TensorExtensions_Equals_mEC377772E41BB34195BDF1465947504ABCFDA947,
	TensorExtensions_Approximately_m9F8CE6C103A5096F97E92D1A2A28DCCC962EA5E6,
	TensorExtensions_MaxDifference_m9446E42BE4BE9FACC6134088FBFD1A54FE0F601C,
	TensorExtensions_Reshape_m6EA2C0A646709BCABCB738E384870F5F6C62D98C,
	TensorExtensions_ArgMax_mFBF966C8E6046738F136D81A7DB3433BC1D07980,
	TensorExtensions_ArgSort_m49E7998F9FFDB6DF803E4EAD245D0F0C80AF129A,
	TensorExtensions_Fill_m64FF211597BA20775D0A51BCF271ED5A940BC6A3,
	TensorExtensions_Gather_m146494B0951A76648CFE3F9580FDADA448668546,
	TensorExtensions_Concat_mEBA582B2D372814C2A1442AE3FE0BBBAE1985C86,
	TensorExtensions_Concat_mA79BAE1FC2592A5EDEE01728587AC4A44C907CCE,
	TensorExtensions_Max_m7944AF1E51CC1949B60197BF4F5A436C2CEEF600,
	TensorExtensions_MaxShape_m04EC961503096890486CD6453B26E78C534E3840,
	TensorExtensions_Scale_mD6F3419C162322BB5A8849D457C3AF8AEEEB93A5,
	TensorExtensions_Scale_mE3556CEE605D0A814EA2A8510449E2C3A8CC5793,
	TensorExtensions_Reduce_m967FF14C2787C567EC1225235C11D0183C249560,
	TensorExtensions_Reshape_m1F76B219D0EEDEB108B9E435B067294DD027D7BB,
	TensorExtensions_ApplyBorder_mFE4EC1900382257B2AB8B92E0849E12110400691,
	TensorExtensions_AdjustPadToKernel_m2547057CCD88C1822070E764DDBA30617A5CE7A3,
	TensorExtensions_AdjustPadToKernel_m8EE3F5341CE186FA862D2EFB9F46C7B8700E36D9,
	TensorExtensions_AdjustPadToPool_m3908587EEC5E4CA6BFD0BE4DCCAF3DEA2891909D,
	TensorExtensions_AdjustPadToPool_mB166BFD0D916D77E02D64E994E94CF17160758AE,
	TensorExtensions_AdjustPadToPool_m3B000B3822DE6273C7C514A2D8B3581F48CBBAD6,
	TensorExtensions_AdjustPadToPool_m3A88FBFBA7D76F2C73E759D287C970FA92E66E81,
	TensorExtensions_ApplyPool_mD4998E5386B08F19E945F28F723421791C7D7709,
	TensorExtensions_ApplyPool_m870638EF6A03DB66B70E8077E79D4A069F1497FC,
	TensorExtensions_ApplyKernel_m3272DF54EAA676A3AA52BF560CF9526A224D6FDA,
	TensorExtensions_ApplyKernelInverse_m89434B166C735E125CBD53B8B04422C8313C696B,
	TensorExtensions_WrapIndex_m04794682FBF18EC4A15BD1CBD4EBE395B44BF398,
	TensorExtensions_IsNHWC_mF7641564037239B0832EADF8519B6253C738A299,
	TensorExtensions_NHWCTo8DAxis_mE07C1188ED18ED4024734FC644B31F35743A511A,
	TensorExtensions_Is8DAxisConvertibleToNHWC_m30CBD84F412B79FEEE0A45C46CED942C24BC3003,
	TensorExtensions_AreAllTensorsConvertibleToNCHW_mA027641E3D3A3D3890DC036DF76C05E7AFC3FFB8,
	TensorExtensions_Convert8DAxisToNHWC_mF482F86C228CC4CFB0E8DA29FC0224D4F8A79807,
	TensorExtensions_GetNHWCParametersFrom8DParameterAndShape_m0B12C2A3A1F8C3AF23F0CFE90C24FB21161C9BBE,
	TensorExtensions_Get8DParametersFromNHWCParametersAndShape_mF4D76E2534B4AA9726B6380005308E4005E66749,
	TensorExtensions_Get8DPermutationsForNHWCPermutationsAndShape_m359E106B1CEABEE874E8E8A7BE95E42D0A02BD1A,
	TensorExtensions_ApplyStridedSlice_m79E57D1D9EC3C27950B6B8D6841658096AB15AFD,
	TensorExtensions_Permute_m58F7C02C42FB50EB7DCB1E98CF71E80E10D227D5,
	TensorExtensions_CreateFromTexture_mE5B296E2E918A23C481B720D5EE7F1BC5F8A7FBC,
	U3CU3Ec__cctor_mC2B02D167CB06775087434B03CA5960CBC6E3F48,
	U3CU3Ec__ctor_m38D50AA118D7552C9C118D5973982C1C8E30A113,
	U3CU3Ec_U3CPatchModelU3Eb__5_1_mA93E4809B1E6FF8EB40BEB1B35E9577F8C7E00D7,
	U3CU3Ec_U3CPatchModelU3Eb__5_0_mEE586D1EF293E08503046ADF7FF00715C0514566,
	U3CU3Ec_U3CValidateModelU3Eb__6_0_m3F4B32775BDABC7164923EF7C540D62CA7E2195A,
	U3CU3Ec_U3CValidateModelU3Eb__6_1_m02E7D72A0F8FC3306D1841DFEE3D415EBA41E6B5,
	U3CU3Ec_U3CValidateModelU3Eb__6_2_mA8A639DC5D873D8E71A225FD34B9814C6480A8B9,
	MatrixMultiplyJob_Schedule_mBC7FDEAADB2F5C4386251D6B85CE9ECB3EA51C67,
	MatrixMultiplyJob_Schedule_m71BDC879FDD69CF78015A11C0968B397F4E05C0A,
	MatrixMultiplyJob_Execute_mF34FAD85443E53549A1B1825E69721AB479C0B52,
	MatrixMultiplyJob_AllocBlock_mA983E9D3927D2A4696F273BED8BBBF723AFF091A,
	MatrixMultiplyJob_FreeBlock_m9338113F0EEA7D1D717ED6A8515857F3732B10AB,
	MatrixMultiplyJob_MultiplyBlockUnroll16xh_mE99F03ADB645159F78DCE6F87550C408D542D0D2,
	Im2ColSliceJob_Execute_m34BFA654159A0A3F1CD8C1E9B0F7AAF2840C90DA,
	MaxPool2DJob_Execute_mC6D4C5AC6879C0B4D1416148E3BD414FFE26F47D,
	AvgPool2DJob_Execute_m279C78483BDAAB972A4AD48BC1F494C100F74BD6,
	DepthwiseConv2DJob_Execute_m9C4A2B52C843317FB8844686416DA6F48644C285,
	PReluJob_Execute_m5D4C6E11318A359C191306B33306C1A0E8967AF1,
	PReluJob_PRelu_m851ED135331EBA79D5474974CB6270F1C0968C3A,
	ReluJob_Execute_m5B0E555026FDCD1332AD1CC06CB079F7A618D1C7,
	Relu6Job_Execute_m68182EFAAA04B5B5D5D39CD39C2FFD1C1149A4CC,
	LeakyReluJob_get_alpha_m1716FF70F2C8765B99E16E5ABEF95DC574345186,
	LeakyReluJob_set_alpha_mCB82BD5CD019364F6EB61C03326EC0DAD53AB5D5,
	LeakyReluJob_Execute_mD0B0F64BCB8222CB527B61F8E7E07624E3D33890,
	TanhJob_Execute_mE2E4964E986C114F752991A62D398459A21071F8,
	SigmoidJob_Execute_m64E3A3081C86344E7A7A4765F83D36CAB3E2F138,
	EluJob_Execute_mC2F619EDAB66202F25AF9DDD5D7EE06A566701BC,
	SeluJob_Execute_m11D02E7F0552F597D63DBF3005A138B4856810BC,
	SwishJob_Execute_mAACDF3C25402589E333C4A46243C9A3E43DB7FF4,
	SoftmaxJob_Execute_m64690B935CF2A6839E310E74C1EEF33E6E887509,
	AbsJob_Execute_mF7F9F39D830690952E16CCFFB7749584FAA869C3,
	NegJob_Execute_m1495961EE447F58C8D0ABE236E476F3300784FB8,
	CeilJob_Execute_m4E2966906D56A2CDBCB614A15864A37F68F35524,
	ClipJob_Execute_m9254D05EE5C50E20C81A4757D9AA2DE46298320D,
	FloorJob_Execute_mC438769AA3A88C6D737CF28D5E5E406EBB85BDBF,
	ReciprocalJob_Execute_m367D8821D93435EE97F1E6C7CC2C9CAA03FF73D8,
	PowJob_Execute_mE9D0270F9E97B97CFBB1859419C90E910E39A15A,
	ExpJob_Execute_mB04C9960E8A25404B9BBD386A7D6704C24426388,
	LogJob_Execute_m23DF747BEA45380C0C5E31CF12622D9288A769BC,
	SqrtJob_Execute_m67D619D3BE047A42DC12A4AF3177D56A89138378,
	AcosJob_Execute_m0557845EEF870095C534DD1D0E3AB63D9F6E6C23,
	AcoshJob_Execute_mBE946D3E3D433DE9718745EACD4D5137332215D6,
	AsinJob_Execute_mB36B55A9A1287100525CFB3D727A3112044B1A32,
	AsinhJob_Execute_m509D3A488A49105DAE48CFC9BBB702CB53425412,
	AtanJob_Execute_m81B50AB152005DD204A285A67B754D79330DC130,
	AtanhJob_Execute_m9A2B9A5165D2158579466975EB3A27FA1396F7AF,
	CosJob_Execute_m26D5357F4822DFD88EC954B087FF3CEA183A010E,
	CoshJob_Execute_m9D3442ABA8B56B495A709B7DD371F18164179FF3,
	SinJob_Execute_m20C01B51AD63119432F763FAE24D9577AC4CB4A9,
	SinhJob_Execute_m0A947605F1BECC10C3E64FBA2D4EAC7D0768763B,
	TanJob_Execute_mEF91C2D49C589E225DEDBEBB106962D9AC05B819,
	ElementwiseAddJob_Execute_m022C623FC40B9D89351B5089FDDDE83D3D7A9063,
	ElementwiseMulJob_Execute_m2833A1A5E62C23B57E2FD5CC5B76711A8A6AF57C,
	ElementwiseDivJob_Execute_mD5E46272556614F3E5C1147BEFBDA362DACCA9B9,
	ElementwisePowJob_Execute_m1A322C4427864D6BDA6349EB75A54A9C520B0822,
	ElementwiseMaxJob_Execute_mBFDE22564C3167440C8A6413804D28CBEFFCB4EA,
	ElementwiseMinJob_Execute_m3EA5B9FB2218065675B635C4731A608D1650FBC6,
	ZeroBroadcastJob_Execute_mE5BF8936EEFB598F7C53C934715675DC236F4B66,
	CopyJob_Execute_mC647ABED93530C5C245916068A9F2735336DCE3D,
	VectorBroadcastJob_Execute_m096E6015CC5FE47159D517F1878B7B1DDA5EABCD,
	ScalarBroadcastAddJob_Execute_mA9787E94EC1246EF0E746CC900AA6B884F5403D5,
	ScalarBroadcastMulJob_Execute_mEFD366C6336C5453A47B2629A85416060BF18DA1,
	ScalarBroadcastDivJob_Execute_m07026CC3017E74E780663A91618C22B75A962B75,
	ScalarBroadcastBiasedExpJob_Execute_m7AE94B8793BB2E9136E68C73ABD5AC6597E691CC,
	GenericBroadcastJob_Execute_m24008BA401258A8D3C355F9950BEA46D712FCEBE,
	GenericBroadcastAddJob_Execute_m17DBF894A4BF260853A4338FB44AA0EB151150FC,
	GenericBroadcastMulJob_Execute_m41B7B20B65BC1521905B2A64989D119AC54B88F4,
	VectorBroadcastScaleBiasJob_Execute_m8797181998A988761CD37C28DDED9DB8CE2F3C36,
	ChannelReduceMaxJob_Execute_mC2A3AFCB7DF15D8230CF89D35D2D2062CE52415F,
	ChannelReduceSumJob_Execute_m9F67AE08E550BBF2F5E0334F811D5AB796A0697C,
	Entry__ctor_mB1F087CFE2B0D8A568D6B294A76F667880C2480E,
	Entry__ctor_mF224CFCC76879AD71EEEADB5A320F02132CACB74,
	Entry__ctor_m9481F232249846FDFE0CF326330D134C60A4ADF1,
	Entry__ctor_m5EA693B7934059F23B65B58CCC2863327B292DFD,
	KernelAssertInfo__ctor_m6BC1385E86260E6F83F40B43C8E77EFB54A8B310,
	CompiledLayer_get_kernel_m8933276E9939C717B3ADFA0DE484D677A1E5825C,
	Seed__ctor_m435178FF6CC71F8B37FA4D95BDBB97F296A3A165,
	Seed_Dispose_mF0DD2EB9F49A988B22E66883C75FD8133F040744,
	U3CU3Ec__DisplayClass26_0__ctor_mA95D9915AEDD912D43D81F58DB0388B8D7558980,
	U3CU3Ec__DisplayClass26_0_U3CBorder2DU3Eb__0_m4463312EB833580BA8DEA15BA1261DA3E65F6E85,
	U3CU3Ec__cctor_m997AD7793B4E02A5696268006B6A7455F478C0F8,
	U3CU3Ec__ctor_mFB34F61487235A6A31529C02150D1303A4065923,
	U3CU3Ec_U3CConcatU3Eb__81_1_mC0C473E76349008A5015493CF26796EDF38BA4D8,
	U3CU3Ec_U3CConcatU3Eb__81_0_mB0B98BF35B0FD64CABF45F2E6C6E9F9FA761B8E3,
	U3CU3Ec_U3CAddU3Eb__86_0_m55F2977E64C3DC6A140656F4642E234E297EA53F,
	U3CU3Ec_U3CSubU3Eb__87_0_m70F6CDAC565E868DF3DB08C4D5D903C91C97E41E,
	U3CU3Ec_U3CMulU3Eb__88_0_mEA68C07BD8094C0D21D810280DDE2D6D1E3A7231,
	U3CU3Ec_U3CDivU3Eb__89_0_m97490AA5051A5D0B6BA05893C40F7CD1C50804B1,
	U3CU3Ec_U3CPowU3Eb__90_0_mE7043F932D7BBA9889818AA64C871E73777D890C,
	U3CU3Ec_U3CMinU3Eb__91_0_mA40A8E07FF09A8DA450AAF266AE4E7A905AAC413,
	U3CU3Ec_U3CMaxU3Eb__92_0_mBA6F30F53097D174CDDE64F22989BC561E46F60A,
	U3CU3Ec_U3CMeanU3Eb__93_0_m52D0B2430B29887774EBD8E6FBEEC3555DDEB09F,
	U3CU3Ec_U3CGreaterU3Eb__102_0_mCD50FD2D915139C53F005E258B7C4BBFB150DF24,
	U3CU3Ec_U3CGreaterEqualU3Eb__103_0_m8EF9184AEB4C2A4E2BF712F3C702D1739A5726DF,
	U3CU3Ec_U3CLessU3Eb__104_0_mB4FAB06C65353125DDAD0FF492D2D97CD6EF4D8E,
	U3CU3Ec_U3CLessEqualU3Eb__105_0_m70CC6207329C60C43330D2BAEAF886CF7F772CAF,
	U3CU3Ec_U3CEqualU3Eb__106_0_m180BD6680BD7CB44540305F3CB613A71E7C52F10,
	U3CU3Ec_U3CLogicalOrU3Eb__107_0_m5AECF339D86895427D67364D5BE40CBF8DAB4999,
	U3CU3Ec_U3CLogicalAndU3Eb__108_0_m742DB81810678AA8AD51591F223005E6AC7A3D69,
	U3CU3Ec_U3CLogicalXorU3Eb__109_0_m676199F6DDFEC5AC30354FE0C12E18D8286C9610,
	ConvertFromOnDeviceFormatHelper__ctor_mAC24ADF64428C3AE1DA88256EB33838F66D4A2EF,
	ConvertFromOnDeviceFormatHelper_GetNHWCData_m156051C950052D1641DAD3B11D22A48012BA6982,
	ConvertFromOnDeviceFormatHelper_ApplyConversion_m137A953B4EAF41E52223A4C38F4822B71C5710FE,
	ConvertFromOnDeviceFormatHelper_UnrolledInnerLoop_mFD1A99913E870713D25BF32D3445094578D82D61,
	TensorDecl_get_ShapeId_mBFE84999078BE027B38A5C2C463C92549B88C4BF,
	TensorDecl_get_InfoId_mB6D6BC23AF9D32911D83B789DB460A0605AB0264,
	TensorDecl__ctor_m643E5715F2C3F9730F1D6740ED8ABB3AA8C0A67B,
	U3CU3Ec__DisplayClass75_0__ctor_m82D4A752B39692963C0FD12E6E2F5059CDB26918,
	U3CU3Ec__DisplayClass75_0_U3CMaxPool2DInnerLoopU3Eb__0_mA0653B6493E63E6F6689601DA35946B55C8E7CD6,
	U3CU3Ec__DisplayClass77_0__ctor_m55C2B19E56CD26FC27B0B4F77065B0905CD56E55,
	U3CU3Ec__DisplayClass77_0_U3CAvgPool2DInnerLoopU3Eb__0_m9C5C20E0D430E908D1EA2E5704C632A19027AAE7,
	U3CU3Ec__DisplayClass82_0__ctor_m7F7E083A15C2A1967AB2E0B511A45894C10A7019,
	U3CU3Ec__DisplayClass82_0_U3CIm2ColInnerLoopU3Eb__0_m5BAD6321FFED461CC407AB0AA18A904FC66C3406,
	U3CU3Ec__DisplayClass86_0__ctor_mA21D00F80DD5FF23B65EA2E7CAB53A00700034B7,
	U3CU3Ec__DisplayClass86_0_U3CDepthwiseConv2DInnerLoopU3Eb__0_mF201A7A54500AB6C861165DC7252737CCF0BF9F7,
	U3CU3Ec__DisplayClass87_0__ctor_m885381113C85A79EEF285693C46BD7265882CB64,
	U3CU3Ec__DisplayClass87_0_U3CApplyPaddingU3Eb__0_m65FE7045E774364F8191C7F3700324DA467C4FA0,
	U3CStartManualScheduleU3Ed__33__ctor_mE034D88479A61CD207F99F44E86AA74A3189C3F6,
	U3CStartManualScheduleU3Ed__33_System_IDisposable_Dispose_m4EBAD4BB0C8822F7891C228EEF87EAA53FFC5C69,
	U3CStartManualScheduleU3Ed__33_MoveNext_m0A9BEC765F7680286DEB46E3C5B46C176D732498,
	U3CStartManualScheduleU3Ed__33_U3CU3Em__Finally1_m61BCFBDDB982617FB19CED83114BB97CA0FF227B,
	U3CStartManualScheduleU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m75A1E6DA99DE45580EDB18986B983EE2CDCA12FC,
	U3CStartManualScheduleU3Ed__33_System_Collections_IEnumerator_Reset_m0C51F46D7A58A98ED7A59BDBB140A8CE7DFE3031,
	U3CStartManualScheduleU3Ed__33_System_Collections_IEnumerator_get_Current_mEDFBF8F4DB8AB1051117B857D9A18D0873D3AD5C,
	U3CU3Ec__DisplayClass0_0__ctor_mB2D4FEAD01748226171901903B64D3BF80575FC7,
	U3CU3Ec__DisplayClass0_0_U3CIsLayerLinearU3Eb__0_mFC9E4B9E56F7C20AE11E89ABA50D703BE844BB39,
	U3CU3Ec__cctor_m1324B997605B6625E84C85359D1DB385D5AE85C9,
	U3CU3Ec__ctor_m798523ACC4A4831BCC8C4C4B0B8B522689B60EC7,
	U3CU3Ec_U3CAreLayersFusableU3Eb__2_0_mDCCD48B85F271515518BAF4DE271A68A7509B4FC,
	U3CU3Ec_U3C_ctorU3Eb__6_5_m7EB573875FB1CE1BE47EA180C8415F289C9A1443,
	U3CU3Ec_U3C_ctorU3Eb__6_7_m0A2299AF9DD4CF11D0E7735601FA3D55CC645B3D,
	U3CU3Ec_U3C_ctorU3Eb__6_10_m765EF1D4904D6F41D8A85DD4C13BBC9EE1BF8E81,
	U3CU3Ec_U3C_ctorU3Eb__6_12_mCF026C316D811E14326545DF7250EC13A0B28246,
	SGEMMJob_Execute_m1035E462C7BED83C1B91349C462EFB7C8CB47A04,
	U3CU3Ec__DisplayClass7_0__ctor_m5A18DF215A1EF9545C7B6B06597C399139171E62,
	U3CU3Ec__DisplayClass7_0_U3CMultiplyBlockUnroll8xhParallelWithPaddingU3Eb__0_m8D2F76A268F58E93C5B17054629BAC9EF3005E92,
	U3CU3Ec__cctor_m9654CE13C0C86B7B3C36B2FEC28B62117B5518F4,
	U3CU3Ec__ctor_mE2090FD7BD69F7BF6520E6ACF27BB278C7C759EA,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__10_0_mE440F980ECB7D2082694761818DF15E65F8189ED,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__10_1_m4BAF357BCE09EDFCF2CE5A58ACA8C5422B452D9C,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__10_2_m1AB91900E499A1D0FB8B209DF28D87368E2D8598,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__10_3_m6EE33DF741B1359068A38F36614FFF22C7BC43CF,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__11_0_m53A77C9520E25E339EC93049F1E838E57350D2FC,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__11_1_m62EC7520DCA8689DD8FEC43906D4D0D840D88F9E,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__11_2_m7E4F2DCF1444B6C0610CA517D59FC09967D902B8,
	U3CU3Ec_U3CFindUnconnectedInputsU3Eb__14_0_m5FB7156849C7D32EDE5EDA22405C5DFFCA44A62F,
	U3CU3Ec_U3CFindUnconnectedInputsU3Eb__14_1_m3F7AC35C6C5C05A98FAF2650982AEC6303FAC958,
	U3CU3Ec__DisplayClass1_0__ctor_mEC4EA202D172376F10DAC04FEA2E6433A77DC48E,
	U3CU3Ec__DisplayClass1_0_U3CRemoveUnusedU3Eb__2_mB753AE3B54E606E75F4DBD5F05D0F6D1E42ED3AA,
	U3CU3Ec__cctor_m6194BD5B784C8F6D6AC886D835D313FB6C2C463E,
	U3CU3Ec__ctor_m40A6D11F301229468F69DA1D5246D3ADB3539B7E,
	U3CU3Ec_U3CRemoveUnusedU3Eb__1_0_m09FEF45F58EEA98267C5F359FBD9E5A64702D6D5,
	U3CU3Ec_U3CRemoveUnusedU3Eb__1_1_m35616CB90BEE6CE1C27ECF013D32BED3DFA46070,
	U3CU3Ec_U3CFuseActivationsU3Eb__5_0_m830DB8BD52D323F2A260AAF025345F347DD97A41,
	U3CU3Ec_U3CIsLayerNoopU3Eb__7_0_m94754885243F6FFDC16AD904371DD310CE71F54E,
	U3CU3Ec_U3CIsLayerNoopU3Eb__7_1_mA904784CD433FD4D6AB63C4AF4EDD8FCCEBE8EBB,
	U3CU3Ec_U3CIsLayerNoopU3Eb__7_2_mF298BDCA5F1173D54F530111361D9B262152956C,
	U3CU3Ec_U3CRemoveNoopU3Eb__8_0_mAF9179FFF3575437AC36F4EC191D24F8CB60E2A1,
	U3CU3Ec_U3CRemoveNoopU3Eb__8_1_m465B43B47E9942F4B5A119EBBDF1173E0788D153,
	U3CU3Ec_U3CFuseLinearU3Eb__18_0_mBB6D2D3DBFF42F25715030E422890A330D5D4A09,
	U3CU3Ec_U3CFuseLinearU3Eb__18_1_m9C96A4128AC40917BA75DF863557F426AA9CB708,
	U3CU3Ec__DisplayClass4_0__ctor_mDA21A2179AECD3CC661C4D6061DEF614752A8CDF,
	U3CU3Ec__DisplayClass4_0_U3CFuseActivationU3Eb__0_m76A01B2E8737F60A6D33A2BE6EA9A9CED4D611E6,
	U3CU3Ec__DisplayClass5_0__ctor_m2826ED5543DEA406B0D58A7CF2D97D0CFACD5AA7,
	U3CU3Ec__DisplayClass5_0_U3CFuseActivationsU3Eb__1_mDF58CC6F1B0D6AB01CB4512E378F4E8494F55C74,
	U3CU3Ec__DisplayClass5_1__ctor_mAA5AF9DB6728C99248F9C51734C3AAB531F22F48,
	U3CU3Ec__DisplayClass5_1_U3CFuseActivationsU3Eb__2_mDC9A86562922D60202793F15F13BA798C25F7F6C,
	U3CU3Ec__DisplayClass5_1_U3CFuseActivationsU3Eb__3_m8976A1EFA95EF7F1A0ED0A81C448AA718FBA5D35,
	U3CU3Ec__DisplayClass16_0__ctor_mE9F64C9125078B3C0E4F32CC22F11BBE2BC145E6,
	U3CU3Ec__DisplayClass16_0_U3CPackConstantsU3Eb__0_mC03194024F04BDFA88031B67B80BD9C94CF50020,
	U3CU3Ec__DisplayClass16_0_U3CPackConstantsU3Eb__1_mC5AB961F5215DBD383E708D130AE53578982F387,
	U3CU3Ec__DisplayClass16_1__ctor_m84E777C5205C8D61A094599BD2E74A232495C476,
	U3CU3Ec__DisplayClass16_1_U3CPackConstantsU3Eb__2_m0143C6DCFA921BDCD50F75D07ACE2470537F1CFF,
	U3CU3Ec__DisplayClass18_0__ctor_m150683584874772CA3D97E03080096A5B71F93B7,
	U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__4_mEAA565945BE2CED248977754D49E1602CF2ADA9F,
	U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__5_mABC1F3727FE94F9C9C0C02C2AF9797DC6D3A5EB6,
	U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__2_mDC68077A91AC5FE517150E2CF43ABC108255F31F,
	U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__3_mC107E9E6BC972B436451D7835BB75EB23D7573BD,
	U3CU3Ec__DisplayClass18_1__ctor_m5B70C3E8EE2CD4F17E5C338FF50F5B0004A833B1,
	U3CU3Ec__DisplayClass18_1_U3CFuseLinearU3Eb__6_mCA0A6B1D53F72F1B6DA00B56E2A0968B487167B2,
	U3CU3Ec__cctor_mF91B1BCEAA3DCC587F9E4FDDD2B767F78D946A2C,
	U3CU3Ec__ctor_m0898F405AE2DC89531FAAB040C8BB0ECDC5CA22D,
	U3CU3Ec_U3C_ctorU3Eb__2_0_m28E7C312C56693BF2064D34D2C293980D412DBF0,
	U3CU3Ec_U3C_ctorU3Eb__2_1_mDD0761F56C44BDE3B9F99FBC9F5E258D49F4E611,
	U3CU3Ec_U3C_ctorU3Eb__2_2_m5814B7781EBEC87B70A76E571100573DAFBBC76E,
	U3CU3Ec_U3C_ctorU3Eb__2_3_mD0030C68A75230B21C498D59C96F4E58EFDACCF8,
	U3CU3Ec_U3C_ctorU3Eb__2_4_m138E9093F2C0126B11E52B95DCFD3697B8B0A725,
	U3CU3Ec_U3C_ctorU3Eb__2_5_m2FF9B82B52307CA3CCBA4367B9F5561F1BABB387,
	Transcendental__ctor_mE0B084F3C360934317E5BE2735BADE658E55A217,
	U3CU3Ec__DisplayClass13_0__ctor_mF5E1299A2A3EBBF17A613FBBE4CB815702178F18,
	U3CU3Ec__DisplayClass13_0_U3CMoveToDeviceU3Eb__0_m024E8E550CAA6071C77C547E703DA9A8D1A6B7D5,
	U3CU3Ec__cctor_mE3AEEE246901FF610BC59ACCC171D698794474A6,
	U3CU3Ec__ctor_m2E8E82B89A3A883ACD56007D19AD59C815DBA1C5,
	U3CU3Ec_U3CUnity_Barracuda_IOps_NonMaxSuppressionU3Eb__97_0_m4435EB675669D75AF305A2BE7148ACC851B4AF21,
	WorkerConfiguration__ctor_m2A2F5BF4B0F6EAA327B9E9C9C78CA0E737669CF7,
	U3CU3Ec__cctor_m38E729AA218EF866AD115DABFE5285691A218AF5,
	U3CU3Ec__ctor_m6D2460A92F887118B4055E4A361C5919D8BF7D90,
	U3CU3Ec_U3CToStringU3Eb__21_0_m18AC0BC8B3D6C4B5F2992C19FE66C190ABAD0681,
	Input_WithName_m8DEE62CF7E1B57ED764A2478790EE4A2AC09E635,
	ImporterWarning_get_Message_m67AFEDE7CBFB245539782838AA0117F1965FCE3F,
	ImporterWarning_get_LayerName_mB844902E0152F48B1432007188110B55F4F98338,
	ImporterWarning__ctor_mB5FF345B4EF4ADACF7AAC3BD52E8C7F8ED280674,
	U3CU3Ec__cctor_m7E86582D58DE596BDDCD014B7C3E5D27F6DCC85D,
	U3CU3Ec__ctor_m9AC74209EF904FBDC0C20B5C96B0D90466A1BB07,
	U3CU3Ec_U3CToStringU3Eb__16_0_m11242CF24CF6A66DDAF5157731F351927ECB5ADD,
	U3CU3Ec_U3CToStringU3Eb__16_1_m712717DDB1123B28C8D97305556CC36DE7D11F24,
	U3CU3Ec_U3CToStringU3Eb__16_2_m633C24DE26004EC3026558E33B635F0906A06A2B,
	U3CU3Ec__DisplayClass2_0__ctor_m84E0268A6E13BFFB219EBF9A557EFFACBD5F0980,
	U3CU3Ec__DisplayClass2_0_U3CGetDownStreamLayersCountU3Eb__0_m27C1A87B20C25B46745444FDE37E0B1942740BE2,
	U3CU3Ec__cctor_mEA5046D26C8B22F946701DFF87F9CF27BA2282C3,
	U3CU3Ec__ctor_mF564A86677F89FFA0F63320DFBE82B82A2285ADE,
	U3CU3Ec_U3CAsIntsU3Eb__4_0_m3C07C6CB0EDBA72F7FB769664200CCD079AC18CB,
	U3CU3Ec__DisplayClass13_0__ctor_m99135328072648CB742367568ACCD2E0A236718B,
	U3CU3Ec__DisplayClass13_1__ctor_m27418236482C8737DFB265F92CF052DCC2CA01BA,
	U3CU3Ec__DisplayClass13_1_U3CArgSortU3Eb__0_m530CA07C3CBE297593403E6A65ABE2134EAAF9CA,
};
extern void ComputeKernel_get_shader_m0D447F51A2319E95F356F6409F4003CA216C6A81_AdjustorThunk (void);
extern void ComputeKernel__ctor_m552489B273AB8DB0CEA61A187E41A6392758D96A_AdjustorThunk (void);
extern void ComputeKernel_SetTensor_m238FF4E5BD04D539AB1B60437D05C37831834F6A_AdjustorThunk (void);
extern void ComputeKernel_SetTensor_m9753CC570CA8E7CC3889160611D26023B4F83005_AdjustorThunk (void);
extern void ComputeKernel_SetTensorDecl_m3D81D3C1964201D26BECA256815ABA4672B7FF90_AdjustorThunk (void);
extern void ComputeKernel_SetTensorDecl_mEA777019F6EA126001772B6D6D0BF1619DF917C4_AdjustorThunk (void);
extern void ComputeKernel_SetTensorBuffer_mDA34F2A92056E075A8640D9A4B4960FCAE647A31_AdjustorThunk (void);
extern void ComputeKernel_SetTensorBuffer_m257F015B13D22F03617043A780612B46A0D6A944_AdjustorThunk (void);
extern void ComputeKernel_Dispatch_m056450E3439528399CDB0710C7C0B694CE02F1E5_AdjustorThunk (void);
extern void ComputeFunc_get_threadGroupSize_m0D4C76AB91DAD77954CD10606968DF86A4141A96_AdjustorThunk (void);
extern void ComputeFunc_get_width_m52666C3EB651D499B423628F273A82CF793AA49D_AdjustorThunk (void);
extern void ComputeFunc_get_height_m1D83A6306B459071CEDD1A1F856D4D1D74523498_AdjustorThunk (void);
extern void ComputeFunc_get_depth_mF80DB0BF4CE080FBB94B2681D232DDDC351D22B3_AdjustorThunk (void);
extern void ComputeFunc__ctor_m516FC5C43314B8775F24F8628CA508ABB70DA19B_AdjustorThunk (void);
extern void ComputeFunc__ctor_m03606D90574B46C307C05DFA57789A691F771820_AdjustorThunk (void);
extern void ComputeFunc__ctor_mA6AC93E5232318E2A3D9C30B33E3E3D28956D683_AdjustorThunk (void);
extern void ComputeFunc__ctor_mECAF4AB96858DA16566617DBE6FFB753CBA27D08_AdjustorThunk (void);
extern void ComputeFunc_SetTensor_m08238C3C82DF681F372CBCB840298C731ABB4A6F_AdjustorThunk (void);
extern void ComputeFunc_SetTensor_m1A97DB943C1A405B615A95E7C3A6DB40175DE34A_AdjustorThunk (void);
extern void ComputeFunc_SetTensor_m50FEE0FAACA9469DEB8F0DE3BF8784D3FD81D628_AdjustorThunk (void);
extern void ComputeFunc_SetTensorDecl_mE46880E6219A059E43600E8957876A150EBC8AF4_AdjustorThunk (void);
extern void ComputeFunc_SetTensorDecl_m1839141DA57D310B2B17ABA5458547217056FAF4_AdjustorThunk (void);
extern void ComputeFunc_SetTensorBuffer_mCDA021CD1499CB191BA2A670C718B9CEF1F1D1DC_AdjustorThunk (void);
extern void ComputeFunc_SetTensorBuffer_mBA3E062D655641E95E610DCB18EC66E81D982497_AdjustorThunk (void);
extern void ComputeFunc_SetTexture_m188532280C002E7606C577659965F217FC8DCC98_AdjustorThunk (void);
extern void ComputeFunc_Dispatch_m34CD2C8473012C2F76918931F90E1D0C1C6E9ADB_AdjustorThunk (void);
extern void ComputeFunc_Dispatch_m1D1AFE51AE6EA502AD1ACA3834D381122DF58AE3_AdjustorThunk (void);
extern void StringStringPair_Equals_m7DA8F9205F1A50E519ADC06EADDD5BF9EC53A232_AdjustorThunk (void);
extern void StringStringPair_Equals_m97CF93669CF94DCEEC14014C47A5395560D86415_AdjustorThunk (void);
extern void StringStringPair_GetHashCode_mF36F761AE1C2DF9C388C4DA19674C1F9A8BC4A6E_AdjustorThunk (void);
extern void StringStringLongTriplet_GetHashCode_mFFA8FC94E496E653C41A8C8C21C96AD778D28B82_AdjustorThunk (void);
extern void StringStringLongTriplet_Equals_mB804D312895A425AA4C3DD3BCE51165EF174B7CE_AdjustorThunk (void);
extern void StringStringLongTriplet_Equals_mF77DE64E1E3040423D7018B89C155BC164D0EB0E_AdjustorThunk (void);
extern void TensorShape__ctor_m3BC1FADB0422E2F288BC57E0986F84CC116A68CF_AdjustorThunk (void);
extern void TensorShape__ctor_m276E04664C4EBCC2B74152C62B2F1BB7B5741715_AdjustorThunk (void);
extern void TensorShape__ctor_mE0B0A01539F0810B3B76C7B8FAF011A7F3366C0C_AdjustorThunk (void);
extern void TensorShape__ctor_mEDA3BE8A9C9C8A3DF9B57C5F606CF15E13D9A0BA_AdjustorThunk (void);
extern void TensorShape__ctor_m2C2A6C6637B7D6C3E3273A288BC65C96C8F5BED7_AdjustorThunk (void);
extern void TensorShape_get_kernelSpatialDepth_m1AD4B73B2BDCE2BE75B2B74955DAB7B8978AC31A_AdjustorThunk (void);
extern void TensorShape_get_kernelHeight_m8FEA6D90C78E10C90263AAD2811F39B932C110FD_AdjustorThunk (void);
extern void TensorShape_get_kernelWidth_mD5E24EB5EBC2EA98D63E5C0F399214ECF527351D_AdjustorThunk (void);
extern void TensorShape_get_kernelDepth_m3F108CAE154F28F2DEC79F8AD45017DB69D721B1_AdjustorThunk (void);
extern void TensorShape_get_kernelCount_m0D8CC69DF7F8E02FA3ED0C6F8147724A230448D9_AdjustorThunk (void);
extern void TensorShape_get_flatHeight_m22BC47B73FD0DE60CED750BA3B66228BF5ABD436_AdjustorThunk (void);
extern void TensorShape_get_flatWidth_m4A3EBEAB7298EC534EFB8D587D132522B2A196C5_AdjustorThunk (void);
extern void TensorShape_get_length_mE0387DEB5A86F017114EB542A8320DCD03D4E01F_AdjustorThunk (void);
extern void TensorShape_get_rank_m9CB191221D391C6F6964BB36CA3ACB6DC3AE6681_AdjustorThunk (void);
extern void TensorShape_get_dimensions_m520933925370ECC630A68FEA74A6067A74EFCDF2_AdjustorThunk (void);
extern void TensorShape_Axis_m90F1B94BAFEC7F41CACD1B373527E83507912F73_AdjustorThunk (void);
extern void TensorShape_GetPositionsFromIndex_m9C70427FA1E9A5833135C3654264D13364ED56DD_AdjustorThunk (void);
extern void TensorShape_GetPositionsFromIndex_m4ADBB2B058ABD7B05C22A37E9AD03F02A3974DA0_AdjustorThunk (void);
extern void TensorShape_GetPositionsFromIndexChannelFirst_mCDB861B23F9B5A23B2D15B17A945C8D890E6D0E0_AdjustorThunk (void);
extern void TensorShape_GetPositionsFromIndexChannelFirst_m1965ACCF88C23F6F2552B874731F9EDECBEC0716_AdjustorThunk (void);
extern void TensorShape_IndexWithBroadcast_m449129D5D5804D3534275EF54A0D2061415D122A_AdjustorThunk (void);
extern void TensorShape_IndexWithBroadcast_m9C812E0998746F76D50827B2D490708DB2F2354A_AdjustorThunk (void);
extern void TensorShape_IndexWithClamp_m6BE22BA784FC8A2C48F3EBFF9CB67C89E118C14D_AdjustorThunk (void);
extern void TensorShape_IndexWithClamp_mD4D60ACBCEC30D1B02CF9A145DD90C5678D245D8_AdjustorThunk (void);
extern void TensorShape_Index_m0D825F8B9E869E70261C9A830102FEC7D2EEF90F_AdjustorThunk (void);
extern void TensorShape_Index_m8C05F20BAE38D9AD7CAB47D747A2BF568A02515F_AdjustorThunk (void);
extern void TensorShape_IndexChannelFirst_mEF4444DBB9F3E1CF5E47B3B5E9404BC1CB553347_AdjustorThunk (void);
extern void TensorShape_IndexChannelFirst_mBA41A819ADA6B2506C24AE35BDD52EE3E0B8EB09_AdjustorThunk (void);
extern void TensorShape_Index_m63AC95D02D5F91992922F367C2A8AA6293B8E577_AdjustorThunk (void);
extern void TensorShape_get_Item_m4F040918ED634C91FF7C47CB7E6765382AA4E165_AdjustorThunk (void);
extern void TensorShape_set_Item_m34B0A369910C1AD80D88B0E3A696E2F77403C9F0_AdjustorThunk (void);
extern void TensorShape_ToArray_m67854F029B584A4B18A7C18BF292D50826645F0E_AdjustorThunk (void);
extern void TensorShape_Squeeze_mACAC9A6C9904C95B6FBC3ECC2E70F60670D124E4_AdjustorThunk (void);
extern void TensorShape_Flatten_m83462AE079448FD0B0F8BB498CCE762122028F9D_AdjustorThunk (void);
extern void TensorShape_Equals_m42E034684CC22E8D12A5D3EACD8E2AF679C8F1F4_AdjustorThunk (void);
extern void TensorShape_GetHashCode_m505117616EECD23D215F0A22B10EC3EBCC4AAEEB_AdjustorThunk (void);
extern void TensorShape_ToString_m2AEFB5AAFB8C431CF0A1F18AC289A5B985190C0B_AdjustorThunk (void);
extern void TensorIterator__ctor_m7C1B78FF7236816755899FCDF88960D76230F055_AdjustorThunk (void);
extern void TensorIterator__ctor_m67F087887A6346461C32CCBF735ED83766FB76EA_AdjustorThunk (void);
extern void TensorIterator_AssignIndexAndInvalidateDimensions_mCE43E53426BDFD6D900512A503D3EE563510B88F_AdjustorThunk (void);
extern void TensorIterator_Next_m00658806CBF44EE7AC8B761C498CE4CF8EF7CD0F_AdjustorThunk (void);
extern void TensorIterator_Advance_mB95B0C1420D7FDB1FDF8611C06EB6FBA3BF1B215_AdjustorThunk (void);
extern void TensorIterator_IsValid_mA185B7A32FDD6162C9448CDD6479CE8D9C46B509_AdjustorThunk (void);
extern void TensorIterator_IndexInReducedShape_m65002D28C0DA55FF78E67020E67CD36964838424_AdjustorThunk (void);
extern void TensorIterator_IndexWithReplacedAxis_m35AE2B8DD5B3EBC59C1B09D87BA19D6F0472D69C_AdjustorThunk (void);
extern void TensorIterator_get_Item_m79EA1D301F192CD79297CBBEC241B127EE6B0070_AdjustorThunk (void);
extern void MatrixMultiplyJob_Schedule_mBC7FDEAADB2F5C4386251D6B85CE9ECB3EA51C67_AdjustorThunk (void);
extern void MatrixMultiplyJob_Schedule_m71BDC879FDD69CF78015A11C0968B397F4E05C0A_AdjustorThunk (void);
extern void MatrixMultiplyJob_Execute_mF34FAD85443E53549A1B1825E69721AB479C0B52_AdjustorThunk (void);
extern void Im2ColSliceJob_Execute_m34BFA654159A0A3F1CD8C1E9B0F7AAF2840C90DA_AdjustorThunk (void);
extern void MaxPool2DJob_Execute_mC6D4C5AC6879C0B4D1416148E3BD414FFE26F47D_AdjustorThunk (void);
extern void AvgPool2DJob_Execute_m279C78483BDAAB972A4AD48BC1F494C100F74BD6_AdjustorThunk (void);
extern void DepthwiseConv2DJob_Execute_m9C4A2B52C843317FB8844686416DA6F48644C285_AdjustorThunk (void);
extern void PReluJob_Execute_m5D4C6E11318A359C191306B33306C1A0E8967AF1_AdjustorThunk (void);
extern void ReluJob_Execute_m5B0E555026FDCD1332AD1CC06CB079F7A618D1C7_AdjustorThunk (void);
extern void Relu6Job_Execute_m68182EFAAA04B5B5D5D39CD39C2FFD1C1149A4CC_AdjustorThunk (void);
extern void LeakyReluJob_get_alpha_m1716FF70F2C8765B99E16E5ABEF95DC574345186_AdjustorThunk (void);
extern void LeakyReluJob_set_alpha_mCB82BD5CD019364F6EB61C03326EC0DAD53AB5D5_AdjustorThunk (void);
extern void LeakyReluJob_Execute_mD0B0F64BCB8222CB527B61F8E7E07624E3D33890_AdjustorThunk (void);
extern void TanhJob_Execute_mE2E4964E986C114F752991A62D398459A21071F8_AdjustorThunk (void);
extern void SigmoidJob_Execute_m64E3A3081C86344E7A7A4765F83D36CAB3E2F138_AdjustorThunk (void);
extern void EluJob_Execute_mC2F619EDAB66202F25AF9DDD5D7EE06A566701BC_AdjustorThunk (void);
extern void SeluJob_Execute_m11D02E7F0552F597D63DBF3005A138B4856810BC_AdjustorThunk (void);
extern void SwishJob_Execute_mAACDF3C25402589E333C4A46243C9A3E43DB7FF4_AdjustorThunk (void);
extern void SoftmaxJob_Execute_m64690B935CF2A6839E310E74C1EEF33E6E887509_AdjustorThunk (void);
extern void AbsJob_Execute_mF7F9F39D830690952E16CCFFB7749584FAA869C3_AdjustorThunk (void);
extern void NegJob_Execute_m1495961EE447F58C8D0ABE236E476F3300784FB8_AdjustorThunk (void);
extern void CeilJob_Execute_m4E2966906D56A2CDBCB614A15864A37F68F35524_AdjustorThunk (void);
extern void ClipJob_Execute_m9254D05EE5C50E20C81A4757D9AA2DE46298320D_AdjustorThunk (void);
extern void FloorJob_Execute_mC438769AA3A88C6D737CF28D5E5E406EBB85BDBF_AdjustorThunk (void);
extern void ReciprocalJob_Execute_m367D8821D93435EE97F1E6C7CC2C9CAA03FF73D8_AdjustorThunk (void);
extern void PowJob_Execute_mE9D0270F9E97B97CFBB1859419C90E910E39A15A_AdjustorThunk (void);
extern void ExpJob_Execute_mB04C9960E8A25404B9BBD386A7D6704C24426388_AdjustorThunk (void);
extern void LogJob_Execute_m23DF747BEA45380C0C5E31CF12622D9288A769BC_AdjustorThunk (void);
extern void SqrtJob_Execute_m67D619D3BE047A42DC12A4AF3177D56A89138378_AdjustorThunk (void);
extern void AcosJob_Execute_m0557845EEF870095C534DD1D0E3AB63D9F6E6C23_AdjustorThunk (void);
extern void AcoshJob_Execute_mBE946D3E3D433DE9718745EACD4D5137332215D6_AdjustorThunk (void);
extern void AsinJob_Execute_mB36B55A9A1287100525CFB3D727A3112044B1A32_AdjustorThunk (void);
extern void AsinhJob_Execute_m509D3A488A49105DAE48CFC9BBB702CB53425412_AdjustorThunk (void);
extern void AtanJob_Execute_m81B50AB152005DD204A285A67B754D79330DC130_AdjustorThunk (void);
extern void AtanhJob_Execute_m9A2B9A5165D2158579466975EB3A27FA1396F7AF_AdjustorThunk (void);
extern void CosJob_Execute_m26D5357F4822DFD88EC954B087FF3CEA183A010E_AdjustorThunk (void);
extern void CoshJob_Execute_m9D3442ABA8B56B495A709B7DD371F18164179FF3_AdjustorThunk (void);
extern void SinJob_Execute_m20C01B51AD63119432F763FAE24D9577AC4CB4A9_AdjustorThunk (void);
extern void SinhJob_Execute_m0A947605F1BECC10C3E64FBA2D4EAC7D0768763B_AdjustorThunk (void);
extern void TanJob_Execute_mEF91C2D49C589E225DEDBEBB106962D9AC05B819_AdjustorThunk (void);
extern void ElementwiseAddJob_Execute_m022C623FC40B9D89351B5089FDDDE83D3D7A9063_AdjustorThunk (void);
extern void ElementwiseMulJob_Execute_m2833A1A5E62C23B57E2FD5CC5B76711A8A6AF57C_AdjustorThunk (void);
extern void ElementwiseDivJob_Execute_mD5E46272556614F3E5C1147BEFBDA362DACCA9B9_AdjustorThunk (void);
extern void ElementwisePowJob_Execute_m1A322C4427864D6BDA6349EB75A54A9C520B0822_AdjustorThunk (void);
extern void ElementwiseMaxJob_Execute_mBFDE22564C3167440C8A6413804D28CBEFFCB4EA_AdjustorThunk (void);
extern void ElementwiseMinJob_Execute_m3EA5B9FB2218065675B635C4731A608D1650FBC6_AdjustorThunk (void);
extern void ZeroBroadcastJob_Execute_mE5BF8936EEFB598F7C53C934715675DC236F4B66_AdjustorThunk (void);
extern void CopyJob_Execute_mC647ABED93530C5C245916068A9F2735336DCE3D_AdjustorThunk (void);
extern void VectorBroadcastJob_Execute_m096E6015CC5FE47159D517F1878B7B1DDA5EABCD_AdjustorThunk (void);
extern void ScalarBroadcastAddJob_Execute_mA9787E94EC1246EF0E746CC900AA6B884F5403D5_AdjustorThunk (void);
extern void ScalarBroadcastMulJob_Execute_mEFD366C6336C5453A47B2629A85416060BF18DA1_AdjustorThunk (void);
extern void ScalarBroadcastDivJob_Execute_m07026CC3017E74E780663A91618C22B75A962B75_AdjustorThunk (void);
extern void ScalarBroadcastBiasedExpJob_Execute_m7AE94B8793BB2E9136E68C73ABD5AC6597E691CC_AdjustorThunk (void);
extern void GenericBroadcastJob_Execute_m24008BA401258A8D3C355F9950BEA46D712FCEBE_AdjustorThunk (void);
extern void GenericBroadcastAddJob_Execute_m17DBF894A4BF260853A4338FB44AA0EB151150FC_AdjustorThunk (void);
extern void GenericBroadcastMulJob_Execute_m41B7B20B65BC1521905B2A64989D119AC54B88F4_AdjustorThunk (void);
extern void VectorBroadcastScaleBiasJob_Execute_m8797181998A988761CD37C28DDED9DB8CE2F3C36_AdjustorThunk (void);
extern void ChannelReduceMaxJob_Execute_mC2A3AFCB7DF15D8230CF89D35D2D2062CE52415F_AdjustorThunk (void);
extern void ChannelReduceSumJob_Execute_m9F67AE08E550BBF2F5E0334F811D5AB796A0697C_AdjustorThunk (void);
extern void Entry__ctor_mB1F087CFE2B0D8A568D6B294A76F667880C2480E_AdjustorThunk (void);
extern void Entry__ctor_mF224CFCC76879AD71EEEADB5A320F02132CACB74_AdjustorThunk (void);
extern void Entry__ctor_m9481F232249846FDFE0CF326330D134C60A4ADF1_AdjustorThunk (void);
extern void Entry__ctor_m5EA693B7934059F23B65B58CCC2863327B292DFD_AdjustorThunk (void);
extern void KernelAssertInfo__ctor_m6BC1385E86260E6F83F40B43C8E77EFB54A8B310_AdjustorThunk (void);
extern void CompiledLayer_get_kernel_m8933276E9939C717B3ADFA0DE484D677A1E5825C_AdjustorThunk (void);
extern void TensorDecl_get_ShapeId_mBFE84999078BE027B38A5C2C463C92549B88C4BF_AdjustorThunk (void);
extern void TensorDecl_get_InfoId_mB6D6BC23AF9D32911D83B789DB460A0605AB0264_AdjustorThunk (void);
extern void TensorDecl__ctor_m643E5715F2C3F9730F1D6740ED8ABB3AA8C0A67B_AdjustorThunk (void);
extern void SGEMMJob_Execute_m1035E462C7BED83C1B91349C462EFB7C8CB47A04_AdjustorThunk (void);
extern void WorkerConfiguration__ctor_m2A2F5BF4B0F6EAA327B9E9C9C78CA0E737669CF7_AdjustorThunk (void);
extern void Input_WithName_m8DEE62CF7E1B57ED764A2478790EE4A2AC09E635_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[150] = 
{
	{ 0x060000EA, ComputeKernel_get_shader_m0D447F51A2319E95F356F6409F4003CA216C6A81_AdjustorThunk },
	{ 0x060000EB, ComputeKernel__ctor_m552489B273AB8DB0CEA61A187E41A6392758D96A_AdjustorThunk },
	{ 0x060000EC, ComputeKernel_SetTensor_m238FF4E5BD04D539AB1B60437D05C37831834F6A_AdjustorThunk },
	{ 0x060000ED, ComputeKernel_SetTensor_m9753CC570CA8E7CC3889160611D26023B4F83005_AdjustorThunk },
	{ 0x060000EE, ComputeKernel_SetTensorDecl_m3D81D3C1964201D26BECA256815ABA4672B7FF90_AdjustorThunk },
	{ 0x060000EF, ComputeKernel_SetTensorDecl_mEA777019F6EA126001772B6D6D0BF1619DF917C4_AdjustorThunk },
	{ 0x060000F0, ComputeKernel_SetTensorBuffer_mDA34F2A92056E075A8640D9A4B4960FCAE647A31_AdjustorThunk },
	{ 0x060000F1, ComputeKernel_SetTensorBuffer_m257F015B13D22F03617043A780612B46A0D6A944_AdjustorThunk },
	{ 0x060000F2, ComputeKernel_Dispatch_m056450E3439528399CDB0710C7C0B694CE02F1E5_AdjustorThunk },
	{ 0x06000270, ComputeFunc_get_threadGroupSize_m0D4C76AB91DAD77954CD10606968DF86A4141A96_AdjustorThunk },
	{ 0x06000271, ComputeFunc_get_width_m52666C3EB651D499B423628F273A82CF793AA49D_AdjustorThunk },
	{ 0x06000272, ComputeFunc_get_height_m1D83A6306B459071CEDD1A1F856D4D1D74523498_AdjustorThunk },
	{ 0x06000273, ComputeFunc_get_depth_mF80DB0BF4CE080FBB94B2681D232DDDC351D22B3_AdjustorThunk },
	{ 0x06000279, ComputeFunc__ctor_m516FC5C43314B8775F24F8628CA508ABB70DA19B_AdjustorThunk },
	{ 0x0600027A, ComputeFunc__ctor_m03606D90574B46C307C05DFA57789A691F771820_AdjustorThunk },
	{ 0x0600027B, ComputeFunc__ctor_mA6AC93E5232318E2A3D9C30B33E3E3D28956D683_AdjustorThunk },
	{ 0x0600027C, ComputeFunc__ctor_mECAF4AB96858DA16566617DBE6FFB753CBA27D08_AdjustorThunk },
	{ 0x0600027D, ComputeFunc_SetTensor_m08238C3C82DF681F372CBCB840298C731ABB4A6F_AdjustorThunk },
	{ 0x0600027E, ComputeFunc_SetTensor_m1A97DB943C1A405B615A95E7C3A6DB40175DE34A_AdjustorThunk },
	{ 0x0600027F, ComputeFunc_SetTensor_m50FEE0FAACA9469DEB8F0DE3BF8784D3FD81D628_AdjustorThunk },
	{ 0x06000280, ComputeFunc_SetTensorDecl_mE46880E6219A059E43600E8957876A150EBC8AF4_AdjustorThunk },
	{ 0x06000281, ComputeFunc_SetTensorDecl_m1839141DA57D310B2B17ABA5458547217056FAF4_AdjustorThunk },
	{ 0x06000282, ComputeFunc_SetTensorBuffer_mCDA021CD1499CB191BA2A670C718B9CEF1F1D1DC_AdjustorThunk },
	{ 0x06000283, ComputeFunc_SetTensorBuffer_mBA3E062D655641E95E610DCB18EC66E81D982497_AdjustorThunk },
	{ 0x06000284, ComputeFunc_SetTexture_m188532280C002E7606C577659965F217FC8DCC98_AdjustorThunk },
	{ 0x06000285, ComputeFunc_Dispatch_m34CD2C8473012C2F76918931F90E1D0C1C6E9ADB_AdjustorThunk },
	{ 0x06000286, ComputeFunc_Dispatch_m1D1AFE51AE6EA502AD1ACA3834D381122DF58AE3_AdjustorThunk },
	{ 0x060005A3, StringStringPair_Equals_m7DA8F9205F1A50E519ADC06EADDD5BF9EC53A232_AdjustorThunk },
	{ 0x060005A4, StringStringPair_Equals_m97CF93669CF94DCEEC14014C47A5395560D86415_AdjustorThunk },
	{ 0x060005A5, StringStringPair_GetHashCode_mF36F761AE1C2DF9C388C4DA19674C1F9A8BC4A6E_AdjustorThunk },
	{ 0x060005A6, StringStringLongTriplet_GetHashCode_mFFA8FC94E496E653C41A8C8C21C96AD778D28B82_AdjustorThunk },
	{ 0x060005A7, StringStringLongTriplet_Equals_mB804D312895A425AA4C3DD3BCE51165EF174B7CE_AdjustorThunk },
	{ 0x060005A8, StringStringLongTriplet_Equals_mF77DE64E1E3040423D7018B89C155BC164D0EB0E_AdjustorThunk },
	{ 0x06000663, TensorShape__ctor_m3BC1FADB0422E2F288BC57E0986F84CC116A68CF_AdjustorThunk },
	{ 0x06000664, TensorShape__ctor_m276E04664C4EBCC2B74152C62B2F1BB7B5741715_AdjustorThunk },
	{ 0x06000665, TensorShape__ctor_mE0B0A01539F0810B3B76C7B8FAF011A7F3366C0C_AdjustorThunk },
	{ 0x06000666, TensorShape__ctor_mEDA3BE8A9C9C8A3DF9B57C5F606CF15E13D9A0BA_AdjustorThunk },
	{ 0x06000667, TensorShape__ctor_m2C2A6C6637B7D6C3E3273A288BC65C96C8F5BED7_AdjustorThunk },
	{ 0x06000668, TensorShape_get_kernelSpatialDepth_m1AD4B73B2BDCE2BE75B2B74955DAB7B8978AC31A_AdjustorThunk },
	{ 0x06000669, TensorShape_get_kernelHeight_m8FEA6D90C78E10C90263AAD2811F39B932C110FD_AdjustorThunk },
	{ 0x0600066A, TensorShape_get_kernelWidth_mD5E24EB5EBC2EA98D63E5C0F399214ECF527351D_AdjustorThunk },
	{ 0x0600066B, TensorShape_get_kernelDepth_m3F108CAE154F28F2DEC79F8AD45017DB69D721B1_AdjustorThunk },
	{ 0x0600066C, TensorShape_get_kernelCount_m0D8CC69DF7F8E02FA3ED0C6F8147724A230448D9_AdjustorThunk },
	{ 0x0600066D, TensorShape_get_flatHeight_m22BC47B73FD0DE60CED750BA3B66228BF5ABD436_AdjustorThunk },
	{ 0x0600066E, TensorShape_get_flatWidth_m4A3EBEAB7298EC534EFB8D587D132522B2A196C5_AdjustorThunk },
	{ 0x0600066F, TensorShape_get_length_mE0387DEB5A86F017114EB542A8320DCD03D4E01F_AdjustorThunk },
	{ 0x06000670, TensorShape_get_rank_m9CB191221D391C6F6964BB36CA3ACB6DC3AE6681_AdjustorThunk },
	{ 0x06000671, TensorShape_get_dimensions_m520933925370ECC630A68FEA74A6067A74EFCDF2_AdjustorThunk },
	{ 0x06000672, TensorShape_Axis_m90F1B94BAFEC7F41CACD1B373527E83507912F73_AdjustorThunk },
	{ 0x06000673, TensorShape_GetPositionsFromIndex_m9C70427FA1E9A5833135C3654264D13364ED56DD_AdjustorThunk },
	{ 0x06000674, TensorShape_GetPositionsFromIndex_m4ADBB2B058ABD7B05C22A37E9AD03F02A3974DA0_AdjustorThunk },
	{ 0x06000675, TensorShape_GetPositionsFromIndexChannelFirst_mCDB861B23F9B5A23B2D15B17A945C8D890E6D0E0_AdjustorThunk },
	{ 0x06000676, TensorShape_GetPositionsFromIndexChannelFirst_m1965ACCF88C23F6F2552B874731F9EDECBEC0716_AdjustorThunk },
	{ 0x06000677, TensorShape_IndexWithBroadcast_m449129D5D5804D3534275EF54A0D2061415D122A_AdjustorThunk },
	{ 0x06000678, TensorShape_IndexWithBroadcast_m9C812E0998746F76D50827B2D490708DB2F2354A_AdjustorThunk },
	{ 0x06000679, TensorShape_IndexWithClamp_m6BE22BA784FC8A2C48F3EBFF9CB67C89E118C14D_AdjustorThunk },
	{ 0x0600067A, TensorShape_IndexWithClamp_mD4D60ACBCEC30D1B02CF9A145DD90C5678D245D8_AdjustorThunk },
	{ 0x0600067B, TensorShape_Index_m0D825F8B9E869E70261C9A830102FEC7D2EEF90F_AdjustorThunk },
	{ 0x0600067C, TensorShape_Index_m8C05F20BAE38D9AD7CAB47D747A2BF568A02515F_AdjustorThunk },
	{ 0x0600067D, TensorShape_IndexChannelFirst_mEF4444DBB9F3E1CF5E47B3B5E9404BC1CB553347_AdjustorThunk },
	{ 0x0600067E, TensorShape_IndexChannelFirst_mBA41A819ADA6B2506C24AE35BDD52EE3E0B8EB09_AdjustorThunk },
	{ 0x0600067F, TensorShape_Index_m63AC95D02D5F91992922F367C2A8AA6293B8E577_AdjustorThunk },
	{ 0x06000680, TensorShape_get_Item_m4F040918ED634C91FF7C47CB7E6765382AA4E165_AdjustorThunk },
	{ 0x06000681, TensorShape_set_Item_m34B0A369910C1AD80D88B0E3A696E2F77403C9F0_AdjustorThunk },
	{ 0x06000682, TensorShape_ToArray_m67854F029B584A4B18A7C18BF292D50826645F0E_AdjustorThunk },
	{ 0x06000683, TensorShape_Squeeze_mACAC9A6C9904C95B6FBC3ECC2E70F60670D124E4_AdjustorThunk },
	{ 0x06000684, TensorShape_Flatten_m83462AE079448FD0B0F8BB498CCE762122028F9D_AdjustorThunk },
	{ 0x06000687, TensorShape_Equals_m42E034684CC22E8D12A5D3EACD8E2AF679C8F1F4_AdjustorThunk },
	{ 0x06000688, TensorShape_GetHashCode_m505117616EECD23D215F0A22B10EC3EBCC4AAEEB_AdjustorThunk },
	{ 0x06000689, TensorShape_ToString_m2AEFB5AAFB8C431CF0A1F18AC289A5B985190C0B_AdjustorThunk },
	{ 0x0600068B, TensorIterator__ctor_m7C1B78FF7236816755899FCDF88960D76230F055_AdjustorThunk },
	{ 0x0600068C, TensorIterator__ctor_m67F087887A6346461C32CCBF735ED83766FB76EA_AdjustorThunk },
	{ 0x0600068D, TensorIterator_AssignIndexAndInvalidateDimensions_mCE43E53426BDFD6D900512A503D3EE563510B88F_AdjustorThunk },
	{ 0x0600068E, TensorIterator_Next_m00658806CBF44EE7AC8B761C498CE4CF8EF7CD0F_AdjustorThunk },
	{ 0x0600068F, TensorIterator_Advance_mB95B0C1420D7FDB1FDF8611C06EB6FBA3BF1B215_AdjustorThunk },
	{ 0x06000690, TensorIterator_IsValid_mA185B7A32FDD6162C9448CDD6479CE8D9C46B509_AdjustorThunk },
	{ 0x06000691, TensorIterator_IndexInReducedShape_m65002D28C0DA55FF78E67020E67CD36964838424_AdjustorThunk },
	{ 0x06000692, TensorIterator_IndexWithReplacedAxis_m35AE2B8DD5B3EBC59C1B09D87BA19D6F0472D69C_AdjustorThunk },
	{ 0x06000693, TensorIterator_get_Item_m79EA1D301F192CD79297CBBEC241B127EE6B0070_AdjustorThunk },
	{ 0x0600072E, MatrixMultiplyJob_Schedule_mBC7FDEAADB2F5C4386251D6B85CE9ECB3EA51C67_AdjustorThunk },
	{ 0x0600072F, MatrixMultiplyJob_Schedule_m71BDC879FDD69CF78015A11C0968B397F4E05C0A_AdjustorThunk },
	{ 0x06000730, MatrixMultiplyJob_Execute_mF34FAD85443E53549A1B1825E69721AB479C0B52_AdjustorThunk },
	{ 0x06000734, Im2ColSliceJob_Execute_m34BFA654159A0A3F1CD8C1E9B0F7AAF2840C90DA_AdjustorThunk },
	{ 0x06000735, MaxPool2DJob_Execute_mC6D4C5AC6879C0B4D1416148E3BD414FFE26F47D_AdjustorThunk },
	{ 0x06000736, AvgPool2DJob_Execute_m279C78483BDAAB972A4AD48BC1F494C100F74BD6_AdjustorThunk },
	{ 0x06000737, DepthwiseConv2DJob_Execute_m9C4A2B52C843317FB8844686416DA6F48644C285_AdjustorThunk },
	{ 0x06000738, PReluJob_Execute_m5D4C6E11318A359C191306B33306C1A0E8967AF1_AdjustorThunk },
	{ 0x0600073A, ReluJob_Execute_m5B0E555026FDCD1332AD1CC06CB079F7A618D1C7_AdjustorThunk },
	{ 0x0600073B, Relu6Job_Execute_m68182EFAAA04B5B5D5D39CD39C2FFD1C1149A4CC_AdjustorThunk },
	{ 0x0600073C, LeakyReluJob_get_alpha_m1716FF70F2C8765B99E16E5ABEF95DC574345186_AdjustorThunk },
	{ 0x0600073D, LeakyReluJob_set_alpha_mCB82BD5CD019364F6EB61C03326EC0DAD53AB5D5_AdjustorThunk },
	{ 0x0600073E, LeakyReluJob_Execute_mD0B0F64BCB8222CB527B61F8E7E07624E3D33890_AdjustorThunk },
	{ 0x0600073F, TanhJob_Execute_mE2E4964E986C114F752991A62D398459A21071F8_AdjustorThunk },
	{ 0x06000740, SigmoidJob_Execute_m64E3A3081C86344E7A7A4765F83D36CAB3E2F138_AdjustorThunk },
	{ 0x06000741, EluJob_Execute_mC2F619EDAB66202F25AF9DDD5D7EE06A566701BC_AdjustorThunk },
	{ 0x06000742, SeluJob_Execute_m11D02E7F0552F597D63DBF3005A138B4856810BC_AdjustorThunk },
	{ 0x06000743, SwishJob_Execute_mAACDF3C25402589E333C4A46243C9A3E43DB7FF4_AdjustorThunk },
	{ 0x06000744, SoftmaxJob_Execute_m64690B935CF2A6839E310E74C1EEF33E6E887509_AdjustorThunk },
	{ 0x06000745, AbsJob_Execute_mF7F9F39D830690952E16CCFFB7749584FAA869C3_AdjustorThunk },
	{ 0x06000746, NegJob_Execute_m1495961EE447F58C8D0ABE236E476F3300784FB8_AdjustorThunk },
	{ 0x06000747, CeilJob_Execute_m4E2966906D56A2CDBCB614A15864A37F68F35524_AdjustorThunk },
	{ 0x06000748, ClipJob_Execute_m9254D05EE5C50E20C81A4757D9AA2DE46298320D_AdjustorThunk },
	{ 0x06000749, FloorJob_Execute_mC438769AA3A88C6D737CF28D5E5E406EBB85BDBF_AdjustorThunk },
	{ 0x0600074A, ReciprocalJob_Execute_m367D8821D93435EE97F1E6C7CC2C9CAA03FF73D8_AdjustorThunk },
	{ 0x0600074B, PowJob_Execute_mE9D0270F9E97B97CFBB1859419C90E910E39A15A_AdjustorThunk },
	{ 0x0600074C, ExpJob_Execute_mB04C9960E8A25404B9BBD386A7D6704C24426388_AdjustorThunk },
	{ 0x0600074D, LogJob_Execute_m23DF747BEA45380C0C5E31CF12622D9288A769BC_AdjustorThunk },
	{ 0x0600074E, SqrtJob_Execute_m67D619D3BE047A42DC12A4AF3177D56A89138378_AdjustorThunk },
	{ 0x0600074F, AcosJob_Execute_m0557845EEF870095C534DD1D0E3AB63D9F6E6C23_AdjustorThunk },
	{ 0x06000750, AcoshJob_Execute_mBE946D3E3D433DE9718745EACD4D5137332215D6_AdjustorThunk },
	{ 0x06000751, AsinJob_Execute_mB36B55A9A1287100525CFB3D727A3112044B1A32_AdjustorThunk },
	{ 0x06000752, AsinhJob_Execute_m509D3A488A49105DAE48CFC9BBB702CB53425412_AdjustorThunk },
	{ 0x06000753, AtanJob_Execute_m81B50AB152005DD204A285A67B754D79330DC130_AdjustorThunk },
	{ 0x06000754, AtanhJob_Execute_m9A2B9A5165D2158579466975EB3A27FA1396F7AF_AdjustorThunk },
	{ 0x06000755, CosJob_Execute_m26D5357F4822DFD88EC954B087FF3CEA183A010E_AdjustorThunk },
	{ 0x06000756, CoshJob_Execute_m9D3442ABA8B56B495A709B7DD371F18164179FF3_AdjustorThunk },
	{ 0x06000757, SinJob_Execute_m20C01B51AD63119432F763FAE24D9577AC4CB4A9_AdjustorThunk },
	{ 0x06000758, SinhJob_Execute_m0A947605F1BECC10C3E64FBA2D4EAC7D0768763B_AdjustorThunk },
	{ 0x06000759, TanJob_Execute_mEF91C2D49C589E225DEDBEBB106962D9AC05B819_AdjustorThunk },
	{ 0x0600075A, ElementwiseAddJob_Execute_m022C623FC40B9D89351B5089FDDDE83D3D7A9063_AdjustorThunk },
	{ 0x0600075B, ElementwiseMulJob_Execute_m2833A1A5E62C23B57E2FD5CC5B76711A8A6AF57C_AdjustorThunk },
	{ 0x0600075C, ElementwiseDivJob_Execute_mD5E46272556614F3E5C1147BEFBDA362DACCA9B9_AdjustorThunk },
	{ 0x0600075D, ElementwisePowJob_Execute_m1A322C4427864D6BDA6349EB75A54A9C520B0822_AdjustorThunk },
	{ 0x0600075E, ElementwiseMaxJob_Execute_mBFDE22564C3167440C8A6413804D28CBEFFCB4EA_AdjustorThunk },
	{ 0x0600075F, ElementwiseMinJob_Execute_m3EA5B9FB2218065675B635C4731A608D1650FBC6_AdjustorThunk },
	{ 0x06000760, ZeroBroadcastJob_Execute_mE5BF8936EEFB598F7C53C934715675DC236F4B66_AdjustorThunk },
	{ 0x06000761, CopyJob_Execute_mC647ABED93530C5C245916068A9F2735336DCE3D_AdjustorThunk },
	{ 0x06000762, VectorBroadcastJob_Execute_m096E6015CC5FE47159D517F1878B7B1DDA5EABCD_AdjustorThunk },
	{ 0x06000763, ScalarBroadcastAddJob_Execute_mA9787E94EC1246EF0E746CC900AA6B884F5403D5_AdjustorThunk },
	{ 0x06000764, ScalarBroadcastMulJob_Execute_mEFD366C6336C5453A47B2629A85416060BF18DA1_AdjustorThunk },
	{ 0x06000765, ScalarBroadcastDivJob_Execute_m07026CC3017E74E780663A91618C22B75A962B75_AdjustorThunk },
	{ 0x06000766, ScalarBroadcastBiasedExpJob_Execute_m7AE94B8793BB2E9136E68C73ABD5AC6597E691CC_AdjustorThunk },
	{ 0x06000767, GenericBroadcastJob_Execute_m24008BA401258A8D3C355F9950BEA46D712FCEBE_AdjustorThunk },
	{ 0x06000768, GenericBroadcastAddJob_Execute_m17DBF894A4BF260853A4338FB44AA0EB151150FC_AdjustorThunk },
	{ 0x06000769, GenericBroadcastMulJob_Execute_m41B7B20B65BC1521905B2A64989D119AC54B88F4_AdjustorThunk },
	{ 0x0600076A, VectorBroadcastScaleBiasJob_Execute_m8797181998A988761CD37C28DDED9DB8CE2F3C36_AdjustorThunk },
	{ 0x0600076B, ChannelReduceMaxJob_Execute_mC2A3AFCB7DF15D8230CF89D35D2D2062CE52415F_AdjustorThunk },
	{ 0x0600076C, ChannelReduceSumJob_Execute_m9F67AE08E550BBF2F5E0334F811D5AB796A0697C_AdjustorThunk },
	{ 0x0600076D, Entry__ctor_mB1F087CFE2B0D8A568D6B294A76F667880C2480E_AdjustorThunk },
	{ 0x0600076E, Entry__ctor_mF224CFCC76879AD71EEEADB5A320F02132CACB74_AdjustorThunk },
	{ 0x0600076F, Entry__ctor_m9481F232249846FDFE0CF326330D134C60A4ADF1_AdjustorThunk },
	{ 0x06000770, Entry__ctor_m5EA693B7934059F23B65B58CCC2863327B292DFD_AdjustorThunk },
	{ 0x06000771, KernelAssertInfo__ctor_m6BC1385E86260E6F83F40B43C8E77EFB54A8B310_AdjustorThunk },
	{ 0x06000772, CompiledLayer_get_kernel_m8933276E9939C717B3ADFA0DE484D677A1E5825C_AdjustorThunk },
	{ 0x0600078F, TensorDecl_get_ShapeId_mBFE84999078BE027B38A5C2C463C92549B88C4BF_AdjustorThunk },
	{ 0x06000790, TensorDecl_get_InfoId_mB6D6BC23AF9D32911D83B789DB460A0605AB0264_AdjustorThunk },
	{ 0x06000791, TensorDecl__ctor_m643E5715F2C3F9730F1D6740ED8ABB3AA8C0A67B_AdjustorThunk },
	{ 0x060007AC, SGEMMJob_Execute_m1035E462C7BED83C1B91349C462EFB7C8CB47A04_AdjustorThunk },
	{ 0x060007E9, WorkerConfiguration__ctor_m2A2F5BF4B0F6EAA327B9E9C9C78CA0E737669CF7_AdjustorThunk },
	{ 0x060007ED, Input_WithName_m8DEE62CF7E1B57ED764A2478790EE4A2AC09E635_AdjustorThunk },
};
static const int32_t s_InvokerIndices[2045] = 
{
	455,
	446,
	120,
	120,
	74,
	706,
	706,
	702,
	1074,
	447,
	447,
	1958,
	1958,
	1958,
	707,
	1074,
	1074,
	1074,
	704,
	73,
	206,
	1077,
	468,
	468,
	698,
	441,
	194,
	702,
	1958,
	1958,
	1073,
	1958,
	1958,
	1958,
	1077,
	1958,
	1077,
	711,
	1074,
	1958,
	1958,
	1958,
	1958,
	711,
	1958,
	1958,
	1077,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1073,
	1073,
	1073,
	1073,
	1073,
	1073,
	1073,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1958,
	704,
	1958,
	1078,
	1078,
	1958,
	1074,
	1073,
	447,
	1074,
	1073,
	196,
	1073,
	1958,
	1958,
	2648,
	1493,
	1493,
	1493,
	881,
	1958,
	2628,
	1493,
	1958,
	1958,
	3189,
	1965,
	1084,
	585,
	1497,
	2628,
	2648,
	4825,
	4825,
	4825,
	4059,
	3506,
	4073,
	4891,
	3243,
	3175,
	2615,
	3175,
	2615,
	2610,
	2663,
	2628,
	2628,
	2628,
	3243,
	3243,
	3243,
	2610,
	893,
	1965,
	1950,
	2232,
	3189,
	2628,
	4891,
	1958,
	1056,
	645,
	455,
	446,
	120,
	201,
	447,
	447,
	1958,
	1958,
	120,
	704,
	1958,
	1958,
	1077,
	1958,
	1958,
	1077,
	711,
	1958,
	1074,
	1073,
	1958,
	1958,
	1958,
	1958,
	711,
	1958,
	1958,
	1077,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1078,
	529,
	830,
	830,
	830,
	830,
	830,
	830,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1078,
	3853,
	3354,
	3354,
	3354,
	3520,
	4085,
	4085,
	4084,
	4414,
	4414,
	4414,
	4414,
	3852,
	4084,
	4084,
	4084,
	4084,
	4414,
	4414,
	4898,
	4084,
	4084,
	3994,
	4942,
	4995,
	5050,
	3243,
	5037,
	3189,
	1256,
	597,
	279,
	894,
	920,
	1493,
	1393,
	3243,
	4038,
	4000,
	585,
	1680,
	1681,
	455,
	446,
	44,
	120,
	120,
	74,
	706,
	201,
	1958,
	1958,
	706,
	1958,
	1074,
	704,
	704,
	73,
	452,
	1074,
	1073,
	1958,
	468,
	468,
	1073,
	1083,
	1074,
	449,
	1958,
	704,
	1078,
	1078,
	3243,
	704,
	1072,
	3243,
	5037,
	4699,
	5037,
	4976,
	3243,
	585,
	698,
	2648,
	985,
	1074,
	1074,
	1493,
	1493,
	1068,
	446,
	120,
	120,
	74,
	706,
	201,
	704,
	1958,
	1958,
	1958,
	73,
	452,
	1074,
	1073,
	1958,
	1074,
	1073,
	5037,
	3189,
	2610,
	2663,
	3243,
	3243,
	2610,
	893,
	2232,
	1965,
	1950,
	3170,
	3189,
	3189,
	3170,
	3170,
	871,
	3243,
	3243,
	2610,
	893,
	2232,
	1965,
	1950,
	3170,
	3189,
	2628,
	1084,
	1958,
	1958,
	686,
	180,
	2648,
	1203,
	455,
	455,
	446,
	120,
	120,
	74,
	706,
	706,
	702,
	1074,
	447,
	447,
	1958,
	1958,
	1958,
	704,
	707,
	4285,
	1074,
	1074,
	1074,
	704,
	206,
	73,
	2377,
	1204,
	1077,
	468,
	468,
	698,
	441,
	194,
	1958,
	702,
	1958,
	1074,
	1073,
	1958,
	1958,
	1958,
	1958,
	1077,
	1077,
	711,
	1958,
	1958,
	1958,
	1958,
	711,
	1958,
	1958,
	1077,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1073,
	447,
	1074,
	1073,
	1074,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1073,
	1073,
	1073,
	1073,
	1073,
	1073,
	1073,
	704,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1958,
	704,
	1078,
	1958,
	1958,
	1078,
	1078,
	1073,
	196,
	1958,
	1074,
	1958,
	3543,
	3543,
	3543,
	4527,
	4527,
	4093,
	4093,
	4946,
	3243,
	4338,
	3189,
	3170,
	3170,
	613,
	272,
	3243,
	3243,
	2610,
	893,
	2232,
	2232,
	2232,
	1084,
	1965,
	1950,
	3170,
	3189,
	272,
	4918,
	4918,
	4918,
	4918,
	4918,
	4918,
	4922,
	4922,
	4922,
	4922,
	4830,
	4305,
	4788,
	3243,
	3232,
	3189,
	3170,
	3170,
	3170,
	3170,
	255,
	255,
	2610,
	893,
	2232,
	1965,
	1950,
	3170,
	3243,
	1493,
	1958,
	833,
	677,
	109,
	1074,
	91,
	2292,
	2232,
	455,
	455,
	446,
	120,
	120,
	120,
	74,
	706,
	706,
	702,
	1074,
	201,
	447,
	447,
	1074,
	1958,
	1958,
	1958,
	449,
	707,
	1074,
	1074,
	1074,
	704,
	73,
	206,
	1077,
	452,
	1958,
	1074,
	1073,
	1958,
	1958,
	1958,
	1958,
	1077,
	1077,
	711,
	1958,
	1958,
	1958,
	1958,
	711,
	1958,
	1958,
	1077,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1078,
	1074,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	702,
	1073,
	1073,
	1073,
	1073,
	1073,
	1073,
	1073,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1958,
	1078,
	1078,
	1958,
	1078,
	1958,
	1965,
	1958,
	1074,
	1074,
	1958,
	1073,
	447,
	1074,
	1073,
	1958,
	1958,
	5037,
	3170,
	3170,
	3170,
	3170,
	4994,
	4830,
	5020,
	5020,
	5020,
	263,
	1493,
	263,
	1493,
	597,
	279,
	597,
	894,
	920,
	1493,
	1393,
	1493,
	2543,
	843,
	4338,
	3513,
	5037,
	2610,
	2663,
	2628,
	2628,
	569,
	3243,
	3243,
	2610,
	893,
	1965,
	3189,
	3189,
	2628,
	4891,
	4250,
	1958,
	540,
	1958,
	540,
	1958,
	540,
	1077,
	226,
	1077,
	226,
	1074,
	82,
	1958,
	540,
	1958,
	540,
	1958,
	540,
	1958,
	540,
	1958,
	540,
	1958,
	540,
	1958,
	540,
	1958,
	540,
	1958,
	540,
	1958,
	540,
	1958,
	540,
	1958,
	540,
	1958,
	540,
	1958,
	540,
	1958,
	540,
	1958,
	540,
	1162,
	806,
	447,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1958,
	704,
	201,
	455,
	446,
	1073,
	447,
	3298,
	447,
	3298,
	1958,
	1958,
	120,
	201,
	3299,
	4338,
	201,
	120,
	3297,
	451,
	707,
	1074,
	1074,
	1074,
	1078,
	704,
	29,
	1958,
	3243,
	28,
	81,
	48,
	133,
	837,
	223,
	537,
	538,
	80,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	2611,
	4285,
	2611,
	2611,
	2611,
	2611,
	2611,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	2377,
	817,
	580,
	1493,
	1493,
	455,
	446,
	120,
	120,
	74,
	706,
	706,
	702,
	1074,
	447,
	447,
	1958,
	1958,
	1958,
	707,
	1074,
	1074,
	1074,
	704,
	73,
	206,
	1077,
	468,
	468,
	698,
	441,
	194,
	702,
	1958,
	1958,
	1073,
	1958,
	1958,
	1958,
	1077,
	1958,
	1077,
	711,
	1074,
	1958,
	1958,
	1958,
	1958,
	711,
	1958,
	1958,
	1077,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1073,
	1073,
	1073,
	1073,
	1073,
	1073,
	1073,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1958,
	704,
	1958,
	1078,
	1078,
	1958,
	1074,
	1073,
	196,
	1073,
	447,
	1074,
	1073,
	1958,
	1958,
	2648,
	578,
	584,
	3415,
	3420,
	3417,
	3418,
	3243,
	5037,
	3243,
	3189,
	3189,
	3189,
	3243,
	3189,
	3189,
	3189,
	5020,
	4412,
	4282,
	3215,
	5037,
	585,
	3243,
	3243,
	3243,
	3243,
	3243,
	2628,
	1493,
	2628,
	1958,
	1958,
	3189,
	1958,
	2648,
	1958,
	3218,
	4830,
	3189,
	3189,
	1958,
	1958,
	3189,
	3243,
	3243,
	3243,
	3189,
	2254,
	1142,
	704,
	1493,
	881,
	1958,
	2628,
	1493,
	1958,
	1958,
	3215,
	3189,
	3243,
	881,
	2628,
	1493,
	1958,
	3243,
	881,
	3189,
	2254,
	1965,
	1084,
	585,
	1497,
	2628,
	2648,
	3171,
	3171,
	3171,
	3189,
	3243,
	3243,
	3243,
	4496,
	4922,
	1142,
	1246,
	3243,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	3215,
	3215,
	5,
	3,
	3243,
	3331,
	4240,
	4203,
	3330,
	3360,
	3359,
	3906,
	3302,
	3243,
	4891,
	4891,
	4403,
	4071,
	3884,
	4112,
	4891,
	4403,
	4535,
	4949,
	4891,
	4403,
	4403,
	4891,
	4891,
	4891,
	3243,
	4076,
	4680,
	4918,
	4918,
	4271,
	4976,
	4922,
	4922,
	4891,
	4922,
	4922,
	4842,
	4403,
	4496,
	4680,
	4976,
	4680,
	3243,
	5037,
	1393,
	3243,
	1928,
	2628,
	1493,
	1493,
	455,
	446,
	120,
	120,
	74,
	706,
	706,
	702,
	1074,
	447,
	447,
	1958,
	1958,
	1958,
	707,
	1074,
	1074,
	1074,
	704,
	73,
	206,
	1077,
	468,
	468,
	698,
	441,
	194,
	702,
	1958,
	1958,
	1073,
	1958,
	1958,
	1958,
	1958,
	1077,
	1077,
	711,
	1074,
	1958,
	1958,
	1958,
	1958,
	711,
	1958,
	1958,
	1077,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1073,
	1073,
	1073,
	1073,
	1073,
	1073,
	1073,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1958,
	704,
	1958,
	1078,
	1078,
	1958,
	1074,
	1073,
	196,
	1073,
	447,
	1074,
	1073,
	1958,
	1958,
	2648,
	3189,
	1491,
	880,
	880,
	3243,
	3243,
	1965,
	1084,
	1497,
	585,
	2648,
	2628,
	3243,
	3171,
	3171,
	3171,
	3189,
	3243,
	3243,
	2628,
	1493,
	1532,
	1965,
	1084,
	1497,
	585,
	881,
	2648,
	2628,
	3243,
	3171,
	3171,
	3171,
	3189,
	3243,
	3243,
	4830,
	2628,
	1493,
	2628,
	2628,
	1965,
	1084,
	1497,
	585,
	881,
	2648,
	2628,
	3243,
	3171,
	3171,
	3171,
	3189,
	2628,
	1493,
	1493,
	455,
	446,
	120,
	120,
	74,
	706,
	706,
	702,
	1074,
	447,
	447,
	1958,
	1958,
	1958,
	707,
	1074,
	1074,
	1074,
	704,
	73,
	206,
	1077,
	468,
	468,
	698,
	441,
	194,
	702,
	1958,
	1958,
	1073,
	1958,
	1958,
	1958,
	1958,
	1077,
	1077,
	711,
	1074,
	1958,
	1958,
	1958,
	1958,
	711,
	1958,
	1958,
	1077,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1958,
	1073,
	1073,
	1073,
	1073,
	1073,
	1073,
	1073,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1958,
	704,
	1958,
	1078,
	1078,
	1958,
	1074,
	1073,
	196,
	1073,
	447,
	1074,
	1073,
	1958,
	1958,
	2648,
	4272,
	4680,
	4404,
	4680,
	4830,
	4680,
	4271,
	4891,
	4403,
	4891,
	4403,
	4403,
	4976,
	4944,
	4403,
	4403,
	4891,
	4403,
	4891,
	4403,
	4482,
	3243,
	3416,
	3510,
	3243,
	2628,
	2628,
	1493,
	3189,
	1958,
	1958,
	3189,
	1958,
	1958,
	2648,
	3218,
	3189,
	1958,
	1958,
	3189,
	4891,
	4403,
	2610,
	893,
	2232,
	1965,
	1950,
	3170,
	3175,
	634,
	873,
	3243,
	3243,
	3170,
	2628,
	2628,
	3345,
	3506,
	3514,
	4059,
	3824,
	3505,
	3507,
	4060,
	4404,
	4069,
	3839,
	4404,
	4404,
	4404,
	4482,
	4825,
	4825,
	3243,
	3215,
	2628,
	4069,
	3514,
	4069,
	3514,
	4976,
	4680,
	4976,
	4680,
	4976,
	4680,
	3243,
	5037,
	3243,
	3243,
	3243,
	2284,
	2254,
	3170,
	3170,
	2283,
	2254,
	1074,
	703,
	3243,
	3243,
	2628,
	2628,
	3243,
	3215,
	3170,
	1955,
	1955,
	3170,
	1955,
	1955,
	1955,
	1955,
	698,
	698,
	685,
	685,
	3243,
	3243,
	3243,
	3243,
	4891,
	4891,
	4891,
	4891,
	4891,
	4891,
	3243,
	2628,
	871,
	1490,
	3189,
	1955,
	3189,
	3189,
	3189,
	3243,
	4403,
	4292,
	4346,
	3189,
	2628,
	1549,
	1550,
	922,
	280,
	1958,
	923,
	1958,
	702,
	447,
	122,
	702,
	202,
	447,
	704,
	42,
	121,
	121,
	75,
	113,
	201,
	201,
	1074,
	1074,
	448,
	448,
	448,
	443,
	702,
	704,
	708,
	704,
	704,
	1074,
	444,
	201,
	704,
	1074,
	198,
	118,
	446,
	1074,
	704,
	689,
	1074,
	1074,
	444,
	1074,
	1074,
	1074,
	1074,
	707,
	1074,
	707,
	452,
	704,
	1074,
	452,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	689,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	1074,
	704,
	704,
	704,
	704,
	704,
	704,
	704,
	704,
	1074,
	447,
	189,
	449,
	704,
	704,
	704,
	204,
	207,
	204,
	207,
	445,
	187,
	200,
	74,
	1958,
	1958,
	1958,
	1958,
	1958,
	4077,
	4077,
	4077,
	4077,
	3846,
	4015,
	3846,
	4680,
	4677,
	4400,
	4891,
	4891,
	4891,
	4891,
	4891,
	4272,
	4272,
	4680,
	4680,
	4680,
	4680,
	3243,
	3215,
	3215,
	5,
	3,
	5020,
	3243,
	49,
	228,
	543,
	1379,
	2628,
	3170,
	3170,
	3170,
	3170,
	3170,
	3170,
	3170,
	3170,
	3170,
	3170,
	1834,
	223,
	27,
	27,
	223,
	300,
	38,
	300,
	38,
	38,
	300,
	38,
	300,
	972,
	1834,
	1379,
	3189,
	3232,
	3232,
	4511,
	4511,
	2254,
	3170,
	3189,
	5037,
	1531,
	1490,
	2610,
	3243,
	2610,
	3215,
	1872,
	972,
	1834,
	3215,
	3189,
	3170,
	3170,
	3170,
	3170,
	3170,
	3170,
	3170,
	3170,
	3170,
	3170,
	3170,
	3170,
	3170,
	3170,
	3170,
	3170,
	3170,
	881,
	138,
	548,
	911,
	881,
	138,
	548,
	911,
	881,
	548,
	911,
	911,
	881,
	138,
	911,
	881,
	138,
	548,
	911,
	873,
	873,
	881,
	138,
	548,
	911,
	2628,
	1493,
	229,
	846,
	1532,
	881,
	138,
	548,
	911,
	2628,
	1493,
	229,
	846,
	1532,
	3243,
	1497,
	1497,
	2628,
	1960,
	3243,
	3243,
	2275,
	3243,
	1084,
	1958,
	1958,
	1084,
	3189,
	3243,
	3189,
	3243,
	147,
	146,
	110,
	183,
	1834,
	300,
	38,
	300,
	300,
	972,
	2374,
	1406,
	1199,
	848,
	517,
	231,
	46,
	30,
	3189,
	3189,
	3189,
	3189,
	3189,
	3189,
	3170,
	4676,
	4263,
	4277,
	4891,
	4891,
	4399,
	4680,
	4262,
	4496,
	3886,
	4525,
	4403,
	4891,
	4891,
	4685,
	4534,
	4534,
	4534,
	4949,
	4949,
	4538,
	4537,
	4536,
	4537,
	4537,
	3842,
	3851,
	3842,
	3850,
	3825,
	3849,
	3545,
	3544,
	3901,
	3546,
	4338,
	4927,
	4825,
	4918,
	4922,
	4825,
	4413,
	4083,
	4413,
	3900,
	4537,
	4406,
	5037,
	3243,
	1958,
	1958,
	1958,
	2254,
	1958,
	1933,
	1055,
	2610,
	5002,
	4969,
	3404,
	2610,
	2610,
	2610,
	2610,
	2610,
	4528,
	2610,
	2610,
	3218,
	2650,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	3243,
	3243,
	3243,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	2610,
	251,
	562,
	563,
	252,
	2628,
	3141,
	1248,
	3243,
	3243,
	215,
	5037,
	3243,
	1052,
	1052,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	1204,
	3243,
	467,
	3243,
	2611,
	3170,
	3170,
	1379,
	3243,
	2610,
	3243,
	2610,
	3243,
	2610,
	3243,
	2610,
	3243,
	2610,
	2610,
	3243,
	3215,
	3243,
	3189,
	3243,
	3189,
	3243,
	2254,
	5037,
	3243,
	2232,
	1074,
	1074,
	1074,
	1074,
	3243,
	3243,
	2610,
	5037,
	3243,
	1958,
	2254,
	2071,
	1948,
	1958,
	1979,
	1980,
	1979,
	2344,
	3243,
	2254,
	5037,
	3243,
	1980,
	1980,
	2254,
	2232,
	2232,
	2232,
	1980,
	1980,
	1980,
	1980,
	3243,
	2345,
	3243,
	2254,
	3243,
	2345,
	2254,
	3243,
	2254,
	2254,
	3243,
	2254,
	3243,
	2254,
	2254,
	2254,
	2254,
	3243,
	2254,
	5037,
	3243,
	1928,
	1928,
	1928,
	1928,
	1928,
	1928,
	3243,
	3243,
	2628,
	5037,
	3243,
	1958,
	555,
	5037,
	3243,
	1978,
	2781,
	3189,
	3189,
	1493,
	5037,
	3243,
	1979,
	1980,
	1958,
	3243,
	2254,
	5037,
	3243,
	1861,
	3243,
	3243,
	972,
};
extern const CustomAttributesCacheGenerator g_Unity_Barracuda_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Barracuda_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Barracuda_CodeGenModule = 
{
	"Unity.Barracuda.dll",
	2045,
	s_methodPointers,
	150,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_Unity_Barracuda_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
