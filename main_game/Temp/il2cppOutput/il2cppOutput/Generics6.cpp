#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0Invoker
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, NULL);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualFuncInvoker6Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualFuncInvoker6Invoker<R, T1*, T2, T3, T4, T5, T6>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[6] = { p1, &p2, &p3, &p4, &p5, &p6 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1*, T2>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { p1, &p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
struct ConstrainedActionInvoker0
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, NULL);
	}
};

// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>
struct BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>
struct BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>
struct BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>
struct BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2;
// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
// System.Collections.Concurrent.ConcurrentDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.WeakReference>
struct ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
// System.Collections.Generic.Dictionary`2<System.Type,Niantic.ARDK.Utilities.BinarySerialization.ISerializationContext>
struct Dictionary_2_t5F6E491FADF1115E93791D1C6C52E78B25B4F1F9;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>
struct Func_2_tED7CA67878EF0FB299872769153413F97964501A;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.WeakReference>
struct Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
// System.Collections.Generic.HashSet`1<System.IO.Stream>
struct HashSet_1_tD8BC5CA8B573CC6655C0BB415428A47597E7369F;
// System.Collections.Generic.ICollection`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
// System.Collections.Generic.IDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IDictionary_2_t4D3B65115D85F2C21975A2BBF4A23860F8BCD02F;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
// System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
// System.Collections.Generic.IEqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
// System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.InheritedData>
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.LayoutData>
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.RareData>
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransformData>
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransitionData>
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.VisualData>
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
// System.Net.WebCompletionSource`1/Result<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.WeakReference>
struct Tables_t23D8723A0B15AF0C6775673620CD7BD9B8DEC250;
// System.Threading.Tasks.TaskCompletionSource`1<System.Net.WebCompletionSource`1/Result<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7;
// System.Threading.Tasks.TaskFactory`1<System.Net.WebCompletionSource`1/Result<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct TaskFactory_1_t38FA2E08CB3E397D4EAEB78FF83BFC2FF0087800;
// System.Threading.Tasks.TaskFactory`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
// System.Threading.Tasks.Task`1<System.Net.WebCompletionSource`1/Result<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC;
// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
// UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct VisualElementScheduledItem_1_tC55C6DAB31FBA21565DAE09DE6BA236327F029E2;
// System.WeakReference`1<System.Object>
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE;
// System.Net.WebCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F;
// System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B;
// System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
// Niantic.ARDK.Utilities._CatchUpEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct _CatchUpEvent_1_t10BF2584CC8090989A3F7DD46BE7D94B85266158;
// Niantic.ARDK.Utilities.Collections._EmptyReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _EmptyReadOnlyDictionary_2_t7FBA07D6D12A075C0C20D873B953B848D567CCB4;
// Niantic.ARDK.Utilities._HttpResponse`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _HttpResponse_1_tECE131F8B4293502DE098B728F8400115434EA12;
// Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_MessageExecutor`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _MessageExecutor_1_tC7474D705BAF7EF3045B62D2EB6787634E6C3201;
// Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct _NativeAwarenessBufferBase_1_t5F9B8B2F803F88838D489073C779F5EC5FA8D6DA;
// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E;
// Niantic.ARDK.Utilities._ReferenceComparer`1<System.Object>
struct _ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70;
// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct _SerializableAwarenessBufferBase_1_t63EDAAF31E6326B36A5620DFF516B852219B6BBD;
// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct _SerializableAwarenessBufferSerializer_2_t1E345FF334A704DD681DC23C9CF9D55AAAF9E7FE;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _UntypedToTypedSerializerAdapter_1_t5B4C0A213FB66623C6636ADC4D8E475AAB7DC3A8;
// Niantic.ARDK.Utilities._WeakValueDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>
struct _WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985;
// System.Collections.Generic.Dictionary`2/Entry<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.WeakReference>[]
struct KeyValuePair_2U5BU5D_t561336637237B99DBE3AB4B3BDED50BBF33E40FD;
// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
// UnityEngine.UIElements.ComputedTransitionProperty[]
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType[]
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer
struct BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1;
// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer
struct BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer
struct IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualElementPanelActivator
struct VisualElementPanelActivator_t1CCD740B7D2995A4097A8FCF6ADCDD6B6A51B7DB;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// Niantic.ARDK.AR.Awareness._AwarenessBufferBase
struct _AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248;
// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeDeserializationContext
struct _TypeDeserializationContext_tC96C9598090EBDD64977D7368D25182A219E53DE;
// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeSerializationContext
struct _TypeSerializationContext_t4B72B95994C3FEFA286B8E05E75B1A23D4E42208;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem
struct BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A;
// UnityEngine.UIElements.VisualElement/CustomStyleAccess
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NARConversions_t70C904C597A40D0B4BD6ABF306DDEB794A4BF531_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _CallbackQueue_t1AFC6B79AF6F8618B2C0612CF5B9E6F02241DF9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0;
IL2CPP_EXTERN_C String_t* _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralC7BB1C7F529F538D622487DC7F7AA1CA62A05832;
IL2CPP_EXTERN_C String_t* _stringLiteralDE44EB699A6FE620517DE44E517245D1D8921D9D;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FCFFBDAA0A72D4231F0C282807C5BD36AA1FEB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m928A22636E0D699B231262DDD2024A324E11CEEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m1087938B5BF5024D90155CFF6D55575E1B7DD768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m035E2DBAE55076B4FB2B85C54F7B3C0429B0132A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_GetObjectData_m6F2E12AF126FAE536995F52F9501498BDA5917A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1__ctor_m2289DC7F3597E1BA77555086A86F91807FDC96E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _ReadOnlyDictionary_2_ThrowNotSupportedException_m949DB4F63CB19FAECA1E01A71609C1234A963FEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _ReadOnlyDictionary_2__ctor_m8863FD79FD2EB03D758FA92151FD447516E5A46B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_ContainsKey_m59AD6978E2FD95C845364626D9567D79207D33E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_GetOrAdd_mADE5C4477156A27EBF0A0F4DEE6C11B867B4443E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_Remove_mF68DA860A0FECC63284D09F87C28859E7DF35B7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryAdd_m793F43A2B6F29773930F7DF665B495EED6BD5D50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryGetValue_m882740A6D9AC0983F533D9FA1EE13468DCCB2D92_RuntimeMethod_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>
struct U3CU3Ec_t5959B0FFFDA32DB774C7E565E847DB8BCFE77EEE  : public RuntimeObject
{
};

struct U3CU3Ec_t5959B0FFFDA32DB774C7E565E847DB8BCFE77EEE_StaticFields
{
	// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<TKey,TValue> Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c::<>9
	U3CU3Ec_t5959B0FFFDA32DB774C7E565E847DB8BCFE77EEE* ___U3CU3E9_0;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>
struct BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>
struct BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>
struct BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Object>
struct BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>
struct BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2  : public RuntimeObject
{
};

// System.Collections.Concurrent.ConcurrentDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.WeakReference>
struct ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t23D8723A0B15AF0C6775673620CD7BD9B8DEC250* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t561336637237B99DBE3AB4B3BDED50BBF33E40FD* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct List_1_tD9E984339D94BF7164294F57B9E975AF314BF857  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD9E984339D94BF7164294F57B9E975AF314BF857_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Net.WebCompletionSource`1/Result<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 : public RuntimeObject {};

// System.Threading.Tasks.TaskCompletionSource`1<System.Net.WebCompletionSource`1/Result<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC* ____task_0;
};

// System.Net.WebCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.Net.WebCompletionSource`1/Result<T>> System.Net.WebCompletionSource`1::completion
	TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* ___completion_0;
	// System.Net.WebCompletionSource`1/Result<T> System.Net.WebCompletionSource`1::currentResult
	Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* ___currentResult_1;
};

// Niantic.ARDK.Utilities._CatchUpEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct _CatchUpEvent_1_t10BF2584CC8090989A3F7DD46BE7D94B85266158  : public RuntimeObject
{
	// System.Object Niantic.ARDK.Utilities._CatchUpEvent`1::_lock
	RuntimeObject* ____lock_0;
	// System.Collections.Generic.List`1<T> Niantic.ARDK.Utilities._CatchUpEvent`1::_values
	List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ____values_1;
	// Niantic.ARDK.Utilities.ArdkEventHandler`1<T> Niantic.ARDK.Utilities._CatchUpEvent`1::_handler
	ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A* ____handler_2;
	// System.Boolean Niantic.ARDK.Utilities._CatchUpEvent`1::_isDisposed
	bool ____isDisposed_3;
};

// Niantic.ARDK.Utilities.Collections._EmptyReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _EmptyReadOnlyDictionary_2_t7FBA07D6D12A075C0C20D873B953B848D567CCB4  : public RuntimeObject
{
};

struct _EmptyReadOnlyDictionary_2_t7FBA07D6D12A075C0C20D873B953B848D567CCB4_StaticFields
{
	// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<TKey,TValue> Niantic.ARDK.Utilities.Collections._EmptyReadOnlyDictionary`2::Instance
	_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* ___Instance_0;
};

// Niantic.ARDK.Utilities._HttpResponse`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _HttpResponse_1_tECE131F8B4293502DE098B728F8400115434EA12 : public RuntimeObject {};

// Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_MessageExecutor`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _MessageExecutor_1_tC7474D705BAF7EF3045B62D2EB6787634E6C3201  : public RuntimeObject
{
	// System.Action`1<T> Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_MessageExecutor`1::_action
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ____action_0;
};

// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<TKey,TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2::_source
	RuntimeObject* ____source_0;
	// System.Object Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// Niantic.ARDK.Utilities._ReferenceComparer`1<System.Object>
struct _ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70  : public RuntimeObject
{
};

struct _ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70_StaticFields
{
	// Niantic.ARDK.Utilities._ReferenceComparer`1<T> Niantic.ARDK.Utilities._ReferenceComparer`1::Instance
	_ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70* ___Instance_0;
};

// Niantic.ARDK.Utilities._WeakValueDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>
struct _WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_innerDictionary
	ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* ____innerDictionary_1;
};

struct _WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985_StaticFields
{
	// System.Func`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_createWeakReference
	Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5* ____createWeakReference_0;
};
struct Il2CppArrayBounds;

// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer
struct BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,Niantic.ARDK.Utilities.BinarySerialization.ISerializationContext> Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_contexts
	Dictionary_2_t5F6E491FADF1115E93791D1C6C52E78B25B4F1F9* ____contexts_2;
	// System.IO.Stream Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::<Stream>k__BackingField
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U3CStreamU3Ek__BackingField_4;
};

struct BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7_StaticFields
{
	// System.Object Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_runningStreamsLock
	RuntimeObject* ____runningStreamsLock_0;
	// System.Collections.Generic.HashSet`1<System.IO.Stream> Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_runningStreams
	HashSet_1_tD8BC5CA8B573CC6655C0BB415428A47597E7369F* ____runningStreams_1;
};

// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry_0;
};

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t* ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject* ___m_stackTrace_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.UIElements.ScheduledItem
struct ScheduledItem_t423152D61DCAD8E5EC98FB4DEFC04FB023EDADE0  : public RuntimeObject
{
	// System.Func`1<System.Boolean> UnityEngine.UIElements.ScheduledItem::timerUpdateStopCondition
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___timerUpdateStopCondition_0;
	// System.Int64 UnityEngine.UIElements.ScheduledItem::<startMs>k__BackingField
	int64_t ___U3CstartMsU3Ek__BackingField_3;
	// System.Int64 UnityEngine.UIElements.ScheduledItem::<delayMs>k__BackingField
	int64_t ___U3CdelayMsU3Ek__BackingField_4;
	// System.Int64 UnityEngine.UIElements.ScheduledItem::<intervalMs>k__BackingField
	int64_t ___U3CintervalMsU3Ek__BackingField_5;
	// System.Int64 UnityEngine.UIElements.ScheduledItem::<endTimeMs>k__BackingField
	int64_t ___U3CendTimeMsU3Ek__BackingField_6;
};

struct ScheduledItem_t423152D61DCAD8E5EC98FB4DEFC04FB023EDADE0_StaticFields
{
	// System.Func`1<System.Boolean> UnityEngine.UIElements.ScheduledItem::OnceCondition
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___OnceCondition_1;
	// System.Func`1<System.Boolean> UnityEngine.UIElements.ScheduledItem::ForeverCondition
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___ForeverCondition_2;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Niantic.ARDK.AR.Awareness._AwarenessBufferBase
struct _AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248  : public RuntimeObject
{
	// System.Boolean Niantic.ARDK.AR.Awareness._AwarenessBufferBase::<IsKeyframe>k__BackingField
	bool ___U3CIsKeyframeU3Ek__BackingField_0;
	// System.UInt32 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::<Width>k__BackingField
	uint32_t ___U3CWidthU3Ek__BackingField_1;
	// System.UInt32 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::<Height>k__BackingField
	uint32_t ___U3CHeightU3Ek__BackingField_2;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.WebCompletionSource`1/Result<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct ConfiguredTaskAwaiter_t1B79F058B7765DEB6DAEE97B8760E819CAED47BA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.WeakReference>
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_tE2890FA82AC448148B0285D44B4C56D447512C17;

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;

// Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
};

// System.Threading.Tasks.Task`1<System.Net.WebCompletionSource`1/Result<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* ___m_result_22;
};

struct Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t38FA2E08CB3E397D4EAEB78FF83BFC2FF0087800* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};

struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D* ___s_defaultFactory_23;
};

// System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6 : public RuntimeObject {};

// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};

// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174 : public RuntimeObject {};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C : public RuntimeObject {};

// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct _SerializableAwarenessBufferSerializer_2_t1E345FF334A704DD681DC23C9CF9D55AAAF9E7FE  : public BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _UntypedToTypedSerializerAdapter_1_t5B4C0A213FB66623C6636ADC4D8E475AAB7DC3A8  : public BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;
};

struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30_StaticFields
{
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.BMPAlloc::Invalid
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___Invalid_0;
};

// Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer
struct BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1  : public BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7
{
	// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeDeserializationContext Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer::_context
	_TypeDeserializationContext_tC96C9598090EBDD64977D7368D25182A219E53DE* ____context_5;
};

// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer
struct BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4  : public BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7
{
	// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeSerializationContext Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer::_context
	_TypeSerializationContext_t4B72B95994C3FEFA286B8E05E75B1A23D4E42208* ____context_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BooleanSerializer
struct BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA  : public BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB
{
};

struct BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_StaticFields
{
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BooleanSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BooleanSerializer::Instance
	BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA* ___Instance_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CameraIntrinsicsSerializer
struct CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5  : public BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8
{
};

struct CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_StaticFields
{
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CameraIntrinsicsSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CameraIntrinsicsSerializer::Instance
	CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5* ___Instance_1;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CompressedUInt32Serializer
struct CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539  : public BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30
{
};

struct CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_StaticFields
{
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CompressedUInt32Serializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CompressedUInt32Serializer::Instance
	CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* ___Instance_1;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_3;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_4;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_5;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.Matrix4x4Serializer
struct Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77  : public BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3
{
};

struct Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_StaticFields
{
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.Matrix4x4Serializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.Matrix4x4Serializer::Instance
	Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77* ___Instance_1;
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem
struct BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A  : public ScheduledItem_t423152D61DCAD8E5EC98FB4DEFC04FB023EDADE0
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::<element>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CelementU3Ek__BackingField_7;
	// System.Boolean UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::isScheduled
	bool ___isScheduled_8;
	// UnityEngine.UIElements.VisualElementPanelActivator UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::m_Activator
	VisualElementPanelActivator_t1CCD740B7D2995A4097A8FCF6ADCDD6B6A51B7DB* ___m_Activator_9;
};

// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};

// Niantic.ARDK.Utilities._CatchUpEvent`1/<>c__DisplayClass7_0<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct U3CU3Ec__DisplayClass7_0_t54092C099322E403EEA169680EA627951F2EBA66 : public RuntimeObject {};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___s_defaultResultTask_0;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
typedef Il2CppFullySharedGenericStruct Enumerator_t81B429DC3FEA3983A4D1E6E07804925CB576CD3B;

// System.Nullable`1<UnityEngine.Matrix4x4>
struct Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value_1;
};

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
typedef Il2CppFullySharedGenericStruct Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339;

// UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct VisualElementScheduledItem_1_tC55C6DAB31FBA21565DAE09DE6BA236327F029E2 : public BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A {};

// System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0 : public RuntimeObject {};

// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};

// Niantic.ARDK.AR.Camera.CameraIntrinsics
struct CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 
{
	// UnityEngine.Vector2 Niantic.ARDK.AR.Camera.CameraIntrinsics::<FocalLength>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CFocalLengthU3Ek__BackingField_0;
	// UnityEngine.Vector2 Niantic.ARDK.AR.Camera.CameraIntrinsics::<PrincipalPoint>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CPrincipalPointU3Ek__BackingField_1;
	// UnityEngine.Vector4 Niantic.ARDK.AR.Camera.CameraIntrinsics::_vector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____vector_2;
};

// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData> UnityEngine.UIElements.ComputedStyle::inheritedData
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData> UnityEngine.UIElements.ComputedStyle::layoutData
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData> UnityEngine.UIElements.ComputedStyle::rareData
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData> UnityEngine.UIElements.ComputedStyle::transformData
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData> UnityEngine.UIElements.ComputedStyle::transitionData
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData> UnityEngine.UIElements.ComputedStyle::visualData
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.ComputedStyle::yogaNode
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue> UnityEngine.UIElements.ComputedStyle::customProperties
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	// System.Int64 UnityEngine.UIElements.ComputedStyle::matchingRulesHash
	int64_t ___matchingRulesHash_8;
	// System.Single UnityEngine.UIElements.ComputedStyle::dpiScaling
	float ___dpiScaling_9;
	// UnityEngine.UIElements.ComputedTransitionProperty[] UnityEngine.UIElements.ComputedStyle::computedTransitions
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localFlipsWinding
	bool ___localFlipsWinding_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::worldFlipsWinding
	bool ___worldFlipsWinding_16;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_17;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenStencilRef
	int32_t ___childrenStencilRef_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenMaskDepth
	int32_t ___childrenMaskDepth_19;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_20;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_21;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_25;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_26;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::textCoreSettingsID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderLeftColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderTopColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderRightColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderBottomColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::tintColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_37;
	// UnityEngine.Color UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textures
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Net.WebCompletionSource`1/<WaitForCompletion>d__15<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CWaitForCompletionU3Ed__15_t1E7A90912CE0FB4BBFDADC017893E65373B96937 
{
	// System.Int32 System.Net.WebCompletionSource`1/<WaitForCompletion>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<T> System.Net.WebCompletionSource`1/<WaitForCompletion>d__15::<>t__builder
	AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 ___U3CU3Et__builder_1;
	// System.Net.WebCompletionSource`1<T> System.Net.WebCompletionSource`1/<WaitForCompletion>d__15::<>4__this
	WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.WebCompletionSource`1/Result<T>> System.Net.WebCompletionSource`1/<WaitForCompletion>d__15::<>u__1
	ConfiguredTaskAwaiter_t1B79F058B7765DEB6DAEE97B8760E819CAED47BA ___U3CU3Eu__1_3;
};

// System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>
struct Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___value_1;
};

// System.WeakReference`1<System.Object>
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE  : public RuntimeObject
{
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;
};

// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct _SerializableAwarenessBufferBase_1_t63EDAAF31E6326B36A5620DFF516B852219B6BBD  : public _AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248
{
	// UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_viewMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____viewMatrix_3;
	// System.Boolean Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_disposed
	bool ____disposed_4;
	// System.Int64 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_consumedUnmanagedMemory
	int64_t ____consumedUnmanagedMemory_5;
	// Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_intrinsics
	CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ____intrinsics_6;
	// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::<Data>k__BackingField
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___U3CDataU3Ek__BackingField_7;
	// System.Boolean Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::<IsRotatedToScreenOrientation>k__BackingField
	bool ___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField_6;
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField_7;
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_12;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag_14;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_15;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_16;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_17;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout_18;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastPseudoPadding
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding_19;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData_20;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache_25;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip_26;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup_27;
	// System.Boolean UnityEngine.UIElements.VisualElement::m_WorldClipIsInfinite
	bool ___m_WorldClipIsInfinite_28;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_30;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_31;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_32;
	// System.Int32 UnityEngine.UIElements.VisualElement::<containedPointerIds>k__BackingField
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField_33;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_34;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___U3CyogaNodeU3Ek__BackingField_35;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style_36;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext_37;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_38;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_39;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_40;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_41;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField_42;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElement::k_GenerateVisualContentMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker_43;
	// UnityEngine.UIElements.VisualElement/RenderTargetMode UnityEngine.UIElements.VisualElement::m_SubRenderTargetMode
	int32_t ___m_SubRenderTargetMode_44;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::m_defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial_46;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations_47;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField_49;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isRootVisualContainer>k__BackingField
	bool ___U3CisRootVisualContainerU3Ek__BackingField_50;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_51;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent_52;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent_53;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children_55;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField_56;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualElement::m_VisualTreeAssetSource
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource_57;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess_59;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList_60;
	// UnityEngine.UIElements.VisualElement/TypeData UnityEngine.UIElements.VisualElement::m_TypeData
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData_64;
};

struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList_9;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey_10;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_11;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect_29;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::s_runtimeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial_45;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList_54;
	// UnityEngine.UIElements.VisualElement/CustomStyleAccess UnityEngine.UIElements.VisualElement::s_CustomStyleAccess
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess_58;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath_61;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey_62;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData_63;
};

// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle_1;
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>
struct Func_2_tED7CA67878EF0FB299872769153413F97964501A  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.WeakReference>
struct Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};

// Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct _NativeAwarenessBufferBase_1_t5F9B8B2F803F88838D489073C779F5EC5FA8D6DA  : public _AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248
{
	// System.Single Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_worldScale
	float ____worldScale_3;
	// System.IntPtr Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_nativeHandle
	intptr_t ____nativeHandle_4;
	// System.Int64 Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_consumedUnmanagedMemory
	int64_t ____consumedUnmanagedMemory_5;
	// System.Nullable`1<UnityEngine.Matrix4x4> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_cacheViewMatrix
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ____cacheViewMatrix_6;
	// System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_cachedIntrinsics
	Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE ____cachedIntrinsics_7;
	// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_data
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ____data_8;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// System.Boolean System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
// T System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1_get_Value_mA083C4D9192050DC38513BDD9D364C5C68A3A675_gshared (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_m487466598C3DD007BBE1D09C12A79CD98F0F3833_gshared (BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item1, const RuntimeMethod* method) ;
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Deserialize_m05AC17098139ECB25D9B561BA21F8D2A93F11B0E_gshared (BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

// System.Void UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::.ctor(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementScheduledItem__ctor_mB5C5818F39CDC5846487311B47B3A5BEEA840E68 (BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___handler0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075 (RuntimeObject* ___value0, int32_t ___type1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::set_Target(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_set_Target_m1DB05E14910747D2A74ACEB4C48028C4AEBFCF3D (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.OperationCanceledException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationCanceledException__ctor_m2F34C3B8AEE2AA6C7EB2BB77AE5E0289101293E4 (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mD989ED7E69753F2E0A2076B60ACA8819F14DA93E (Exception_t* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities._CallbackQueue::QueueCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CallbackQueue_QueueCallback_m45A782DD2E236DF8612D19A6042FEA4EEC5AC424 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.AR.Awareness._AwarenessBufferBase::.ctor(System.UInt32,System.UInt32,System.Boolean,Niantic.ARDK.AR.Camera.CameraIntrinsics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AwarenessBufferBase__ctor_mEF38D9FA8B2D5A2A20DBD55BF0CF8E78197E9611 (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, uint32_t ___width0, uint32_t ___height1, bool ___isKeyframe2, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___intrinsics3, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities._NativeAccess::AssertNativeAccessValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAccess_AssertNativeAccessValid_m35F99E565DEBC380164BB41B29077DE683A240C4 (const RuntimeMethod* method) ;
// System.Void System.GC::AddMemoryPressure(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_AddMemoryPressure_m61B0F87573A1749E21EA112E6E51C2B4A6875426 (int64_t ___bytesAllocated0, const RuntimeMethod* method) ;
// System.UInt32 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_Width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) ;
// System.UInt32 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_Height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_op_Multiply_m2041E25F0453B831D95C32E924B88125ACFE9255 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___vector1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Matrix4x4>::get_HasValue()
inline bool Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_inline (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, method);
}
// UnityEngine.Matrix4x4 Niantic.ARDK.AR._Convert::InternalToMatrix4x4(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 _Convert_InternalToMatrix4x4_m0DAEFF154080840D2EF7DD148DE8E46974EF7929 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___internalArray0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 Niantic.ARDK.Utilities.NARConversions::FromNARToUnity(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 NARConversions_FromNARToUnity_m9399F45428E68C056D7D669A29CA6E0CD23FF97B (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.AR._Convert::ApplyScale(UnityEngine.Matrix4x4&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Convert_ApplyScale_m245AD6E0E2B7BB6388A6D71E5C528B32539AC1A8 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___matrix0, float ___scale1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Matrix4x4>::.ctor(T)
inline void Nullable_1__ctor_m4FCFFBDAA0A72D4231F0C282807C5BD36AA1FEB6 (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct)&___value0, method);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Matrix4x4>::GetValueOrDefault()
inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_inline (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* __this, const RuntimeMethod* method)
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::get_HasValue()
inline bool Nullable_1_get_HasValue_m1087938B5BF5024D90155CFF6D55575E1B7DD768_inline (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, method);
}
// System.Void Niantic.ARDK.AR.Camera.CameraIntrinsics::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraIntrinsics__ctor_mA21D7CEC1828B149AE598D23CB66B240AD82B23A (CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4* __this, float ___fx0, float ___fy1, float ___px2, float ___py3, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::.ctor(T)
inline void Nullable_1__ctor_m928A22636E0D699B231262DDD2024A324E11CEEB (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE* __this, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct)&___value0, method);
}
// T System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::get_Value()
inline CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 Nullable_1_get_Value_m035E2DBAE55076B4FB2B85C54F7B3C0429B0132A (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE* __this, const RuntimeMethod* method)
{
	CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_get_Value_mA083C4D9192050DC38513BDD9D364C5C68A3A675_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Matrix4x4 Niantic.ARDK.Utilities.NARConversions::FromUnityToNAR(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 NARConversions_FromUnityToNAR_m5CEF2752D0A9F663D96DC2C206DD9563036E9F75 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix0, const RuntimeMethod* method) ;
// System.Single[] Niantic.ARDK.AR._Convert::Matrix4x4ToInternalArray(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* _Convert_Matrix4x4ToInternalArray_m09AB7C8F17F1D45C76BE81F942957102939A98D8 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix4x40, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.GC::RemoveMemoryPressure(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_RemoveMemoryPressure_mA82416C080E436CBD6C61340DE24B773B8CBDC73 (int64_t ___bytesAllocated0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_mA7461E70E172F97FDCA69F23C727E6966D1B32F9 (Type_t* ___t0, const RuntimeMethod* method) ;
// System.Object System.Threading.Interlocked::CompareExchange(System.Object&,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interlocked_CompareExchange_mE9CAF0B3E78E95BA138B5623615D3C0242581977 (RuntimeObject** ___location10, RuntimeObject* ___value1, RuntimeObject* ___comparand2, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_GetHashCode_m975C4EAA6DBD6F7D9150E631673D27D1A50F7881 (RuntimeObject* ___o0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, uint32_t ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseItemSerializer_1_Serialize_m487466598C3DD007BBE1D09C12A79CD98F0F3833_gshared)((BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*)__this, ___serializer0, (Il2CppFullySharedGenericAny)&___item1, method);
}
// System.Boolean Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_IsKeyframe()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool _AwarenessBufferBase_get_IsKeyframe_m9C08BCEC5A2BD3706280C368F1BBAE2B78F37C64_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35 (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, bool ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseItemSerializer_1_Serialize_m487466598C3DD007BBE1D09C12A79CD98F0F3833_gshared)((BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*)__this, ___serializer0, (Il2CppFullySharedGenericAny)&___item1, method);
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917 (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseItemSerializer_1_Serialize_m487466598C3DD007BBE1D09C12A79CD98F0F3833_gshared)((BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*)__this, ___serializer0, (Il2CppFullySharedGenericAny)&___item1, method);
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103 (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseItemSerializer_1_Serialize_m487466598C3DD007BBE1D09C12A79CD98F0F3833_gshared)((BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*)__this, ___serializer0, (Il2CppFullySharedGenericAny)&___item1, method);
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline uint32_t BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10 (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method)
{
	uint32_t il2cppRetVal;
	((  void (*) (BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_m05AC17098139ECB25D9B561BA21F8D2A93F11B0E_gshared)((BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*)__this, ___deserializer0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline bool BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80 (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method)
{
	bool il2cppRetVal;
	((  void (*) (BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_m05AC17098139ECB25D9B561BA21F8D2A93F11B0E_gshared)((BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*)__this, ___deserializer0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method)
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 il2cppRetVal;
	((  void (*) (BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_m05AC17098139ECB25D9B561BA21F8D2A93F11B0E_gshared)((BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*)__this, ___deserializer0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683 (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method)
{
	CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 il2cppRetVal;
	((  void (*) (BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_m05AC17098139ECB25D9B561BA21F8D2A93F11B0E_gshared)((BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*)__this, ___deserializer0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Niantic.ARDK.Utilities._GcObserver::add__GcHappened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GcObserver_add__GcHappened_m1E45285880D2D2BDF3B0E564F1CB0BC0BFECCA8F (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities._GcObserver::remove__GcHappened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GcObserver_remove__GcHappened_m0B11460CB91FB27BB44578B3F9FFD731BA627746 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(UnityEngine.UIElements.VisualElement,ActionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementScheduledItem_1__ctor_m2D2983F18BB4C00D47151DC5F5AAF5C6F55124AA_gshared (/*UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/VisualElementScheduledItem_1_tC55C6DAB31FBA21565DAE09DE6BA236327F029E2* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___handler0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___upEvent1, const RuntimeMethod* method) 
{
	// sizeof(ActionType)
	const uint32_t SizeOf_ActionType_tEF1C91A72186B11FE7B43AAE1C149BA05063A289 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
	// ActionType
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_ActionType_tEF1C91A72186B11FE7B43AAE1C149BA05063A289);
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___handler0;
		BaseVisualElementScheduledItem__ctor_mB5C5818F39CDC5846487311B47B3A5BEEA840E68((BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A*)__this, L_0, NULL);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 0)) ? ___upEvent1 : &___upEvent1), SizeOf_ActionType_tEF1C91A72186B11FE7B43AAE1C149BA05063A289);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),0), L_1, SizeOf_ActionType_tEF1C91A72186B11FE7B43AAE1C149BA05063A289);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.WeakReference`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m932665C8861A22B177DC1ACF1EDAA87E1624B5AC_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___target0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___target0;
		InvokerActionInvoker2< RuntimeObject*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), __this, L_0, (bool)0);
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m99141AB321E022D9933448CDD7139BC9FAA443E8_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___target0, bool ___trackResurrection1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		bool L_0 = ___trackResurrection1;
		__this->___trackResurrection_1 = L_0;
		bool L_1 = ___trackResurrection1;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (int32_t)G_B3_0;
		RuntimeObject* L_2 = ___target0;
		int32_t L_3 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075(L_2, L_3, NULL);
		__this->___handle_0 = L_4;
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m2289DC7F3597E1BA77555086A86F91807FDC96E2_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WeakReference_1__ctor_m2289DC7F3597E1BA77555086A86F91807FDC96E2_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___info0;
		NullCheck(L_2);
		bool L_3;
		L_3 = SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5(L_2, _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, NULL);
		__this->___trackResurrection_1 = L_3;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___info0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_5, NULL);
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_4, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, L_6, NULL);
		V_0 = L_7;
		bool L_8 = (bool)__this->___trackResurrection_1;
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 1;
	}

IL_0047:
	{
		V_1 = (int32_t)G_B5_0;
		RuntimeObject* L_9 = V_0;
		int32_t L_10 = V_1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_11;
		L_11 = GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075(L_9, L_10, NULL);
		__this->___handle_0 = L_11;
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_GetObjectData_m6F2E12AF126FAE536995F52F9501498BDA5917A7_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WeakReference_1_GetObjectData_m6F2E12AF126FAE536995F52F9501498BDA5917A7_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___info0;
		bool L_3 = (bool)__this->___trackResurrection_1;
		NullCheck(L_2);
		SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D(L_2, _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, L_3, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_4 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle_0);
		bool L_5;
		L_5 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_4, NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___info0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_7 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle_0);
		RuntimeObject* L_8;
		L_8 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5(L_7, NULL);
		NullCheck(L_6);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_6, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, L_8, NULL);
		return;
	}

IL_0043:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		NullCheck(L_9);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_9, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, NULL, NULL);
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::SetTarget(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_SetTarget_mCEAE8D9CF9551015CE46420AB8614A8D1F14C329_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___target0, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle_0);
		RuntimeObject* L_1 = ___target0;
		GCHandle_set_Target_m1DB05E14910747D2A74ACEB4C48028C4AEBFCF3D(L_0, L_1, NULL);
		return;
	}
}
// System.Boolean System.WeakReference`1<System.Object>::TryGetTarget(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_m4982797589731AB705E9C79FA4531331F40410AB_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject** ___target0, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle_0);
		bool L_1;
		L_1 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_0, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject** L_2 = ___target0;
		il2cpp_codegen_initobj(L_2, sizeof(RuntimeObject*));
		return (bool)0;
	}

IL_0016:
	{
		RuntimeObject** L_3 = ___target0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_4 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle_0);
		RuntimeObject* L_5;
		L_5 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5(L_4, NULL);
		*(RuntimeObject**)L_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		RuntimeObject** L_6 = ___target0;
		RuntimeObject* L_7 = (*(RuntimeObject**)L_6);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void System.WeakReference`1<System.Object>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_Finalize_m22CABA82C1F2B17A77E275483306A0DADECAF151_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				NullCheck((RuntimeObject*)__this);
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle_0);
			GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.WebCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCompletionSource_1__ctor_m13CEDC0A86393FB85F2E66EA67014C70C41083EE_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, bool ___runAsync0, const RuntimeMethod* method) 
{
	WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* G_B2_0 = NULL;
	WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* G_B3_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		bool L_0 = ___runAsync0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000d:
	{
		G_B3_0 = ((int32_t)64);
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* L_1 = (TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_1);
		InvokerActionInvoker1< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), L_1, (int32_t)G_B3_0);
		NullCheck(G_B3_1);
		G_B3_1->___completion_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___completion_0), (void*)L_1);
		return;
	}
}
// System.Net.WebCompletionSource`1/Result<T> System.Net.WebCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_CurrentResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* WebCompletionSource_1_get_CurrentResult_mC1D6F5E4169EAEC90D7E02EEC2DD3FF7087EC035_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, const RuntimeMethod* method) 
{
	{
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_0 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*)__this->___currentResult_1;
		return L_0;
	}
}
// System.Threading.Tasks.Task System.Net.WebCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebCompletionSource_1_get_Task_mABFED18FF1EB8709C0110FA07D888A52F950367D_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, const RuntimeMethod* method) 
{
	{
		TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* L_0 = (TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7*)__this->___completion_0;
		NullCheck(L_0);
		Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC* L_1;
		L_1 = InvokerFuncInvoker0< Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_0);
		return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_1;
	}
}
// System.Boolean System.Net.WebCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TrySetCompleted(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCompletionSource_1_TrySetCompleted_m3E4132773ACAE17F3953CB76254F5C922FFB31B7_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___argument0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t2650EB3BE331C2443ADED45E3A4082412DD876E9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t2650EB3BE331C2443ADED45E3A4082412DD876E9);
	Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 6)) ? ___argument0 : &___argument0), SizeOf_T_t2650EB3BE331C2443ADED45E3A4082412DD876E9);
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_1 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 6)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93** L_2 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93**)(&__this->___currentResult_1);
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_3 = V_0;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_4;
		L_4 = InterlockedCompareExchangeImpl<Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*>(L_2, L_3, (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*)NULL);
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* L_5 = (TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7*)__this->___completion_0;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = InvokerFuncInvoker1< bool, Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_5, L_6);
		return L_7;
	}
}
// System.Boolean System.Net.WebCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TrySetCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCompletionSource_1_TrySetCompleted_m3569793D667717DAE788FBC010D43FFCF5CC0597_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, const RuntimeMethod* method) 
{
	Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* V_0 = NULL;
	{
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_0 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_0);
		InvokerActionInvoker2< int32_t, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_0, (int32_t)1, (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		V_0 = L_0;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93** L_1 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93**)(&__this->___currentResult_1);
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_2 = V_0;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_3;
		L_3 = InterlockedCompareExchangeImpl<Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*>(L_1, L_2, (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*)NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* L_4 = (TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7*)__this->___completion_0;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = InvokerFuncInvoker1< bool, Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_4, L_5);
		return L_6;
	}
}
// System.Boolean System.Net.WebCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TrySetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCompletionSource_1_TrySetCanceled_m9E2CFCAC2261552ADC05BF4708D2F70A2DB7B280_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)il2cpp_codegen_object_new(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OperationCanceledException__ctor_m2F34C3B8AEE2AA6C7EB2BB77AE5E0289101293E4(L_0, NULL);
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, L_0);
		return L_1;
	}
}
// System.Boolean System.Net.WebCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TrySetCanceled(System.OperationCanceledException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCompletionSource_1_TrySetCanceled_m6069824D799921F76E03A0EED077F2E8B7090826_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___error0, const RuntimeMethod* method) 
{
	Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* V_0 = NULL;
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = ___error0;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mD989ED7E69753F2E0A2076B60ACA8819F14DA93E((Exception_t*)L_0, NULL);
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_2 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		InvokerActionInvoker2< int32_t, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_2, (int32_t)2, L_1);
		V_0 = L_2;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93** L_3 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93**)(&__this->___currentResult_1);
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_4 = V_0;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_5;
		L_5 = InterlockedCompareExchangeImpl<Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*>(L_3, L_4, (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*)NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* L_6 = (TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7*)__this->___completion_0;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_6, L_7);
		return L_8;
	}
}
// System.Boolean System.Net.WebCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCompletionSource_1_TrySetException_m0A5AB73E23E85CAD2080073F1380B6AA4B208BCB_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* V_0 = NULL;
	{
		Exception_t* L_0 = ___error0;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mD989ED7E69753F2E0A2076B60ACA8819F14DA93E(L_0, NULL);
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_2 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		InvokerActionInvoker2< int32_t, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_2, (int32_t)3, L_1);
		V_0 = L_2;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93** L_3 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93**)(&__this->___currentResult_1);
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_4 = V_0;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_5;
		L_5 = InterlockedCompareExchangeImpl<Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*>(L_3, L_4, (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*)NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* L_6 = (TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7*)__this->___completion_0;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_6, L_7);
		return L_8;
	}
}
// System.Void System.Net.WebCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ThrowOnError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCompletionSource_1_ThrowOnError_m7C2B39BD3A1FE60DD5EA8D0B181EAD73DC000470_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, const RuntimeMethod* method) 
{
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* L_0 = (TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7*)__this->___completion_0;
		NullCheck(L_0);
		Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC* L_1;
		L_1 = InvokerFuncInvoker0< Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_0);
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_1);
		bool L_2;
		L_2 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_1, NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* L_3 = (TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7*)__this->___completion_0;
		NullCheck(L_3);
		Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC* L_4;
		L_4 = InvokerFuncInvoker0< Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_3);
		NullCheck(L_4);
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_5;
		L_5 = InvokerFuncInvoker0< Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_4);
		NullCheck(L_5);
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_6;
		L_6 = InvokerFuncInvoker0< ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_5);
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_002d;
		}
	}
	{
		return;
	}

IL_002d:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<T> System.Net.WebCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::WaitForCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* WebCompletionSource_1_WaitForCompletion_m0A0641169CC3E816311B3D9AAD800FC38CE823FA_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, const RuntimeMethod* method) 
{
	U3CWaitForCompletionU3Ed__15_t1E7A90912CE0FB4BBFDADC017893E65373B96937 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 L_0;
		L_0 = InvokerFuncInvoker0< AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* L_1 = (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)(&(&V_0)->___U3CU3Et__builder_1);
		InvokerActionInvoker1< U3CWaitForCompletionU3Ed__15_t1E7A90912CE0FB4BBFDADC017893E65373B96937* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_1, (&V_0));
		AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* L_2 = (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3;
		L_3 = InvokerFuncInvoker0< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), L_2);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mD8BDE04F9897AAED299EE4DC32BF3879F2CBB668_gshared (/*System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___source0;
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereArrayIterator_1_Clone_m1D80001794E47D2DF00A77273FD71D61987E8A44_gshared (/*System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* L_2 = (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_2, L_0, L_1);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m42FC055181A1CDD12BBB46A9EE9ED76C6048BA07_gshared (/*System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
	// TSource
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	const Il2CppFullySharedGenericAny L_9 = L_4;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	memset(V_0, 0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),1));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		NullCheck(L_6);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 7)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, V_0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),2), L_9, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mB2C59E78355E518D359A6D5035BCD6254337B84E_gshared (/*System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate0, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___predicate0;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = InvokerFuncInvoker2< Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), NULL, L_1, L_2);
		WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* L_4 = (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_4);
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_4, L_0, L_3);
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2DD2BB86C5517EDD8C051BBF8CE38C43D712A8D6_gshared (/*System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, RuntimeObject* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		RuntimeObject* L_0 = ___source0;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereEnumerableIterator_1_Clone_m0317D203B88386A9A479C72FA9D62763FD0A91D3_gshared (/*System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_2 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_2, L_0, L_1);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m2583FECFDC8EDFE66C959C7C386F99E287C5763E_gshared (/*System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), (RuntimeObject*)NULL);
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m1A18D4050C069B6C4310DAB9857281E37DCB2C69_gshared (/*System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// TSource
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	const Il2CppFullySharedGenericAny L_10 = L_6;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	memset(V_1, 0, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),1), 2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		NullCheck(L_5);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),2), L_10, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mC623267514B4299E409A01161DBBDA5362CEDFC2_gshared (/*System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___predicate0;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = InvokerFuncInvoker2< Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), NULL, L_1, L_2);
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_4 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_4);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_4, L_0, L_3);
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mC075454926AF320E4679335A1B81D3F56ACEFC0C_gshared (/*System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___source0;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereListIterator_1_Clone_mAA3ED56493E5FF2F49FE37EB7CDF6C0A957698B5_gshared (/*System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* L_2 = (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		InvokerActionInvoker2< List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_2, L_0, L_1);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mB5E4EB089AD8CF7156B8972C7FB61739C466ED5E_gshared (/*System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
	// sizeof(System.Collections.Generic.List`1/Enumerator<TSource>)
	const uint32_t SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
	// TSource
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	const Il2CppFullySharedGenericAny L_9 = L_5;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	// System.Collections.Generic.List`1/Enumerator<TSource>
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	memset(V_1, 0, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_4, SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),1), 2);
		goto IL_004e;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		NullCheck(L_6);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 10)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),2), L_9, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		return (bool)1;
	}

IL_004e:
	{
		bool L_10;
		L_10 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2)))));
		if (L_10)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mC767815DE2249E70B38D6D172A0C61B028D7A44B_gshared (/*System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate0, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___predicate0;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = InvokerFuncInvoker2< Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), NULL, L_1, L_2);
		WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* L_4 = (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_4);
		InvokerActionInvoker2< List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_4, L_0, L_3);
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mB15DB27A8DC3B4E00BCA6E8F63F00F7E374F76A4_gshared (/*System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___selector2, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___source0;
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___selector2;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectArrayIterator_2_Clone_mFBF81AE0E2B6F7A7A79FC98398E7A6AC0FD330E9_gshared (/*System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* L_3 = (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		InvokerActionInvoker3< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3, L_0, L_1, L_2);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mEF7E8E7B117D6D1147C53CAE838836974171392C_gshared (/*System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// TSource
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	const Il2CppFullySharedGenericAny L_8 = L_4;
	const Il2CppFullySharedGenericAny L_11 = L_4;
	// TResult
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	memset(V_0, 0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 8)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 8)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mD81DB59B1D07BC8DDB099A652B22BA9C1538D7A3_gshared (/*System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), L_1, (RuntimeObject*)__this, L_0);
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m9A4AF54DC527FA1CEF8B803C8DDA5E632838B06F_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, RuntimeObject* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___selector2, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		RuntimeObject* L_0 = ___source0;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___selector2;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectEnumerableIterator_2_Clone_mD773B8B24D1459B11BA4462A6DD68865514ADC9E_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* L_3 = (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		InvokerActionInvoker3< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3, L_0, L_1, L_2);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m640FAC111BC786414B40480BB03E4F84B2FFB179_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), (RuntimeObject*)NULL);
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mB384EFAF6366166F28EDFDBA272EEC1089E1A115_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 15));
	// TSource
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	const Il2CppFullySharedGenericAny L_9 = L_6;
	const Il2CppFullySharedGenericAny L_12 = L_6;
	// TResult
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	memset(V_1, 0, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		NullCheck(L_5);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_8 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		NullCheck(L_8);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 12)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_11 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_12, V_1, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		NullCheck(L_11);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 12)) ? L_12: *(void**)L_12), (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),2), L_13, SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mB8ACBBFA48460E67B18647EF16E6EE4D0BE08679_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		NullCheck(L_1);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), L_1, (RuntimeObject*)__this, L_0);
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___selector2, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___source0;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___selector2;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		InvokerActionInvoker3< List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3, L_0, L_1, L_2);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// sizeof(System.Collections.Generic.List`1/Enumerator<TSource>)
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
	// TSource
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	// TResult
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	// System.Collections.Generic.List`1/Enumerator<TSource>
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3)))));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_1, (RuntimeObject*)__this, L_0);
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Niantic.ARDK.Utilities._CatchUpEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CatchUpEvent_1_Dispose_m84789AE49262D133B7E7FE18E1ED7A4A93E35341_gshared (_CatchUpEvent_1_t10BF2584CC8090989A3F7DD46BE7D94B85266158* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (_lock)
		RuntimeObject* L_0 = (RuntimeObject*)__this->____lock_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002a;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_002a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// _handler = null;
			__this->____handler_2 = (ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____handler_2), (void*)(ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A*)NULL);
			// _isDisposed = true;
			__this->____isDisposed_3 = (bool)1;
			// }
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._CatchUpEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Register(Niantic.ARDK.Utilities.ArdkEventHandler`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CatchUpEvent_1_Register_m9EFD09D738AA312A886A7C7BDBCF2A80945412C7_gshared (_CatchUpEvent_1_t10BF2584CC8090989A3F7DD46BE7D94B85266158* __this, ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A* ___handler0, const RuntimeMethod* method) 
{
	// sizeof(System.Collections.Generic.List`1/Enumerator<T>)
	const uint32_t SizeOf_Enumerator_tF66A51A4F8EA5050A3C2DD7372A33755A1ED2EC5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
	// sizeof(T)
	const uint32_t SizeOf_T_t4FCED123D308C1B64F7DB61535483E9DA2F75114 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
	void* L_13 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	// T
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_t4FCED123D308C1B64F7DB61535483E9DA2F75114);
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_T_t4FCED123D308C1B64F7DB61535483E9DA2F75114);
	// System.Collections.Generic.List`1/Enumerator<T>
	const Enumerator_t81B429DC3FEA3983A4D1E6E07804925CB576CD3B L_12 = alloca(SizeOf_Enumerator_tF66A51A4F8EA5050A3C2DD7372A33755A1ED2EC5);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* V_2 = NULL;
	Enumerator_t81B429DC3FEA3983A4D1E6E07804925CB576CD3B V_3 = alloca(SizeOf_Enumerator_tF66A51A4F8EA5050A3C2DD7372A33755A1ED2EC5);
	memset(V_3, 0, SizeOf_Enumerator_tF66A51A4F8EA5050A3C2DD7372A33755A1ED2EC5);
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_T_t4FCED123D308C1B64F7DB61535483E9DA2F75114);
	memset(V_4, 0, SizeOf_T_t4FCED123D308C1B64F7DB61535483E9DA2F75114);
	{
		// if (handler == null)
		ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A* L_0 = ___handler0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// lock (_lock)
		RuntimeObject* L_1 = (RuntimeObject*)__this->____lock_0;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0075:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_007e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_007e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_1), NULL);
				// if (_isDisposed)
				bool L_5 = (bool)__this->____isDisposed_3;
				if (!L_5)
				{
					goto IL_001f_1;
				}
			}
			{
				// return;
				goto IL_007f;
			}

IL_001f_1:
			{
				// _handler += handler;
				ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A* L_6 = (ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A*)__this->____handler_2;
				ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A* L_7 = ___handler0;
				Delegate_t* L_8;
				L_8 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C((Delegate_t*)L_6, (Delegate_t*)L_7, NULL);
				__this->____handler_2 = ((ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
				Il2CppCodeGenWriteBarrier((void**)(&__this->____handler_2), (void*)((ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
				// var values = _values;
				List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_9 = (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*)__this->____values_1;
				V_2 = L_9;
				// if (values != null)
				List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_10 = V_2;
				if (!L_10)
				{
					goto IL_0073_1;
				}
			}
			{
				// foreach (var value in values)
				List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_11 = V_2;
				NullCheck(L_11);
				InvokerActionInvoker1< Enumerator_t81B429DC3FEA3983A4D1E6E07804925CB576CD3B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_11, (Enumerator_t81B429DC3FEA3983A4D1E6E07804925CB576CD3B*)L_12);
				il2cpp_codegen_memcpy(V_3, L_12, SizeOf_Enumerator_tF66A51A4F8EA5050A3C2DD7372A33755A1ED2EC5);
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0065_1:
					{// begin finally (depth: 2)
						ConstrainedActionInvoker0::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_13, (void*)(Enumerator_t81B429DC3FEA3983A4D1E6E07804925CB576CD3B*)V_3);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_005a_2;
					}

IL_0049_2:
					{
						// foreach (var value in values)
						InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), (Enumerator_t81B429DC3FEA3983A4D1E6E07804925CB576CD3B*)V_3, (Il2CppFullySharedGenericStruct*)L_14);
						il2cpp_codegen_memcpy(V_4, L_14, SizeOf_T_t4FCED123D308C1B64F7DB61535483E9DA2F75114);
						// handler(value);
						ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A* L_15 = ___handler0;
						il2cpp_codegen_memcpy(L_16, V_4, SizeOf_T_t4FCED123D308C1B64F7DB61535483E9DA2F75114);
						NullCheck(L_15);
						InvokerActionInvoker1< Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_15, L_16);
					}

IL_005a_2:
					{
						// foreach (var value in values)
						bool L_17;
						L_17 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (Enumerator_t81B429DC3FEA3983A4D1E6E07804925CB576CD3B*)V_3);
						if (L_17)
						{
							goto IL_0049_2;
						}
					}
					{
						goto IL_007f;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0073_1:
			{
				// }
				goto IL_007f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._CatchUpEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Unregister(Niantic.ARDK.Utilities.ArdkEventHandler`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CatchUpEvent_1_Unregister_m940A07755D78E785B1417F09A135FEEADA97FBDF_gshared (_CatchUpEvent_1_t10BF2584CC8090989A3F7DD46BE7D94B85266158* __this, ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A* ___handler0, const RuntimeMethod* method) 
{
	{
		// _handler -= handler;
		ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A* L_0 = (ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A*)__this->____handler_2;
		ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A* L_1 = ___handler0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116((Delegate_t*)L_0, (Delegate_t*)L_1, NULL);
		__this->____handler_2 = ((ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handler_2), (void*)((ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._CatchUpEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::InvokeUsingCallbackQueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CatchUpEvent_1_InvokeUsingCallbackQueue_m5C534B4D95B98DFD7031FEF0C4ABD28183D4969E_gshared (_CatchUpEvent_1_t10BF2584CC8090989A3F7DD46BE7D94B85266158* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_CallbackQueue_t1AFC6B79AF6F8618B2C0612CF5B9E6F02241DF9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t4FCED123D308C1B64F7DB61535483E9DA2F75114 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
	// T
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t4FCED123D308C1B64F7DB61535483E9DA2F75114);
	const Il2CppFullySharedGenericStruct L_13 = L_3;
	U3CU3Ec__DisplayClass7_0_t54092C099322E403EEA169680EA627951F2EBA66* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		U3CU3Ec__DisplayClass7_0_t54092C099322E403EEA169680EA627951F2EBA66* L_0 = (U3CU3Ec__DisplayClass7_0_t54092C099322E403EEA169680EA627951F2EBA66*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_0);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_t54092C099322E403EEA169680EA627951F2EBA66* L_1 = V_0;
		NullCheck(L_1);
		il2cpp_codegen_write_instance_field_data<_CatchUpEvent_1_t10BF2584CC8090989A3F7DD46BE7D94B85266158*>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 10),0), __this);
		U3CU3Ec__DisplayClass7_0_t54092C099322E403EEA169680EA627951F2EBA66* L_2 = V_0;
		il2cpp_codegen_memcpy(L_3, ___value0, SizeOf_T_t4FCED123D308C1B64F7DB61535483E9DA2F75114);
		NullCheck(L_2);
		il2cpp_codegen_write_instance_field_data(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 10),2), L_3, SizeOf_T_t4FCED123D308C1B64F7DB61535483E9DA2F75114);
		// lock (_lock)
		RuntimeObject* L_4 = (RuntimeObject*)__this->____lock_0;
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{// begin finally (depth: 1)
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_006a;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_6, NULL);
				}

IL_006a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_7 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_7, (&V_2), NULL);
				// if (_isDisposed)
				bool L_8 = (bool)__this->____isDisposed_3;
				if (!L_8)
				{
					goto IL_002f_1;
				}
			}
			{
				// return;
				goto IL_007c;
			}

IL_002f_1:
			{
				// if (_values == null)
				List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_9 = (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*)__this->____values_1;
				if (L_9)
				{
					goto IL_0042_1;
				}
			}
			{
				// _values = new List<T>();
				List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_10 = (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
				NullCheck(L_10);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_10);
				__this->____values_1 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____values_1), (void*)L_10);
			}

IL_0042_1:
			{
				// _values.Add(value);
				List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_11 = (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*)__this->____values_1;
				U3CU3Ec__DisplayClass7_0_t54092C099322E403EEA169680EA627951F2EBA66* L_12 = V_0;
				il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 10),2)), SizeOf_T_t4FCED123D308C1B64F7DB61535483E9DA2F75114);
				NullCheck(L_11);
				InvokerActionInvoker1< Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_11, L_13);
				// handler = _handler;
				U3CU3Ec__DisplayClass7_0_t54092C099322E403EEA169680EA627951F2EBA66* L_14 = V_0;
				ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A* L_15 = (ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A*)__this->____handler_2;
				NullCheck(L_14);
				il2cpp_codegen_write_instance_field_data<ArdkEventHandler_1_tF39BFBBB00D0F5DBB49F0E7FC594CB4CE9B8FA1A*>(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 10),1), L_15);
				// }
				goto IL_006b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		// _CallbackQueue.QueueCallback
		// (
		//   () =>
		//   {
		//     if (_isDisposed)
		//       return;
		// 
		//     if (handler != null)
		//       handler(value);
		//   }
		// );
		U3CU3Ec__DisplayClass7_0_t54092C099322E403EEA169680EA627951F2EBA66* L_16 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_17, (RuntimeObject*)L_16, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 14)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_CallbackQueue_t1AFC6B79AF6F8618B2C0612CF5B9E6F02241DF9F_il2cpp_TypeInfo_var);
		_CallbackQueue_QueueCallback_m45A782DD2E236DF8612D19A6042FEA4EEC5AC424(L_17, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._CatchUpEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CatchUpEvent_1__ctor_mB928A8041079E6B090617B237CE81C387AABCC33_gshared (_CatchUpEvent_1_t10BF2584CC8090989A3F7DD46BE7D94B85266158* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly object _lock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->____lock_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lock_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Niantic.ARDK.Utilities.Collections._EmptyReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EmptyReadOnlyDictionary_2__ctor_m4230C019326DEED935E6898EBBA87BF91624C326_gshared (_EmptyReadOnlyDictionary_2_t7FBA07D6D12A075C0C20D873B953B848D567CCB4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._EmptyReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EmptyReadOnlyDictionary_2__cctor_m78948C5C728261EDA0590E514D875384DD881883_gshared (const RuntimeMethod* method) 
{
	{
		// public static readonly _ReadOnlyDictionary<TKey, TValue> Instance =
		//   new _ReadOnlyDictionary<TKey, TValue>(new Dictionary<TKey, TValue>());
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_0);
		_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* L_1 = (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		NullCheck(L_1);
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_1, (RuntimeObject*)L_0);
		((_EmptyReadOnlyDictionary_2_t7FBA07D6D12A075C0C20D873B953B848D567CCB4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6)))->___Instance_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_EmptyReadOnlyDictionary_2_t7FBA07D6D12A075C0C20D873B953B848D567CCB4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6)))->___Instance_0), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Niantic.ARDK.VPSCoverage.ResponseStatus Niantic.ARDK.Utilities._HttpResponse`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _HttpResponse_1_get_Status_m752F6BFB0BC86ED64736328628C2024DFD38EB61_gshared (/*Niantic.ARDK.Utilities._HttpResponse`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_HttpResponse_1_tECE131F8B4293502DE098B728F8400115434EA12* __this, const RuntimeMethod* method) 
{
	{
		// public ResponseStatus Status { get; set; }
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0));
		return L_0;
	}
}
// System.Void Niantic.ARDK.Utilities._HttpResponse`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Status(Niantic.ARDK.VPSCoverage.ResponseStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _HttpResponse_1_set_Status_m46EB9A68884A46647F76AB0A435227CEF6CB0661_gshared (/*Niantic.ARDK.Utilities._HttpResponse`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_HttpResponse_1_tECE131F8B4293502DE098B728F8400115434EA12* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public ResponseStatus Status { get; set; }
		int32_t L_0 = ___value0;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0), L_0);
		return;
	}
}
// TResponse Niantic.ARDK.Utilities._HttpResponse`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _HttpResponse_1_get_Data_m20DD39614759DE13967DACAA4E085A13048F28F0_gshared (/*Niantic.ARDK.Utilities._HttpResponse`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_HttpResponse_1_tECE131F8B4293502DE098B728F8400115434EA12* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TResponse)
	const uint32_t SizeOf_TResponse_t094BDFB3E332F570A7DAA51BEAFA8602EFB6030B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	// TResponse
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResponse_t094BDFB3E332F570A7DAA51BEAFA8602EFB6030B);
	{
		// public TResponse Data { get; }
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1)), SizeOf_TResponse_t094BDFB3E332F570A7DAA51BEAFA8602EFB6030B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResponse_t094BDFB3E332F570A7DAA51BEAFA8602EFB6030B);
		return;
	}
}
// System.Int64 Niantic.ARDK.Utilities._HttpResponse`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_HttpStatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _HttpResponse_1_get_HttpStatusCode_m3525DF50F4CFABAA8969BBFB2499585729D3267A_gshared (/*Niantic.ARDK.Utilities._HttpResponse`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_HttpResponse_1_tECE131F8B4293502DE098B728F8400115434EA12* __this, const RuntimeMethod* method) 
{
	{
		// public long HttpStatusCode { get; }
		int64_t L_0 = *(int64_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),2));
		return L_0;
	}
}
// System.Void Niantic.ARDK.Utilities._HttpResponse`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Niantic.ARDK.VPSCoverage.ResponseStatus,TResponse,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _HttpResponse_1__ctor_m644BAFDF5142AAA91B2532FC4E2254B8B25E34C3_gshared (/*Niantic.ARDK.Utilities._HttpResponse`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_HttpResponse_1_tECE131F8B4293502DE098B728F8400115434EA12* __this, int32_t ___status0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___data1, int64_t ___httpStatusCode2, const RuntimeMethod* method) 
{
	// sizeof(TResponse)
	const uint32_t SizeOf_TResponse_t094BDFB3E332F570A7DAA51BEAFA8602EFB6030B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	// TResponse
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TResponse_t094BDFB3E332F570A7DAA51BEAFA8602EFB6030B);
	{
		// public _HttpResponse(ResponseStatus status, TResponse data, long httpStatusCode)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// Status = status;
		int32_t L_0 = ___status0;
		InvokerActionInvoker1< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), __this, L_0);
		// Data = data;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 1)) ? ___data1 : &___data1), SizeOf_TResponse_t094BDFB3E332F570A7DAA51BEAFA8602EFB6030B);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1), L_1, SizeOf_TResponse_t094BDFB3E332F570A7DAA51BEAFA8602EFB6030B);
		// HttpStatusCode = httpStatusCode;
		int64_t L_2 = ___httpStatusCode2;
		il2cpp_codegen_write_instance_field_data<int64_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),2), L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_MessageExecutor`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _MessageExecutor_1__ctor_mF2604AAF74AF322D39D8E0390F1C8A4AF2D068D5_gshared (_MessageExecutor_1_tC7474D705BAF7EF3045B62D2EB6787634E6C3201* __this, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___action0, const RuntimeMethod* method) 
{
	{
		// internal _MessageExecutor(Action<T> action)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// _action = action;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_0 = ___action0;
		__this->____action_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____action_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_MessageExecutor`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Execute(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _MessageExecutor_1_Execute_m24A7942A5087BD46077BE8BC9B7F26E976844D79_gshared (_MessageExecutor_1_tC7474D705BAF7EF3045B62D2EB6787634E6C3201* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t638D8DD7A03A970741C87D1AACAF06DFA206CABA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t638D8DD7A03A970741C87D1AACAF06DFA206CABA);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t638D8DD7A03A970741C87D1AACAF06DFA206CABA);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t638D8DD7A03A970741C87D1AACAF06DFA206CABA);
	memset(V_0, 0, SizeOf_T_t638D8DD7A03A970741C87D1AACAF06DFA206CABA);
	{
		// T typedMessage = (T)message;
		RuntimeObject* L_0 = ___message0;
		void* L_2 = UnBox_Any(L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_1);
		il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_2))), SizeOf_T_t638D8DD7A03A970741C87D1AACAF06DFA206CABA);
		// _action(typedMessage);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_3 = (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this->____action_0;
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_T_t638D8DD7A03A970741C87D1AACAF06DFA206CABA);
		NullCheck(L_3);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 2)) ? L_4: *(void**)L_4));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(System.IntPtr,System.Single,System.UInt32,System.UInt32,System.Boolean,Niantic.ARDK.AR.Camera.CameraIntrinsics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAwarenessBufferBase_1__ctor_mC4D1402A75D4B5BF7233CFA9CD44046374ED6EAB_gshared (_NativeAwarenessBufferBase_1_t5F9B8B2F803F88838D489073C779F5EC5FA8D6DA* __this, intptr_t ___handle0, float ___worldScale1, uint32_t ___width2, uint32_t ___height3, bool ___isKeyframe4, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___intrinsics5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(width, height, isKeyframe, intrinsics)
		uint32_t L_0 = ___width2;
		uint32_t L_1 = ___height3;
		bool L_2 = ___isKeyframe4;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_3 = ___intrinsics5;
		_AwarenessBufferBase__ctor_mEF38D9FA8B2D5A2A20DBD55BF0CF8E78197E9611((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, L_0, L_1, L_2, L_3, NULL);
		// _NativeAccess.AssertNativeAccessValid();
		_NativeAccess_AssertNativeAccessValid_m35F99E565DEBC380164BB41B29077DE683A240C4(NULL);
		// _worldScale = worldScale;
		float L_4 = ___worldScale1;
		__this->____worldScale_3 = L_4;
		// _nativeHandle = handle;
		intptr_t L_5 = ___handle0;
		__this->____nativeHandle_4 = L_5;
		// _consumedUnmanagedMemory = _CalculateConsumedMemory();
		int64_t L_6;
		L_6 = InvokerFuncInvoker0< int64_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), __this);
		__this->____consumedUnmanagedMemory_5 = L_6;
		// GC.AddMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_7 = (int64_t)__this->____consumedUnmanagedMemory_5;
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_AddMemoryPressure_m61B0F87573A1749E21EA112E6E51C2B4A6875426(L_7, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAwarenessBufferBase_1_Finalize_m89EC0C6173F0566588144FF2B8762ED32E298F86_gshared (_NativeAwarenessBufferBase_1_t5F9B8B2F803F88838D489073C779F5EC5FA8D6DA* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{// begin finally (depth: 1)
				// }
				NullCheck((RuntimeObject*)__this);
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Dispose();
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), __this);
			goto IL_000f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		// }
		return;
	}
}
// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _NativeAwarenessBufferBase_1_get_Data_m00E6F25ACA24FC084E1306A8CB752C13187EB1C2_gshared (_NativeAwarenessBufferBase_1_t5F9B8B2F803F88838D489073C779F5EC5FA8D6DA* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!_data.IsCreated)
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->____data_8);
		bool L_1;
		L_1 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_0);
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		// UInt32 size = Width * Height;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_2;
		L_2 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_3;
		L_3 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3));
		// _data =
		//   NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<T>
		//   (
		//     _GetDataAddress().ToPointer(),
		//     (int)size,
		//     Allocator.None
		//   );
		intptr_t L_4;
		L_4 = VirtualFuncInvoker0Invoker< intptr_t >::Invoke(19 /* System.IntPtr Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::_GetDataAddress() */, __this);
		V_1 = L_4;
		void* L_5;
		L_5 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_1), NULL);
		uint32_t L_6 = V_0;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_7;
		L_7 = InvokerFuncInvoker3< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, void*, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), NULL, L_5, (int32_t)L_6, (int32_t)1);
		__this->____data_8 = L_7;
	}

IL_0036:
	{
		// return _data;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_8 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18)__this->____data_8;
		return L_8;
	}
}
// T Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Sample(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAwarenessBufferBase_1_Sample_mE04602000F5FB8CF1140F682D00DF9260ACB1458_gshared (_NativeAwarenessBufferBase_1_t5F9B8B2F803F88838D489073C779F5EC5FA8D6DA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t0E1E926D04C02A04E3EF16309133E1CCE3D44EC0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericStruct L_18 = alloca(SizeOf_T_t0E1E926D04C02A04E3EF16309133E1CCE3D44EC0);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var w = (int)Width;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_0 = (int32_t)L_0;
		// var h = (int)Height;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_1 = (int32_t)L_1;
		// var x = Mathf.Clamp(Mathf.RoundToInt(uv.x * w - 0.5f), 0, w - 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___uv0;
		float L_3 = (float)L_2.___x_0;
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_3, ((float)L_4))), (0.5f))), NULL);
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_5, 0, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), NULL);
		V_2 = L_7;
		// var y = Mathf.Clamp(Mathf.RoundToInt(uv.y * h - 0.5f), 0, h - 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___uv0;
		float L_9 = (float)L_8.___y_1;
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, ((float)L_10))), (0.5f))), NULL);
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), NULL);
		V_3 = L_13;
		// return Data[x + w * y];
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_14;
		L_14 = InvokerFuncInvoker0< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), __this);
		V_4 = L_14;
		int32_t L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = V_3;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (&V_4), ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)il2cpp_codegen_multiply(L_16, L_17)))), (Il2CppFullySharedGenericStruct*)L_18);
		il2cpp_codegen_memcpy(il2cppRetVal, L_18, SizeOf_T_t0E1E926D04C02A04E3EF16309133E1CCE3D44EC0);
		return;
	}
}
// T Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Sample(UnityEngine.Vector2,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAwarenessBufferBase_1_Sample_mA1F509725F5B2E6AFDB502CED9661579481EF984_gshared (_NativeAwarenessBufferBase_1_t5F9B8B2F803F88838D489073C779F5EC5FA8D6DA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform1, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t0E1E926D04C02A04E3EF16309133E1CCE3D44EC0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericStruct L_30 = alloca(SizeOf_T_t0E1E926D04C02A04E3EF16309133E1CCE3D44EC0);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// var w = (int)Width;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_0 = (int32_t)L_0;
		// var h = (int)Height;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_1 = (int32_t)L_1;
		// var st = transform * new Vector4(uv.x, uv.y, 1.0f, 1.0f);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___transform1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___uv0;
		float L_4 = (float)L_3.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___uv0;
		float L_6 = (float)L_5.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_7), L_4, L_6, (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = Matrix4x4_op_Multiply_m2041E25F0453B831D95C32E924B88125ACFE9255(L_2, L_7, NULL);
		V_2 = L_8;
		// var sx = st.x / st.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_2;
		float L_10 = (float)L_9.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = V_2;
		float L_12 = (float)L_11.___z_3;
		// var sy = st.y / st.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_2;
		float L_14 = (float)L_13.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = V_2;
		float L_16 = (float)L_15.___z_3;
		V_3 = ((float)(L_14/L_16));
		// var x = Mathf.Clamp(Mathf.RoundToInt(sx * w - 0.5f), 0, w - 1);
		int32_t L_17 = V_0;
		int32_t L_18;
		L_18 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)(L_10/L_12)), ((float)L_17))), (0.5f))), NULL);
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_18, 0, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), NULL);
		V_4 = L_20;
		// var y = Mathf.Clamp(Mathf.RoundToInt(sy * h - 0.5f), 0, h - 1);
		float L_21 = V_3;
		int32_t L_22 = V_1;
		int32_t L_23;
		L_23 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_21, ((float)L_22))), (0.5f))), NULL);
		int32_t L_24 = V_1;
		int32_t L_25;
		L_25 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_23, 0, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), NULL);
		V_5 = L_25;
		// return Data[x + w * y];
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_26;
		L_26 = InvokerFuncInvoker0< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), __this);
		V_6 = L_26;
		int32_t L_27 = V_4;
		int32_t L_28 = V_0;
		int32_t L_29 = V_5;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (&V_6), ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)il2cpp_codegen_multiply(L_28, L_29)))), (Il2CppFullySharedGenericStruct*)L_30);
		il2cpp_codegen_memcpy(il2cppRetVal, L_30, SizeOf_T_t0E1E926D04C02A04E3EF16309133E1CCE3D44EC0);
		return;
	}
}
// UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_ViewMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 _NativeAwarenessBufferBase_1_get_ViewMatrix_mFD2F19F2BA79A26D386C3DE26A636D208370C62E_gshared (_NativeAwarenessBufferBase_1_t5F9B8B2F803F88838D489073C779F5EC5FA8D6DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NARConversions_t70C904C597A40D0B4BD6ABF306DDEB794A4BF531_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FCFFBDAA0A72D4231F0C282807C5BD36AA1FEB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (_cacheViewMatrix == null)
		Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* L_0 = (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA*)(&__this->____cacheViewMatrix_6);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_inline(L_0, Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// var nativeMatrix = new float[16];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_2;
		// _GetViewMatrix(nativeMatrix);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		VirtualActionInvoker1Invoker< SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(17 /* System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::_GetViewMatrix(System.Single[]) */, __this, L_3);
		// var viewMatrix = NARConversions.FromNARToUnity
		//   (_Convert.InternalToMatrix4x4(nativeMatrix));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = _Convert_InternalToMatrix4x4_m0DAEFF154080840D2EF7DD148DE8E46974EF7929(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(NARConversions_t70C904C597A40D0B4BD6ABF306DDEB794A4BF531_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
		L_6 = NARConversions_FromNARToUnity_m9399F45428E68C056D7D669A29CA6E0CD23FF97B(L_5, NULL);
		V_1 = L_6;
		// _Convert.ApplyScale(ref viewMatrix, _worldScale);
		float L_7 = (float)__this->____worldScale_3;
		_Convert_ApplyScale_m245AD6E0E2B7BB6388A6D71E5C528B32539AC1A8((&V_1), L_7, NULL);
		// _cacheViewMatrix = viewMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = V_1;
		Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m4FCFFBDAA0A72D4231F0C282807C5BD36AA1FEB6((&L_9), L_8, /*hidden argument*/Nullable_1__ctor_m4FCFFBDAA0A72D4231F0C282807C5BD36AA1FEB6_RuntimeMethod_var);
		__this->____cacheViewMatrix_6 = L_9;
	}

IL_0041:
	{
		// return _cacheViewMatrix ?? Matrix4x4.identity;
		Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA L_10 = (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA)__this->____cacheViewMatrix_6;
		V_2 = L_10;
		bool L_11;
		L_11 = Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_inline((&V_2), Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0057;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12;
		L_12 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
		return L_12;
	}

IL_0057:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13;
		L_13 = Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_inline((&V_2), Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_RuntimeMethod_var);
		return L_13;
	}
}
// Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_Intrinsics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 _NativeAwarenessBufferBase_1_get_Intrinsics_m6DB8B2FD302188A74EB6876FF7FA8AD295EA4892_gshared (_NativeAwarenessBufferBase_1_t5F9B8B2F803F88838D489073C779F5EC5FA8D6DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m928A22636E0D699B231262DDD2024A324E11CEEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m1087938B5BF5024D90155CFF6D55575E1B7DD768_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m035E2DBAE55076B4FB2B85C54F7B3C0429B0132A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// if (!_cachedIntrinsics.HasValue)
		Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE* L_0 = (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE*)(&__this->____cachedIntrinsics_7);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m1087938B5BF5024D90155CFF6D55575E1B7DD768_inline(L_0, Nullable_1_get_HasValue_m1087938B5BF5024D90155CFF6D55575E1B7DD768_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		// var nativeVector = new float[4];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_2;
		// _GetIntrinsics(nativeVector);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		VirtualActionInvoker1Invoker< SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(18 /* System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::_GetIntrinsics(System.Single[]) */, __this, L_3);
		// _cachedIntrinsics =
		//   new CameraIntrinsics
		//   (
		//     nativeVector[0],
		//     nativeVector[1],
		//     nativeVector[2],
		//     nativeVector[3]
		//   );
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		float L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		float L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 2;
		float L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = 3;
		float L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_16;
		memset((&L_16), 0, sizeof(L_16));
		CameraIntrinsics__ctor_mA21D7CEC1828B149AE598D23CB66B240AD82B23A((&L_16), L_6, L_9, L_12, L_15, /*hidden argument*/NULL);
		Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE L_17;
		memset((&L_17), 0, sizeof(L_17));
		Nullable_1__ctor_m928A22636E0D699B231262DDD2024A324E11CEEB((&L_17), L_16, /*hidden argument*/Nullable_1__ctor_m928A22636E0D699B231262DDD2024A324E11CEEB_RuntimeMethod_var);
		__this->____cachedIntrinsics_7 = L_17;
	}

IL_0037:
	{
		// return _cachedIntrinsics.Value;
		Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE* L_18 = (Nullable_1_t4509CF178AD95B4C71873BF0AE5DFC101E1835BE*)(&__this->____cachedIntrinsics_7);
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_19;
		L_19 = Nullable_1_get_Value_m035E2DBAE55076B4FB2B85C54F7B3C0429B0132A(L_18, Nullable_1_get_Value_m035E2DBAE55076B4FB2B85C54F7B3C0429B0132A_RuntimeMethod_var);
		return L_19;
	}
}
// System.Single[] Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::_UnityMatrixToNarArray(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* _NativeAwarenessBufferBase_1__UnityMatrixToNarArray_m64851477FA1BEC52CFC8DC5283B4F7E930B918F1_gshared (_NativeAwarenessBufferBase_1_t5F9B8B2F803F88838D489073C779F5EC5FA8D6DA* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NARConversions_t70C904C597A40D0B4BD6ABF306DDEB794A4BF531_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _Convert.Matrix4x4ToInternalArray(NARConversions.FromUnityToNAR(matrix));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___matrix0;
		il2cpp_codegen_runtime_class_init_inline(NARConversions_t70C904C597A40D0B4BD6ABF306DDEB794A4BF531_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = NARConversions_FromUnityToNAR_m5CEF2752D0A9F663D96DC2C206DD9563036E9F75(L_0, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = _Convert_Matrix4x4ToInternalArray_m09AB7C8F17F1D45C76BE81F942957102939A98D8(L_1, NULL);
		return L_2;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAwarenessBufferBase_1_Dispose_m09CC75EA5B8BA18899DE738E541ED9C06142E3EF_gshared (_NativeAwarenessBufferBase_1_t5F9B8B2F803F88838D489073C779F5EC5FA8D6DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_nativeHandle != IntPtr.Zero)
		intptr_t L_0 = (intptr_t)__this->____nativeHandle_4;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// _OnRelease();
		VirtualActionInvoker0Invoker::Invoke(20 /* System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::_OnRelease() */, __this);
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A((RuntimeObject*)__this, NULL);
		// GC.RemoveMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_2 = (int64_t)__this->____consumedUnmanagedMemory_5;
		GC_RemoveMemoryPressure_mA82416C080E436CBD6C61340DE24B773B8CBDC73(L_2, NULL);
		// _nativeHandle = IntPtr.Zero;
		__this->____nativeHandle_4 = (0);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Int64 Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::_CalculateConsumedMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _NativeAwarenessBufferBase_1__CalculateConsumedMemory_m6D44ABFB473CEFD68EE420A1DAF9760AA5BDF9D9_gshared (_NativeAwarenessBufferBase_1_t5F9B8B2F803F88838D489073C779F5EC5FA8D6DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Width * Height * Marshal.SizeOf(typeof(T));
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_mA7461E70E172F97FDCA69F23C727E6966D1B32F9(L_3, NULL);
		return ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)))), ((int64_t)L_4)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2__ctor_m8863FD79FD2EB03D758FA92151FD447516E5A46B_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, RuntimeObject* ___dictionaryToWrap0, const RuntimeMethod* method) 
{
	{
		// public _ReadOnlyDictionary(IDictionary<TKey, TValue> dictionaryToWrap)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// if (dictionaryToWrap == null)
		RuntimeObject* L_0 = ___dictionaryToWrap0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException(nameof(dictionaryToWrap));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7BB1C7F529F538D622487DC7F7AA1CA62A05832)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_ReadOnlyDictionary_2__ctor_m8863FD79FD2EB03D758FA92151FD447516E5A46B_RuntimeMethod_var)));
	}

IL_0014:
	{
		// _source = dictionaryToWrap;
		RuntimeObject* L_2 = ___dictionaryToWrap0;
		__this->____source_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____source_0), (void*)L_2);
		// }
		return;
	}
}
// System.Int32 Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ReadOnlyDictionary_2_get_Count_m459D788FA211C6DEF3F1C8F622FE8A830B51C503_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, const RuntimeMethod* method) 
{
	{
		// get { return _source.Count; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0Invoker< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Collections.Generic.ICollection`1<TKey> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Keys_m2C50459BF549610558C1683C895D1EDA5FC8C066_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, const RuntimeMethod* method) 
{
	{
		// get { return _source.Keys; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Keys() */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0);
		return L_1;
	}
}
// System.Collections.Generic.ICollection`1<TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Values_m38D3AF43E2F6517162A7BBEE683CA062D872D029_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, const RuntimeMethod* method) 
{
	{
		// get { return _source.Values; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Values() */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0);
		return L_1;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m06813262F9E2B3C7BA9BF762BEACC96E51D8F808_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, const RuntimeMethod* method) 
{
	{
		// get { return true; }
		return (bool)1;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_ICollection_get_IsSynchronized_mE81BBDD118F9AC6FADBA0FB5113859D2E9FD174E_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, const RuntimeMethod* method) 
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Object Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_ICollection_get_SyncRoot_mEE8A4F3EE05A4D57556F5BC8AA4FD7BEAEBF210D_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (_syncRoot != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_1;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return _syncRoot;
		RuntimeObject* L_1 = (RuntimeObject*)__this->____syncRoot_1;
		return L_1;
	}

IL_000f:
	{
		// var collection = _source as ICollection;
		RuntimeObject* L_2 = (RuntimeObject*)__this->____source_0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		// if (collection != null)
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// _syncRoot = collection.SyncRoot;
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_4);
		__this->____syncRoot_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syncRoot_1), (void*)L_5);
		goto IL_003e;
	}

IL_002c:
	{
		// Interlocked.CompareExchange(ref _syncRoot, new object(), null);
		RuntimeObject** L_6 = (RuntimeObject**)(&__this->____syncRoot_1);
		RuntimeObject* L_7 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_7, NULL);
		RuntimeObject* L_8;
		L_8 = Interlocked_CompareExchange_mE9CAF0B3E78E95BA138B5623615D3C0242581977(L_6, L_7, NULL, NULL);
	}

IL_003e:
	{
		// return _syncRoot;
		RuntimeObject* L_9 = (RuntimeObject*)__this->____syncRoot_1;
		return L_9;
	}
}
// TValue Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_get_Item_mE18A1D81FB459585F0508252FBDA515991C5C93E_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_t5ACDE277081E5F2E834CD28B00E646F35F53D893 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_t783EB27A8AE15E9DF144BCBA0E767423E214C994 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
	// TKey
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t5ACDE277081E5F2E834CD28B00E646F35F53D893);
	// TValue
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t783EB27A8AE15E9DF144BCBA0E767423E214C994);
	{
		// get { return _source[key]; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 8)) ? ___key0 : &___key0), SizeOf_TKey_t5ACDE277081E5F2E834CD28B00E646F35F53D893);
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(TKey) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 8)) ? L_1: *(void**)L_1), (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_TValue_t783EB27A8AE15E9DF144BCBA0E767423E214C994);
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_set_Item_mB9D86074112380A817F6B058EA6FD87E1F0E32AF_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	{
		// set { ThrowNotSupportedException(); }
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), NULL);
		// set { ThrowNotSupportedException(); }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::System.Collections.Generic.IDictionary<TKey,TValue>.Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_m65274DCB31229F7B91F6F41CD43371AB373A3654_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), NULL);
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_ContainsKey_m2A25BED620E9B1549D55C3B4101D8127AB7BE4BD_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_t5ACDE277081E5F2E834CD28B00E646F35F53D893 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
	// TKey
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t5ACDE277081E5F2E834CD28B00E646F35F53D893);
	{
		// return _source.ContainsKey(key);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 8)) ? ___key0 : &___key0), SizeOf_TKey_t5ACDE277081E5F2E834CD28B00E646F35F53D893);
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ContainsKey(TKey) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 8)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::System.Collections.Generic.IDictionary<TKey,TValue>.Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_mFD13FB373CF6E05182653E20A1728CB12F75C040_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_TryGetValue_mE43795FA310E4E30FE4FACC91315DAB28A30478D_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value1, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_t5ACDE277081E5F2E834CD28B00E646F35F53D893 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
	// TKey
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t5ACDE277081E5F2E834CD28B00E646F35F53D893);
	{
		// return _source.TryGetValue(key, out value);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 8)) ? ___key0 : &___key0), SizeOf_TKey_t5ACDE277081E5F2E834CD28B00E646F35F53D893);
		Il2CppFullySharedGenericAny* L_2 = ___value1;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 8)) ? L_1: *(void**)L_1), L_2);
		return L_3;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m655237D5A4EA66FBEB74CDB3682475019561EB6B_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, /*System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___item0, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Clear_m4B0DBAC80DB880D32EDDAC90AA3A9968F885AF97_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), NULL);
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mAC4EE5BE0E9616E443BDBF863085FEF552041D22_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, /*System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___item0, const RuntimeMethod* method) 
{
	// sizeof(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
	const uint32_t SizeOf_KeyValuePair_2_tE656E2D90EE19596B0D83D51B32B5F3FA96C3284 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_tE656E2D90EE19596B0D83D51B32B5F3FA96C3284);
	{
		// ICollection<KeyValuePair<TKey, TValue>> collection = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		// return collection.Contains(item);
		il2cpp_codegen_memcpy(L_1, ___item0, SizeOf_KeyValuePair_2_tE656E2D90EE19596B0D83D51B32B5F3FA96C3284);
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1Invoker< bool, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::Contains(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m72E9AE17D8C6B45F61B20A3ED636353C2E250ECA_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	{
		// ICollection<KeyValuePair<TKey, TValue>> collection = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		// collection.CopyTo(array, arrayIndex);
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2Invoker< KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::CopyTo(T[],System.Int32) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mA4065940650B0BB8FD39FBB791709B37C771D285_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, /*System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___item0, const RuntimeMethod* method) 
{
	{
		// ThrowNotSupportedException();
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), NULL);
		// return false;
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mD7C58C211DA57567FEA6471C56A6040701FDCCE4_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, const RuntimeMethod* method) 
{
	{
		// IEnumerable<KeyValuePair<TKey, TValue>> enumerator = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		// return enumerator.GetEnumerator();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_IEnumerable_GetEnumerator_mD40240387056B7DD70C8E7C781676A9B538AABFD_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, const RuntimeMethod* method) 
{
	{
		// return _source.GetEnumerator();
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_ICollection_CopyTo_mC39A4B28F6732249B427403FA72244FF2AE19E03_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ICollection collection = new List<KeyValuePair<TKey, TValue>>(_source);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____source_0;
		List_1_tD9E984339D94BF7164294F57B9E975AF314BF857* L_1 = (List_1_tD9E984339D94BF7164294F57B9E975AF314BF857*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 23));
		NullCheck(L_1);
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_1, (RuntimeObject*)L_0);
		// collection.CopyTo(array, index);
		RuntimeArray* L_2 = ___array0;
		int32_t L_3 = ___index1;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<TKey> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9E0E2DE049927F18002747DC296D9C6954ECB322_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, const RuntimeMethod* method) 
{
	{
		// get { return Keys; }
		RuntimeObject* L_0;
		L_0 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)), il2cpp_rgctx_method(method->klass->rgctx_data, 25), __this);
		return (RuntimeObject*)L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m4F329CEF03682CD7A6647D0EE82B5DE52097AEB6_gshared (_ReadOnlyDictionary_2_t8317DD8A25BEEF2E47CA97891A82C82B89D3224E* __this, const RuntimeMethod* method) 
{
	{
		// get { return Values; }
		RuntimeObject* L_0;
		L_0 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), __this);
		return (RuntimeObject*)L_0;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_ThrowNotSupportedException_m949DB4F63CB19FAECA1E01A71609C1234A963FEE_gshared (const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("This Dictionary is read-only");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE44EB699A6FE620517DE44E517245D1D8921D9D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_ReadOnlyDictionary_2_ThrowNotSupportedException_m949DB4F63CB19FAECA1E01A71609C1234A963FEE_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Niantic.ARDK.Utilities._ReferenceComparer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReferenceComparer_1__ctor_m750442FEE41F938BF8EBE6389D21AE74BEEAC08F_gshared (_ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70* __this, const RuntimeMethod* method) 
{
	{
		// private _ReferenceComparer()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._ReferenceComparer`1<System.Object>::Equals(T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReferenceComparer_1_Equals_mC8632A4E131713A9F65DA16451C2A1C4A473A54C_gshared (_ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70* __this, RuntimeObject* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) 
{
	{
		// return object.ReferenceEquals(a, b);
		RuntimeObject* L_0 = ___a0;
		RuntimeObject* L_1 = ___b1;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
	}
}
// System.Int32 Niantic.ARDK.Utilities._ReferenceComparer`1<System.Object>::GetHashCode(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ReferenceComparer_1_GetHashCode_mAAAABCE2335709203ED6ABAAF72E3857D38AAE30_gshared (_ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	{
		// return RuntimeHelpers.GetHashCode(instance);
		RuntimeObject* L_0 = ___instance0;
		int32_t L_1;
		L_1 = RuntimeHelpers_GetHashCode_m975C4EAA6DBD6F7D9150E631673D27D1A50F7881(L_0, NULL);
		return L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._ReferenceComparer`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReferenceComparer_1__cctor_m2F674901608171CB151EF83E35B78DF47BB70B91_gshared (const RuntimeMethod* method) 
{
	{
		// public static readonly _ReferenceComparer<T> Instance = new _ReferenceComparer<T>();
		_ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70* L_0 = (_ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_0);
		((_ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_ReferenceComparer_1_tFDE2A54BD63E5AD88864713ED3329381BB4A3E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->___Instance_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(System.UInt32,System.UInt32,System.Boolean,UnityEngine.Matrix4x4,Unity.Collections.NativeArray`1<T>,Niantic.ARDK.AR.Camera.CameraIntrinsics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1__ctor_m3A13A2ACDF1C5B09B407F53C2B88EB7A5C8CA816_gshared (_SerializableAwarenessBufferBase_1_t63EDAAF31E6326B36A5620DFF516B852219B6BBD* __this, uint32_t ___width0, uint32_t ___height1, bool ___isKeyframe2, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix3, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___data4, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___intrinsics5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(width, height, isKeyframe, intrinsics)
		uint32_t L_0 = ___width0;
		uint32_t L_1 = ___height1;
		bool L_2 = ___isKeyframe2;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_3 = ___intrinsics5;
		_AwarenessBufferBase__ctor_mEF38D9FA8B2D5A2A20DBD55BF0CF8E78197E9611((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, L_0, L_1, L_2, L_3, NULL);
		// _viewMatrix = viewMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = ___viewMatrix3;
		__this->____viewMatrix_3 = L_4;
		// _intrinsics = intrinsics;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_5 = ___intrinsics5;
		__this->____intrinsics_6 = L_5;
		// Data = data;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6 = ___data4;
		__this->___U3CDataU3Ek__BackingField_7 = L_6;
		// _consumedUnmanagedMemory = _CalculateConsumedMemory();
		int64_t L_7;
		L_7 = InvokerFuncInvoker0< int64_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), __this);
		__this->____consumedUnmanagedMemory_5 = L_7;
		// GC.AddMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_8 = (int64_t)__this->____consumedUnmanagedMemory_5;
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_AddMemoryPressure_m61B0F87573A1749E21EA112E6E51C2B4A6875426(L_8, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1_Finalize_m79748C5DF83F4FF0DAA7A76BFE5FC092E56B3302_gshared (_SerializableAwarenessBufferBase_1_t63EDAAF31E6326B36A5620DFF516B852219B6BBD* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{// begin finally (depth: 1)
				// }
				NullCheck((RuntimeObject*)__this);
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Dispose();
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), __this);
			goto IL_000f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_ViewMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 _SerializableAwarenessBufferBase_1_get_ViewMatrix_mBDBF66D0E7301789D85221FF0553347AC434D575_gshared (_SerializableAwarenessBufferBase_1_t63EDAAF31E6326B36A5620DFF516B852219B6BBD* __this, const RuntimeMethod* method) 
{
	{
		// return _viewMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)__this->____viewMatrix_3;
		return L_0;
	}
}
// Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_Intrinsics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 _SerializableAwarenessBufferBase_1_get_Intrinsics_m5290D90495C58D0878874254DFBFECE6E999DA19_gshared (_SerializableAwarenessBufferBase_1_t63EDAAF31E6326B36A5620DFF516B852219B6BBD* __this, const RuntimeMethod* method) 
{
	{
		// return _intrinsics;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_0 = (CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4)__this->____intrinsics_6;
		return L_0;
	}
}
// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _SerializableAwarenessBufferBase_1_get_Data_m92990AFF796B3761151C71F090BE06FA3E2C2DD0_gshared (_SerializableAwarenessBufferBase_1_t63EDAAF31E6326B36A5620DFF516B852219B6BBD* __this, const RuntimeMethod* method) 
{
	{
		// public NativeArray<T> Data { get; }
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18)__this->___U3CDataU3Ek__BackingField_7;
		return L_0;
	}
}
// T Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Sample(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1_Sample_mFCCB9B7813A9D33761C67EAC21A5A7F5D29536E9_gshared (_SerializableAwarenessBufferBase_1_t63EDAAF31E6326B36A5620DFF516B852219B6BBD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t831C7B09109B4B9AA2ED683DE6044B0DDA515177 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
	// T
	const Il2CppFullySharedGenericStruct L_18 = alloca(SizeOf_T_t831C7B09109B4B9AA2ED683DE6044B0DDA515177);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var w = (int)Width;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_0 = (int32_t)L_0;
		// var h = (int)Height;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_1 = (int32_t)L_1;
		// var x = Mathf.Clamp(Mathf.RoundToInt(uv.x * w - 0.5f), 0, w - 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___uv0;
		float L_3 = (float)L_2.___x_0;
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_3, ((float)L_4))), (0.5f))), NULL);
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_5, 0, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), NULL);
		V_2 = L_7;
		// var y = Mathf.Clamp(Mathf.RoundToInt(uv.y * h - 0.5f), 0, h - 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___uv0;
		float L_9 = (float)L_8.___y_1;
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, ((float)L_10))), (0.5f))), NULL);
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), NULL);
		V_3 = L_13;
		// return Data[x + w * y];
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_14;
		L_14 = InvokerFuncInvoker0< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), __this);
		V_4 = L_14;
		int32_t L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = V_3;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), (&V_4), ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)il2cpp_codegen_multiply(L_16, L_17)))), (Il2CppFullySharedGenericStruct*)L_18);
		il2cpp_codegen_memcpy(il2cppRetVal, L_18, SizeOf_T_t831C7B09109B4B9AA2ED683DE6044B0DDA515177);
		return;
	}
}
// T Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Sample(UnityEngine.Vector2,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1_Sample_m22DBE3847168FA874E3BA1797B3E4B6BA8B7988C_gshared (_SerializableAwarenessBufferBase_1_t63EDAAF31E6326B36A5620DFF516B852219B6BBD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform1, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t831C7B09109B4B9AA2ED683DE6044B0DDA515177 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
	// T
	const Il2CppFullySharedGenericStruct L_30 = alloca(SizeOf_T_t831C7B09109B4B9AA2ED683DE6044B0DDA515177);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// var w = (int)Width;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_0 = (int32_t)L_0;
		// var h = (int)Height;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		V_1 = (int32_t)L_1;
		// var st = transform * new Vector4(uv.x, uv.y, 1.0f, 1.0f);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___transform1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___uv0;
		float L_4 = (float)L_3.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___uv0;
		float L_6 = (float)L_5.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_7), L_4, L_6, (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = Matrix4x4_op_Multiply_m2041E25F0453B831D95C32E924B88125ACFE9255(L_2, L_7, NULL);
		V_2 = L_8;
		// var sx = st.x / st.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_2;
		float L_10 = (float)L_9.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = V_2;
		float L_12 = (float)L_11.___z_3;
		// var sy = st.y / st.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_2;
		float L_14 = (float)L_13.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = V_2;
		float L_16 = (float)L_15.___z_3;
		V_3 = ((float)(L_14/L_16));
		// var x = Mathf.Clamp(Mathf.RoundToInt(sx * w - 0.5f), 0, w - 1);
		int32_t L_17 = V_0;
		int32_t L_18;
		L_18 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)(L_10/L_12)), ((float)L_17))), (0.5f))), NULL);
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_18, 0, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), NULL);
		V_4 = L_20;
		// var y = Mathf.Clamp(Mathf.RoundToInt(sy * h - 0.5f), 0, h - 1);
		float L_21 = V_3;
		int32_t L_22 = V_1;
		int32_t L_23;
		L_23 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_21, ((float)L_22))), (0.5f))), NULL);
		int32_t L_24 = V_1;
		int32_t L_25;
		L_25 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_23, 0, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), NULL);
		V_5 = L_25;
		// return Data[x + w * y];
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_26;
		L_26 = InvokerFuncInvoker0< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), __this);
		V_6 = L_26;
		int32_t L_27 = V_4;
		int32_t L_28 = V_0;
		int32_t L_29 = V_5;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), (&V_6), ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)il2cpp_codegen_multiply(L_28, L_29)))), (Il2CppFullySharedGenericStruct*)L_30);
		il2cpp_codegen_memcpy(il2cppRetVal, L_30, SizeOf_T_t831C7B09109B4B9AA2ED683DE6044B0DDA515177);
		return;
	}
}
// System.Boolean Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_IsRotatedToScreenOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SerializableAwarenessBufferBase_1_get_IsRotatedToScreenOrientation_m861B1ED6F8864D441143E68CBD89D4D02C56BCE6_gshared (_SerializableAwarenessBufferBase_1_t63EDAAF31E6326B36A5620DFF516B852219B6BBD* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsRotatedToScreenOrientation { get; set; }
		bool L_0 = (bool)__this->___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::set_IsRotatedToScreenOrientation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1_set_IsRotatedToScreenOrientation_m16697DFE324C06E27377386304A0B98A1388FF56_gshared (_SerializableAwarenessBufferBase_1_t63EDAAF31E6326B36A5620DFF516B852219B6BBD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsRotatedToScreenOrientation { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1_Dispose_m4158B50AA566CF022BD08AB651F8DDBDBC7313CD_gshared (_SerializableAwarenessBufferBase_1_t63EDAAF31E6326B36A5620DFF516B852219B6BBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_disposed)
		bool L_0 = (bool)__this->____disposed_4;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (Data.IsCreated)
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1;
		L_1 = InvokerFuncInvoker0< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), __this);
		V_0 = L_1;
		bool L_2;
		L_2 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), (&V_0));
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Data.Dispose();
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3;
		L_3 = InvokerFuncInvoker0< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), __this);
		V_0 = L_3;
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (&V_0));
	}

IL_0027:
	{
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A((RuntimeObject*)__this, NULL);
		// GC.RemoveMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_4 = (int64_t)__this->____consumedUnmanagedMemory_5;
		GC_RemoveMemoryPressure_mA82416C080E436CBD6C61340DE24B773B8CBDC73(L_4, NULL);
		// _disposed = true;
		__this->____disposed_4 = (bool)1;
		// }
		return;
	}
}
// System.Int64 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::_CalculateConsumedMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _SerializableAwarenessBufferBase_1__CalculateConsumedMemory_m3DC9EFA994CC23316FFC968E597F43815ADB0219_gshared (_SerializableAwarenessBufferBase_1_t63EDAAF31E6326B36A5620DFF516B852219B6BBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Width * Height * Marshal.SizeOf(typeof(T));
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_mA7461E70E172F97FDCA69F23C727E6966D1B32F9(L_3, NULL);
		return ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)))), ((int64_t)L_4)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,TBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferSerializer_2_DoSerialize_m477884898C33B1574946B52D8A0A524230204946_gshared (_SerializableAwarenessBufferSerializer_2_t1E345FF334A704DD681DC23C9CF9D55AAAF9E7FE* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, RuntimeObject* ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var uint32Serializer = CompressedUInt32Serializer.Instance;
		il2cpp_codegen_runtime_class_init_inline(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_0 = ((CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_StaticFields*)il2cpp_codegen_static_fields_for(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var))->___Instance_1;
		// uint32Serializer.Serialize(serializer, item.Width);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_1 = L_0;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_2 = ___serializer0;
		RuntimeObject* L_3 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_3);
		uint32_t L_4;
		L_4 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_3, NULL);
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_2, L_4, BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var);
		// uint32Serializer.Serialize(serializer, item.Height);
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_5 = ___serializer0;
		RuntimeObject* L_6 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_6);
		uint32_t L_7;
		L_7 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_6, NULL);
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_5, L_7, BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var);
		// BooleanSerializer.Instance.Serialize(serializer, item.IsKeyframe);
		il2cpp_codegen_runtime_class_init_inline(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA* L_8 = ((BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_StaticFields*)il2cpp_codegen_static_fields_for(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var))->___Instance_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_9 = ___serializer0;
		RuntimeObject* L_10 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_10);
		bool L_11;
		L_11 = _AwarenessBufferBase_get_IsKeyframe_m9C08BCEC5A2BD3706280C368F1BBAE2B78F37C64_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_10, NULL);
		NullCheck((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_8);
		BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_8, L_9, L_11, BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_RuntimeMethod_var);
		// Matrix4x4Serializer.Instance.Serialize(serializer, item.ViewMatrix);
		il2cpp_codegen_runtime_class_init_inline(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77* L_12 = ((Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var))->___Instance_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_13 = ___serializer0;
		RuntimeObject* L_14 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_14);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15;
		L_15 = VirtualFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(11 /* UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_ViewMatrix() */, (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_14);
		NullCheck((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_12);
		BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_12, L_13, L_15, BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_RuntimeMethod_var);
		// CameraIntrinsicsSerializer.Instance.Serialize(serializer, item.Intrinsics);
		il2cpp_codegen_runtime_class_init_inline(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5* L_16 = ((CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_StaticFields*)il2cpp_codegen_static_fields_for(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var))->___Instance_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_17 = ___serializer0;
		RuntimeObject* L_18 = ___item1;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_18);
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_19;
		L_19 = VirtualFuncInvoker0< CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 >::Invoke(12 /* Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_Intrinsics() */, (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_18);
		NullCheck((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_16);
		BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_16, L_17, L_19, BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_RuntimeMethod_var);
		// }
		return;
	}
}
// TBuffer Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _SerializableAwarenessBufferSerializer_2_DoDeserialize_m3BA9369A0E05ABB7DDD0B8E87310BB94A3DE63F7_gshared (_SerializableAwarenessBufferSerializer_2_t1E345FF334A704DD681DC23C9CF9D55AAAF9E7FE* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var uint32Serializer = CompressedUInt32Serializer.Instance;
		il2cpp_codegen_runtime_class_init_inline(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_0 = ((CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_StaticFields*)il2cpp_codegen_static_fields_for(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var))->___Instance_1;
		// uint width = uint32Serializer.Deserialize(deserializer);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_1 = L_0;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_2 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		uint32_t L_3;
		L_3 = BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_2, BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var);
		V_0 = L_3;
		// uint height = uint32Serializer.Deserialize(deserializer);
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_4 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		uint32_t L_5;
		L_5 = BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_4, BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var);
		V_1 = L_5;
		// var isKeyFrame = BooleanSerializer.Instance.Deserialize(deserializer);
		il2cpp_codegen_runtime_class_init_inline(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA* L_6 = ((BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_StaticFields*)il2cpp_codegen_static_fields_for(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var))->___Instance_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_7 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_6);
		bool L_8;
		L_8 = BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_6, L_7, BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_RuntimeMethod_var);
		V_2 = L_8;
		// var viewMatrix = Matrix4x4Serializer.Instance.Deserialize(deserializer);
		il2cpp_codegen_runtime_class_init_inline(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77* L_9 = ((Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var))->___Instance_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_10 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_9);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_9, L_10, BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_RuntimeMethod_var);
		V_3 = L_11;
		// var intrinsics = CameraIntrinsicsSerializer.Instance.Deserialize(deserializer);
		il2cpp_codegen_runtime_class_init_inline(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5* L_12 = ((CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_StaticFields*)il2cpp_codegen_static_fields_for(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var))->___Instance_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_13 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_12);
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_14;
		L_14 = BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_12, L_13, BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_RuntimeMethod_var);
		V_4 = L_14;
		// return
		//   _InternalDeserialize
		//   (
		//     deserializer,
		//     width,
		//     height,
		//     isKeyFrame,
		//     viewMatrix,
		//     intrinsics
		//   );
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_15 = ___deserializer0;
		uint32_t L_16 = V_0;
		uint32_t L_17 = V_1;
		bool L_18 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19 = V_3;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_20 = V_4;
		RuntimeObject* L_21;
		L_21 = VirtualFuncInvoker6Invoker< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, uint32_t, uint32_t, bool, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 >::Invoke(11 /* TBuffer Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::_InternalDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer,System.UInt32,System.UInt32,System.Boolean,UnityEngine.Matrix4x4,Niantic.ARDK.AR.Camera.CameraIntrinsics) */, __this, L_15, L_16, L_17, L_18, L_19, L_20);
		return L_21;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferSerializer_2__ctor_mFEB4003ED7C63465994DD736A48880B2C10E79C5_gshared (_SerializableAwarenessBufferSerializer_2_t1E345FF334A704DD681DC23C9CF9D55AAAF9E7FE* __this, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), (BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9*)__this);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m4992993A65BD68A05E337A27003BD4222283A182_gshared (_UntypedToTypedSerializerAdapter_1_t5B4C0A213FB66623C6636ADC4D8E475AAB7DC3A8* __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method) 
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*)__this);
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->____untypedSerializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mC2E626EAAC1D4667BF080D68D0CB5788E1FCC185_gshared (_UntypedToTypedSerializerAdapter_1_t5B4C0A213FB66623C6636ADC4D8E475AAB7DC3A8* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t638C83D1B0BE1BB6AA256BBE3991D9F489489E2B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t638C83D1B0BE1BB6AA256BBE3991D9F489489E2B);
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___serializer0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 3)) ? ___item1 : &___item1), SizeOf_T_t638C83D1B0BE1BB6AA256BBE3991D9F489489E2B);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_2);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_3);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoDeserialize_m97B15E2E60035E4C04BEA4C3D2EE6AEAC69FFCAC_gshared (_UntypedToTypedSerializerAdapter_1_t5B4C0A213FB66623C6636ADC4D8E475AAB7DC3A8* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t638C83D1B0BE1BB6AA256BBE3991D9F489489E2B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t638C83D1B0BE1BB6AA256BBE3991D9F489489E2B);
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->____untypedSerializer_1;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___deserializer0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		// return (T)result;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_4))), SizeOf_T_t638C83D1B0BE1BB6AA256BBE3991D9F489489E2B);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_mE7952E168887DA2531B8B56C1845C1CE099C6AB7_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConcurrentDictionary<TKey, WeakReference> _innerDictionary =
		//   new ConcurrentDictionary<TKey, WeakReference>();
		ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_0 = (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), L_0);
		__this->____innerDictionary_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)L_0);
		// internal _WeakValueDictionary()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// _GcObserver._GcHappened += _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_m1E45285880D2D2BDF3B0E564F1CB0BC0BFECCA8F(L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_m3F13A707FF8F68089ABA5F8F980FB5759073A6EE_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _GcObserver._GcHappened -= _ClearCollectedValues;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_m0B11460CB91FB27BB44578B3F9FFD731BA627746(L_0, NULL);
		// _innerDictionary = null;
		__this->____innerDictionary_1 = (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary_1), (void*)(ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities._WeakValueDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_m276FE681626550DD717177FD8539600533B8FA71_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, const RuntimeMethod* method) 
{
	{
		// return _innerDictionary.GetEnumerator();
		ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_0 = (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 Niantic.ARDK.Utilities._WeakValueDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_m23B53D23A3E5A0EDF287C90AEEF134FAD40E1911_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, const RuntimeMethod* method) 
{
	{
		// get { return _innerDictionary.Count; }
		ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_0 = (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)__this->____innerDictionary_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_0);
		return L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>::_ClearCollectedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_m79C650871EC0850510B5762CCA737BE04E05DECE_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(System.Collections.Generic.KeyValuePair`2<TKey,System.WeakReference>)
	const uint32_t SizeOf_KeyValuePair_2_tC7C195F10DB4C7E1BFD2FD3A714FAE76FE950293 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
	// TKey
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
	// System.Collections.Generic.KeyValuePair`2<TKey,System.WeakReference>
	const KeyValuePair_2_tE2890FA82AC448148B0285D44B4C56D447512C17 L_5 = alloca(SizeOf_KeyValuePair_2_tC7C195F10DB4C7E1BFD2FD3A714FAE76FE950293);
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tE2890FA82AC448148B0285D44B4C56D447512C17 V_1 = alloca(SizeOf_KeyValuePair_2_tC7C195F10DB4C7E1BFD2FD3A714FAE76FE950293);
	memset(V_1, 0, SizeOf_KeyValuePair_2_tC7C195F10DB4C7E1BFD2FD3A714FAE76FE950293);
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_5 = NULL;
	{
		// foreach (var pair in _innerDictionary)
		ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_0 = (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)__this->____innerDictionary_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_006f;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005c_1;
			}

IL_000e_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				InterfaceActionInvoker1Invoker< KeyValuePair_2_tE2890FA82AC448148B0285D44B4C56D447512C17* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.WeakReference>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4, (KeyValuePair_2_tE2890FA82AC448148B0285D44B4C56D447512C17*)L_5);
				il2cpp_codegen_memcpy(V_1, L_5, SizeOf_KeyValuePair_2_tC7C195F10DB4C7E1BFD2FD3A714FAE76FE950293);
				// var weakReference = pair.Value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
				L_6 = InvokerFuncInvoker0< WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (KeyValuePair_2_tE2890FA82AC448148B0285D44B4C56D447512C17*)V_1);
				V_2 = L_6;
				// if (!weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_2;
				NullCheck(L_7);
				bool L_8;
				L_8 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_7);
				if (L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				// lock (weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_2;
				V_3 = L_9;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0051_1:
					{// begin finally (depth: 2)
						{
							bool L_10 = V_4;
							if (!L_10)
							{
								goto IL_005b_1;
							}
						}
						{
							WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_3;
							Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_11, NULL);
						}

IL_005b_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_3;
						Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_12, (&V_4), NULL);
						// if (!weakReference.IsAlive)
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
						NullCheck(L_13);
						bool L_14;
						L_14 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_13);
						if (L_14)
						{
							goto IL_004f_2;
						}
					}
					{
						// _innerDictionary.TryRemove(pair.Key, out _);
						ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_15 = (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)__this->____innerDictionary_1;
						InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (KeyValuePair_2_tE2890FA82AC448148B0285D44B4C56D447512C17*)V_1, (Il2CppFullySharedGenericAny*)L_16);
						NullCheck(L_15);
						bool L_17;
						L_17 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_16: *(void**)L_16), (&V_5));
					}

IL_004f_2:
					{
						goto IL_005c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				// foreach (var pair in _innerDictionary)
				RuntimeObject* L_18 = V_0;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0070;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_m793F43A2B6F29773930F7DF665B495EED6BD5D50_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// TKey
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_18 = L_0;
	const Il2CppFullySharedGenericAny L_23 = L_0;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_1 = NULL;
	bool V_2 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	{
		// if (key == null)
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? ___key0 : &___key0), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryAdd_m793F43A2B6F29773930F7DF665B495EED6BD5D50_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_3 = (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)__this->____innerDictionary_1;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? ___key0 : &___key0), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5* L_5 = ((_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 14)))->____createWeakReference_0;
		NullCheck(L_3);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
		L_6 = InvokerFuncInvoker2< WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, Il2CppFullySharedGenericAny, Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_4: *(void**)L_4), L_5);
		V_0 = L_6;
		// if (weakReference.IsAlive)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_7);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_0;
		V_1 = L_9;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					bool L_10 = V_2;
					if (!L_10)
					{
						goto IL_0086;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_11, NULL);
				}

IL_0086:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_12, (&V_2), NULL);
				// if (weakReference.IsAlive)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_0;
				NullCheck(L_13);
				bool L_14;
				L_14 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_13);
				if (!L_14)
				{
					goto IL_0048_1;
				}
			}
			{
				// return false;
				V_4 = (bool)0;
				goto IL_0087;
			}

IL_0048_1:
			{
				// weakReference.Target = value;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_15 = V_0;
				RuntimeObject* L_16 = ___value1;
				NullCheck(L_15);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_15, L_16);
				// if (_innerDictionary.TryGetValue(key, out oldWeakReference))
				ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_17 = (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)__this->____innerDictionary_1;
				il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? ___key0 : &___key0), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
				NullCheck(L_17);
				bool L_19;
				L_19 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_18: *(void**)L_18), (&V_3));
				if (!L_19)
				{
					goto IL_006c_1;
				}
			}
			{
				// return oldWeakReference == weakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_20 = V_3;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_21 = V_0;
				V_4 = (bool)((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_20) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_21))? 1 : 0);
				goto IL_0087;
			}

IL_006c_1:
			{
				// return _innerDictionary.TryAdd(key, weakReference);
				ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_22 = (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)__this->____innerDictionary_1;
				il2cpp_codegen_memcpy(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? ___key0 : &___key0), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_24 = V_0;
				NullCheck(L_22);
				bool L_25;
				L_25 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_23: *(void**)L_23), L_24);
				V_4 = L_25;
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		// }
		bool L_26 = V_4;
		return L_26;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetOrAdd_mADE5C4477156A27EBF0A0F4DEE6C11B867B4443E_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, Func_2_tED7CA67878EF0FB299872769153413F97964501A* ___createValue1, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// TKey
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_20 = L_0;
	const Il2CppFullySharedGenericAny L_27 = L_0;
	const Il2CppFullySharedGenericAny L_31 = L_0;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	bool V_3 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// if (key == null)
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? ___key0 : &___key0), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_GetOrAdd_mADE5C4477156A27EBF0A0F4DEE6C11B867B4443E_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_3 = (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)__this->____innerDictionary_1;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? ___key0 : &___key0), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5* L_5 = ((_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 14)))->____createWeakReference_0;
		NullCheck(L_3);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
		L_6 = InvokerFuncInvoker2< WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, Il2CppFullySharedGenericAny, Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_4: *(void**)L_4), L_5);
		V_0 = L_6;
	}

IL_0025:
	{
		// var untypedResult = weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_7);
		V_1 = L_8;
		// if (untypedResult != null)
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		// return (TValue)untypedResult;
		RuntimeObject* L_10 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
	}

IL_0036:
	{
		// lock (weakReference)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_0;
		V_2 = L_11;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{// begin finally (depth: 1)
				{
					bool L_12 = V_3;
					if (!L_12)
					{
						goto IL_00a9;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_13, NULL);
				}

IL_00a9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_2;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_14, (&V_3), NULL);
				// untypedResult = weakReference.Target;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_15 = V_0;
				NullCheck(L_15);
				RuntimeObject* L_16;
				L_16 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_15);
				V_1 = L_16;
				// if (untypedResult != null)
				RuntimeObject* L_17 = V_1;
				if (!L_17)
				{
					goto IL_0056_1;
				}
			}
			{
				// return (TValue)untypedResult;
				RuntimeObject* L_18 = V_1;
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_18, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
				goto IL_00aa;
			}

IL_0056_1:
			{
				// _innerDictionary.TryGetValue(key, out existingWeakReference);
				ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_19 = (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)__this->____innerDictionary_1;
				il2cpp_codegen_memcpy(L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? ___key0 : &___key0), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
				NullCheck(L_19);
				bool L_21;
				L_21 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_20: *(void**)L_20), (&V_4));
				// if (existingWeakReference != weakReference)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_4;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_0;
				if ((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_22) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_23)))
				{
					goto IL_0084_1;
				}
			}
			{
				// if (existingWeakReference != null)
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_24 = V_4;
				if (!L_24)
				{
					goto IL_0073_1;
				}
			}
			{
				// weakReference = existingWeakReference;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_25 = V_4;
				V_0 = L_25;
				// continue;
				goto IL_0025;
			}

IL_0073_1:
			{
				// if (!_innerDictionary.TryAdd(key, weakReference))
				ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_26 = (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)__this->____innerDictionary_1;
				il2cpp_codegen_memcpy(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? ___key0 : &___key0), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_28 = V_0;
				NullCheck(L_26);
				bool L_29;
				L_29 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_27: *(void**)L_27), L_28);
				if (L_29)
				{
					goto IL_0084_1;
				}
			}
			{
				// break; // Means we will evaluate weakReference again. Go to NO-WEAK-REFERENCE-YET.
				goto IL_0013;
			}

IL_0084_1:
			{
				// var result = createValue(key);
				Func_2_tED7CA67878EF0FB299872769153413F97964501A* L_30 = ___createValue1;
				il2cpp_codegen_memcpy(L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? ___key0 : &___key0), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
				NullCheck(L_30);
				RuntimeObject* L_32;
				L_32 = InvokerFuncInvoker1< RuntimeObject*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_31: *(void**)L_31));
				V_5 = L_32;
				// weakReference.Target = result;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_33 = V_0;
				RuntimeObject* L_34 = V_5;
				NullCheck(L_33);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_33, L_34);
				// return result;
				RuntimeObject* L_35 = V_5;
				V_6 = L_35;
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		// }
		RuntimeObject* L_36 = V_6;
		return L_36;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>::TryGetValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_TryGetValue_m882740A6D9AC0983F533D9FA1EE13468DCCB2D92_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// TKey
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (key == null)
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? ___key0 : &___key0), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryGetValue_m882740A6D9AC0983F533D9FA1EE13468DCCB2D92_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (!_innerDictionary.TryGetValue(key, out weakReference))
		ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_3 = (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)__this->____innerDictionary_1;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? ___key0 : &___key0), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		NullCheck(L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_4: *(void**)L_4), (&V_0));
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_6 = V_1;
		return L_6;
	}

IL_002d:
	{
		// return (TValue)weakReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_7);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_mF68DA860A0FECC63284D09F87C28859E7DF35B7E_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// TKey
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	{
		// if (key == null)
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? ___key0 : &___key0), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_Remove_mF68DA860A0FECC63284D09F87C28859E7DF35B7E_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.TryRemove(key, out _);
		ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_3 = (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)__this->____innerDictionary_1;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? ___key0 : &___key0), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		NullCheck(L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_4: *(void**)L_4), (&V_0));
		return L_5;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_ContainsKey_m59AD6978E2FD95C845364626D9567D79207D33E7_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// TKey
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	{
		// if (key == null)
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? ___key0 : &___key0), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_ContainsKey_m59AD6978E2FD95C845364626D9567D79207D33E7_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.ContainsKey(key);
		ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_3 = (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)__this->____innerDictionary_1;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? ___key0 : &___key0), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		NullCheck(L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_4: *(void**)L_4));
		return L_5;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_m717C843F379FFA1AC2A452993E6AD0234F63261C_gshared (const RuntimeMethod* method) 
{
	{
		// private static readonly Func<TKey, WeakReference> _createWeakReference =
		//   (_) => new WeakReference(null);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		U3CU3Ec_t5959B0FFFDA32DB774C7E565E847DB8BCFE77EEE* L_0 = ((U3CU3Ec_t5959B0FFFDA32DB774C7E565E847DB8BCFE77EEE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 23)))->___U3CU3E9_0;
		Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5* L_1 = (Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		NullCheck(L_1);
		InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25), L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24)));
		((_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))->____createWeakReference_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))->____createWeakReference_0), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) 
{
	{
		// public uint Width { get; private set; }
		uint32_t L_0 = __this->___U3CWidthU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) 
{
	{
		// public uint Height { get; private set; }
		uint32_t L_0 = __this->___U3CHeightU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool _AwarenessBufferBase_get_IsKeyframe_m9C08BCEC5A2BD3706280C368F1BBAE2B78F37C64_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsKeyframe { get; private set; }
		bool L_0 = __this->___U3CIsKeyframeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
		return;
	}
}
