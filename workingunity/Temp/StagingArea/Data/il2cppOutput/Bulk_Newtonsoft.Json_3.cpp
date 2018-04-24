#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t1591754542;
// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t2845904993;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.TimeZone
struct TimeZone_t2038656743;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.TimeZoneInfo
struct TimeZoneInfo_t161405854;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.IO.TextWriter
struct TextWriter_t3478189236;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>
struct BidirectionalDictionary_2_t787053467;
// System.StringComparer
struct StringComparer_t3301955079;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>
struct BidirectionalDictionary_2_t3581858927;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t892470886;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t846150980;
// System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.EnumMemberAttribute>
struct IEnumerable_1_t63981704;
// System.Collections.IEnumerable
struct IEnumerable_t1941168011;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Func`2<System.Runtime.Serialization.EnumMemberAttribute,System.String>
struct Func_2_t2419460300;
// System.Func`2<System.Object,System.Object>
struct Func_2_t2447130374;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t827303578;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t600458651;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t1761491126;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3759279471;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t3161555474;
// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>>
struct ThreadSafeStore_2_t4165332627;
// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Object,System.Object>
struct ThreadSafeStore_2_t1066477248;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Func`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>>
struct Func_2_t1251018457;
// Newtonsoft.Json.Utilities.EnumUtils/<>c
struct U3CU3Ec_t2360567884;
// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t1084128815;
// System.Collections.Generic.List`1<System.Char>
struct List_1_t811567916;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_t2614313359;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// Newtonsoft.Json.IArrayPool`1<System.Char>
struct IArrayPool_1_t3621664784;
// System.IO.StringWriter
struct StringWriter_t802263757;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_t2528576452;
// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory
struct LateBoundReflectionDelegateFactory_t925499913;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t3207922868;
// System.Reflection.MethodBase
struct MethodBase_t;
// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t1939583362;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// Newtonsoft.Json.Utilities.PropertyNameTable
struct PropertyNameTable_t4130830590;
// Newtonsoft.Json.Utilities.PropertyNameTable/Entry
struct Entry_t2924091039;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// Newtonsoft.Json.Utilities.ReflectionMember
struct ReflectionMember_t2655407482;
// System.Action`2<System.Object,System.Object>
struct Action_2_t2470008838;
// Newtonsoft.Json.Utilities.ReflectionObject
struct ReflectionObject_t701100009;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>
struct IDictionary_2_t904515172;
// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>
struct Dictionary_2_t2440663781;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t4294006577;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_t2359854630;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1
struct U3CU3Ec__DisplayClass13_1_t1955354417;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2
struct U3CU3Ec__DisplayClass13_2_t381376305;
// System.Reflection.ParameterInfo
struct ParameterInfo_t1861056598;
// System.Func`1<System.Object>
struct Func_1_t2509852811;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t274213469;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct Func_2_t1796590042;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
struct IEnumerable_1_t3280590014;
// System.Exception
struct Exception_t;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t557109187;
// System.Collections.Generic.IList`1<System.Reflection.MemberInfo>
struct IList_1_t900354228;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t3962162136;
// System.Func`2<System.Reflection.MemberInfo,System.String>
struct Func_2_t3967597302;
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<System.String,System.Reflection.MemberInfo>>
struct IEnumerable_1_t761185857;
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<System.Object,System.Object>>
struct IEnumerable_1_t2023440265;
// System.Attribute[]
struct AttributeU5BU5D_t1575011174;
// System.Attribute
struct Attribute_t861562559;
// System.Collections.Generic.IEnumerable`1<System.Attribute>
struct IEnumerable_1_t4136382744;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Module
struct Module_t2987026101;
// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t3692615456;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1463797649;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_t840909487;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t2943407543;
// System.Collections.Generic.List`1<System.Reflection.PropertyInfo>
struct List_1_t2159416693;
// System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>
struct IList_1_t2502661734;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0
struct U3CU3Ec__DisplayClass42_0_t549567114;
// System.Func`2<System.Reflection.PropertyInfo,System.Boolean>
struct Func_2_t2377163032;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c
struct U3CU3Ec_t3587133118;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0
struct U3CU3Ec__DisplayClass43_0_t549567113;
// Newtonsoft.Json.Utilities.TypeInformation
struct TypeInformation_t1210244291;
// System.ComponentModel.AddingNewEventArgs
struct AddingNewEventArgs_t2974299087;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_t4128025860;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.ComponentModel.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t2206564399;
// System.ComponentModel.NotifyCollectionChangedEventArgs
struct NotifyCollectionChangedEventArgs_t1368105863;
// System.ComponentModel.PropertyChangingEventArgs
struct PropertyChangingEventArgs_t2067745136;
// System.EventArgs
struct EventArgs_t3591816995;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t2830353497;
// Newtonsoft.Json.Utilities.PropertyNameTable/Entry[]
struct EntryU5BU5D_t1995962374;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// Newtonsoft.Json.Utilities.ReflectionMember[]
struct ReflectionMemberU5BU5D_t3830414175;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Newtonsoft.Json.Utilities.ReflectionMember,System.Collections.DictionaryEntry>
struct Transform_1_t2680825891;
// System.Collections.Generic.Dictionary`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>>
struct Dictionary_2_t3231400531;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1461822886;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t1302094432;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t96558379;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t1787725097;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2120639521;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t1469475992;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t984015687;
// System.Reflection.TypeFilter
struct TypeFilter_t2356120900;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;

extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MethodCall_2_Invoke_m386137395_RuntimeMethod_var;
extern const uint32_t U3CU3Ec__DisplayClass9_0_U3CCreateCastConverterU3Eb__0_m1204656933_MetadataUsageId;
extern RuntimeClass* TypeConvertKey_t285306760_il2cpp_TypeInfo_var;
extern const uint32_t TypeConvertKey_Equals_m1519043382_MetadataUsageId;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern const uint32_t DateTimeParser_t3754458704_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t DateTimeParser_t3754458704_com_FromNativeMethodDefinition_MetadataUsageId;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTimeParser_t3754458704_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255367____9E31F24F64765FCAA589F589324D17C9FCF6A06D_0_FieldInfo_var;
extern String_t* _stringLiteral2378956916;
extern String_t* _stringLiteral1235401807;
extern String_t* _stringLiteral3405197142;
extern String_t* _stringLiteral8793942;
extern String_t* _stringLiteral1072719392;
extern String_t* _stringLiteral3804830530;
extern String_t* _stringLiteral3457333224;
extern String_t* _stringLiteral3886980064;
extern String_t* _stringLiteral3027523993;
extern String_t* _stringLiteral3026868633;
extern String_t* _stringLiteral2357574120;
extern String_t* _stringLiteral3452614531;
extern String_t* _stringLiteral1035957435;
extern const uint32_t DateTimeParser__cctor_m1006148270_MetadataUsageId;
extern const uint32_t DateTimeParser_Parse_m73420931_MetadataUsageId;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern const uint32_t DateTimeParser_ParseDate_m1503841812_MetadataUsageId;
extern const uint32_t DateTimeParser_ParseTime_m2613649973_MetadataUsageId;
extern const uint32_t DateTimeParser_ParseZone_m676506294_MetadataUsageId;
extern RuntimeClass* DateTimeUtils_t3515429982_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255367____E92B39D8233061927D9ACDE54665E68E7535635A_4_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255367____DD3AEFEADB1CD615F3017763F1568179FEE640B0_3_FieldInfo_var;
extern const uint32_t DateTimeUtils__cctor_m564074174_MetadataUsageId;
extern RuntimeClass* TimeZone_t2038656743_il2cpp_TypeInfo_var;
extern const uint32_t DateTimeUtils_GetUtcOffset_m575763097_MetadataUsageId;
extern RuntimeClass* DateTimeKind_t3468814247_il2cpp_TypeInfo_var;
extern const RuntimeMethod* DateTimeUtils_ToSerializationMode_m2887824490_RuntimeMethod_var;
extern String_t* _stringLiteral835817753;
extern String_t* _stringLiteral3800573230;
extern const uint32_t DateTimeUtils_ToSerializationMode_m2887824490_MetadataUsageId;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern const RuntimeMethod* DateTimeUtils_EnsureDateTime_m2677626152_RuntimeMethod_var;
extern String_t* _stringLiteral3627081376;
extern const uint32_t DateTimeUtils_EnsureDateTime_m2677626152_MetadataUsageId;
extern const uint32_t DateTimeUtils_ToUniversalTicks_m4266243281_MetadataUsageId;
extern const uint32_t DateTimeUtils_ToUniversalTicks_m444892890_MetadataUsageId;
extern const uint32_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m478085472_MetadataUsageId;
extern const uint32_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m4215710814_MetadataUsageId;
extern const uint32_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m3362411187_MetadataUsageId;
extern const uint32_t DateTimeUtils_UniversialTicksToJavaScriptTicks_m3989465022_MetadataUsageId;
extern const uint32_t DateTimeUtils_ConvertJavaScriptTicksToDateTime_m2220449017_MetadataUsageId;
extern const uint32_t DateTimeUtils_TryParseDateTimeIso_m758390143_MetadataUsageId;
extern RuntimeClass* TimeZoneInfo_t161405854_il2cpp_TypeInfo_var;
extern const uint32_t DateTimeUtils_TryParseDateTimeOffsetIso_m3588505642_MetadataUsageId;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2361106233;
extern String_t* _stringLiteral3450582919;
extern const uint32_t DateTimeUtils_TryParseDateTime_m2606903149_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4188457550;
extern const uint32_t DateTimeUtils_TryParseDateTime_m1212892142_MetadataUsageId;
extern const uint32_t DateTimeUtils_TryParseDateTimeOffset_m738404597_MetadataUsageId;
extern RuntimeClass* DateTimeOffset_t3229287507_il2cpp_TypeInfo_var;
extern const uint32_t DateTimeUtils_TryParseDateTimeOffset_m1182031007_MetadataUsageId;
extern RuntimeClass* TimeSpan_t881159249_il2cpp_TypeInfo_var;
extern RuntimeClass* ConvertUtils_t2194062972_il2cpp_TypeInfo_var;
extern const uint32_t DateTimeUtils_TryParseMicrosoftDate_m2514602947_MetadataUsageId;
extern const uint32_t DateTimeUtils_TryParseDateTimeMicrosoft_m896972691_MetadataUsageId;
extern const uint32_t DateTimeUtils_TryParseDateTimeExact_m2999446858_MetadataUsageId;
extern const uint32_t DateTimeUtils_TryParseDateTimeOffsetMicrosoft_m2314886215_MetadataUsageId;
extern const uint32_t DateTimeUtils_TryParseDateTimeOffsetExact_m1730563288_MetadataUsageId;
extern const uint32_t DateTimeUtils_TryReadOffset_m3712643023_MetadataUsageId;
extern const uint32_t DateTimeUtils_WriteDateTimeString_m3387101489_MetadataUsageId;
extern const RuntimeMethod* Nullable_1_get_HasValue_m1210311128_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_m3497035374_RuntimeMethod_var;
extern String_t* _stringLiteral3940528346;
extern String_t* _stringLiteral1064774710;
extern const uint32_t DateTimeUtils_WriteDateTimeString_m108143888_MetadataUsageId;
extern const uint32_t DateTimeUtils_WriteDefaultIsoDate_m139031193_MetadataUsageId;
extern const uint32_t DateTimeUtils_WriteDateTimeOffset_m1794107409_MetadataUsageId;
extern const RuntimeMethod* Nullable_1__ctor_m3314784284_RuntimeMethod_var;
extern const uint32_t DateTimeUtils_WriteDateTimeOffsetString_m3161479400_MetadataUsageId;
extern const uint32_t DateTimeUtils_GetDateValues_m237807814_MetadataUsageId;
extern const RuntimeType* EnumMemberAttribute_t1084128815_0_0_0_var;
extern RuntimeClass* StringComparer_t3301955079_il2cpp_TypeInfo_var;
extern RuntimeClass* BidirectionalDictionary_2_t787053467_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t2360567884_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t2419460300_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern const RuntimeMethod* BidirectionalDictionary_2__ctor_m58546930_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Cast_TisEnumMemberAttribute_t1084128815_m843212694_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CInitializeEnumTypeU3Eb__1_0_m76424380_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m1969356281_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Select_TisEnumMemberAttribute_t1084128815_TisString_t_m3180131537_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_SingleOrDefault_TisString_t_m4035470101_RuntimeMethod_var;
extern const RuntimeMethod* BidirectionalDictionary_2_TryGetBySecond_m954730245_RuntimeMethod_var;
extern const RuntimeMethod* EnumUtils_InitializeEnumType_m3064468690_RuntimeMethod_var;
extern const RuntimeMethod* BidirectionalDictionary_2_Set_m3266748649_RuntimeMethod_var;
extern String_t* _stringLiteral2810825232;
extern const uint32_t EnumUtils_InitializeEnumType_m3064468690_MetadataUsageId;
extern RuntimeClass* List_1_t257213610_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t1761491126_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t3161555474_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t319305757_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EnumUtils_GetValues_m1997494740_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2321703786_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CGetValuesU3Eb__5_0_m762110753_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m3933480653_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_TisFieldInfo_t_m2487357973_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3338814081_RuntimeMethod_var;
extern String_t* _stringLiteral2097671996;
extern String_t* _stringLiteral2532280278;
extern const uint32_t EnumUtils_GetValues_m1997494740_MetadataUsageId;
extern RuntimeClass* EnumUtils_t2002471470_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t4135868527_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ThreadSafeStore_2_Get_m70698259_RuntimeMethod_var;
extern String_t* _stringLiteral3450517380;
extern const uint32_t EnumUtils_ParseEnumName_m172858425_MetadataUsageId;
extern const RuntimeMethod* BidirectionalDictionary_2_TryGetByFirst_m2766949072_RuntimeMethod_var;
extern const uint32_t EnumUtils_ToEnumName_m1516462206_MetadataUsageId;
extern const uint32_t EnumUtils_ResolvedEnumName_m2962574579_MetadataUsageId;
extern RuntimeClass* Func_2_t1251018457_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadSafeStore_2_t4165332627_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Func_2__ctor_m1138174753_RuntimeMethod_var;
extern const RuntimeMethod* ThreadSafeStore_2__ctor_m769843296_RuntimeMethod_var;
extern const uint32_t EnumUtils__cctor_m3466973508_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m712977655_MetadataUsageId;
extern RuntimeClass* BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var;
extern RuntimeClass* JavaScriptUtils_t1108575081_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t811567916_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t2167645408_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t2614313359_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t4067030938_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1735334926_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1266383442_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Union_TisChar_t3634460470_m3294811350_RuntimeMethod_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255367____D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2_FieldInfo_var;
extern const uint32_t JavaScriptUtils__cctor_m2960747719_MetadataUsageId;
extern const uint32_t JavaScriptUtils_GetCharEscapeFlags_m2215130569_MetadataUsageId;
extern String_t* _stringLiteral3455498228;
extern String_t* _stringLiteral3454842868;
extern String_t* _stringLiteral3455629300;
extern String_t* _stringLiteral3454318580;
extern String_t* _stringLiteral3454580724;
extern String_t* _stringLiteral3458119668;
extern String_t* _stringLiteral3145209596;
extern String_t* _stringLiteral12320812;
extern String_t* _stringLiteral12255276;
extern String_t* _stringLiteral3450058740;
extern String_t* _stringLiteral3450386420;
extern String_t* _stringLiteral3452614527;
extern const uint32_t JavaScriptUtils_WriteEscapedJavaScriptString_m1556362848_MetadataUsageId;
extern const RuntimeMethod* Nullable_1_get_HasValue_m2648265346_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_m2296315628_RuntimeMethod_var;
extern const uint32_t JavaScriptUtils_ToEscapedJavaScriptString_m850540215_MetadataUsageId;
extern RuntimeClass* LateBoundReflectionDelegateFactory_t925499913_il2cpp_TypeInfo_var;
extern const uint32_t LateBoundReflectionDelegateFactory_get_Instance_m3698844514_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__DisplayClass3_0_t1939583362_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstructorInfo_t5769829_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectConstructor_1_t3207922868_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__0_m529644205_RuntimeMethod_var;
extern const RuntimeMethod* ObjectConstructor_1__ctor_m1181679199_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__1_m526498226_RuntimeMethod_var;
extern String_t* _stringLiteral414301358;
extern const uint32_t LateBoundReflectionDelegateFactory_CreateParameterizedConstructor_m655847845_MetadataUsageId;
extern const uint32_t LateBoundReflectionDelegateFactory__cctor_m3918907285_MetadataUsageId;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern const uint32_t MiscellaneousUtils_ValueEquals_m795470537_MetadataUsageId;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1502400109;
extern const uint32_t MiscellaneousUtils_CreateArgumentOutOfRangeException_m1064925786_MetadataUsageId;
extern String_t* _stringLiteral2395288344;
extern String_t* _stringLiteral3452614526;
extern const uint32_t MiscellaneousUtils_ToString_m4213282389_MetadataUsageId;
extern const uint32_t MiscellaneousUtils_FormatValueForPrint_m2505289556_MetadataUsageId;
extern RuntimeClass* PropertyNameTable_t4130830590_il2cpp_TypeInfo_var;
extern const uint32_t PropertyNameTable__cctor_m1564092424_MetadataUsageId;
extern RuntimeClass* EntryU5BU5D_t1995962374_il2cpp_TypeInfo_var;
extern const uint32_t PropertyNameTable__ctor_m727499363_MetadataUsageId;
extern const uint32_t PropertyNameTable_Get_m1245220493_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern const RuntimeMethod* PropertyNameTable_Add_m2811283804_RuntimeMethod_var;
extern String_t* _stringLiteral2600271970;
extern const uint32_t PropertyNameTable_Add_m2811283804_MetadataUsageId;
extern RuntimeClass* Entry_t2924091039_il2cpp_TypeInfo_var;
extern const uint32_t PropertyNameTable_AddEntry_m2687197476_MetadataUsageId;
extern const uint32_t PropertyNameTable_Grow_m2160967313_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2440663781_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2127759587_RuntimeMethod_var;
extern const uint32_t ReflectionObject__ctor_m1062647964_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t904515172_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Func_2_Invoke_m3285901618_RuntimeMethod_var;
extern const uint32_t ReflectionObject_GetValue_m2531865869_MetadataUsageId;
extern const uint32_t ReflectionObject_GetType_m2200262811_MetadataUsageId;
extern const RuntimeType* Void_t1185182177_0_0_0_var;
extern RuntimeClass* ReflectionObject_t701100009_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonTypeReflector_t526591219_il2cpp_TypeInfo_var;
extern RuntimeClass* ReflectionUtils_t2669115404_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass13_0_t4294006577_il2cpp_TypeInfo_var;
extern RuntimeClass* ReflectionMember_t2655407482_il2cpp_TypeInfo_var;
extern RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass13_1_t1955354417_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t2447130374_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass13_2_t381376305_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_2_t2470008838_il2cpp_TypeInfo_var;
extern RuntimeClass* MemberTypes_t3790569052_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReflectionDelegateFactory_CreateDefaultConstructor_TisRuntimeObject_m1416164154_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CCreateU3Eb__0_m376730355_RuntimeMethod_var;
extern const RuntimeMethod* ReflectionObject_Create_m73781573_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Single_TisMemberInfo_t_m851241132_RuntimeMethod_var;
extern const RuntimeMethod* ReflectionDelegateFactory_CreateGet_TisRuntimeObject_m2506523516_RuntimeMethod_var;
extern const RuntimeMethod* ReflectionDelegateFactory_CreateSet_TisRuntimeObject_m2440090338_RuntimeMethod_var;
extern const RuntimeMethod* ReflectionDelegateFactory_CreateMethodCall_TisRuntimeObject_m2397225021_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass13_1_U3CCreateU3Eb__1_m2235834647_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m406556452_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass13_2_U3CCreateU3Eb__2_m2723401855_RuntimeMethod_var;
extern const RuntimeMethod* Action_2__ctor_m1578862614_RuntimeMethod_var;
extern String_t* _stringLiteral2233631454;
extern String_t* _stringLiteral3336955582;
extern const uint32_t ReflectionObject_Create_m73781573_MetadataUsageId;
extern const RuntimeMethod* Func_1_Invoke_m348272648_RuntimeMethod_var;
extern const uint32_t U3CU3Ec__DisplayClass13_0_U3CCreateU3Eb__0_m376730355_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass13_1_U3CCreateU3Eb__1_m2235834647_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass13_2_U3CCreateU3Eb__2_m2723401855_MetadataUsageId;
extern const uint32_t ReflectionUtils__cctor_m1077063625_MetadataUsageId;
extern String_t* _stringLiteral2854063445;
extern const uint32_t ReflectionUtils_IsVirtual_m3338583030_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetBaseDefinition_m628546257_MetadataUsageId;
extern const RuntimeMethod* ReflectionUtils_GetTypeName_m1666562427_RuntimeMethod_var;
extern const uint32_t ReflectionUtils_GetTypeName_m1666562427_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern const uint32_t ReflectionUtils_RemoveAssemblyDetails_m3671180266_MetadataUsageId;
extern String_t* _stringLiteral3452614604;
extern const uint32_t ReflectionUtils_HasDefaultConstructor_m3011828166_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetDefaultConstructor_m4213349706_MetadataUsageId;
extern RuntimeClass* U3CU3Ec_t3587133118_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t1796590042_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec_U3CGetDefaultConstructorU3Eb__10_0_m1917227267_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m1559270925_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_SingleOrDefault_TisConstructorInfo_t5769829_m2282397846_RuntimeMethod_var;
extern const uint32_t ReflectionUtils_GetDefaultConstructor_m3042638765_MetadataUsageId;
extern const uint32_t ReflectionUtils_IsNullable_m645225420_MetadataUsageId;
extern const RuntimeType* Nullable_1_t3772285925_0_0_0_var;
extern const uint32_t ReflectionUtils_IsNullableType_m2557784957_MetadataUsageId;
extern const uint32_t ReflectionUtils_EnsureNotNullableType_m3060298386_MetadataUsageId;
extern const uint32_t ReflectionUtils_ImplementsGenericDefinition_m1481186786_MetadataUsageId;
extern const RuntimeMethod* ReflectionUtils_ImplementsGenericDefinition_m2172968317_RuntimeMethod_var;
extern String_t* _stringLiteral3243520166;
extern String_t* _stringLiteral4032246892;
extern String_t* _stringLiteral3302261911;
extern const uint32_t ReflectionUtils_ImplementsGenericDefinition_m2172968317_MetadataUsageId;
extern const uint32_t ReflectionUtils_InheritsGenericDefinition_m3900283873_MetadataUsageId;
extern const RuntimeMethod* ReflectionUtils_InheritsGenericDefinition_m626434391_RuntimeMethod_var;
extern String_t* _stringLiteral908082501;
extern String_t* _stringLiteral3820141517;
extern const uint32_t ReflectionUtils_InheritsGenericDefinition_m626434391_MetadataUsageId;
extern const uint32_t ReflectionUtils_InheritsGenericDefinitionInternal_m2113175446_MetadataUsageId;
extern const RuntimeType* IEnumerable_1_t1615002100_0_0_0_var;
extern const RuntimeType* IEnumerable_t1941168011_0_0_0_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReflectionUtils_GetCollectionItemType_m1243555655_RuntimeMethod_var;
extern String_t* _stringLiteral809145522;
extern const uint32_t ReflectionUtils_GetCollectionItemType_m1243555655_MetadataUsageId;
extern const RuntimeType* IDictionary_2_t3177279192_0_0_0_var;
extern const RuntimeType* IDictionary_t1363984059_0_0_0_var;
extern const RuntimeMethod* ReflectionUtils_GetDictionaryKeyValueTypes_m3140437744_RuntimeMethod_var;
extern String_t* _stringLiteral1925115738;
extern String_t* _stringLiteral2465504375;
extern const uint32_t ReflectionUtils_GetDictionaryKeyValueTypes_m3140437744_MetadataUsageId;
extern RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* EventInfo_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReflectionUtils_GetMemberUnderlyingType_m841662456_RuntimeMethod_var;
extern String_t* _stringLiteral1586550295;
extern String_t* _stringLiteral328953099;
extern const uint32_t ReflectionUtils_GetMemberUnderlyingType_m841662456_MetadataUsageId;
extern const uint32_t ReflectionUtils_IsIndexedProperty_m3237349032_MetadataUsageId;
extern String_t* _stringLiteral4193571962;
extern const uint32_t ReflectionUtils_IsIndexedProperty_m1455784124_MetadataUsageId;
extern RuntimeClass* TargetParameterCountException_t1216617239_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReflectionUtils_GetMemberValue_m2432599679_RuntimeMethod_var;
extern String_t* _stringLiteral2833503317;
extern String_t* _stringLiteral3087438175;
extern String_t* _stringLiteral3705297004;
extern const uint32_t ReflectionUtils_GetMemberValue_m2432599679_MetadataUsageId;
extern const RuntimeMethod* ReflectionUtils_SetMemberValue_m2425830593_RuntimeMethod_var;
extern String_t* _stringLiteral2657402793;
extern const uint32_t ReflectionUtils_SetMemberValue_m2425830593_MetadataUsageId;
extern const uint32_t ReflectionUtils_CanReadMemberValue_m1473164796_MetadataUsageId;
extern const uint32_t ReflectionUtils_CanSetMemberValue_m1263216356_MetadataUsageId;
extern RuntimeClass* List_1_t557109187_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t3967597302_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t761185857_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2213903436_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t2359854630_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3812572209_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t1913186679_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2845631487_RuntimeMethod_var;
extern const RuntimeMethod* CollectionUtils_AddRange_TisMemberInfo_t_m2053991619_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2508260589_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m4045609786_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CGetFieldsAndPropertiesU3Eb__29_0_m3758209495_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m4252472063_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_GroupBy_TisMemberInfo_t_TisString_t_m1303684172_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Count_TisMemberInfo_t_m2833200946_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisMemberInfo_t_m3180374575_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_First_TisMemberInfo_t_m2952260960_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m304598357_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m2257680807_RuntimeMethod_var;
extern String_t* _stringLiteral1949155704;
extern const uint32_t ReflectionUtils_GetFieldsAndProperties_m297325423_MetadataUsageId;
extern const uint32_t ReflectionUtils_IsOverridenGenericMember_m1361940080_MetadataUsageId;
extern RuntimeClass* Assembly_t_il2cpp_TypeInfo_var;
extern RuntimeClass* MemberInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Module_t2987026101_il2cpp_TypeInfo_var;
extern RuntimeClass* ParameterInfo_t1861056598_il2cpp_TypeInfo_var;
extern RuntimeClass* ICustomAttributeProvider_t1530824137_il2cpp_TypeInfo_var;
extern RuntimeClass* AttributeU5BU5D_t1575011174_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerable_Cast_TisAttribute_t861562559_m1709853543_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisAttribute_t861562559_m1336572644_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Union_TisAttribute_t861562559_m3425703445_RuntimeMethod_var;
extern String_t* _stringLiteral950559514;
extern const uint32_t ReflectionUtils_GetAttributes_m2593182657_MetadataUsageId;
extern const uint32_t ReflectionUtils_SplitFullyQualifiedTypeName_m956532210_MetadataUsageId;
extern const RuntimeMethod* Nullable_1__ctor_m2076366551_RuntimeMethod_var;
extern const uint32_t ReflectionUtils_GetAssemblyDelimiterIndex_m2474328121_MetadataUsageId;
extern RuntimeClass* Func_2_t3692615456_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec_U3CGetMemberInfoFromTypeU3Eb__37_0_m156713168_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m249082317_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Select_TisParameterInfo_t1861056598_TisType_t_m1700990983_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisType_t_m4037995289_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_SingleOrDefault_TisMemberInfo_t_m798163977_RuntimeMethod_var;
extern const uint32_t ReflectionUtils_GetMemberInfoFromType_m1623736994_MetadataUsageId;
extern const RuntimeMethod* List_1__ctor_m832393913_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Cast_TisFieldInfo_t_m1416808529_RuntimeMethod_var;
extern String_t* _stringLiteral3252615044;
extern const uint32_t ReflectionUtils_GetFields_m2854570455_MetadataUsageId;
extern const RuntimeMethod* U3CU3Ec_U3CGetChildPrivateFieldsU3Eb__39_0_m2074452682_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Cast_TisMemberInfo_t_m2648121590_RuntimeMethod_var;
extern const RuntimeMethod* CollectionUtils_AddRange_TisMemberInfo_t_m1468659532_RuntimeMethod_var;
extern const uint32_t ReflectionUtils_GetChildPrivateFields_m1505488093_MetadataUsageId;
extern RuntimeClass* List_1_t2159416693_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2781142759_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m4242658599_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1771064164_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m1136100056_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m4158400089_RuntimeMethod_var;
extern const uint32_t ReflectionUtils_GetProperties_m2510843274_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__DisplayClass42_0_t549567114_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t2377163032_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t3515494185_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t2502661734_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__0_m3577833364_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m22287375_RuntimeMethod_var;
extern const RuntimeMethod* CollectionUtils_IndexOf_TisPropertyInfo_t_m2841828123_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__1_m480266349_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__2_m1390801511_RuntimeMethod_var;
extern const uint32_t ReflectionUtils_GetChildPrivateProperties_m2737051860_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
extern const uint32_t ReflectionUtils_GetDefaultValue_m3591065878_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m3974653786_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Any_TisParameterInfo_t1861056598_m2308149110_RuntimeMethod_var;
extern const uint32_t U3CU3Ec_U3CGetDefaultConstructorU3Eb__10_0_m1917227267_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__0_m3577833364_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__1_m480266349_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__2_m1390801511_MetadataUsageId;
extern const uint32_t StringBuffer_t2235727887_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t StringBuffer_t2235727887_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t StringReference_t2912309144_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t StringReference_t2912309144_com_FromNativeMethodDefinition_MetadataUsageId;
extern const RuntimeMethod* Array_IndexOf_TisChar_t3634460470_m1523447194_RuntimeMethod_var;
extern const uint32_t StringReferenceExtensions_IndexOf_m2457125624_MetadataUsageId;
extern const uint32_t StringUtils_FormatWith_m3056805521_MetadataUsageId;
extern const uint32_t StringUtils_FormatWith_m353537829_MetadataUsageId;
extern const uint32_t StringUtils_FormatWith_m17931563_MetadataUsageId;
extern const uint32_t StringUtils_FormatWith_m2539955297_MetadataUsageId;
extern String_t* _stringLiteral446157247;
extern const uint32_t StringUtils_FormatWith_m1786611224_MetadataUsageId;
extern RuntimeClass* StringWriter_t802263757_il2cpp_TypeInfo_var;
extern const uint32_t StringUtils_CreateStringWriter_m3876739792_MetadataUsageId;
extern const uint32_t StringUtils_GetLength_m3427840909_MetadataUsageId;
extern const uint32_t StringUtils_ToCamelCase_m614090145_MetadataUsageId;
extern const uint32_t StringUtils_IsHighSurrogate_m2271768366_MetadataUsageId;
extern const uint32_t StringUtils_IsLowSurrogate_m4258024248_MetadataUsageId;
extern const uint32_t TypeExtensions_AssignableToTypeName_m503478083_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t1463797649_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2916515228_il2cpp_TypeInfo_var;
extern const uint32_t TypeExtensions_ImplementInterface_m4199275556_MetadataUsageId;
extern const RuntimeMethod* ValidationUtils_ArgumentNotNull_m5418296_RuntimeMethod_var;
extern const uint32_t ValidationUtils_ArgumentNotNull_m5418296_MetadataUsageId;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern const uint32_t PropertyChangingEventArgs__ctor_m458964423_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;
struct CharU5BU5D_t3528271667;
struct Int32U5BU5D_t385246372;
struct FieldInfoU5BU5D_t846150980;
struct StringU5BU5D_t1281789340;
struct BooleanU5BU5D_t2897418192;
struct ByteU5BU5D_t4116647657;
struct EntryU5BU5D_t1995962374;
struct ParameterInfoU5BU5D_t390618515;
struct MemberInfoU5BU5D_t1302094432;
struct TypeU5BU5D_t3940880105;
struct ConstructorInfoU5BU5D_t881249896;
struct AttributeU5BU5D_t1575011174;
struct ParameterModifierU5BU5D_t2943407543;
struct PropertyInfoU5BU5D_t1461822886;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ENTRY_T2924091039_H
#define ENTRY_T2924091039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.PropertyNameTable/Entry
struct  Entry_t2924091039  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Utilities.PropertyNameTable/Entry::Value
	String_t* ___Value_0;
	// System.Int32 Newtonsoft.Json.Utilities.PropertyNameTable/Entry::HashCode
	int32_t ___HashCode_1;
	// Newtonsoft.Json.Utilities.PropertyNameTable/Entry Newtonsoft.Json.Utilities.PropertyNameTable/Entry::Next
	Entry_t2924091039 * ___Next_2;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Entry_t2924091039, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}

	inline static int32_t get_offset_of_HashCode_1() { return static_cast<int32_t>(offsetof(Entry_t2924091039, ___HashCode_1)); }
	inline int32_t get_HashCode_1() const { return ___HashCode_1; }
	inline int32_t* get_address_of_HashCode_1() { return &___HashCode_1; }
	inline void set_HashCode_1(int32_t value)
	{
		___HashCode_1 = value;
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(Entry_t2924091039, ___Next_2)); }
	inline Entry_t2924091039 * get_Next_2() const { return ___Next_2; }
	inline Entry_t2924091039 ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(Entry_t2924091039 * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier((&___Next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRY_T2924091039_H
#ifndef PROPERTYNAMETABLE_T4130830590_H
#define PROPERTYNAMETABLE_T4130830590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.PropertyNameTable
struct  PropertyNameTable_t4130830590  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.PropertyNameTable::_count
	int32_t ____count_1;
	// Newtonsoft.Json.Utilities.PropertyNameTable/Entry[] Newtonsoft.Json.Utilities.PropertyNameTable::_entries
	EntryU5BU5D_t1995962374* ____entries_2;
	// System.Int32 Newtonsoft.Json.Utilities.PropertyNameTable::_mask
	int32_t ____mask_3;

public:
	inline static int32_t get_offset_of__count_1() { return static_cast<int32_t>(offsetof(PropertyNameTable_t4130830590, ____count_1)); }
	inline int32_t get__count_1() const { return ____count_1; }
	inline int32_t* get_address_of__count_1() { return &____count_1; }
	inline void set__count_1(int32_t value)
	{
		____count_1 = value;
	}

	inline static int32_t get_offset_of__entries_2() { return static_cast<int32_t>(offsetof(PropertyNameTable_t4130830590, ____entries_2)); }
	inline EntryU5BU5D_t1995962374* get__entries_2() const { return ____entries_2; }
	inline EntryU5BU5D_t1995962374** get_address_of__entries_2() { return &____entries_2; }
	inline void set__entries_2(EntryU5BU5D_t1995962374* value)
	{
		____entries_2 = value;
		Il2CppCodeGenWriteBarrier((&____entries_2), value);
	}

	inline static int32_t get_offset_of__mask_3() { return static_cast<int32_t>(offsetof(PropertyNameTable_t4130830590, ____mask_3)); }
	inline int32_t get__mask_3() const { return ____mask_3; }
	inline int32_t* get_address_of__mask_3() { return &____mask_3; }
	inline void set__mask_3(int32_t value)
	{
		____mask_3 = value;
	}
};

struct PropertyNameTable_t4130830590_StaticFields
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.PropertyNameTable::HashCodeRandomizer
	int32_t ___HashCodeRandomizer_0;

public:
	inline static int32_t get_offset_of_HashCodeRandomizer_0() { return static_cast<int32_t>(offsetof(PropertyNameTable_t4130830590_StaticFields, ___HashCodeRandomizer_0)); }
	inline int32_t get_HashCodeRandomizer_0() const { return ___HashCodeRandomizer_0; }
	inline int32_t* get_address_of_HashCodeRandomizer_0() { return &___HashCodeRandomizer_0; }
	inline void set_HashCodeRandomizer_0(int32_t value)
	{
		___HashCodeRandomizer_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAMETABLE_T4130830590_H
#ifndef MATHUTILS_T2216308218_H
#define MATHUTILS_T2216308218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.MathUtils
struct  MathUtils_t2216308218  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHUTILS_T2216308218_H
#ifndef MISCELLANEOUSUTILS_T482436513_H
#define MISCELLANEOUSUTILS_T482436513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.MiscellaneousUtils
struct  MiscellaneousUtils_t482436513  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISCELLANEOUSUTILS_T482436513_H
#ifndef REFLECTIONMEMBER_T2655407482_H
#define REFLECTIONMEMBER_T2655407482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionMember
struct  ReflectionMember_t2655407482  : public RuntimeObject
{
public:
	// System.Type Newtonsoft.Json.Utilities.ReflectionMember::<MemberType>k__BackingField
	Type_t * ___U3CMemberTypeU3Ek__BackingField_0;
	// System.Func`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionMember::<Getter>k__BackingField
	Func_2_t2447130374 * ___U3CGetterU3Ek__BackingField_1;
	// System.Action`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionMember::<Setter>k__BackingField
	Action_2_t2470008838 * ___U3CSetterU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CMemberTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReflectionMember_t2655407482, ___U3CMemberTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CMemberTypeU3Ek__BackingField_0() const { return ___U3CMemberTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CMemberTypeU3Ek__BackingField_0() { return &___U3CMemberTypeU3Ek__BackingField_0; }
	inline void set_U3CMemberTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CMemberTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMemberTypeU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CGetterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReflectionMember_t2655407482, ___U3CGetterU3Ek__BackingField_1)); }
	inline Func_2_t2447130374 * get_U3CGetterU3Ek__BackingField_1() const { return ___U3CGetterU3Ek__BackingField_1; }
	inline Func_2_t2447130374 ** get_address_of_U3CGetterU3Ek__BackingField_1() { return &___U3CGetterU3Ek__BackingField_1; }
	inline void set_U3CGetterU3Ek__BackingField_1(Func_2_t2447130374 * value)
	{
		___U3CGetterU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGetterU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CSetterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ReflectionMember_t2655407482, ___U3CSetterU3Ek__BackingField_2)); }
	inline Action_2_t2470008838 * get_U3CSetterU3Ek__BackingField_2() const { return ___U3CSetterU3Ek__BackingField_2; }
	inline Action_2_t2470008838 ** get_address_of_U3CSetterU3Ek__BackingField_2() { return &___U3CSetterU3Ek__BackingField_2; }
	inline void set_U3CSetterU3Ek__BackingField_2(Action_2_t2470008838 * value)
	{
		___U3CSetterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSetterU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONMEMBER_T2655407482_H
#ifndef U3CU3EC__DISPLAYCLASS13_0_T4294006577_H
#define U3CU3EC__DISPLAYCLASS13_0_T4294006577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0
struct  U3CU3Ec__DisplayClass13_0_t4294006577  : public RuntimeObject
{
public:
	// System.Func`1<System.Object> Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0::ctor
	Func_1_t2509852811 * ___ctor_0;

public:
	inline static int32_t get_offset_of_ctor_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t4294006577, ___ctor_0)); }
	inline Func_1_t2509852811 * get_ctor_0() const { return ___ctor_0; }
	inline Func_1_t2509852811 ** get_address_of_ctor_0() { return &___ctor_0; }
	inline void set_ctor_0(Func_1_t2509852811 * value)
	{
		___ctor_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctor_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS13_0_T4294006577_H
#ifndef U3CU3EC__DISPLAYCLASS13_1_T1955354417_H
#define U3CU3EC__DISPLAYCLASS13_1_T1955354417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1
struct  U3CU3Ec__DisplayClass13_1_t1955354417  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1::call
	MethodCall_2_t2845904993 * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_1_t1955354417, ___call_0)); }
	inline MethodCall_2_t2845904993 * get_call_0() const { return ___call_0; }
	inline MethodCall_2_t2845904993 ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_t2845904993 * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((&___call_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS13_1_T1955354417_H
#ifndef REFLECTIONOBJECT_T701100009_H
#define REFLECTIONOBJECT_T701100009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionObject
struct  ReflectionObject_t701100009  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Utilities.ReflectionObject::<Creator>k__BackingField
	ObjectConstructor_1_t3207922868 * ___U3CCreatorU3Ek__BackingField_0;
	// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember> Newtonsoft.Json.Utilities.ReflectionObject::<Members>k__BackingField
	RuntimeObject* ___U3CMembersU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CCreatorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReflectionObject_t701100009, ___U3CCreatorU3Ek__BackingField_0)); }
	inline ObjectConstructor_1_t3207922868 * get_U3CCreatorU3Ek__BackingField_0() const { return ___U3CCreatorU3Ek__BackingField_0; }
	inline ObjectConstructor_1_t3207922868 ** get_address_of_U3CCreatorU3Ek__BackingField_0() { return &___U3CCreatorU3Ek__BackingField_0; }
	inline void set_U3CCreatorU3Ek__BackingField_0(ObjectConstructor_1_t3207922868 * value)
	{
		___U3CCreatorU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCreatorU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CMembersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReflectionObject_t701100009, ___U3CMembersU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CMembersU3Ek__BackingField_1() const { return ___U3CMembersU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CMembersU3Ek__BackingField_1() { return &___U3CMembersU3Ek__BackingField_1; }
	inline void set_U3CMembersU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CMembersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMembersU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONOBJECT_T701100009_H
#ifndef DICTIONARY_2_T2440663781_H
#define DICTIONARY_2_T2440663781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>
struct  Dictionary_2_t2440663781  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ReflectionMemberU5BU5D_t3830414175* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2440663781, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2440663781, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2440663781, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2440663781, ___valueSlots_7)); }
	inline ReflectionMemberU5BU5D_t3830414175* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ReflectionMemberU5BU5D_t3830414175** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ReflectionMemberU5BU5D_t3830414175* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2440663781, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2440663781, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2440663781, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2440663781, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2440663781, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2440663781, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2440663781, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2440663781_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2680825891 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2440663781_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2680825891 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2680825891 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2680825891 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2440663781_H
#ifndef U3CU3EC__DISPLAYCLASS3_0_T1939583362_H
#define U3CU3EC__DISPLAYCLASS3_0_T1939583362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0
struct  U3CU3Ec__DisplayClass3_0_t1939583362  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::c
	ConstructorInfo_t5769829 * ___c_0;
	// System.Reflection.MethodBase Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::method
	MethodBase_t * ___method_1;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t1939583362, ___c_0)); }
	inline ConstructorInfo_t5769829 * get_c_0() const { return ___c_0; }
	inline ConstructorInfo_t5769829 ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(ConstructorInfo_t5769829 * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier((&___c_0), value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t1939583362, ___method_1)); }
	inline MethodBase_t * get_method_1() const { return ___method_1; }
	inline MethodBase_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodBase_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS3_0_T1939583362_H
#ifndef U3CU3EC_T2360567884_H
#define U3CU3EC_T2360567884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.EnumUtils/<>c
struct  U3CU3Ec_t2360567884  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2360567884_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.EnumUtils/<>c Newtonsoft.Json.Utilities.EnumUtils/<>c::<>9
	U3CU3Ec_t2360567884 * ___U3CU3E9_0;
	// System.Func`2<System.Runtime.Serialization.EnumMemberAttribute,System.String> Newtonsoft.Json.Utilities.EnumUtils/<>c::<>9__1_0
	Func_2_t2419460300 * ___U3CU3E9__1_0_1;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> Newtonsoft.Json.Utilities.EnumUtils/<>c::<>9__5_0
	Func_2_t1761491126 * ___U3CU3E9__5_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2360567884_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2360567884 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2360567884 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2360567884 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2360567884_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_t2419460300 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_t2419460300 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_t2419460300 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__1_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2360567884_StaticFields, ___U3CU3E9__5_0_2)); }
	inline Func_2_t1761491126 * get_U3CU3E9__5_0_2() const { return ___U3CU3E9__5_0_2; }
	inline Func_2_t1761491126 ** get_address_of_U3CU3E9__5_0_2() { return &___U3CU3E9__5_0_2; }
	inline void set_U3CU3E9__5_0_2(Func_2_t1761491126 * value)
	{
		___U3CU3E9__5_0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__5_0_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T2360567884_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_1)); }
	inline ObjectU5BU5D_t2843939325* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t2843939325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
#ifndef STRINGCOMPARER_T3301955079_H
#define STRINGCOMPARER_T3301955079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t3301955079  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t3301955079_StaticFields
{
public:
	// System.StringComparer System.StringComparer::invariantCultureIgnoreCase
	StringComparer_t3301955079 * ___invariantCultureIgnoreCase_0;
	// System.StringComparer System.StringComparer::invariantCulture
	StringComparer_t3301955079 * ___invariantCulture_1;
	// System.StringComparer System.StringComparer::ordinalIgnoreCase
	StringComparer_t3301955079 * ___ordinalIgnoreCase_2;
	// System.StringComparer System.StringComparer::ordinal
	StringComparer_t3301955079 * ___ordinal_3;

public:
	inline static int32_t get_offset_of_invariantCultureIgnoreCase_0() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___invariantCultureIgnoreCase_0)); }
	inline StringComparer_t3301955079 * get_invariantCultureIgnoreCase_0() const { return ___invariantCultureIgnoreCase_0; }
	inline StringComparer_t3301955079 ** get_address_of_invariantCultureIgnoreCase_0() { return &___invariantCultureIgnoreCase_0; }
	inline void set_invariantCultureIgnoreCase_0(StringComparer_t3301955079 * value)
	{
		___invariantCultureIgnoreCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCultureIgnoreCase_0), value);
	}

	inline static int32_t get_offset_of_invariantCulture_1() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___invariantCulture_1)); }
	inline StringComparer_t3301955079 * get_invariantCulture_1() const { return ___invariantCulture_1; }
	inline StringComparer_t3301955079 ** get_address_of_invariantCulture_1() { return &___invariantCulture_1; }
	inline void set_invariantCulture_1(StringComparer_t3301955079 * value)
	{
		___invariantCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCulture_1), value);
	}

	inline static int32_t get_offset_of_ordinalIgnoreCase_2() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___ordinalIgnoreCase_2)); }
	inline StringComparer_t3301955079 * get_ordinalIgnoreCase_2() const { return ___ordinalIgnoreCase_2; }
	inline StringComparer_t3301955079 ** get_address_of_ordinalIgnoreCase_2() { return &___ordinalIgnoreCase_2; }
	inline void set_ordinalIgnoreCase_2(StringComparer_t3301955079 * value)
	{
		___ordinalIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___ordinalIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_ordinal_3() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___ordinal_3)); }
	inline StringComparer_t3301955079 * get_ordinal_3() const { return ___ordinal_3; }
	inline StringComparer_t3301955079 ** get_address_of_ordinal_3() { return &___ordinal_3; }
	inline void set_ordinal_3(StringComparer_t3301955079 * value)
	{
		___ordinal_3 = value;
		Il2CppCodeGenWriteBarrier((&___ordinal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T3301955079_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef THREADSAFESTORE_2_T4165332627_H
#define THREADSAFESTORE_2_T4165332627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>>
struct  ThreadSafeStore_2_t4165332627  : public RuntimeObject
{
public:
	// System.Object Newtonsoft.Json.Utilities.ThreadSafeStore`2::_lock
	RuntimeObject * ____lock_0;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Newtonsoft.Json.Utilities.ThreadSafeStore`2::_store
	Dictionary_2_t3231400531 * ____store_1;
	// System.Func`2<TKey,TValue> Newtonsoft.Json.Utilities.ThreadSafeStore`2::_creator
	Func_2_t1251018457 * ____creator_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t4165332627, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}

	inline static int32_t get_offset_of__store_1() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t4165332627, ____store_1)); }
	inline Dictionary_2_t3231400531 * get__store_1() const { return ____store_1; }
	inline Dictionary_2_t3231400531 ** get_address_of__store_1() { return &____store_1; }
	inline void set__store_1(Dictionary_2_t3231400531 * value)
	{
		____store_1 = value;
		Il2CppCodeGenWriteBarrier((&____store_1), value);
	}

	inline static int32_t get_offset_of__creator_2() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t4165332627, ____creator_2)); }
	inline Func_2_t1251018457 * get__creator_2() const { return ____creator_2; }
	inline Func_2_t1251018457 ** get_address_of__creator_2() { return &____creator_2; }
	inline void set__creator_2(Func_2_t1251018457 * value)
	{
		____creator_2 = value;
		Il2CppCodeGenWriteBarrier((&____creator_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSAFESTORE_2_T4165332627_H
#ifndef JSONTOKENUTILS_T2823043526_H
#define JSONTOKENUTILS_T2823043526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.JsonTokenUtils
struct  JsonTokenUtils_t2823043526  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONTOKENUTILS_T2823043526_H
#ifndef REFLECTIONDELEGATEFACTORY_T2528576452_H
#define REFLECTIONDELEGATEFACTORY_T2528576452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct  ReflectionDelegateFactory_t2528576452  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONDELEGATEFACTORY_T2528576452_H
#ifndef JAVASCRIPTUTILS_T1108575081_H
#define JAVASCRIPTUTILS_T1108575081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.JavaScriptUtils
struct  JavaScriptUtils_t1108575081  : public RuntimeObject
{
public:

public:
};

struct JavaScriptUtils_t1108575081_StaticFields
{
public:
	// System.Boolean[] Newtonsoft.Json.Utilities.JavaScriptUtils::SingleQuoteCharEscapeFlags
	BooleanU5BU5D_t2897418192* ___SingleQuoteCharEscapeFlags_0;
	// System.Boolean[] Newtonsoft.Json.Utilities.JavaScriptUtils::DoubleQuoteCharEscapeFlags
	BooleanU5BU5D_t2897418192* ___DoubleQuoteCharEscapeFlags_1;
	// System.Boolean[] Newtonsoft.Json.Utilities.JavaScriptUtils::HtmlCharEscapeFlags
	BooleanU5BU5D_t2897418192* ___HtmlCharEscapeFlags_2;

public:
	inline static int32_t get_offset_of_SingleQuoteCharEscapeFlags_0() { return static_cast<int32_t>(offsetof(JavaScriptUtils_t1108575081_StaticFields, ___SingleQuoteCharEscapeFlags_0)); }
	inline BooleanU5BU5D_t2897418192* get_SingleQuoteCharEscapeFlags_0() const { return ___SingleQuoteCharEscapeFlags_0; }
	inline BooleanU5BU5D_t2897418192** get_address_of_SingleQuoteCharEscapeFlags_0() { return &___SingleQuoteCharEscapeFlags_0; }
	inline void set_SingleQuoteCharEscapeFlags_0(BooleanU5BU5D_t2897418192* value)
	{
		___SingleQuoteCharEscapeFlags_0 = value;
		Il2CppCodeGenWriteBarrier((&___SingleQuoteCharEscapeFlags_0), value);
	}

	inline static int32_t get_offset_of_DoubleQuoteCharEscapeFlags_1() { return static_cast<int32_t>(offsetof(JavaScriptUtils_t1108575081_StaticFields, ___DoubleQuoteCharEscapeFlags_1)); }
	inline BooleanU5BU5D_t2897418192* get_DoubleQuoteCharEscapeFlags_1() const { return ___DoubleQuoteCharEscapeFlags_1; }
	inline BooleanU5BU5D_t2897418192** get_address_of_DoubleQuoteCharEscapeFlags_1() { return &___DoubleQuoteCharEscapeFlags_1; }
	inline void set_DoubleQuoteCharEscapeFlags_1(BooleanU5BU5D_t2897418192* value)
	{
		___DoubleQuoteCharEscapeFlags_1 = value;
		Il2CppCodeGenWriteBarrier((&___DoubleQuoteCharEscapeFlags_1), value);
	}

	inline static int32_t get_offset_of_HtmlCharEscapeFlags_2() { return static_cast<int32_t>(offsetof(JavaScriptUtils_t1108575081_StaticFields, ___HtmlCharEscapeFlags_2)); }
	inline BooleanU5BU5D_t2897418192* get_HtmlCharEscapeFlags_2() const { return ___HtmlCharEscapeFlags_2; }
	inline BooleanU5BU5D_t2897418192** get_address_of_HtmlCharEscapeFlags_2() { return &___HtmlCharEscapeFlags_2; }
	inline void set_HtmlCharEscapeFlags_2(BooleanU5BU5D_t2897418192* value)
	{
		___HtmlCharEscapeFlags_2 = value;
		Il2CppCodeGenWriteBarrier((&___HtmlCharEscapeFlags_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JAVASCRIPTUTILS_T1108575081_H
#ifndef LIST_1_T811567916_H
#define LIST_1_T811567916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Char>
struct  List_1_t811567916  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CharU5BU5D_t3528271667* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t811567916, ____items_1)); }
	inline CharU5BU5D_t3528271667* get__items_1() const { return ____items_1; }
	inline CharU5BU5D_t3528271667** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CharU5BU5D_t3528271667* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t811567916, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t811567916, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t811567916_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	CharU5BU5D_t3528271667* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t811567916_StaticFields, ___EmptyArray_4)); }
	inline CharU5BU5D_t3528271667* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline CharU5BU5D_t3528271667** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(CharU5BU5D_t3528271667* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T811567916_H
#ifndef U3CU3EC__DISPLAYCLASS13_2_T381376305_H
#define U3CU3EC__DISPLAYCLASS13_2_T381376305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2
struct  U3CU3Ec__DisplayClass13_2_t381376305  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2::call
	MethodCall_2_t2845904993 * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_2_t381376305, ___call_0)); }
	inline MethodCall_2_t2845904993 * get_call_0() const { return ___call_0; }
	inline MethodCall_2_t2845904993 ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_t2845904993 * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((&___call_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS13_2_T381376305_H
#ifndef STRINGUTILS_T1417415125_H
#define STRINGUTILS_T1417415125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.StringUtils
struct  StringUtils_t1417415125  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGUTILS_T1417415125_H
#ifndef TYPEEXTENSIONS_T264900522_H
#define TYPEEXTENSIONS_T264900522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.TypeExtensions
struct  TypeExtensions_t264900522  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEEXTENSIONS_T264900522_H
#ifndef U3CU3EC__DISPLAYCLASS43_0_T549567113_H
#define U3CU3EC__DISPLAYCLASS43_0_T549567113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0
struct  U3CU3Ec__DisplayClass43_0_t549567113  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS43_0_T549567113_H
#ifndef STRINGREFERENCEEXTENSIONS_T239632904_H
#define STRINGREFERENCEEXTENSIONS_T239632904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.StringReferenceExtensions
struct  StringReferenceExtensions_t239632904  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGREFERENCEEXTENSIONS_T239632904_H
#ifndef VALIDATIONUTILS_T3235219861_H
#define VALIDATIONUTILS_T3235219861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ValidationUtils
struct  ValidationUtils_t3235219861  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATIONUTILS_T3235219861_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ADDINGNEWEVENTARGS_T2974299087_H
#define ADDINGNEWEVENTARGS_T2974299087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AddingNewEventArgs
struct  AddingNewEventArgs_t2974299087  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDINGNEWEVENTARGS_T2974299087_H
#ifndef NOTIFYCOLLECTIONCHANGEDEVENTARGS_T1368105863_H
#define NOTIFYCOLLECTIONCHANGEDEVENTARGS_T1368105863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NotifyCollectionChangedEventArgs
struct  NotifyCollectionChangedEventArgs_t1368105863  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYCOLLECTIONCHANGEDEVENTARGS_T1368105863_H
#ifndef U3CU3EC__DISPLAYCLASS42_0_T549567114_H
#define U3CU3EC__DISPLAYCLASS42_0_T549567114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0
struct  U3CU3Ec__DisplayClass42_0_t549567114  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::subTypeProperty
	PropertyInfo_t * ___subTypeProperty_0;

public:
	inline static int32_t get_offset_of_subTypeProperty_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass42_0_t549567114, ___subTypeProperty_0)); }
	inline PropertyInfo_t * get_subTypeProperty_0() const { return ___subTypeProperty_0; }
	inline PropertyInfo_t ** get_address_of_subTypeProperty_0() { return &___subTypeProperty_0; }
	inline void set_subTypeProperty_0(PropertyInfo_t * value)
	{
		___subTypeProperty_0 = value;
		Il2CppCodeGenWriteBarrier((&___subTypeProperty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS42_0_T549567114_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef U3CU3EC_T3587133118_H
#define U3CU3EC_T3587133118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionUtils/<>c
struct  U3CU3Ec_t3587133118  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3587133118_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.ReflectionUtils/<>c Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9
	U3CU3Ec_t3587133118 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__10_0
	Func_2_t1796590042 * ___U3CU3E9__10_0_1;
	// System.Func`2<System.Reflection.MemberInfo,System.String> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__29_0
	Func_2_t3967597302 * ___U3CU3E9__29_0_2;
	// System.Func`2<System.Reflection.ParameterInfo,System.Type> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__37_0
	Func_2_t3692615456 * ___U3CU3E9__37_0_3;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__39_0
	Func_2_t1761491126 * ___U3CU3E9__39_0_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3587133118_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3587133118 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3587133118 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3587133118 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3587133118_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Func_2_t1796590042 * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Func_2_t1796590042 ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Func_2_t1796590042 * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__10_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3587133118_StaticFields, ___U3CU3E9__29_0_2)); }
	inline Func_2_t3967597302 * get_U3CU3E9__29_0_2() const { return ___U3CU3E9__29_0_2; }
	inline Func_2_t3967597302 ** get_address_of_U3CU3E9__29_0_2() { return &___U3CU3E9__29_0_2; }
	inline void set_U3CU3E9__29_0_2(Func_2_t3967597302 * value)
	{
		___U3CU3E9__29_0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__29_0_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3587133118_StaticFields, ___U3CU3E9__37_0_3)); }
	inline Func_2_t3692615456 * get_U3CU3E9__37_0_3() const { return ___U3CU3E9__37_0_3; }
	inline Func_2_t3692615456 ** get_address_of_U3CU3E9__37_0_3() { return &___U3CU3E9__37_0_3; }
	inline void set_U3CU3E9__37_0_3(Func_2_t3692615456 * value)
	{
		___U3CU3E9__37_0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__37_0_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__39_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3587133118_StaticFields, ___U3CU3E9__39_0_4)); }
	inline Func_2_t1761491126 * get_U3CU3E9__39_0_4() const { return ___U3CU3E9__39_0_4; }
	inline Func_2_t1761491126 ** get_address_of_U3CU3E9__39_0_4() { return &___U3CU3E9__39_0_4; }
	inline void set_U3CU3E9__39_0_4(Func_2_t1761491126 * value)
	{
		___U3CU3E9__39_0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__39_0_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3587133118_H
#ifndef REFLECTIONUTILS_T2669115404_H
#define REFLECTIONUTILS_T2669115404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionUtils
struct  ReflectionUtils_t2669115404  : public RuntimeObject
{
public:

public:
};

struct ReflectionUtils_t2669115404_StaticFields
{
public:
	// System.Type[] Newtonsoft.Json.Utilities.ReflectionUtils::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_0;

public:
	inline static int32_t get_offset_of_EmptyTypes_0() { return static_cast<int32_t>(offsetof(ReflectionUtils_t2669115404_StaticFields, ___EmptyTypes_0)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_0() const { return ___EmptyTypes_0; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_0() { return &___EmptyTypes_0; }
	inline void set_EmptyTypes_0(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_0 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONUTILS_T2669115404_H
#ifndef SERIALIZATIONBINDER_T274213469_H
#define SERIALIZATIONBINDER_T274213469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationBinder
struct  SerializationBinder_t274213469  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONBINDER_T274213469_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef BINDER_T2999457153_H
#define BINDER_T2999457153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder
struct  Binder_t2999457153  : public RuntimeObject
{
public:

public:
};

struct Binder_t2999457153_StaticFields
{
public:
	// System.Reflection.Binder System.Reflection.Binder::default_binder
	Binder_t2999457153 * ___default_binder_0;

public:
	inline static int32_t get_offset_of_default_binder_0() { return static_cast<int32_t>(offsetof(Binder_t2999457153_StaticFields, ___default_binder_0)); }
	inline Binder_t2999457153 * get_default_binder_0() const { return ___default_binder_0; }
	inline Binder_t2999457153 ** get_address_of_default_binder_0() { return &___default_binder_0; }
	inline void set_default_binder_0(Binder_t2999457153 * value)
	{
		___default_binder_0 = value;
		Il2CppCodeGenWriteBarrier((&___default_binder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDER_T2999457153_H
#ifndef LIST_1_T2159416693_H
#define LIST_1_T2159416693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Reflection.PropertyInfo>
struct  List_1_t2159416693  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PropertyInfoU5BU5D_t1461822886* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2159416693, ____items_1)); }
	inline PropertyInfoU5BU5D_t1461822886* get__items_1() const { return ____items_1; }
	inline PropertyInfoU5BU5D_t1461822886** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PropertyInfoU5BU5D_t1461822886* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2159416693, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2159416693, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2159416693_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	PropertyInfoU5BU5D_t1461822886* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2159416693_StaticFields, ___EmptyArray_4)); }
	inline PropertyInfoU5BU5D_t1461822886* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline PropertyInfoU5BU5D_t1461822886** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(PropertyInfoU5BU5D_t1461822886* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2159416693_H
#ifndef LIST_1_T557109187_H
#define LIST_1_T557109187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct  List_1_t557109187  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MemberInfoU5BU5D_t1302094432* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t557109187, ____items_1)); }
	inline MemberInfoU5BU5D_t1302094432* get__items_1() const { return ____items_1; }
	inline MemberInfoU5BU5D_t1302094432** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MemberInfoU5BU5D_t1302094432* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t557109187, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t557109187, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t557109187_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MemberInfoU5BU5D_t1302094432* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t557109187_StaticFields, ___EmptyArray_4)); }
	inline MemberInfoU5BU5D_t1302094432* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MemberInfoU5BU5D_t1302094432** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MemberInfoU5BU5D_t1302094432* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T557109187_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef BIDIRECTIONALDICTIONARY_2_T787053467_H
#define BIDIRECTIONALDICTIONARY_2_T787053467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>
struct  BidirectionalDictionary_2_t787053467  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TFirst,TSecond> Newtonsoft.Json.Utilities.BidirectionalDictionary`2::_firstToSecond
	RuntimeObject* ____firstToSecond_0;
	// System.Collections.Generic.IDictionary`2<TSecond,TFirst> Newtonsoft.Json.Utilities.BidirectionalDictionary`2::_secondToFirst
	RuntimeObject* ____secondToFirst_1;
	// System.String Newtonsoft.Json.Utilities.BidirectionalDictionary`2::_duplicateFirstErrorMessage
	String_t* ____duplicateFirstErrorMessage_2;
	// System.String Newtonsoft.Json.Utilities.BidirectionalDictionary`2::_duplicateSecondErrorMessage
	String_t* ____duplicateSecondErrorMessage_3;

public:
	inline static int32_t get_offset_of__firstToSecond_0() { return static_cast<int32_t>(offsetof(BidirectionalDictionary_2_t787053467, ____firstToSecond_0)); }
	inline RuntimeObject* get__firstToSecond_0() const { return ____firstToSecond_0; }
	inline RuntimeObject** get_address_of__firstToSecond_0() { return &____firstToSecond_0; }
	inline void set__firstToSecond_0(RuntimeObject* value)
	{
		____firstToSecond_0 = value;
		Il2CppCodeGenWriteBarrier((&____firstToSecond_0), value);
	}

	inline static int32_t get_offset_of__secondToFirst_1() { return static_cast<int32_t>(offsetof(BidirectionalDictionary_2_t787053467, ____secondToFirst_1)); }
	inline RuntimeObject* get__secondToFirst_1() const { return ____secondToFirst_1; }
	inline RuntimeObject** get_address_of__secondToFirst_1() { return &____secondToFirst_1; }
	inline void set__secondToFirst_1(RuntimeObject* value)
	{
		____secondToFirst_1 = value;
		Il2CppCodeGenWriteBarrier((&____secondToFirst_1), value);
	}

	inline static int32_t get_offset_of__duplicateFirstErrorMessage_2() { return static_cast<int32_t>(offsetof(BidirectionalDictionary_2_t787053467, ____duplicateFirstErrorMessage_2)); }
	inline String_t* get__duplicateFirstErrorMessage_2() const { return ____duplicateFirstErrorMessage_2; }
	inline String_t** get_address_of__duplicateFirstErrorMessage_2() { return &____duplicateFirstErrorMessage_2; }
	inline void set__duplicateFirstErrorMessage_2(String_t* value)
	{
		____duplicateFirstErrorMessage_2 = value;
		Il2CppCodeGenWriteBarrier((&____duplicateFirstErrorMessage_2), value);
	}

	inline static int32_t get_offset_of__duplicateSecondErrorMessage_3() { return static_cast<int32_t>(offsetof(BidirectionalDictionary_2_t787053467, ____duplicateSecondErrorMessage_3)); }
	inline String_t* get__duplicateSecondErrorMessage_3() const { return ____duplicateSecondErrorMessage_3; }
	inline String_t** get_address_of__duplicateSecondErrorMessage_3() { return &____duplicateSecondErrorMessage_3; }
	inline void set__duplicateSecondErrorMessage_3(String_t* value)
	{
		____duplicateSecondErrorMessage_3 = value;
		Il2CppCodeGenWriteBarrier((&____duplicateSecondErrorMessage_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIDIRECTIONALDICTIONARY_2_T787053467_H
#ifndef TIMEZONE_T2038656743_H
#define TIMEZONE_T2038656743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t2038656743  : public RuntimeObject
{
public:

public:
};

struct TimeZone_t2038656743_StaticFields
{
public:
	// System.TimeZone System.TimeZone::currentTimeZone
	TimeZone_t2038656743 * ___currentTimeZone_0;
	// System.Object System.TimeZone::tz_lock
	RuntimeObject * ___tz_lock_1;
	// System.Int64 System.TimeZone::timezone_check
	int64_t ___timezone_check_2;

public:
	inline static int32_t get_offset_of_currentTimeZone_0() { return static_cast<int32_t>(offsetof(TimeZone_t2038656743_StaticFields, ___currentTimeZone_0)); }
	inline TimeZone_t2038656743 * get_currentTimeZone_0() const { return ___currentTimeZone_0; }
	inline TimeZone_t2038656743 ** get_address_of_currentTimeZone_0() { return &___currentTimeZone_0; }
	inline void set_currentTimeZone_0(TimeZone_t2038656743 * value)
	{
		___currentTimeZone_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentTimeZone_0), value);
	}

	inline static int32_t get_offset_of_tz_lock_1() { return static_cast<int32_t>(offsetof(TimeZone_t2038656743_StaticFields, ___tz_lock_1)); }
	inline RuntimeObject * get_tz_lock_1() const { return ___tz_lock_1; }
	inline RuntimeObject ** get_address_of_tz_lock_1() { return &___tz_lock_1; }
	inline void set_tz_lock_1(RuntimeObject * value)
	{
		___tz_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___tz_lock_1), value);
	}

	inline static int32_t get_offset_of_timezone_check_2() { return static_cast<int32_t>(offsetof(TimeZone_t2038656743_StaticFields, ___timezone_check_2)); }
	inline int64_t get_timezone_check_2() const { return ___timezone_check_2; }
	inline int64_t* get_address_of_timezone_check_2() { return &___timezone_check_2; }
	inline void set_timezone_check_2(int64_t value)
	{
		___timezone_check_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONE_T2038656743_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef TEXTWRITER_T3478189236_H
#define TEXTWRITER_T3478189236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t3478189236  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3528271667* ___CoreNewLine_0;
	// System.IFormatProvider System.IO.TextWriter::internalFormatProvider
	RuntimeObject* ___internalFormatProvider_1;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___CoreNewLine_0)); }
	inline CharU5BU5D_t3528271667* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t3528271667** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t3528271667* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}

	inline static int32_t get_offset_of_internalFormatProvider_1() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___internalFormatProvider_1)); }
	inline RuntimeObject* get_internalFormatProvider_1() const { return ___internalFormatProvider_1; }
	inline RuntimeObject** get_address_of_internalFormatProvider_1() { return &___internalFormatProvider_1; }
	inline void set_internalFormatProvider_1(RuntimeObject* value)
	{
		___internalFormatProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___internalFormatProvider_1), value);
	}
};

struct TextWriter_t3478189236_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t3478189236 * ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ___Null_2)); }
	inline TextWriter_t3478189236 * get_Null_2() const { return ___Null_2; }
	inline TextWriter_t3478189236 ** get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(TextWriter_t3478189236 * value)
	{
		___Null_2 = value;
		Il2CppCodeGenWriteBarrier((&___Null_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T3478189236_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef ENUMUTILS_T2002471470_H
#define ENUMUTILS_T2002471470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.EnumUtils
struct  EnumUtils_t2002471470  : public RuntimeObject
{
public:

public:
};

struct EnumUtils_t2002471470_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>> Newtonsoft.Json.Utilities.EnumUtils::EnumMemberNamesPerType
	ThreadSafeStore_2_t4165332627 * ___EnumMemberNamesPerType_0;

public:
	inline static int32_t get_offset_of_EnumMemberNamesPerType_0() { return static_cast<int32_t>(offsetof(EnumUtils_t2002471470_StaticFields, ___EnumMemberNamesPerType_0)); }
	inline ThreadSafeStore_2_t4165332627 * get_EnumMemberNamesPerType_0() const { return ___EnumMemberNamesPerType_0; }
	inline ThreadSafeStore_2_t4165332627 ** get_address_of_EnumMemberNamesPerType_0() { return &___EnumMemberNamesPerType_0; }
	inline void set_EnumMemberNamesPerType_0(ThreadSafeStore_2_t4165332627 * value)
	{
		___EnumMemberNamesPerType_0 = value;
		Il2CppCodeGenWriteBarrier((&___EnumMemberNamesPerType_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMUTILS_T2002471470_H
#ifndef U3CU3EC__DISPLAYCLASS9_0_T1591754542_H
#define U3CU3EC__DISPLAYCLASS9_0_T1591754542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass9_0
struct  U3CU3Ec__DisplayClass9_0_t1591754542  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass9_0::call
	MethodCall_2_t2845904993 * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t1591754542, ___call_0)); }
	inline MethodCall_2_t2845904993 * get_call_0() const { return ___call_0; }
	inline MethodCall_2_t2845904993 ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_t2845904993 * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((&___call_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS9_0_T1591754542_H
#ifndef DATETIMEUTILS_T3515429982_H
#define DATETIMEUTILS_T3515429982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.DateTimeUtils
struct  DateTimeUtils_t3515429982  : public RuntimeObject
{
public:

public:
};

struct DateTimeUtils_t3515429982_StaticFields
{
public:
	// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::InitialJavaScriptDateTicks
	int64_t ___InitialJavaScriptDateTicks_0;
	// System.Int32[] Newtonsoft.Json.Utilities.DateTimeUtils::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_1;
	// System.Int32[] Newtonsoft.Json.Utilities.DateTimeUtils::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_2;

public:
	inline static int32_t get_offset_of_InitialJavaScriptDateTicks_0() { return static_cast<int32_t>(offsetof(DateTimeUtils_t3515429982_StaticFields, ___InitialJavaScriptDateTicks_0)); }
	inline int64_t get_InitialJavaScriptDateTicks_0() const { return ___InitialJavaScriptDateTicks_0; }
	inline int64_t* get_address_of_InitialJavaScriptDateTicks_0() { return &___InitialJavaScriptDateTicks_0; }
	inline void set_InitialJavaScriptDateTicks_0(int64_t value)
	{
		___InitialJavaScriptDateTicks_0 = value;
	}

	inline static int32_t get_offset_of_DaysToMonth365_1() { return static_cast<int32_t>(offsetof(DateTimeUtils_t3515429982_StaticFields, ___DaysToMonth365_1)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_1() const { return ___DaysToMonth365_1; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_1() { return &___DaysToMonth365_1; }
	inline void set_DaysToMonth365_1(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_1 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_1), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_2() { return static_cast<int32_t>(offsetof(DateTimeUtils_t3515429982_StaticFields, ___DaysToMonth366_2)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_2() const { return ___DaysToMonth366_2; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_2() { return &___DaysToMonth366_2; }
	inline void set_DaysToMonth366_2(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_2 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEUTILS_T3515429982_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef STRINGREFERENCE_T2912309144_H
#define STRINGREFERENCE_T2912309144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.StringReference
struct  StringReference_t2912309144 
{
public:
	// System.Char[] Newtonsoft.Json.Utilities.StringReference::_chars
	CharU5BU5D_t3528271667* ____chars_0;
	// System.Int32 Newtonsoft.Json.Utilities.StringReference::_startIndex
	int32_t ____startIndex_1;
	// System.Int32 Newtonsoft.Json.Utilities.StringReference::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__chars_0() { return static_cast<int32_t>(offsetof(StringReference_t2912309144, ____chars_0)); }
	inline CharU5BU5D_t3528271667* get__chars_0() const { return ____chars_0; }
	inline CharU5BU5D_t3528271667** get_address_of__chars_0() { return &____chars_0; }
	inline void set__chars_0(CharU5BU5D_t3528271667* value)
	{
		____chars_0 = value;
		Il2CppCodeGenWriteBarrier((&____chars_0), value);
	}

	inline static int32_t get_offset_of__startIndex_1() { return static_cast<int32_t>(offsetof(StringReference_t2912309144, ____startIndex_1)); }
	inline int32_t get__startIndex_1() const { return ____startIndex_1; }
	inline int32_t* get_address_of__startIndex_1() { return &____startIndex_1; }
	inline void set__startIndex_1(int32_t value)
	{
		____startIndex_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(StringReference_t2912309144, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.StringReference
struct StringReference_t2912309144_marshaled_pinvoke
{
	uint8_t* ____chars_0;
	int32_t ____startIndex_1;
	int32_t ____length_2;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.StringReference
struct StringReference_t2912309144_marshaled_com
{
	uint8_t* ____chars_0;
	int32_t ____startIndex_1;
	int32_t ____length_2;
};
#endif // STRINGREFERENCE_T2912309144_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_2)); }
	inline uint64_t get_m_value_2() const { return ___m_value_2; }
	inline uint64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_6;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_7;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_8;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_9;

public:
	inline static int32_t get_offset_of_flags_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_6)); }
	inline uint32_t get_flags_6() const { return ___flags_6; }
	inline uint32_t* get_address_of_flags_6() { return &___flags_6; }
	inline void set_flags_6(uint32_t value)
	{
		___flags_6 = value;
	}

	inline static int32_t get_offset_of_hi_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_7)); }
	inline uint32_t get_hi_7() const { return ___hi_7; }
	inline uint32_t* get_address_of_hi_7() { return &___hi_7; }
	inline void set_hi_7(uint32_t value)
	{
		___hi_7 = value;
	}

	inline static int32_t get_offset_of_lo_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_8)); }
	inline uint32_t get_lo_8() const { return ___lo_8; }
	inline uint32_t* get_address_of_lo_8() { return &___lo_8; }
	inline void set_lo_8(uint32_t value)
	{
		___lo_8 = value;
	}

	inline static int32_t get_offset_of_mid_9() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_9)); }
	inline uint32_t get_mid_9() const { return ___mid_9; }
	inline uint32_t* get_address_of_mid_9() { return &___mid_9; }
	inline void set_mid_9(uint32_t value)
	{
		___mid_9 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::Zero
	Decimal_t2948259380  ___Zero_4;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_5;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Zero_4)); }
	inline Decimal_t2948259380  get_Zero_4() const { return ___Zero_4; }
	inline Decimal_t2948259380 * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(Decimal_t2948259380  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_5)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_5() const { return ___MaxValueDiv10_5; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_5() { return &___MaxValueDiv10_5; }
	inline void set_MaxValueDiv10_5(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef STRINGBUFFER_T2235727887_H
#define STRINGBUFFER_T2235727887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.StringBuffer
struct  StringBuffer_t2235727887 
{
public:
	// System.Char[] Newtonsoft.Json.Utilities.StringBuffer::_buffer
	CharU5BU5D_t3528271667* ____buffer_0;
	// System.Int32 Newtonsoft.Json.Utilities.StringBuffer::_position
	int32_t ____position_1;

public:
	inline static int32_t get_offset_of__buffer_0() { return static_cast<int32_t>(offsetof(StringBuffer_t2235727887, ____buffer_0)); }
	inline CharU5BU5D_t3528271667* get__buffer_0() const { return ____buffer_0; }
	inline CharU5BU5D_t3528271667** get_address_of__buffer_0() { return &____buffer_0; }
	inline void set__buffer_0(CharU5BU5D_t3528271667* value)
	{
		____buffer_0 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_0), value);
	}

	inline static int32_t get_offset_of__position_1() { return static_cast<int32_t>(offsetof(StringBuffer_t2235727887, ____position_1)); }
	inline int32_t get__position_1() const { return ____position_1; }
	inline int32_t* get_address_of__position_1() { return &____position_1; }
	inline void set__position_1(int32_t value)
	{
		____position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.StringBuffer
struct StringBuffer_t2235727887_marshaled_pinvoke
{
	uint8_t* ____buffer_0;
	int32_t ____position_1;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.StringBuffer
struct StringBuffer_t2235727887_marshaled_com
{
	uint8_t* ____buffer_0;
	int32_t ____position_1;
};
#endif // STRINGBUFFER_T2235727887_H
#ifndef __STATICARRAYINITTYPESIZEU3D28_T1904621871_H
#define __STATICARRAYINITTYPESIZEU3D28_T1904621871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct  __StaticArrayInitTypeSizeU3D28_t1904621871 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t1904621871__padding[28];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D28_T1904621871_H
#ifndef EVENTINFO_T_H
#define EVENTINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo
struct  EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t1787725097 * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t1787725097 * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t1787725097 ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t1787725097 * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((&___cached_add_event_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTINFO_T_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef TARGETPARAMETERCOUNTEXCEPTION_T1216617239_H
#define TARGETPARAMETERCOUNTEXCEPTION_T1216617239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetParameterCountException
struct  TargetParameterCountException_t1216617239  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETPARAMETERCOUNTEXCEPTION_T1216617239_H
#ifndef PARAMETERMODIFIER_T1461694466_H
#define PARAMETERMODIFIER_T1461694466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t1461694466 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byref
	BooleanU5BU5D_t2897418192* ____byref_0;

public:
	inline static int32_t get_offset_of__byref_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t1461694466, ____byref_0)); }
	inline BooleanU5BU5D_t2897418192* get__byref_0() const { return ____byref_0; }
	inline BooleanU5BU5D_t2897418192** get_address_of__byref_0() { return &____byref_0; }
	inline void set__byref_0(BooleanU5BU5D_t2897418192* value)
	{
		____byref_0 = value;
		Il2CppCodeGenWriteBarrier((&____byref_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_pinvoke
{
	int32_t* ____byref_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_com
{
	int32_t* ____byref_0;
};
#endif // PARAMETERMODIFIER_T1461694466_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef __STATICARRAYINITTYPESIZEU3D52_T2710732173_H
#define __STATICARRAYINITTYPESIZEU3D52_T2710732173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct  __StaticArrayInitTypeSizeU3D52_t2710732173 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t2710732173__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D52_T2710732173_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef TYPECONVERTKEY_T285306760_H
#define TYPECONVERTKEY_T285306760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct  TypeConvertKey_t285306760 
{
public:
	// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::_initialType
	Type_t * ____initialType_0;
	// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::_targetType
	Type_t * ____targetType_1;

public:
	inline static int32_t get_offset_of__initialType_0() { return static_cast<int32_t>(offsetof(TypeConvertKey_t285306760, ____initialType_0)); }
	inline Type_t * get__initialType_0() const { return ____initialType_0; }
	inline Type_t ** get_address_of__initialType_0() { return &____initialType_0; }
	inline void set__initialType_0(Type_t * value)
	{
		____initialType_0 = value;
		Il2CppCodeGenWriteBarrier((&____initialType_0), value);
	}

	inline static int32_t get_offset_of__targetType_1() { return static_cast<int32_t>(offsetof(TypeConvertKey_t285306760, ____targetType_1)); }
	inline Type_t * get__targetType_1() const { return ____targetType_1; }
	inline Type_t ** get_address_of__targetType_1() { return &____targetType_1; }
	inline void set__targetType_1(Type_t * value)
	{
		____targetType_1 = value;
		Il2CppCodeGenWriteBarrier((&____targetType_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t285306760_marshaled_pinvoke
{
	Type_t * ____initialType_0;
	Type_t * ____targetType_1;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t285306760_marshaled_com
{
	Type_t * ____initialType_0;
	Type_t * ____targetType_1;
};
#endif // TYPECONVERTKEY_T285306760_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef PROPERTYCHANGINGEVENTARGS_T2067745136_H
#define PROPERTYCHANGINGEVENTARGS_T2067745136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangingEventArgs
struct  PropertyChangingEventArgs_t2067745136  : public EventArgs_t3591816995
{
public:
	// System.String System.ComponentModel.PropertyChangingEventArgs::<PropertyName>k__BackingField
	String_t* ___U3CPropertyNameU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CPropertyNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PropertyChangingEventArgs_t2067745136, ___U3CPropertyNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CPropertyNameU3Ek__BackingField_1() const { return ___U3CPropertyNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CPropertyNameU3Ek__BackingField_1() { return &___U3CPropertyNameU3Ek__BackingField_1; }
	inline void set_U3CPropertyNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CPropertyNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPropertyNameU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGINGEVENTARGS_T2067745136_H
#ifndef __STATICARRAYINITTYPESIZEU3D10_T1548194903_H
#define __STATICARRAYINITTYPESIZEU3D10_T1548194903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct  __StaticArrayInitTypeSizeU3D10_t1548194903 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t1548194903__padding[10];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D10_T1548194903_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef __STATICARRAYINITTYPESIZEU3D12_T2710994317_H
#define __STATICARRAYINITTYPESIZEU3D12_T2710994317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct  __StaticArrayInitTypeSizeU3D12_t2710994317 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t2710994317__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D12_T2710994317_H
#ifndef ENUMMEMBERATTRIBUTE_T1084128815_H
#define ENUMMEMBERATTRIBUTE_T1084128815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.EnumMemberAttribute
struct  EnumMemberAttribute_t1084128815  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.Serialization.EnumMemberAttribute::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(EnumMemberAttribute_t1084128815, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMMEMBERATTRIBUTE_T1084128815_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef LATEBOUNDREFLECTIONDELEGATEFACTORY_T925499913_H
#define LATEBOUNDREFLECTIONDELEGATEFACTORY_T925499913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory
struct  LateBoundReflectionDelegateFactory_t925499913  : public ReflectionDelegateFactory_t2528576452
{
public:

public:
};

struct LateBoundReflectionDelegateFactory_t925499913_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory::_instance
	LateBoundReflectionDelegateFactory_t925499913 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(LateBoundReflectionDelegateFactory_t925499913_StaticFields, ____instance_0)); }
	inline LateBoundReflectionDelegateFactory_t925499913 * get__instance_0() const { return ____instance_0; }
	inline LateBoundReflectionDelegateFactory_t925499913 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(LateBoundReflectionDelegateFactory_t925499913 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((&____instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATEBOUNDREFLECTIONDELEGATEFACTORY_T925499913_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef NULLABLE_1_T378540539_H
#define NULLABLE_1_T378540539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t378540539 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T378540539_H
#ifndef STRINGWRITER_T802263757_H
#define STRINGWRITER_T802263757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringWriter
struct  StringWriter_t802263757  : public TextWriter_t3478189236
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_internalString_3() { return static_cast<int32_t>(offsetof(StringWriter_t802263757, ___internalString_3)); }
	inline StringBuilder_t * get_internalString_3() const { return ___internalString_3; }
	inline StringBuilder_t ** get_address_of_internalString_3() { return &___internalString_3; }
	inline void set_internalString_3(StringBuilder_t * value)
	{
		___internalString_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalString_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(StringWriter_t802263757, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGWRITER_T802263757_H
#ifndef FORMATTERASSEMBLYSTYLE_T868039825_H
#define FORMATTERASSEMBLYSTYLE_T868039825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t868039825 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t868039825, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERASSEMBLYSTYLE_T868039825_H
#ifndef CONVERTRESULT_T708652650_H
#define CONVERTRESULT_T708652650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult
struct  ConvertResult_t708652650 
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConvertResult_t708652650, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERTRESULT_T708652650_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef PARAMETERATTRIBUTES_T1826424051_H
#define PARAMETERATTRIBUTES_T1826424051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1826424051 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1826424051, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERATTRIBUTES_T1826424051_H
#ifndef PARSERTIMEZONE_T1439545141_H
#define PARSERTIMEZONE_T1439545141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ParserTimeZone
struct  ParserTimeZone_t1439545141 
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.ParserTimeZone::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParserTimeZone_t1439545141, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSERTIMEZONE_T1439545141_H
#ifndef NOTIFYCOLLECTIONCHANGEDACTION_T2928948188_H
#define NOTIFYCOLLECTIONCHANGEDACTION_T2928948188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NotifyCollectionChangedAction
struct  NotifyCollectionChangedAction_t2928948188 
{
public:
	// System.Int32 System.ComponentModel.NotifyCollectionChangedAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedAction_t2928948188, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYCOLLECTIONCHANGEDACTION_T2928948188_H
#ifndef WRITESTATE_T2626176463_H
#define WRITESTATE_T2626176463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.WriteState
struct  WriteState_t2626176463 
{
public:
	// System.Int32 Newtonsoft.Json.WriteState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WriteState_t2626176463, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITESTATE_T2626176463_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255367  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::9E31F24F64765FCAA589F589324D17C9FCF6A06D
	__StaticArrayInitTypeSizeU3D28_t1904621871  ___9E31F24F64765FCAA589F589324D17C9FCF6A06D_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::ADFD2E1C801C825415DD53F4F2F72A13B389313C
	__StaticArrayInitTypeSizeU3D12_t2710994317  ___ADFD2E1C801C825415DD53F4F2F72A13B389313C_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB
	__StaticArrayInitTypeSizeU3D10_t1548194903  ___D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::DD3AEFEADB1CD615F3017763F1568179FEE640B0
	__StaticArrayInitTypeSizeU3D52_t2710732173  ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::E92B39D8233061927D9ACDE54665E68E7535635A
	__StaticArrayInitTypeSizeU3D52_t2710732173  ___E92B39D8233061927D9ACDE54665E68E7535635A_4;

public:
	inline static int32_t get_offset_of_U39E31F24F64765FCAA589F589324D17C9FCF6A06D_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___9E31F24F64765FCAA589F589324D17C9FCF6A06D_0)); }
	inline __StaticArrayInitTypeSizeU3D28_t1904621871  get_U39E31F24F64765FCAA589F589324D17C9FCF6A06D_0() const { return ___9E31F24F64765FCAA589F589324D17C9FCF6A06D_0; }
	inline __StaticArrayInitTypeSizeU3D28_t1904621871 * get_address_of_U39E31F24F64765FCAA589F589324D17C9FCF6A06D_0() { return &___9E31F24F64765FCAA589F589324D17C9FCF6A06D_0; }
	inline void set_U39E31F24F64765FCAA589F589324D17C9FCF6A06D_0(__StaticArrayInitTypeSizeU3D28_t1904621871  value)
	{
		___9E31F24F64765FCAA589F589324D17C9FCF6A06D_0 = value;
	}

	inline static int32_t get_offset_of_ADFD2E1C801C825415DD53F4F2F72A13B389313C_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___ADFD2E1C801C825415DD53F4F2F72A13B389313C_1)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994317  get_ADFD2E1C801C825415DD53F4F2F72A13B389313C_1() const { return ___ADFD2E1C801C825415DD53F4F2F72A13B389313C_1; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994317 * get_address_of_ADFD2E1C801C825415DD53F4F2F72A13B389313C_1() { return &___ADFD2E1C801C825415DD53F4F2F72A13B389313C_1; }
	inline void set_ADFD2E1C801C825415DD53F4F2F72A13B389313C_1(__StaticArrayInitTypeSizeU3D12_t2710994317  value)
	{
		___ADFD2E1C801C825415DD53F4F2F72A13B389313C_1 = value;
	}

	inline static int32_t get_offset_of_D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2)); }
	inline __StaticArrayInitTypeSizeU3D10_t1548194903  get_D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2() const { return ___D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2; }
	inline __StaticArrayInitTypeSizeU3D10_t1548194903 * get_address_of_D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2() { return &___D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2; }
	inline void set_D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2(__StaticArrayInitTypeSizeU3D10_t1548194903  value)
	{
		___D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2 = value;
	}

	inline static int32_t get_offset_of_DD3AEFEADB1CD615F3017763F1568179FEE640B0_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_3)); }
	inline __StaticArrayInitTypeSizeU3D52_t2710732173  get_DD3AEFEADB1CD615F3017763F1568179FEE640B0_3() const { return ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_3; }
	inline __StaticArrayInitTypeSizeU3D52_t2710732173 * get_address_of_DD3AEFEADB1CD615F3017763F1568179FEE640B0_3() { return &___DD3AEFEADB1CD615F3017763F1568179FEE640B0_3; }
	inline void set_DD3AEFEADB1CD615F3017763F1568179FEE640B0_3(__StaticArrayInitTypeSizeU3D52_t2710732173  value)
	{
		___DD3AEFEADB1CD615F3017763F1568179FEE640B0_3 = value;
	}

	inline static int32_t get_offset_of_E92B39D8233061927D9ACDE54665E68E7535635A_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___E92B39D8233061927D9ACDE54665E68E7535635A_4)); }
	inline __StaticArrayInitTypeSizeU3D52_t2710732173  get_E92B39D8233061927D9ACDE54665E68E7535635A_4() const { return ___E92B39D8233061927D9ACDE54665E68E7535635A_4; }
	inline __StaticArrayInitTypeSizeU3D52_t2710732173 * get_address_of_E92B39D8233061927D9ACDE54665E68E7535635A_4() { return &___E92B39D8233061927D9ACDE54665E68E7535635A_4; }
	inline void set_E92B39D8233061927D9ACDE54665E68E7535635A_4(__StaticArrayInitTypeSizeU3D52_t2710732173  value)
	{
		___E92B39D8233061927D9ACDE54665E68E7535635A_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef ASSEMBLY_T_H
#define ASSEMBLY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t2008144148 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t223948603 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t223948603 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t223948603 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t223948603 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t223948603 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t2120639521 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t2120639521 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t2120639521 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline Evidence_t2008144148 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t2008144148 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t2008144148 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline PermissionSet_t223948603 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t223948603 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t223948603 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline PermissionSet_t223948603 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t223948603 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t223948603 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline PermissionSet_t223948603 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t223948603 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t223948603 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline PermissionSet_t223948603 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t223948603 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t223948603 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline PermissionSet_t223948603 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t223948603 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t223948603 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLY_T_H
#ifndef NULLABLE_1_T2603721331_H
#define NULLABLE_1_T2603721331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.TimeSpan>
struct  Nullable_1_t2603721331 
{
public:
	// T System.Nullable`1::value
	TimeSpan_t881159249  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2603721331, ___value_0)); }
	inline TimeSpan_t881159249  get_value_0() const { return ___value_0; }
	inline TimeSpan_t881159249 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_t881159249  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2603721331, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2603721331_H
#ifndef CONSTRUCTORINFO_T5769829_H
#define CONSTRUCTORINFO_T5769829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t5769829  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t5769829_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T5769829_H
#ifndef TIMEZONEINFO_T161405854_H
#define TIMEZONEINFO_T161405854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo
struct  TimeZoneInfo_t161405854  : public RuntimeObject
{
public:
	// System.TimeSpan System.TimeZoneInfo::baseUtcOffset
	TimeSpan_t881159249  ___baseUtcOffset_0;
	// System.String System.TimeZoneInfo::daylightDisplayName
	String_t* ___daylightDisplayName_1;
	// System.String System.TimeZoneInfo::displayName
	String_t* ___displayName_2;
	// System.String System.TimeZoneInfo::id
	String_t* ___id_3;
	// System.String System.TimeZoneInfo::standardDisplayName
	String_t* ___standardDisplayName_5;
	// System.Boolean System.TimeZoneInfo::disableDaylightSavingTime
	bool ___disableDaylightSavingTime_6;
	// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::adjustmentRules
	AdjustmentRuleU5BU5D_t1469475992* ___adjustmentRules_9;

public:
	inline static int32_t get_offset_of_baseUtcOffset_0() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___baseUtcOffset_0)); }
	inline TimeSpan_t881159249  get_baseUtcOffset_0() const { return ___baseUtcOffset_0; }
	inline TimeSpan_t881159249 * get_address_of_baseUtcOffset_0() { return &___baseUtcOffset_0; }
	inline void set_baseUtcOffset_0(TimeSpan_t881159249  value)
	{
		___baseUtcOffset_0 = value;
	}

	inline static int32_t get_offset_of_daylightDisplayName_1() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___daylightDisplayName_1)); }
	inline String_t* get_daylightDisplayName_1() const { return ___daylightDisplayName_1; }
	inline String_t** get_address_of_daylightDisplayName_1() { return &___daylightDisplayName_1; }
	inline void set_daylightDisplayName_1(String_t* value)
	{
		___daylightDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___daylightDisplayName_1), value);
	}

	inline static int32_t get_offset_of_displayName_2() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___displayName_2)); }
	inline String_t* get_displayName_2() const { return ___displayName_2; }
	inline String_t** get_address_of_displayName_2() { return &___displayName_2; }
	inline void set_displayName_2(String_t* value)
	{
		___displayName_2 = value;
		Il2CppCodeGenWriteBarrier((&___displayName_2), value);
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___id_3)); }
	inline String_t* get_id_3() const { return ___id_3; }
	inline String_t** get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(String_t* value)
	{
		___id_3 = value;
		Il2CppCodeGenWriteBarrier((&___id_3), value);
	}

	inline static int32_t get_offset_of_standardDisplayName_5() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___standardDisplayName_5)); }
	inline String_t* get_standardDisplayName_5() const { return ___standardDisplayName_5; }
	inline String_t** get_address_of_standardDisplayName_5() { return &___standardDisplayName_5; }
	inline void set_standardDisplayName_5(String_t* value)
	{
		___standardDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((&___standardDisplayName_5), value);
	}

	inline static int32_t get_offset_of_disableDaylightSavingTime_6() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___disableDaylightSavingTime_6)); }
	inline bool get_disableDaylightSavingTime_6() const { return ___disableDaylightSavingTime_6; }
	inline bool* get_address_of_disableDaylightSavingTime_6() { return &___disableDaylightSavingTime_6; }
	inline void set_disableDaylightSavingTime_6(bool value)
	{
		___disableDaylightSavingTime_6 = value;
	}

	inline static int32_t get_offset_of_adjustmentRules_9() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___adjustmentRules_9)); }
	inline AdjustmentRuleU5BU5D_t1469475992* get_adjustmentRules_9() const { return ___adjustmentRules_9; }
	inline AdjustmentRuleU5BU5D_t1469475992** get_address_of_adjustmentRules_9() { return &___adjustmentRules_9; }
	inline void set_adjustmentRules_9(AdjustmentRuleU5BU5D_t1469475992* value)
	{
		___adjustmentRules_9 = value;
		Il2CppCodeGenWriteBarrier((&___adjustmentRules_9), value);
	}
};

struct TimeZoneInfo_t161405854_StaticFields
{
public:
	// System.TimeZoneInfo System.TimeZoneInfo::local
	TimeZoneInfo_t161405854 * ___local_4;
	// System.TimeZoneInfo System.TimeZoneInfo::utc
	TimeZoneInfo_t161405854 * ___utc_7;
	// System.String System.TimeZoneInfo::timeZoneDirectory
	String_t* ___timeZoneDirectory_8;

public:
	inline static int32_t get_offset_of_local_4() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854_StaticFields, ___local_4)); }
	inline TimeZoneInfo_t161405854 * get_local_4() const { return ___local_4; }
	inline TimeZoneInfo_t161405854 ** get_address_of_local_4() { return &___local_4; }
	inline void set_local_4(TimeZoneInfo_t161405854 * value)
	{
		___local_4 = value;
		Il2CppCodeGenWriteBarrier((&___local_4), value);
	}

	inline static int32_t get_offset_of_utc_7() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854_StaticFields, ___utc_7)); }
	inline TimeZoneInfo_t161405854 * get_utc_7() const { return ___utc_7; }
	inline TimeZoneInfo_t161405854 ** get_address_of_utc_7() { return &___utc_7; }
	inline void set_utc_7(TimeZoneInfo_t161405854 * value)
	{
		___utc_7 = value;
		Il2CppCodeGenWriteBarrier((&___utc_7), value);
	}

	inline static int32_t get_offset_of_timeZoneDirectory_8() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854_StaticFields, ___timeZoneDirectory_8)); }
	inline String_t* get_timeZoneDirectory_8() const { return ___timeZoneDirectory_8; }
	inline String_t** get_address_of_timeZoneDirectory_8() { return &___timeZoneDirectory_8; }
	inline void set_timeZoneDirectory_8(String_t* value)
	{
		___timeZoneDirectory_8 = value;
		Il2CppCodeGenWriteBarrier((&___timeZoneDirectory_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONEINFO_T161405854_H
#ifndef DATETIMEZONEHANDLING_T3002599730_H
#define DATETIMEZONEHANDLING_T3002599730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.DateTimeZoneHandling
struct  DateTimeZoneHandling_t3002599730 
{
public:
	// System.Int32 Newtonsoft.Json.DateTimeZoneHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeZoneHandling_t3002599730, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEZONEHANDLING_T3002599730_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef PRIMITIVETYPECODE_T798949904_H
#define PRIMITIVETYPECODE_T798949904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.PrimitiveTypeCode
struct  PrimitiveTypeCode_t798949904 
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.PrimitiveTypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrimitiveTypeCode_t798949904, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMITIVETYPECODE_T798949904_H
#ifndef JSONTOKEN_T1917433489_H
#define JSONTOKEN_T1917433489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonToken
struct  JsonToken_t1917433489 
{
public:
	// System.Int32 Newtonsoft.Json.JsonToken::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JsonToken_t1917433489, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONTOKEN_T1917433489_H
#ifndef PARSERESULT_T747067398_H
#define PARSERESULT_T747067398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ParseResult
struct  ParseResult_t747067398 
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.ParseResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParseResult_t747067398, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSERESULT_T747067398_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef DATEFORMATHANDLING_T1376167855_H
#define DATEFORMATHANDLING_T1376167855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.DateFormatHandling
struct  DateFormatHandling_t1376167855 
{
public:
	// System.Int32 Newtonsoft.Json.DateFormatHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateFormatHandling_t1376167855, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATEFORMATHANDLING_T1376167855_H
#ifndef STRINGESCAPEHANDLING_T4077875565_H
#define STRINGESCAPEHANDLING_T4077875565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.StringEscapeHandling
struct  StringEscapeHandling_t4077875565 
{
public:
	// System.Int32 Newtonsoft.Json.StringEscapeHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringEscapeHandling_t4077875565, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGESCAPEHANDLING_T4077875565_H
#ifndef STRINGCOMPARISON_T3657712135_H
#define STRINGCOMPARISON_T3657712135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t3657712135 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t3657712135, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARISON_T3657712135_H
#ifndef DATETIMESTYLES_T840957420_H
#define DATETIMESTYLES_T840957420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeStyles
struct  DateTimeStyles_t840957420 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeStyles_t840957420, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMESTYLES_T840957420_H
#ifndef XMLDATETIMESERIALIZATIONMODE_T1214355817_H
#define XMLDATETIMESERIALIZATIONMODE_T1214355817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDateTimeSerializationMode
struct  XmlDateTimeSerializationMode_t1214355817 
{
public:
	// System.Int32 System.Xml.XmlDateTimeSerializationMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlDateTimeSerializationMode_t1214355817, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDATETIMESERIALIZATIONMODE_T1214355817_H
#ifndef MEMBERTYPES_T3790569052_H
#define MEMBERTYPES_T3790569052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberTypes
struct  MemberTypes_t3790569052 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MemberTypes_t3790569052, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERTYPES_T3790569052_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef PARAMETERINFO_T1861056598_H
#define PARAMETERINFO_T1861056598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t1861056598  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t984015687 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___marshalAs_6)); }
	inline UnmanagedMarshal_t984015687 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t984015687 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t984015687 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T1861056598_H
#ifndef TYPEINFORMATION_T1210244291_H
#define TYPEINFORMATION_T1210244291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.TypeInformation
struct  TypeInformation_t1210244291  : public RuntimeObject
{
public:
	// System.Type Newtonsoft.Json.Utilities.TypeInformation::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_0;
	// Newtonsoft.Json.Utilities.PrimitiveTypeCode Newtonsoft.Json.Utilities.TypeInformation::<TypeCode>k__BackingField
	int32_t ___U3CTypeCodeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TypeInformation_t1210244291, ___U3CTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_0() const { return ___U3CTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_0() { return &___U3CTypeU3Ek__BackingField_0; }
	inline void set_U3CTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTypeCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TypeInformation_t1210244291, ___U3CTypeCodeU3Ek__BackingField_1)); }
	inline int32_t get_U3CTypeCodeU3Ek__BackingField_1() const { return ___U3CTypeCodeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CTypeCodeU3Ek__BackingField_1() { return &___U3CTypeCodeU3Ek__BackingField_1; }
	inline void set_U3CTypeCodeU3Ek__BackingField_1(int32_t value)
	{
		___U3CTypeCodeU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFORMATION_T1210244291_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef MODULE_T2987026101_H
#define MODULE_T2987026101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t2987026101  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	intptr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;

public:
	inline static int32_t get_offset_of__impl_3() { return static_cast<int32_t>(offsetof(Module_t2987026101, ____impl_3)); }
	inline intptr_t get__impl_3() const { return ____impl_3; }
	inline intptr_t* get_address_of__impl_3() { return &____impl_3; }
	inline void set__impl_3(intptr_t value)
	{
		____impl_3 = value;
	}

	inline static int32_t get_offset_of_assembly_4() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___assembly_4)); }
	inline Assembly_t * get_assembly_4() const { return ___assembly_4; }
	inline Assembly_t ** get_address_of_assembly_4() { return &___assembly_4; }
	inline void set_assembly_4(Assembly_t * value)
	{
		___assembly_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_4), value);
	}

	inline static int32_t get_offset_of_fqname_5() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___fqname_5)); }
	inline String_t* get_fqname_5() const { return ___fqname_5; }
	inline String_t** get_address_of_fqname_5() { return &___fqname_5; }
	inline void set_fqname_5(String_t* value)
	{
		___fqname_5 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_scopename_7() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___scopename_7)); }
	inline String_t* get_scopename_7() const { return ___scopename_7; }
	inline String_t** get_address_of_scopename_7() { return &___scopename_7; }
	inline void set_scopename_7(String_t* value)
	{
		___scopename_7 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_7), value);
	}

	inline static int32_t get_offset_of_is_resource_8() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___is_resource_8)); }
	inline bool get_is_resource_8() const { return ___is_resource_8; }
	inline bool* get_address_of_is_resource_8() { return &___is_resource_8; }
	inline void set_is_resource_8(bool value)
	{
		___is_resource_8 = value;
	}

	inline static int32_t get_offset_of_token_9() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___token_9)); }
	inline int32_t get_token_9() const { return ___token_9; }
	inline int32_t* get_address_of_token_9() { return &___token_9; }
	inline void set_token_9(int32_t value)
	{
		___token_9 = value;
	}
};

struct Module_t2987026101_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t2356120900 * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t2356120900 * ___FilterTypeNameIgnoreCase_2;

public:
	inline static int32_t get_offset_of_FilterTypeName_1() { return static_cast<int32_t>(offsetof(Module_t2987026101_StaticFields, ___FilterTypeName_1)); }
	inline TypeFilter_t2356120900 * get_FilterTypeName_1() const { return ___FilterTypeName_1; }
	inline TypeFilter_t2356120900 ** get_address_of_FilterTypeName_1() { return &___FilterTypeName_1; }
	inline void set_FilterTypeName_1(TypeFilter_t2356120900 * value)
	{
		___FilterTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_1), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Module_t2987026101_StaticFields, ___FilterTypeNameIgnoreCase_2)); }
	inline TypeFilter_t2356120900 * get_FilterTypeNameIgnoreCase_2() const { return ___FilterTypeNameIgnoreCase_2; }
	inline TypeFilter_t2356120900 ** get_address_of_FilterTypeNameIgnoreCase_2() { return &___FilterTypeNameIgnoreCase_2; }
	inline void set_FilterTypeNameIgnoreCase_2(TypeFilter_t2356120900 * value)
	{
		___FilterTypeNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULE_T2987026101_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef DATETIMEPARSER_T3754458704_H
#define DATETIMEPARSER_T3754458704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.DateTimeParser
struct  DateTimeParser_t3754458704 
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Year
	int32_t ___Year_0;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Month
	int32_t ___Month_1;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Day
	int32_t ___Day_2;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Hour
	int32_t ___Hour_3;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Minute
	int32_t ___Minute_4;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Second
	int32_t ___Second_5;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Fraction
	int32_t ___Fraction_6;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::ZoneHour
	int32_t ___ZoneHour_7;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::ZoneMinute
	int32_t ___ZoneMinute_8;
	// Newtonsoft.Json.Utilities.ParserTimeZone Newtonsoft.Json.Utilities.DateTimeParser::Zone
	int32_t ___Zone_9;
	// System.Char[] Newtonsoft.Json.Utilities.DateTimeParser::_text
	CharU5BU5D_t3528271667* ____text_10;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::_end
	int32_t ____end_11;

public:
	inline static int32_t get_offset_of_Year_0() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704, ___Year_0)); }
	inline int32_t get_Year_0() const { return ___Year_0; }
	inline int32_t* get_address_of_Year_0() { return &___Year_0; }
	inline void set_Year_0(int32_t value)
	{
		___Year_0 = value;
	}

	inline static int32_t get_offset_of_Month_1() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704, ___Month_1)); }
	inline int32_t get_Month_1() const { return ___Month_1; }
	inline int32_t* get_address_of_Month_1() { return &___Month_1; }
	inline void set_Month_1(int32_t value)
	{
		___Month_1 = value;
	}

	inline static int32_t get_offset_of_Day_2() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704, ___Day_2)); }
	inline int32_t get_Day_2() const { return ___Day_2; }
	inline int32_t* get_address_of_Day_2() { return &___Day_2; }
	inline void set_Day_2(int32_t value)
	{
		___Day_2 = value;
	}

	inline static int32_t get_offset_of_Hour_3() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704, ___Hour_3)); }
	inline int32_t get_Hour_3() const { return ___Hour_3; }
	inline int32_t* get_address_of_Hour_3() { return &___Hour_3; }
	inline void set_Hour_3(int32_t value)
	{
		___Hour_3 = value;
	}

	inline static int32_t get_offset_of_Minute_4() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704, ___Minute_4)); }
	inline int32_t get_Minute_4() const { return ___Minute_4; }
	inline int32_t* get_address_of_Minute_4() { return &___Minute_4; }
	inline void set_Minute_4(int32_t value)
	{
		___Minute_4 = value;
	}

	inline static int32_t get_offset_of_Second_5() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704, ___Second_5)); }
	inline int32_t get_Second_5() const { return ___Second_5; }
	inline int32_t* get_address_of_Second_5() { return &___Second_5; }
	inline void set_Second_5(int32_t value)
	{
		___Second_5 = value;
	}

	inline static int32_t get_offset_of_Fraction_6() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704, ___Fraction_6)); }
	inline int32_t get_Fraction_6() const { return ___Fraction_6; }
	inline int32_t* get_address_of_Fraction_6() { return &___Fraction_6; }
	inline void set_Fraction_6(int32_t value)
	{
		___Fraction_6 = value;
	}

	inline static int32_t get_offset_of_ZoneHour_7() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704, ___ZoneHour_7)); }
	inline int32_t get_ZoneHour_7() const { return ___ZoneHour_7; }
	inline int32_t* get_address_of_ZoneHour_7() { return &___ZoneHour_7; }
	inline void set_ZoneHour_7(int32_t value)
	{
		___ZoneHour_7 = value;
	}

	inline static int32_t get_offset_of_ZoneMinute_8() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704, ___ZoneMinute_8)); }
	inline int32_t get_ZoneMinute_8() const { return ___ZoneMinute_8; }
	inline int32_t* get_address_of_ZoneMinute_8() { return &___ZoneMinute_8; }
	inline void set_ZoneMinute_8(int32_t value)
	{
		___ZoneMinute_8 = value;
	}

	inline static int32_t get_offset_of_Zone_9() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704, ___Zone_9)); }
	inline int32_t get_Zone_9() const { return ___Zone_9; }
	inline int32_t* get_address_of_Zone_9() { return &___Zone_9; }
	inline void set_Zone_9(int32_t value)
	{
		___Zone_9 = value;
	}

	inline static int32_t get_offset_of__text_10() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704, ____text_10)); }
	inline CharU5BU5D_t3528271667* get__text_10() const { return ____text_10; }
	inline CharU5BU5D_t3528271667** get_address_of__text_10() { return &____text_10; }
	inline void set__text_10(CharU5BU5D_t3528271667* value)
	{
		____text_10 = value;
		Il2CppCodeGenWriteBarrier((&____text_10), value);
	}

	inline static int32_t get_offset_of__end_11() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704, ____end_11)); }
	inline int32_t get__end_11() const { return ____end_11; }
	inline int32_t* get_address_of__end_11() { return &____end_11; }
	inline void set__end_11(int32_t value)
	{
		____end_11 = value;
	}
};

struct DateTimeParser_t3754458704_StaticFields
{
public:
	// System.Int32[] Newtonsoft.Json.Utilities.DateTimeParser::Power10
	Int32U5BU5D_t385246372* ___Power10_12;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Lzyyyy
	int32_t ___Lzyyyy_13;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Lzyyyy_
	int32_t ___Lzyyyy__14;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Lzyyyy_MM
	int32_t ___Lzyyyy_MM_15;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Lzyyyy_MM_
	int32_t ___Lzyyyy_MM__16;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Lzyyyy_MM_dd
	int32_t ___Lzyyyy_MM_dd_17;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Lzyyyy_MM_ddT
	int32_t ___Lzyyyy_MM_ddT_18;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::LzHH
	int32_t ___LzHH_19;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::LzHH_
	int32_t ___LzHH__20;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::LzHH_mm
	int32_t ___LzHH_mm_21;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::LzHH_mm_
	int32_t ___LzHH_mm__22;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::LzHH_mm_ss
	int32_t ___LzHH_mm_ss_23;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Lz_
	int32_t ___Lz__24;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Lz_zz
	int32_t ___Lz_zz_25;

public:
	inline static int32_t get_offset_of_Power10_12() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704_StaticFields, ___Power10_12)); }
	inline Int32U5BU5D_t385246372* get_Power10_12() const { return ___Power10_12; }
	inline Int32U5BU5D_t385246372** get_address_of_Power10_12() { return &___Power10_12; }
	inline void set_Power10_12(Int32U5BU5D_t385246372* value)
	{
		___Power10_12 = value;
		Il2CppCodeGenWriteBarrier((&___Power10_12), value);
	}

	inline static int32_t get_offset_of_Lzyyyy_13() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704_StaticFields, ___Lzyyyy_13)); }
	inline int32_t get_Lzyyyy_13() const { return ___Lzyyyy_13; }
	inline int32_t* get_address_of_Lzyyyy_13() { return &___Lzyyyy_13; }
	inline void set_Lzyyyy_13(int32_t value)
	{
		___Lzyyyy_13 = value;
	}

	inline static int32_t get_offset_of_Lzyyyy__14() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704_StaticFields, ___Lzyyyy__14)); }
	inline int32_t get_Lzyyyy__14() const { return ___Lzyyyy__14; }
	inline int32_t* get_address_of_Lzyyyy__14() { return &___Lzyyyy__14; }
	inline void set_Lzyyyy__14(int32_t value)
	{
		___Lzyyyy__14 = value;
	}

	inline static int32_t get_offset_of_Lzyyyy_MM_15() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704_StaticFields, ___Lzyyyy_MM_15)); }
	inline int32_t get_Lzyyyy_MM_15() const { return ___Lzyyyy_MM_15; }
	inline int32_t* get_address_of_Lzyyyy_MM_15() { return &___Lzyyyy_MM_15; }
	inline void set_Lzyyyy_MM_15(int32_t value)
	{
		___Lzyyyy_MM_15 = value;
	}

	inline static int32_t get_offset_of_Lzyyyy_MM__16() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704_StaticFields, ___Lzyyyy_MM__16)); }
	inline int32_t get_Lzyyyy_MM__16() const { return ___Lzyyyy_MM__16; }
	inline int32_t* get_address_of_Lzyyyy_MM__16() { return &___Lzyyyy_MM__16; }
	inline void set_Lzyyyy_MM__16(int32_t value)
	{
		___Lzyyyy_MM__16 = value;
	}

	inline static int32_t get_offset_of_Lzyyyy_MM_dd_17() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704_StaticFields, ___Lzyyyy_MM_dd_17)); }
	inline int32_t get_Lzyyyy_MM_dd_17() const { return ___Lzyyyy_MM_dd_17; }
	inline int32_t* get_address_of_Lzyyyy_MM_dd_17() { return &___Lzyyyy_MM_dd_17; }
	inline void set_Lzyyyy_MM_dd_17(int32_t value)
	{
		___Lzyyyy_MM_dd_17 = value;
	}

	inline static int32_t get_offset_of_Lzyyyy_MM_ddT_18() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704_StaticFields, ___Lzyyyy_MM_ddT_18)); }
	inline int32_t get_Lzyyyy_MM_ddT_18() const { return ___Lzyyyy_MM_ddT_18; }
	inline int32_t* get_address_of_Lzyyyy_MM_ddT_18() { return &___Lzyyyy_MM_ddT_18; }
	inline void set_Lzyyyy_MM_ddT_18(int32_t value)
	{
		___Lzyyyy_MM_ddT_18 = value;
	}

	inline static int32_t get_offset_of_LzHH_19() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704_StaticFields, ___LzHH_19)); }
	inline int32_t get_LzHH_19() const { return ___LzHH_19; }
	inline int32_t* get_address_of_LzHH_19() { return &___LzHH_19; }
	inline void set_LzHH_19(int32_t value)
	{
		___LzHH_19 = value;
	}

	inline static int32_t get_offset_of_LzHH__20() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704_StaticFields, ___LzHH__20)); }
	inline int32_t get_LzHH__20() const { return ___LzHH__20; }
	inline int32_t* get_address_of_LzHH__20() { return &___LzHH__20; }
	inline void set_LzHH__20(int32_t value)
	{
		___LzHH__20 = value;
	}

	inline static int32_t get_offset_of_LzHH_mm_21() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704_StaticFields, ___LzHH_mm_21)); }
	inline int32_t get_LzHH_mm_21() const { return ___LzHH_mm_21; }
	inline int32_t* get_address_of_LzHH_mm_21() { return &___LzHH_mm_21; }
	inline void set_LzHH_mm_21(int32_t value)
	{
		___LzHH_mm_21 = value;
	}

	inline static int32_t get_offset_of_LzHH_mm__22() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704_StaticFields, ___LzHH_mm__22)); }
	inline int32_t get_LzHH_mm__22() const { return ___LzHH_mm__22; }
	inline int32_t* get_address_of_LzHH_mm__22() { return &___LzHH_mm__22; }
	inline void set_LzHH_mm__22(int32_t value)
	{
		___LzHH_mm__22 = value;
	}

	inline static int32_t get_offset_of_LzHH_mm_ss_23() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704_StaticFields, ___LzHH_mm_ss_23)); }
	inline int32_t get_LzHH_mm_ss_23() const { return ___LzHH_mm_ss_23; }
	inline int32_t* get_address_of_LzHH_mm_ss_23() { return &___LzHH_mm_ss_23; }
	inline void set_LzHH_mm_ss_23(int32_t value)
	{
		___LzHH_mm_ss_23 = value;
	}

	inline static int32_t get_offset_of_Lz__24() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704_StaticFields, ___Lz__24)); }
	inline int32_t get_Lz__24() const { return ___Lz__24; }
	inline int32_t* get_address_of_Lz__24() { return &___Lz__24; }
	inline void set_Lz__24(int32_t value)
	{
		___Lz__24 = value;
	}

	inline static int32_t get_offset_of_Lz_zz_25() { return static_cast<int32_t>(offsetof(DateTimeParser_t3754458704_StaticFields, ___Lz_zz_25)); }
	inline int32_t get_Lz_zz_25() const { return ___Lz_zz_25; }
	inline int32_t* get_address_of_Lz_zz_25() { return &___Lz_zz_25; }
	inline void set_Lz_zz_25(int32_t value)
	{
		___Lz_zz_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.DateTimeParser
struct DateTimeParser_t3754458704_marshaled_pinvoke
{
	int32_t ___Year_0;
	int32_t ___Month_1;
	int32_t ___Day_2;
	int32_t ___Hour_3;
	int32_t ___Minute_4;
	int32_t ___Second_5;
	int32_t ___Fraction_6;
	int32_t ___ZoneHour_7;
	int32_t ___ZoneMinute_8;
	int32_t ___Zone_9;
	uint8_t* ____text_10;
	int32_t ____end_11;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.DateTimeParser
struct DateTimeParser_t3754458704_marshaled_com
{
	int32_t ___Year_0;
	int32_t ___Month_1;
	int32_t ___Day_2;
	int32_t ___Hour_3;
	int32_t ___Minute_4;
	int32_t ___Second_5;
	int32_t ___Fraction_6;
	int32_t ___ZoneHour_7;
	int32_t ___ZoneMinute_8;
	int32_t ___Zone_9;
	uint8_t* ____text_10;
	int32_t ____end_11;
};
#endif // DATETIMEPARSER_T3754458704_H
#ifndef FUNC_2_T1251018457_H
#define FUNC_2_T1251018457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>>
struct  Func_2_t1251018457  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T1251018457_H
#ifndef PROPERTYCHANGINGEVENTHANDLER_T2830353497_H
#define PROPERTYCHANGINGEVENTHANDLER_T2830353497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangingEventHandler
struct  PropertyChangingEventHandler_t2830353497  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGINGEVENTHANDLER_T2830353497_H
#ifndef FUNC_2_T3692615456_H
#define FUNC_2_T3692615456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct  Func_2_t3692615456  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3692615456_H
#ifndef FUNC_2_T2419460300_H
#define FUNC_2_T2419460300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Runtime.Serialization.EnumMemberAttribute,System.String>
struct  Func_2_t2419460300  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2419460300_H
#ifndef DATETIMEOFFSET_T3229287507_H
#define DATETIMEOFFSET_T3229287507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t3229287507 
{
public:
	// System.DateTime System.DateTimeOffset::dt
	DateTime_t3738529785  ___dt_2;
	// System.TimeSpan System.DateTimeOffset::utc_offset
	TimeSpan_t881159249  ___utc_offset_3;

public:
	inline static int32_t get_offset_of_dt_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___dt_2)); }
	inline DateTime_t3738529785  get_dt_2() const { return ___dt_2; }
	inline DateTime_t3738529785 * get_address_of_dt_2() { return &___dt_2; }
	inline void set_dt_2(DateTime_t3738529785  value)
	{
		___dt_2 = value;
	}

	inline static int32_t get_offset_of_utc_offset_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___utc_offset_3)); }
	inline TimeSpan_t881159249  get_utc_offset_3() const { return ___utc_offset_3; }
	inline TimeSpan_t881159249 * get_address_of_utc_offset_3() { return &___utc_offset_3; }
	inline void set_utc_offset_3(TimeSpan_t881159249  value)
	{
		___utc_offset_3 = value;
	}
};

struct DateTimeOffset_t3229287507_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t3229287507  ___MaxValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t3229287507  ___MinValue_1;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MaxValue_0)); }
	inline DateTimeOffset_t3229287507  get_MaxValue_0() const { return ___MaxValue_0; }
	inline DateTimeOffset_t3229287507 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(DateTimeOffset_t3229287507  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MinValue_1)); }
	inline DateTimeOffset_t3229287507  get_MinValue_1() const { return ___MinValue_1; }
	inline DateTimeOffset_t3229287507 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(DateTimeOffset_t3229287507  value)
	{
		___MinValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T3229287507_H
#ifndef FUNC_2_T1761491126_H
#define FUNC_2_T1761491126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct  Func_2_t1761491126  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T1761491126_H
#ifndef FUNC_1_T2509852811_H
#define FUNC_1_T2509852811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Object>
struct  Func_1_t2509852811  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T2509852811_H
#ifndef FUNC_2_T2447130374_H
#define FUNC_2_T2447130374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Object,System.Object>
struct  Func_2_t2447130374  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2447130374_H
#ifndef OBJECTCONSTRUCTOR_1_T3207922868_H
#define OBJECTCONSTRUCTOR_1_T3207922868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct  ObjectConstructor_1_t3207922868  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTCONSTRUCTOR_1_T3207922868_H
#ifndef FUNC_2_T2377163032_H
#define FUNC_2_T2377163032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Reflection.PropertyInfo,System.Boolean>
struct  Func_2_t2377163032  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2377163032_H
#ifndef FUNC_2_T3967597302_H
#define FUNC_2_T3967597302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Reflection.MemberInfo,System.String>
struct  Func_2_t3967597302  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3967597302_H
#ifndef ACTION_2_T2470008838_H
#define ACTION_2_T2470008838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.Object,System.Object>
struct  Action_2_t2470008838  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T2470008838_H
#ifndef METHODCALL_2_T2845904993_H
#define METHODCALL_2_T2845904993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct  MethodCall_2_t2845904993  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALL_2_T2845904993_H
#ifndef FUNC_2_T1796590042_H
#define FUNC_2_T1796590042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct  Func_2_t1796590042  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T1796590042_H
#ifndef NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T2206564399_H
#define NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T2206564399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NotifyCollectionChangedEventHandler
struct  NotifyCollectionChangedEventHandler_t2206564399  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T2206564399_H
#ifndef ADDINGNEWEVENTHANDLER_T4128025860_H
#define ADDINGNEWEVENTHANDLER_T4128025860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AddingNewEventHandler
struct  AddingNewEventHandler_t4128025860  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDINGNEWEVENTHANDLER_T4128025860_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t846150980  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t2897418192  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Newtonsoft.Json.Utilities.PropertyNameTable/Entry[]
struct EntryU5BU5D_t1995962374  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_t2924091039 * m_Items[1];

public:
	inline Entry_t2924091039 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t2924091039 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t2924091039 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Entry_t2924091039 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t2924091039 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t2924091039 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t390618515  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t1861056598 * m_Items[1];

public:
	inline ParameterInfo_t1861056598 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ParameterInfo_t1861056598 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t1302094432  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MemberInfo_t * m_Items[1];

public:
	inline MemberInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MemberInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t881249896  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ConstructorInfo_t5769829 * m_Items[1];

public:
	inline ConstructorInfo_t5769829 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConstructorInfo_t5769829 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConstructorInfo_t5769829 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ConstructorInfo_t5769829 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConstructorInfo_t5769829 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConstructorInfo_t5769829 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Attribute[]
struct AttributeU5BU5D_t1575011174  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Attribute_t861562559 * m_Items[1];

public:
	inline Attribute_t861562559 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Attribute_t861562559 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Attribute_t861562559 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Attribute_t861562559 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Attribute_t861562559 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Attribute_t861562559 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t2943407543  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterModifier_t1461694466  m_Items[1];

public:
	inline ParameterModifier_t1461694466  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t1461694466 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t1461694466  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ParameterModifier_t1461694466  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t1461694466 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t1461694466  value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1461822886  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// TResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
extern "C"  RuntimeObject * MethodCall_2_Invoke_m386137395_gshared (MethodCall_2_t2845904993 * __this, RuntimeObject * p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C"  bool Nullable_1_get_HasValue_m1210311128_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
extern "C"  TimeSpan_t881159249  Nullable_1_GetValueOrDefault_m3497035374_gshared (Nullable_1_t2603721331 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m3314784284_gshared (Nullable_1_t2603721331 * __this, TimeSpan_t881159249  p0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TFirst>,System.Collections.Generic.IEqualityComparer`1<TSecond>)
extern "C"  void BidirectionalDictionary_2__ctor_m2728182391_gshared (BidirectionalDictionary_2_t3581858927 * __this, RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
extern "C"  RuntimeObject* Enumerable_Cast_TisRuntimeObject_m4015728326_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m406556452_gshared (Func_2_t2447130374 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C"  RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m3244726840_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t2447130374 * p1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject * Enumerable_SingleOrDefault_TisRuntimeObject_m2079752316_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::TryGetBySecond(TSecond,TFirst&)
extern "C"  bool BidirectionalDictionary_2_TryGetBySecond_m1759937236_gshared (BidirectionalDictionary_2_t3581858927 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::Set(TFirst,TSecond)
extern "C"  void BidirectionalDictionary_2_Set_m1803187920_gshared (BidirectionalDictionary_2_t3581858927 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3104565095_gshared (Func_2_t3759279471 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C"  RuntimeObject* Enumerable_Where_TisRuntimeObject_m3454096398_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3759279471 * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// TValue Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Object,System.Object>::Get(TKey)
extern "C"  RuntimeObject * ThreadSafeStore_2_Get_m3495790489_gshared (ThreadSafeStore_2_t1066477248 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::TryGetByFirst(TFirst,TSecond&)
extern "C"  bool BidirectionalDictionary_2_TryGetByFirst_m3852003675_gshared (BidirectionalDictionary_2_t3581858927 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Object,System.Object>::.ctor(System.Func`2<TKey,TValue>)
extern "C"  void ThreadSafeStore_2__ctor_m3312637891_gshared (ThreadSafeStore_2_t1066477248 * __this, Func_2_t2447130374 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor()
extern "C"  void List_1__ctor_m1735334926_gshared (List_1_t811567916 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Char>::Add(!0)
extern "C"  void List_1_Add_m1266383442_gshared (List_1_t811567916 * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<System.Char>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject* Enumerable_Union_TisChar_t3634460470_m3294811350_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C"  bool Nullable_1_get_HasValue_m2648265346_gshared (Nullable_1_t378540539 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
extern "C"  int32_t Nullable_1_GetValueOrDefault_m2296315628_gshared (Nullable_1_t378540539 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void ObjectConstructor_1__ctor_m1181679199_gshared (ObjectConstructor_1_t3207922868 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
extern "C"  RuntimeObject * Func_2_Invoke_m3285901618_gshared (Func_2_t2447130374 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::Single<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject * Enumerable_Single_TisRuntimeObject_m2766697436_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Func`2<T,System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateGet<System.Object>(System.Reflection.MemberInfo)
extern "C"  Func_2_t2447130374 * ReflectionDelegateFactory_CreateGet_TisRuntimeObject_m2506523516_gshared (ReflectionDelegateFactory_t2528576452 * __this, MemberInfo_t * ___memberInfo0, const RuntimeMethod* method);
// System.Action`2<T,System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateSet<System.Object>(System.Reflection.MemberInfo)
extern "C"  Action_2_t2470008838 * ReflectionDelegateFactory_CreateSet_TisRuntimeObject_m2440090338_gshared (ReflectionDelegateFactory_t2528576452 * __this, MemberInfo_t * ___memberInfo0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m1578862614_gshared (Action_2_t2470008838 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
extern "C"  RuntimeObject * Func_1_Invoke_m348272648_gshared (Func_1_t2509852811 * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C"  RuntimeObject * Enumerable_SingleOrDefault_TisRuntimeObject_m4271540505_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3759279471 * p1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::AddRange<System.Object>(System.Collections.Generic.IList`1<T>,System.Collections.IEnumerable)
extern "C"  void CollectionUtils_AddRange_TisRuntimeObject_m2190188696_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___initial0, RuntimeObject* ___collection1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m3947764094_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<!!1,!!0>> System.Linq.Enumerable::GroupBy<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C"  RuntimeObject* Enumerable_GroupBy_TisRuntimeObject_TisRuntimeObject_m1565366059_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t2447130374 * p1, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  int32_t Enumerable_Count_TisRuntimeObject_m954665811_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  List_1_t257213610 * Enumerable_ToList_TisRuntimeObject_m1484080463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject * Enumerable_First_TisRuntimeObject_m2853249616_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1_AddRange_m3709462088_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  ObjectU5BU5D_t2843939325* Enumerable_ToArray_TisRuntimeObject_m3600642960_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject* Enumerable_Union_TisRuntimeObject_m2650793208_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m2076366551_gshared (Nullable_1_t378540539 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1__ctor_m1328752868_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::AddRange<System.Object>(System.Collections.Generic.IList`1<T>,System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void CollectionUtils_AddRange_TisRuntimeObject_m1203748487_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___initial0, RuntimeObject* ___collection1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
extern "C"  void List_1_set_Item_m1979164443_gshared (List_1_t257213610 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Int32 Newtonsoft.Json.Utilities.CollectionUtils::IndexOf<System.Object>(System.Collections.Generic.IEnumerable`1<T>,System.Func`2<T,System.Boolean>)
extern "C"  int32_t CollectionUtils_IndexOf_TisRuntimeObject_m856514146_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___collection0, Func_2_t3759279471 * ___predicate1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  bool Enumerable_Any_TisRuntimeObject_m3173759778_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Char>(!!0[],!!0,System.Int32,System.Int32)
extern "C"  int32_t Array_IndexOf_TisChar_t3634460470_m1523447194_gshared (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* p0, Il2CppChar p1, int32_t p2, int32_t p3, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// TResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
#define MethodCall_2_Invoke_m386137395(__this, p0, p1, method) ((  RuntimeObject * (*) (MethodCall_2_t2845904993 *, RuntimeObject *, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))MethodCall_2_Invoke_m386137395_gshared)(__this, p0, p1, method)
// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::get_InitialType()
extern "C"  Type_t * TypeConvertKey_get_InitialType_m1948938866 (TypeConvertKey_t285306760 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::get_TargetType()
extern "C"  Type_t * TypeConvertKey_get_TargetType_m1323123860 (TypeConvertKey_t285306760 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::.ctor(System.Type,System.Type)
extern "C"  void TypeConvertKey__ctor_m1484742788 (TypeConvertKey_t285306760 * __this, Type_t * ___initialType0, Type_t * ___targetType1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::GetHashCode()
extern "C"  int32_t TypeConvertKey_GetHashCode_m1557333626 (TypeConvertKey_t285306760 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey)
extern "C"  bool TypeConvertKey_Equals_m3807158012 (TypeConvertKey_t285306760 * __this, TypeConvertKey_t285306760  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(System.Object)
extern "C"  bool TypeConvertKey_Equals_m1519043382 (TypeConvertKey_t285306760 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseDate(System.Int32)
extern "C"  bool DateTimeParser_ParseDate_m1503841812 (DateTimeParser_t3754458704 * __this, int32_t ___start0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseChar(System.Int32,System.Char)
extern "C"  bool DateTimeParser_ParseChar_m818678987 (DateTimeParser_t3754458704 * __this, int32_t ___start0, Il2CppChar ___ch1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseTimeAndZoneAndWhitespace(System.Int32)
extern "C"  bool DateTimeParser_ParseTimeAndZoneAndWhitespace_m3012059955 (DateTimeParser_t3754458704 * __this, int32_t ___start0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::Parse(System.Char[],System.Int32,System.Int32)
extern "C"  bool DateTimeParser_Parse_m73420931 (DateTimeParser_t3754458704 * __this, CharU5BU5D_t3528271667* ___text0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::Parse4Digit(System.Int32,System.Int32&)
extern "C"  bool DateTimeParser_Parse4Digit_m3204871448 (DateTimeParser_t3754458704 * __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::Parse2Digit(System.Int32,System.Int32&)
extern "C"  bool DateTimeParser_Parse2Digit_m78569833 (DateTimeParser_t3754458704 * __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::DaysInMonth(System.Int32,System.Int32)
extern "C"  int32_t DateTime_DaysInMonth_m2587936260 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseTime(System.Int32&)
extern "C"  bool DateTimeParser_ParseTime_m2613649973 (DateTimeParser_t3754458704 * __this, int32_t* ___start0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseZone(System.Int32)
extern "C"  bool DateTimeParser_ParseZone_m676506294 (DateTimeParser_t3754458704 * __this, int32_t ___start0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern "C"  TimeZone_t2038656743 * TimeZone_get_CurrentTimeZone_m2520313554 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.ArgumentOutOfRangeException Newtonsoft.Json.Utilities.MiscellaneousUtils::CreateArgumentOutOfRangeException(System.String,System.Object,System.String)
extern "C"  ArgumentOutOfRangeException_t777629997 * MiscellaneousUtils_CreateArgumentOutOfRangeException_m1064925786 (RuntimeObject * __this /* static, unused */, String_t* ___paramName0, RuntimeObject * ___actualValue1, String_t* ___message2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::SwitchToLocalTime(System.DateTime)
extern "C"  DateTime_t3738529785  DateTimeUtils_SwitchToLocalTime_m3237404399 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::SwitchToUtcTime(System.DateTime)
extern "C"  DateTime_t3738529785  DateTimeUtils_SwitchToUtcTime_m1312603771 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::get_Ticks()
extern "C"  int64_t DateTime_get_Ticks_m1550640881 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int64,System.DateTimeKind)
extern "C"  void DateTime__ctor_m1095105629 (DateTime_t3738529785 * __this, int64_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind System.DateTime::get_Kind()
extern "C"  int32_t DateTime_get_Kind_m2154871796 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToLocalTime()
extern "C"  DateTime_t3738529785  DateTime_ToLocalTime_m3134475597 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToUniversalTime()
extern "C"  DateTime_t3738529785  DateTime_ToUniversalTime_m1945318289 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Newtonsoft.Json.Utilities.DateTimeUtils::GetUtcOffset(System.DateTime)
extern "C"  TimeSpan_t881159249  DateTimeUtils_GetUtcOffset_m575763097 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___d0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ToUniversalTicks(System.DateTime,System.TimeSpan)
extern "C"  int64_t DateTimeUtils_ToUniversalTicks_m444892890 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___dateTime0, TimeSpan_t881159249  ___offset1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_Equality_m1022058599 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::get_Ticks()
extern "C"  int64_t TimeSpan_get_Ticks_m2137362016 (TimeSpan_t881159249 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::UniversialTicksToJavaScriptTicks(System.Int64)
extern "C"  int64_t DateTimeUtils_UniversialTicksToJavaScriptTicks_m3989465022 (RuntimeObject * __this /* static, unused */, int64_t ___universialTicks0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.Boolean)
extern "C"  int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m3362411187 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___dateTime0, bool ___convertToUtc1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ToUniversalTicks(System.DateTime)
extern "C"  int64_t DateTimeUtils_ToUniversalTicks_m4266243281 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___dateTime0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] Newtonsoft.Json.Utilities.StringReference::get_Chars()
extern "C"  CharU5BU5D_t3528271667* StringReference_get_Chars_m1428785588 (StringReference_t2912309144 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.StringReference::get_StartIndex()
extern "C"  int32_t StringReference_get_StartIndex_m577516227 (StringReference_t2912309144 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.StringReference::get_Length()
extern "C"  int32_t StringReference_get_Length_m1881544084 (StringReference_t2912309144 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::CreateDateTime(Newtonsoft.Json.Utilities.DateTimeParser)
extern "C"  DateTime_t3738529785  DateTimeUtils_CreateDateTime_m901961958 (RuntimeObject * __this /* static, unused */, DateTimeParser_t3754458704  ___dateTimeParser0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void TimeSpan__ctor_m3689759052 (TimeSpan_t881159249 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::EnsureDateTime(System.DateTime,Newtonsoft.Json.DateTimeZoneHandling)
extern "C"  DateTime_t3738529785  DateTimeUtils_EnsureDateTime_m2677626152 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, int32_t ___timeZone1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int64)
extern "C"  void TimeSpan__ctor_m1896986612 (TimeSpan_t881159249 * __this, int64_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::get_Local()
extern "C"  TimeZoneInfo_t161405854 * TimeZoneInfo_get_Local_m3767312181 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZoneInfo::GetUtcOffset(System.DateTime)
extern "C"  TimeSpan_t881159249  TimeZoneInfo_GetUtcOffset_m3780875423 (TimeZoneInfo_t161405854 * __this, DateTime_t3738529785  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.DateTime,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m74032857 (DateTimeOffset_t3229287507 * __this, DateTime_t3738529785  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void DateTime__ctor_m3895589019 (DateTime_t3738529785 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddTicks(System.Int64)
extern "C"  DateTime_t3738529785  DateTime_AddTicks_m3396580426 (DateTime_t3738529785 * __this, int64_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddDays(System.Double)
extern "C"  DateTime_t3738529785  DateTime_AddDays_m2583849741 (DateTime_t3738529785 * __this, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.Utilities.StringReference::get_Item(System.Int32)
extern "C"  Il2CppChar StringReference_get_Item_m2821876239 (StringReference_t2912309144 * __this, int32_t ___i0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringReferenceExtensions::StartsWith(Newtonsoft.Json.Utilities.StringReference,System.String)
extern "C"  bool StringReferenceExtensions_StartsWith_m3064397327 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___s0, String_t* ___text1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringReferenceExtensions::EndsWith(Newtonsoft.Json.Utilities.StringReference,System.String)
extern "C"  bool StringReferenceExtensions_EndsWith_m2070211976 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___s0, String_t* ___text1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeMicrosoft(Newtonsoft.Json.Utilities.StringReference,Newtonsoft.Json.DateTimeZoneHandling,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTimeMicrosoft_m896972691 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___text0, int32_t ___dateTimeZoneHandling1, DateTime_t3738529785 * ___dt2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsDigit(System.Char)
extern "C"  bool Char_IsDigit_m3646673943 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeIso(Newtonsoft.Json.Utilities.StringReference,Newtonsoft.Json.DateTimeZoneHandling,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTimeIso_m758390143 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___text0, int32_t ___dateTimeZoneHandling1, DateTime_t3738529785 * ___dt2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringReference::ToString()
extern "C"  String_t* StringReference_ToString_m3051914173 (StringReference_t2912309144 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeExact(System.String,Newtonsoft.Json.DateTimeZoneHandling,System.String,System.Globalization.CultureInfo,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTimeExact_m2999446858 (RuntimeObject * __this /* static, unused */, String_t* ___text0, int32_t ___dateTimeZoneHandling1, String_t* ___dateFormatString2, CultureInfo_t4157843068 * ___culture3, DateTime_t3738529785 * ___dt4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
extern "C"  bool String_StartsWith_m2640722675 (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
extern "C"  bool String_EndsWith_m2637493491 (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringReference::.ctor(System.Char[],System.Int32,System.Int32)
extern "C"  void StringReference__ctor_m345645319 (StringReference_t2912309144 * __this, CharU5BU5D_t3528271667* ___chars0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::TryParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&)
extern "C"  bool DateTime_TryParseExact_m682600744 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, RuntimeObject* p2, int32_t p3, DateTime_t3738529785 * p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffsetMicrosoft(Newtonsoft.Json.Utilities.StringReference,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffsetMicrosoft_m2314886215 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___text0, DateTimeOffset_t3229287507 * ___dt1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffsetIso(Newtonsoft.Json.Utilities.StringReference,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffsetIso_m3588505642 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___text0, DateTimeOffset_t3229287507 * ___dt1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffsetExact(System.String,System.String,System.Globalization.CultureInfo,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffsetExact_m1730563288 (RuntimeObject * __this /* static, unused */, String_t* ___text0, String_t* ___dateFormatString1, CultureInfo_t4157843068 * ___culture2, DateTimeOffset_t3229287507 * ___dt3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::TryParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTimeOffset&)
extern "C"  bool DateTimeOffset_TryParseExact_m960669624 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, RuntimeObject* p2, int32_t p3, DateTimeOffset_t3229287507 * p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.StringReferenceExtensions::IndexOf(Newtonsoft.Json.Utilities.StringReference,System.Char,System.Int32,System.Int32)
extern "C"  int32_t StringReferenceExtensions_IndexOf_m2457125624 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___s0, Il2CppChar ___c1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryReadOffset(Newtonsoft.Json.Utilities.StringReference,System.Int32,System.TimeSpan&)
extern "C"  bool DateTimeUtils_TryReadOffset_m3712643023 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___offsetText0, int32_t ___startIndex1, TimeSpan_t881159249 * ___offset2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ParseResult Newtonsoft.Json.Utilities.ConvertUtils::Int64TryParse(System.Char[],System.Int32,System.Int32,System.Int64&)
extern "C"  int32_t ConvertUtils_Int64TryParse_m4091387998 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___chars0, int32_t ___start1, int32_t ___length2, int64_t* ___value3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseMicrosoftDate(Newtonsoft.Json.Utilities.StringReference,System.Int64&,System.TimeSpan&,System.DateTimeKind&)
extern "C"  bool DateTimeUtils_TryParseMicrosoftDate_m2514602947 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___text0, int64_t* ___ticks1, TimeSpan_t881159249 * ___offset2, int32_t* ___kind3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::ConvertJavaScriptTicksToDateTime(System.Int64)
extern "C"  DateTime_t3738529785  DateTimeUtils_ConvertJavaScriptTicksToDateTime_m2220449017 (RuntimeObject * __this /* static, unused */, int64_t ___javaScriptTicks0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
extern "C"  DateTime_t3738529785  DateTime_SpecifyKind_m3332658812 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::op_Implicit(System.DateTime)
extern "C"  DateTimeOffset_t3229287507  DateTimeOffset_op_Implicit_m674883098 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Add(System.TimeSpan)
extern "C"  DateTime_t3738529785  DateTime_Add_m2995894549 (DateTime_t3738529785 * __this, TimeSpan_t881159249  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m1464148220 (DateTimeOffset_t3229287507 * __this, int64_t p0, TimeSpan_t881159249  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ParseResult Newtonsoft.Json.Utilities.ConvertUtils::Int32TryParse(System.Char[],System.Int32,System.Int32,System.Int32&)
extern "C"  int32_t ConvertUtils_Int32TryParse_m2513116180 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___chars0, int32_t ___start1, int32_t ___length2, int32_t* ___value3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromHours(System.Double)
extern "C"  TimeSpan_t881159249  TimeSpan_FromHours_m1109641064 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
extern "C"  TimeSpan_t881159249  TimeSpan_FromMinutes_m1032812593 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
extern "C"  TimeSpan_t881159249  TimeSpan_op_Addition_m672714982 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Negate()
extern "C"  TimeSpan_t881159249  TimeSpan_Negate_m1889505500 (TimeSpan_t881159249 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeString(System.Char[],System.Int32,System.DateTime,System.Nullable`1<System.TimeSpan>,System.DateTimeKind,Newtonsoft.Json.DateFormatHandling)
extern "C"  int32_t DateTimeUtils_WriteDateTimeString_m108143888 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___chars0, int32_t ___start1, DateTime_t3738529785  ___value2, Nullable_1_t2603721331  ___offset3, int32_t ___kind4, int32_t ___format5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* DateTime_ToString_m2992030064 (DateTime_t3738529785 * __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
#define Nullable_1_get_HasValue_m1210311128(__this, method) ((  bool (*) (Nullable_1_t2603721331 *, const RuntimeMethod*))Nullable_1_get_HasValue_m1210311128_gshared)(__this, method)
// !0 System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
#define Nullable_1_GetValueOrDefault_m3497035374(__this, method) ((  TimeSpan_t881159249  (*) (Nullable_1_t2603721331 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m3497035374_gshared)(__this, method)
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.TimeSpan)
extern "C"  int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m478085472 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___dateTime0, TimeSpan_t881159249  ___offset1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CopyTo(System.Int32,System.Char[],System.Int32,System.Int32)
extern "C"  void String_CopyTo_m2803757991 (String_t* __this, int32_t p0, CharU5BU5D_t3528271667* p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString(System.IFormatProvider)
extern "C"  String_t* Int64_ToString_m623640997 (int64_t* __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Inequality(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_Inequality_m1382517918 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeOffset(System.Char[],System.Int32,System.TimeSpan,Newtonsoft.Json.DateFormatHandling)
extern "C"  int32_t DateTimeUtils_WriteDateTimeOffset_m1794107409 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___chars0, int32_t ___start1, TimeSpan_t881159249  ___offset2, int32_t ___format3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.DateTimeUtils::WriteDefaultIsoDate(System.Char[],System.Int32,System.DateTime)
extern "C"  int32_t DateTimeUtils_WriteDefaultIsoDate_m139031193 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___chars0, int32_t ___start1, DateTime_t3738529785  ___dt2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::GetDateValues(System.DateTime,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void DateTimeUtils_GetDateValues_m237807814 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___td0, int32_t* ___year1, int32_t* ___month2, int32_t* ___day3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::CopyIntToCharArray(System.Char[],System.Int32,System.Int32,System.Int32)
extern "C"  void DateTimeUtils_CopyIntToCharArray_m4133634667 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___chars0, int32_t ___start1, int32_t ___value2, int32_t ___digits3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Hour()
extern "C"  int32_t DateTime_get_Hour_m4153505178 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Minute()
extern "C"  int32_t DateTime_get_Minute_m87527789 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Second()
extern "C"  int32_t DateTime_get_Second_m2686182256 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Hours()
extern "C"  int32_t TimeSpan_get_Hours_m550761902 (TimeSpan_t881159249 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Minutes()
extern "C"  int32_t TimeSpan_get_Minutes_m4278980001 (TimeSpan_t881159249 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
extern "C"  DateTime_t3738529785  DateTimeOffset_get_UtcDateTime_m1021718282 (DateTimeOffset_t3229287507 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_DateTime()
extern "C"  DateTime_t3738529785  DateTimeOffset_get_DateTime_m620985777 (DateTimeOffset_t3229287507 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_Offset()
extern "C"  TimeSpan_t881159249  DateTimeOffset_get_Offset_m2040541042 (DateTimeOffset_t3229287507 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
#define Nullable_1__ctor_m3314784284(__this, p0, method) ((  void (*) (Nullable_1_t2603721331 *, TimeSpan_t881159249 , const RuntimeMethod*))Nullable_1__ctor_m3314784284_gshared)(__this, p0, method)
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* DateTimeOffset_ToString_m3985341516 (DateTimeOffset_t3229287507 * __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
extern "C"  StringComparer_t3301955079 * StringComparer_get_OrdinalIgnoreCase_m2680809380 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TFirst>,System.Collections.Generic.IEqualityComparer`1<TSecond>)
#define BidirectionalDictionary_2__ctor_m58546930(__this, p0, p1, method) ((  void (*) (BidirectionalDictionary_2_t787053467 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))BidirectionalDictionary_2__ctor_m2728182391_gshared)(__this, p0, p1, method)
// System.Reflection.FieldInfo[] System.Type::GetFields()
extern "C"  FieldInfoU5BU5D_t846150980* Type_GetFields_m3709891696 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Runtime.Serialization.EnumMemberAttribute>(System.Collections.IEnumerable)
#define Enumerable_Cast_TisEnumMemberAttribute_t1084128815_m843212694(__this /* static, unused */, p0, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m4015728326_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Func`2<System.Runtime.Serialization.EnumMemberAttribute,System.String>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m1969356281(__this, p0, p1, method) ((  void (*) (Func_2_t2419460300 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m406556452_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Runtime.Serialization.EnumMemberAttribute,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_TisEnumMemberAttribute_t1084128815_TisString_t_m3180131537(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t2419460300 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m3244726840_gshared)(__this /* static, unused */, p0, p1, method)
// !!0 System.Linq.Enumerable::SingleOrDefault<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_SingleOrDefault_TisString_t_m4035470101(__this /* static, unused */, p0, method) ((  String_t* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_SingleOrDefault_TisRuntimeObject_m2079752316_gshared)(__this /* static, unused */, p0, method)
// System.Boolean Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>::TryGetBySecond(TSecond,TFirst&)
#define BidirectionalDictionary_2_TryGetBySecond_m954730245(__this, p0, p1, method) ((  bool (*) (BidirectionalDictionary_2_t787053467 *, String_t*, String_t**, const RuntimeMethod*))BidirectionalDictionary_2_TryGetBySecond_m1759937236_gshared)(__this, p0, p1, method)
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m353537829 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>::Set(TFirst,TSecond)
#define BidirectionalDictionary_2_Set_m3266748649(__this, p0, p1, method) ((  void (*) (BidirectionalDictionary_2_t787053467 *, String_t*, String_t*, const RuntimeMethod*))BidirectionalDictionary_2_Set_m1803187920_gshared)(__this, p0, p1, method)
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsEnum(System.Type)
extern "C"  bool TypeExtensions_IsEnum_m286495740 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
#define List_1__ctor_m2321703786(__this, method) ((  void (*) (List_1_t257213610 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Func`2<System.Reflection.FieldInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m3933480653(__this, p0, p1, method) ((  void (*) (Func_2_t1761491126 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m3104565095_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Reflection.FieldInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Where_TisFieldInfo_t_m2487357973(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t1761491126 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m3454096398_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
#define List_1_Add_m3338814081(__this, p0, method) ((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// TValue Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>>::Get(TKey)
#define ThreadSafeStore_2_Get_m70698259(__this, p0, method) ((  BidirectionalDictionary_2_t787053467 * (*) (ThreadSafeStore_2_t4165332627 *, Type_t *, const RuntimeMethod*))ThreadSafeStore_2_Get_m3495790489_gshared)(__this, p0, method)
// System.Int32 System.String::IndexOf(System.Char)
extern "C"  int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim()
extern "C"  String_t* String_Trim_m923598732 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.EnumUtils::ResolvedEnumName(Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>,System.String)
extern "C"  String_t* EnumUtils_ResolvedEnumName_m2962574579 (RuntimeObject * __this /* static, unused */, BidirectionalDictionary_2_t787053467 * ___map0, String_t* ___enumText1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[])
extern "C"  String_t* String_Join_m2050845953 (RuntimeObject * __this /* static, unused */, String_t* p0, StringU5BU5D_t1281789340* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
extern "C"  RuntimeObject * Enum_Parse_m1579637477 (RuntimeObject * __this /* static, unused */, Type_t * p0, String_t* p1, bool p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>::TryGetByFirst(TFirst,TSecond&)
#define BidirectionalDictionary_2_TryGetByFirst_m2766949072(__this, p0, p1, method) ((  bool (*) (BidirectionalDictionary_2_t787053467 *, String_t*, String_t**, const RuntimeMethod*))BidirectionalDictionary_2_TryGetByFirst_m3852003675_gshared)(__this, p0, p1, method)
// System.String Newtonsoft.Json.Utilities.StringUtils::ToCamelCase(System.String)
extern "C"  String_t* StringUtils_ToCamelCase_m614090145 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m1138174753(__this, p0, p1, method) ((  void (*) (Func_2_t1251018457 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m406556452_gshared)(__this, p0, p1, method)
// System.Void Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>>::.ctor(System.Func`2<TKey,TValue>)
#define ThreadSafeStore_2__ctor_m769843296(__this, p0, method) ((  void (*) (ThreadSafeStore_2_t4165332627 *, Func_2_t1251018457 *, const RuntimeMethod*))ThreadSafeStore_2__ctor_m3312637891_gshared)(__this, p0, method)
// System.Void Newtonsoft.Json.Utilities.EnumUtils/<>c::.ctor()
extern "C"  void U3CU3Ec__ctor_m4100598361 (U3CU3Ec_t2360567884 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.EnumMemberAttribute::get_Value()
extern "C"  String_t* EnumMemberAttribute_get_Value_m452041758 (EnumMemberAttribute_t1084128815 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
extern "C"  bool FieldInfo_get_IsLiteral_m534699794 (FieldInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor()
#define List_1__ctor_m1735334926(__this, method) ((  void (*) (List_1_t811567916 *, const RuntimeMethod*))List_1__ctor_m1735334926_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Add(!0)
#define List_1_Add_m1266383442(__this, p0, method) ((  void (*) (List_1_t811567916 *, Il2CppChar, const RuntimeMethod*))List_1_Add_m1266383442_gshared)(__this, p0, method)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<System.Char>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Union_TisChar_t3634460470_m3294811350(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Union_TisChar_t3634460470_m3294811350_gshared)(__this /* static, unused */, p0, p1, method)
// System.Char[] Newtonsoft.Json.Utilities.BufferUtils::EnsureBufferSize(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32,System.Char[])
extern "C"  CharU5BU5D_t3528271667* BufferUtils_EnsureBufferSize_m2563135377 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___bufferPool0, int32_t ___size1, CharU5BU5D_t3528271667* ___buffer2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringUtils::ToCharAsUnicode(System.Char,System.Char[])
extern "C"  void StringUtils_ToCharAsUnicode_m1857241640 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, CharU5BU5D_t3528271667* ___buffer1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String,System.String)
extern "C"  bool String_Equals_m1744302937 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] Newtonsoft.Json.Utilities.BufferUtils::RentBuffer(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
extern "C"  CharU5BU5D_t3528271667* BufferUtils_RentBuffer_m2229979349 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___bufferPool0, int32_t ___minSize1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C"  void Array_Copy_m1988217701 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeArray * p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.BufferUtils::ReturnBuffer(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[])
extern "C"  void BufferUtils_ReturnBuffer_m1757235126 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___bufferPool0, CharU5BU5D_t3528271667* ___buffer1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] Newtonsoft.Json.Utilities.JavaScriptUtils::GetCharEscapeFlags(Newtonsoft.Json.StringEscapeHandling,System.Char)
extern "C"  BooleanU5BU5D_t2897418192* JavaScriptUtils_GetCharEscapeFlags_m2215130569 (RuntimeObject * __this /* static, unused */, int32_t ___stringEscapeHandling0, Il2CppChar ___quoteChar1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Utilities.StringUtils::GetLength(System.String)
extern "C"  Nullable_1_t378540539  StringUtils_GetLength_m3427840909 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
#define Nullable_1_get_HasValue_m2648265346(__this, method) ((  bool (*) (Nullable_1_t378540539 *, const RuntimeMethod*))Nullable_1_get_HasValue_m2648265346_gshared)(__this, method)
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
#define Nullable_1_GetValueOrDefault_m2296315628(__this, method) ((  int32_t (*) (Nullable_1_t378540539 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m2296315628_gshared)(__this, method)
// System.IO.StringWriter Newtonsoft.Json.Utilities.StringUtils::CreateStringWriter(System.Int32)
extern "C"  StringWriter_t802263757 * StringUtils_CreateStringWriter_m3876739792 (RuntimeObject * __this /* static, unused */, int32_t ___capacity0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.JavaScriptUtils::WriteEscapedJavaScriptString(System.IO.TextWriter,System.String,System.Char,System.Boolean,System.Boolean[],Newtonsoft.Json.StringEscapeHandling,Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[]&)
extern "C"  void JavaScriptUtils_WriteEscapedJavaScriptString_m1556362848 (RuntimeObject * __this /* static, unused */, TextWriter_t3478189236 * ___writer0, String_t* ___s1, Il2CppChar ___delimiter2, bool ___appendDelimiters3, BooleanU5BU5D_t2897418192* ___charEscapeFlags4, int32_t ___stringEscapeHandling5, RuntimeObject* ___bufferPool6, CharU5BU5D_t3528271667** ___writeBuffer7, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass3_0__ctor_m3663881265 (U3CU3Ec__DisplayClass3_0_t1939583362 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
extern "C"  void ValidationUtils_ArgumentNotNull_m5418296 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, String_t* ___parameterName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::.ctor(System.Object,System.IntPtr)
#define ObjectConstructor_1__ctor_m1181679199(__this, p0, p1, method) ((  void (*) (ObjectConstructor_1_t3207922868 *, RuntimeObject *, intptr_t, const RuntimeMethod*))ObjectConstructor_1__ctor_m1181679199_gshared)(__this, p0, p1, method)
// System.Void Newtonsoft.Json.Utilities.ReflectionDelegateFactory::.ctor()
extern "C"  void ReflectionDelegateFactory__ctor_m3277517333 (ReflectionDelegateFactory_t2528576452 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory::.ctor()
extern "C"  void LateBoundReflectionDelegateFactory__ctor_m2734757472 (LateBoundReflectionDelegateFactory_t925499913 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
extern "C"  RuntimeObject * ConstructorInfo_Invoke_m4089836896 (ConstructorInfo_t5769829 * __this, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C"  RuntimeObject * MethodBase_Invoke_m1776411915 (MethodBase_t * __this, RuntimeObject * p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::IsInteger(System.Object)
extern "C"  bool ConvertUtils_IsInteger_m1782566389 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_CurrentCulture_m1632690660 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
extern "C"  Decimal_t2948259380  Convert_ToDecimal_m3815908452 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal)
extern "C"  bool Decimal_Equals_m2486655999 (Decimal_t2948259380 * __this, Decimal_t2948259380  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
extern "C"  double Convert_ToDouble_m4017511472 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.MathUtils::ApproxEquals(System.Double,System.Double)
extern "C"  bool MathUtils_ApproxEquals_m663204704 (RuntimeObject * __this /* static, unused */, double ___d10, double ___d21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::get_NewLine()
extern "C"  String_t* Environment_get_NewLine_m3211016485 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m3056805521 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::CompareTo(System.Int32)
extern "C"  int32_t Int32_CompareTo_m4284770383 (int32_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Byte::CompareTo(System.Byte)
extern "C"  int32_t Byte_CompareTo_m4207847027 (uint8_t* __this, uint8_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.MiscellaneousUtils::GetQualifiedNameParts(System.String,System.String&,System.String&)
extern "C"  void MiscellaneousUtils_GetQualifiedNameParts_m3121517832 (RuntimeObject * __this /* static, unused */, String_t* ___qualifiedName0, String_t** ___prefix1, String_t** ___localName2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
extern "C"  String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Environment::get_TickCount()
extern "C"  int32_t Environment_get_TickCount_m2088073110 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.PropertyNameTable::TextEquals(System.String,System.Char[],System.Int32,System.Int32)
extern "C"  bool PropertyNameTable_TextEquals_m2030128776 (RuntimeObject * __this /* static, unused */, String_t* ___str10, CharU5BU5D_t3528271667* ___str21, int32_t ___str2Start2, int32_t ___str2Length3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.PropertyNameTable::AddEntry(System.String,System.Int32)
extern "C"  String_t* PropertyNameTable_AddEntry_m2687197476 (PropertyNameTable_t4130830590 * __this, String_t* ___str0, int32_t ___hashCode1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.PropertyNameTable/Entry::.ctor(System.String,System.Int32,Newtonsoft.Json.Utilities.PropertyNameTable/Entry)
extern "C"  void Entry__ctor_m1495177254 (Entry_t2924091039 * __this, String_t* ___value0, int32_t ___hashCode1, Entry_t2924091039 * ___next2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.PropertyNameTable::Grow()
extern "C"  void PropertyNameTable_Grow_m2160967313 (PropertyNameTable_t4130830590 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>::.ctor()
#define Dictionary_2__ctor_m2127759587(__this, method) ((  void (*) (Dictionary_2_t2440663781 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void Newtonsoft.Json.Utilities.ReflectionObject::set_Members(System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>)
extern "C"  void ReflectionObject_set_Members_m1728563473 (ReflectionObject_t701100009 * __this, RuntimeObject* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember> Newtonsoft.Json.Utilities.ReflectionObject::get_Members()
extern "C"  RuntimeObject* ReflectionObject_get_Members_m1237437266 (ReflectionObject_t701100009 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionMember::get_Getter()
extern "C"  Func_2_t2447130374 * ReflectionMember_get_Getter_m2488656156 (ReflectionMember_t2655407482 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
#define Func_2_Invoke_m3285901618(__this, p0, method) ((  RuntimeObject * (*) (Func_2_t2447130374 *, RuntimeObject *, const RuntimeMethod*))Func_2_Invoke_m3285901618_gshared)(__this, p0, method)
// System.Type Newtonsoft.Json.Utilities.ReflectionMember::get_MemberType()
extern "C"  Type_t * ReflectionMember_get_MemberType_m1759785445 (ReflectionMember_t2655407482 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ReflectionObject Newtonsoft.Json.Utilities.ReflectionObject::Create(System.Type,System.Reflection.MethodBase,System.String[])
extern "C"  ReflectionObject_t701100009 * ReflectionObject_Create_m73781573 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, MethodBase_t * ___creator1, StringU5BU5D_t1281789340* ___memberNames2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionObject::.ctor()
extern "C"  void ReflectionObject__ctor_m1062647964 (ReflectionObject_t701100009 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory Newtonsoft.Json.Serialization.JsonTypeReflector::get_ReflectionDelegateFactory()
extern "C"  ReflectionDelegateFactory_t2528576452 * JsonTypeReflector_get_ReflectionDelegateFactory_m2937328847 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionObject::set_Creator(Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>)
extern "C"  void ReflectionObject_set_Creator_m3308348627 (ReflectionObject_t701100009 * __this, ObjectConstructor_1_t3207922868 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::HasDefaultConstructor(System.Type,System.Boolean)
extern "C"  bool ReflectionUtils_HasDefaultConstructor_m3011828166 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, bool ___nonPublic1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass13_0__ctor_m2896337997 (U3CU3Ec__DisplayClass13_0_t4294006577 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 System.Linq.Enumerable::Single<System.Reflection.MemberInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Single_TisMemberInfo_t_m851241132(__this /* static, unused */, p0, method) ((  MemberInfo_t * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Single_TisRuntimeObject_m2766697436_gshared)(__this /* static, unused */, p0, method)
// System.Void Newtonsoft.Json.Utilities.ReflectionMember::.ctor()
extern "C"  void ReflectionMember__ctor_m2612443734 (ReflectionMember_t2655407482 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes Newtonsoft.Json.Utilities.TypeExtensions::MemberType(System.Reflection.MemberInfo)
extern "C"  int32_t TypeExtensions_MemberType_m2286386365 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___memberInfo0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanReadMemberValue(System.Reflection.MemberInfo,System.Boolean)
extern "C"  bool ReflectionUtils_CanReadMemberValue_m1473164796 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, bool ___nonPublic1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Func`2<T,System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateGet<System.Object>(System.Reflection.MemberInfo)
#define ReflectionDelegateFactory_CreateGet_TisRuntimeObject_m2506523516(__this, ___memberInfo0, method) ((  Func_2_t2447130374 * (*) (ReflectionDelegateFactory_t2528576452 *, MemberInfo_t *, const RuntimeMethod*))ReflectionDelegateFactory_CreateGet_TisRuntimeObject_m2506523516_gshared)(__this, ___memberInfo0, method)
// System.Void Newtonsoft.Json.Utilities.ReflectionMember::set_Getter(System.Func`2<System.Object,System.Object>)
extern "C"  void ReflectionMember_set_Getter_m3541426260 (ReflectionMember_t2655407482 * __this, Func_2_t2447130374 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanSetMemberValue(System.Reflection.MemberInfo,System.Boolean,System.Boolean)
extern "C"  bool ReflectionUtils_CanSetMemberValue_m1263216356 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, bool ___nonPublic1, bool ___canSetReadOnly2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Action`2<T,System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateSet<System.Object>(System.Reflection.MemberInfo)
#define ReflectionDelegateFactory_CreateSet_TisRuntimeObject_m2440090338(__this, ___memberInfo0, method) ((  Action_2_t2470008838 * (*) (ReflectionDelegateFactory_t2528576452 *, MemberInfo_t *, const RuntimeMethod*))ReflectionDelegateFactory_CreateSet_TisRuntimeObject_m2440090338_gshared)(__this, ___memberInfo0, method)
// System.Void Newtonsoft.Json.Utilities.ReflectionMember::set_Setter(System.Action`2<System.Object,System.Object>)
extern "C"  void ReflectionMember_set_Setter_m1832329444 (ReflectionMember_t2655407482 * __this, Action_2_t2470008838 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
extern "C"  bool MethodBase_get_IsPublic_m2180846589 (MethodBase_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1::.ctor()
extern "C"  void U3CU3Ec__DisplayClass13_1__ctor_m3019742285 (U3CU3Ec__DisplayClass13_1_t1955354417 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m406556452(__this, p0, p1, method) ((  void (*) (Func_2_t2447130374 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m406556452_gshared)(__this, p0, p1, method)
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2::.ctor()
extern "C"  void U3CU3Ec__DisplayClass13_2__ctor_m1329372237 (U3CU3Ec__DisplayClass13_2_t381376305 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
#define Action_2__ctor_m1578862614(__this, p0, p1, method) ((  void (*) (Action_2_t2470008838 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m1578862614_gshared)(__this, p0, p1, method)
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberUnderlyingType(System.Reflection.MemberInfo)
extern "C"  Type_t * ReflectionUtils_GetMemberUnderlyingType_m841662456 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionMember::set_MemberType(System.Type)
extern "C"  void ReflectionMember_set_MemberType_m3957217921 (ReflectionMember_t2655407482 * __this, Type_t * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Func`1<System.Object>::Invoke()
#define Func_1_Invoke_m348272648(__this, method) ((  RuntimeObject * (*) (Func_1_t2509852811 *, const RuntimeMethod*))Func_1_Invoke_m348272648_gshared)(__this, method)
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod()
extern "C"  MethodInfo_t * PropertyInfo_GetGetMethod_m1510309854 (PropertyInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
extern "C"  bool MethodBase_get_IsVirtual_m2008546636 (MethodBase_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod()
extern "C"  MethodInfo_t * PropertyInfo_GetSetMethod_m66158558 (PropertyInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::RemoveAssemblyDetails(System.String)
extern "C"  String_t* ReflectionUtils_RemoveAssemblyDetails_m3671180266 (RuntimeObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor()
extern "C"  void ArgumentOutOfRangeException__ctor_m2047740448 (ArgumentOutOfRangeException_t777629997 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsValueType(System.Type)
extern "C"  bool TypeExtensions_IsValueType_m852671066 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetDefaultConstructor(System.Type,System.Boolean)
extern "C"  ConstructorInfo_t5769829 * ReflectionUtils_GetDefaultConstructor_m3042638765 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, bool ___nonPublic1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m1559270925(__this, p0, p1, method) ((  void (*) (Func_2_t1796590042 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m3104565095_gshared)(__this, p0, p1, method)
// !!0 System.Linq.Enumerable::SingleOrDefault<System.Reflection.ConstructorInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_SingleOrDefault_TisConstructorInfo_t5769829_m2282397846(__this /* static, unused */, p0, p1, method) ((  ConstructorInfo_t5769829 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t1796590042 *, const RuntimeMethod*))Enumerable_SingleOrDefault_TisRuntimeObject_m4271540505_gshared)(__this /* static, unused */, p0, p1, method)
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsNullableType(System.Type)
extern "C"  bool ReflectionUtils_IsNullableType_m2557784957 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericType(System.Type)
extern "C"  bool TypeExtensions_IsGenericType_m3947308765 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Nullable::GetUnderlyingType(System.Type)
extern "C"  Type_t * Nullable_GetUnderlyingType_m3905033790 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::ImplementsGenericDefinition(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_ImplementsGenericDefinition_m2172968317 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericInterfaceDefinition1, Type_t ** ___implementingType2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsInterface(System.Type)
extern "C"  bool TypeExtensions_IsInterface_m3543394130 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericTypeDefinition(System.Type)
extern "C"  bool TypeExtensions_IsGenericTypeDefinition_m2160044791 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinition(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_InheritsGenericDefinition_m626434391 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericClassDefinition1, Type_t ** ___implementingType2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsClass(System.Type)
extern "C"  bool TypeExtensions_IsClass_m3873378058 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinitionInternal(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_InheritsGenericDefinitionInternal_m2113175446 (RuntimeObject * __this /* static, unused */, Type_t * ___currentType0, Type_t * ___genericClassDefinition1, Type_t ** ___implementingType2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.TypeExtensions::BaseType(System.Type)
extern "C"  Type_t * TypeExtensions_BaseType_m1084285535 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsArray()
extern "C"  bool Type_get_IsArray_m2591212821 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.EventInfo::get_EventHandlerType()
extern "C"  Type_t * EventInfo_get_EventHandlerType_m420690865 (EventInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C"  void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsIndexedProperty(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsIndexedProperty_m1455784124 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___property0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.Exception)
extern "C"  void ArgumentException__ctor_m1535060261 (ArgumentException_t132251570 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
extern "C"  void FieldInfo_SetValue_m2460171138 (FieldInfo_t * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsPublic()
extern "C"  bool FieldInfo_get_IsPublic_m3378038140 (FieldInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsInitOnly()
extern "C"  bool FieldInfo_get_IsInitOnly_m930369112 (FieldInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::.ctor()
#define List_1__ctor_m2845631487(__this, method) ((  void (*) (List_1_t557109187 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetFields(System.Type,System.Reflection.BindingFlags)
extern "C"  RuntimeObject* ReflectionUtils_GetFields_m2854570455 (RuntimeObject * __this /* static, unused */, Type_t * ___targetType0, int32_t ___bindingAttr1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::AddRange<System.Reflection.MemberInfo>(System.Collections.Generic.IList`1<T>,System.Collections.IEnumerable)
#define CollectionUtils_AddRange_TisMemberInfo_t_m2053991619(__this /* static, unused */, ___initial0, ___collection1, method) ((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))CollectionUtils_AddRange_TisRuntimeObject_m2190188696_gshared)(__this /* static, unused */, ___initial0, ___collection1, method)
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetProperties(System.Type,System.Reflection.BindingFlags)
extern "C"  RuntimeObject* ReflectionUtils_GetProperties_m2510843274 (RuntimeObject * __this /* static, unused */, Type_t * ___targetType0, int32_t ___bindingAttr1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MemberInfo>::get_Count()
#define List_1_get_Count_m2508260589(__this, method) ((  int32_t (*) (List_1_t557109187 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::.ctor(System.Int32)
#define List_1__ctor_m4045609786(__this, p0, method) ((  void (*) (List_1_t557109187 *, int32_t, const RuntimeMethod*))List_1__ctor_m3947764094_gshared)(__this, p0, method)
// System.Void System.Func`2<System.Reflection.MemberInfo,System.String>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m4252472063(__this, p0, p1, method) ((  void (*) (Func_2_t3967597302 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m406556452_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<!!1,!!0>> System.Linq.Enumerable::GroupBy<System.Reflection.MemberInfo,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_GroupBy_TisMemberInfo_t_TisString_t_m1303684172(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3967597302 *, const RuntimeMethod*))Enumerable_GroupBy_TisRuntimeObject_TisRuntimeObject_m1565366059_gshared)(__this /* static, unused */, p0, p1, method)
// System.Int32 System.Linq.Enumerable::Count<System.Reflection.MemberInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Count_TisMemberInfo_t_m2833200946(__this /* static, unused */, p0, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_m954665811_gshared)(__this /* static, unused */, p0, method)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Reflection.MemberInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisMemberInfo_t_m3180374575(__this /* static, unused */, p0, method) ((  List_1_t557109187 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m1484080463_gshared)(__this /* static, unused */, p0, method)
// !!0 System.Linq.Enumerable::First<System.Reflection.MemberInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_First_TisMemberInfo_t_m2952260960(__this /* static, unused */, p0, method) ((  MemberInfo_t * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_m2853249616_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::Add(!0)
#define List_1_Add_m304598357(__this, p0, method) ((  void (*) (List_1_t557109187 *, MemberInfo_t *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsOverridenGenericMember(System.Reflection.MemberInfo,System.Reflection.BindingFlags)
extern "C"  bool ReflectionUtils_IsOverridenGenericMember_m1361940080 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___memberInfo0, int32_t ___bindingAttr1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m2257680807(__this, p0, method) ((  void (*) (List_1_t557109187 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3709462088_gshared)(__this, p0, method)
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsVirtual(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsVirtual_m3338583030 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Attribute>(System.Collections.IEnumerable)
#define Enumerable_Cast_TisAttribute_t861562559_m1709853543(__this /* static, unused */, p0, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m4015728326_gshared)(__this /* static, unused */, p0, method)
// !!0[] System.Linq.Enumerable::ToArray<System.Attribute>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisAttribute_t861562559_m1336572644(__this /* static, unused */, p0, method) ((  AttributeU5BU5D_t1575011174* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m3600642960_gshared)(__this /* static, unused */, p0, method)
// System.Attribute[] Newtonsoft.Json.Utilities.ReflectionUtils::GetAttributes(System.Object,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t1575011174* ReflectionUtils_GetAttributes_m2593182657 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___attributeProvider0, Type_t * ___attributeType1, bool ___inherit2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<System.Attribute>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Union_TisAttribute_t861562559_m3425703445(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Union_TisRuntimeObject_m2650793208_gshared)(__this /* static, unused */, p0, p1, method)
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.Assembly)
extern "C"  AttributeU5BU5D_t1575011174* Attribute_GetCustomAttributes_m3956931822 (RuntimeObject * __this /* static, unused */, Assembly_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.Assembly,System.Type)
extern "C"  AttributeU5BU5D_t1575011174* Attribute_GetCustomAttributes_m3340307265 (RuntimeObject * __this /* static, unused */, Assembly_t * p0, Type_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.MemberInfo,System.Boolean)
extern "C"  AttributeU5BU5D_t1575011174* Attribute_GetCustomAttributes_m3575848472 (RuntimeObject * __this /* static, unused */, MemberInfo_t * p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t1575011174* Attribute_GetCustomAttributes_m1427582442 (RuntimeObject * __this /* static, unused */, MemberInfo_t * p0, Type_t * p1, bool p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.Module,System.Boolean)
extern "C"  AttributeU5BU5D_t1575011174* Attribute_GetCustomAttributes_m4276120683 (RuntimeObject * __this /* static, unused */, Module_t2987026101 * p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.Module,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t1575011174* Attribute_GetCustomAttributes_m635736302 (RuntimeObject * __this /* static, unused */, Module_t2987026101 * p0, Type_t * p1, bool p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.ParameterInfo,System.Boolean)
extern "C"  AttributeU5BU5D_t1575011174* Attribute_GetCustomAttributes_m4211271358 (RuntimeObject * __this /* static, unused */, ParameterInfo_t1861056598 * p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.ParameterInfo,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t1575011174* Attribute_GetCustomAttributes_m581407460 (RuntimeObject * __this /* static, unused */, ParameterInfo_t1861056598 * p0, Type_t * p1, bool p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Utilities.ReflectionUtils::GetAssemblyDelimiterIndex(System.String)
extern "C"  Nullable_1_t378540539  ReflectionUtils_GetAssemblyDelimiterIndex_m2474328121 (RuntimeObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
#define Nullable_1__ctor_m2076366551(__this, p0, method) ((  void (*) (Nullable_1_t378540539 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m2076366551_gshared)(__this, p0, method)
// System.Void System.Func`2<System.Reflection.ParameterInfo,System.Type>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m249082317(__this, p0, p1, method) ((  void (*) (Func_2_t3692615456 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m406556452_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Reflection.ParameterInfo,System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_TisParameterInfo_t1861056598_TisType_t_m1700990983(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3692615456 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m3244726840_gshared)(__this /* static, unused */, p0, p1, method)
// !!0[] System.Linq.Enumerable::ToArray<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisType_t_m4037995289(__this /* static, unused */, p0, method) ((  TypeU5BU5D_t3940880105* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m3600642960_gshared)(__this /* static, unused */, p0, method)
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * Type_GetProperty_m3294104835 (Type_t * __this, String_t* p0, int32_t p1, Binder_t2999457153 * p2, Type_t * p3, TypeU5BU5D_t3940880105* p4, ParameterModifierU5BU5D_t2943407543* p5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 System.Linq.Enumerable::SingleOrDefault<System.Reflection.MemberInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_SingleOrDefault_TisMemberInfo_t_m798163977(__this /* static, unused */, p0, method) ((  MemberInfo_t * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_SingleOrDefault_TisRuntimeObject_m2079752316_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m832393913(__this, p0, method) ((  void (*) (List_1_t557109187 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1328752868_gshared)(__this, p0, method)
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetChildPrivateFields(System.Collections.Generic.IList`1<System.Reflection.MemberInfo>,System.Type,System.Reflection.BindingFlags)
extern "C"  void ReflectionUtils_GetChildPrivateFields_m1505488093 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___initialFields0, Type_t * ___targetType1, int32_t ___bindingAttr2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Reflection.FieldInfo>(System.Collections.IEnumerable)
#define Enumerable_Cast_TisFieldInfo_t_m1416808529(__this /* static, unused */, p0, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m4015728326_gshared)(__this /* static, unused */, p0, method)
// System.Reflection.BindingFlags Newtonsoft.Json.Utilities.ReflectionUtils::RemoveFlag(System.Reflection.BindingFlags,System.Reflection.BindingFlags)
extern "C"  int32_t ReflectionUtils_RemoveFlag_m39812133 (RuntimeObject * __this /* static, unused */, int32_t ___bindingAttr0, int32_t ___flag1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Reflection.MemberInfo>(System.Collections.IEnumerable)
#define Enumerable_Cast_TisMemberInfo_t_m2648121590(__this /* static, unused */, p0, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m4015728326_gshared)(__this /* static, unused */, p0, method)
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::AddRange<System.Reflection.MemberInfo>(System.Collections.Generic.IList`1<T>,System.Collections.Generic.IEnumerable`1<T>)
#define CollectionUtils_AddRange_TisMemberInfo_t_m1468659532(__this /* static, unused */, ___initial0, ___collection1, method) ((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))CollectionUtils_AddRange_TisRuntimeObject_m1203748487_gshared)(__this /* static, unused */, ___initial0, ___collection1, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.PropertyInfo>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m2781142759(__this, p0, method) ((  void (*) (List_1_t2159416693 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1328752868_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.PropertyInfo>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m4242658599(__this, p0, method) ((  void (*) (List_1_t2159416693 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3709462088_gshared)(__this, p0, method)
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetChildPrivateProperties(System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>,System.Type,System.Reflection.BindingFlags)
extern "C"  void ReflectionUtils_GetChildPrivateProperties_m2737051860 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___initialProperties0, Type_t * ___targetType1, int32_t ___bindingAttr2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<System.Reflection.PropertyInfo>::get_Item(System.Int32)
#define List_1_get_Item_m1771064164(__this, p0, method) ((  PropertyInfo_t * (*) (List_1_t2159416693 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Reflection.MemberInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberInfoFromType(System.Type,System.Reflection.MemberInfo)
extern "C"  MemberInfo_t * ReflectionUtils_GetMemberInfoFromType_m1623736994 (RuntimeObject * __this /* static, unused */, Type_t * ___targetType0, MemberInfo_t * ___memberInfo1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Reflection.PropertyInfo>::set_Item(System.Int32,!0)
#define List_1_set_Item_m1136100056(__this, p0, p1, method) ((  void (*) (List_1_t2159416693 *, int32_t, PropertyInfo_t *, const RuntimeMethod*))List_1_set_Item_m1979164443_gshared)(__this, p0, p1, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.PropertyInfo>::get_Count()
#define List_1_get_Count_m4158400089(__this, method) ((  int32_t (*) (List_1_t2159416693 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass42_0__ctor_m3129156399 (U3CU3Ec__DisplayClass42_0_t549567114 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsPublic(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsPublic_m3896229770 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___property0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<System.Reflection.PropertyInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m22287375(__this, p0, p1, method) ((  void (*) (Func_2_t2377163032 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m3104565095_gshared)(__this, p0, p1, method)
// System.Int32 Newtonsoft.Json.Utilities.CollectionUtils::IndexOf<System.Reflection.PropertyInfo>(System.Collections.Generic.IEnumerable`1<T>,System.Func`2<T,System.Boolean>)
#define CollectionUtils_IndexOf_TisPropertyInfo_t_m2841828123(__this /* static, unused */, ___collection0, ___predicate1, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t2377163032 *, const RuntimeMethod*))CollectionUtils_IndexOf_TisRuntimeObject_m856514146_gshared)(__this /* static, unused */, ___collection0, ___predicate1, method)
// Newtonsoft.Json.Utilities.PrimitiveTypeCode Newtonsoft.Json.Utilities.ConvertUtils::GetTypeCode(System.Type)
extern "C"  int32_t ConvertUtils_GetTypeCode_m66075454 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsNullable(System.Type)
extern "C"  bool ReflectionUtils_IsNullable_m645225420 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type)
extern "C"  RuntimeObject * Activator_CreateInstance_m3631483688 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.ctor()
extern "C"  void U3CU3Ec__ctor_m999993876 (U3CU3Ec_t3587133118 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Enumerable::Any<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Any_TisParameterInfo_t1861056598_m2308149110(__this /* static, unused */, p0, method) ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m3173759778_gshared)(__this /* static, unused */, p0, method)
// System.Boolean System.Reflection.FieldInfo::get_IsPrivate()
extern "C"  bool FieldInfo_get_IsPrivate_m1717932363 (FieldInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetBaseDefinition(System.Reflection.PropertyInfo)
extern "C"  MethodInfo_t * ReflectionUtils_GetBaseDefinition_m628546257 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.StringBuffer::get_Position()
extern "C"  int32_t StringBuffer_get_Position_m2575134391 (StringBuffer_t2235727887 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::set_Position(System.Int32)
extern "C"  void StringBuffer_set_Position_m3776098892 (StringBuffer_t2235727887 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringBuffer::get_IsEmpty()
extern "C"  bool StringBuffer_get_IsEmpty_m1286579341 (StringBuffer_t2235727887 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor(System.Char[])
extern "C"  void StringBuffer__ctor_m108922253 (StringBuffer_t2235727887 * __this, CharU5BU5D_t3528271667* ___buffer0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
extern "C"  void StringBuffer__ctor_m83474316 (StringBuffer_t2235727887 * __this, RuntimeObject* ___bufferPool0, int32_t ___initalSize1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::EnsureSize(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
extern "C"  void StringBuffer_EnsureSize_m377227120 (StringBuffer_t2235727887 * __this, RuntimeObject* ___bufferPool0, int32_t ___appendLength1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Append(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char)
extern "C"  void StringBuffer_Append_m1645108833 (StringBuffer_t2235727887 * __this, RuntimeObject* ___bufferPool0, Il2CppChar ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Array_Copy_m344457298 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Append(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[],System.Int32,System.Int32)
extern "C"  void StringBuffer_Append_m109955405 (StringBuffer_t2235727887 * __this, RuntimeObject* ___bufferPool0, CharU5BU5D_t3528271667* ___buffer1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Clear(Newtonsoft.Json.IArrayPool`1<System.Char>)
extern "C"  void StringBuffer_Clear_m2783062614 (StringBuffer_t2235727887 * __this, RuntimeObject* ___bufferPool0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString(System.Int32,System.Int32)
extern "C"  String_t* StringBuffer_ToString_m3112979436 (StringBuffer_t2235727887 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString()
extern "C"  String_t* StringBuffer_ToString_m2736734392 (StringBuffer_t2235727887 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
extern "C"  String_t* String_CreateString_m860434552 (String_t* __this, CharU5BU5D_t3528271667* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] Newtonsoft.Json.Utilities.StringBuffer::get_InternalBuffer()
extern "C"  CharU5BU5D_t3528271667* StringBuffer_get_InternalBuffer_m2608640496 (StringBuffer_t2235727887 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf<System.Char>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisChar_t3634460470_m1523447194(__this /* static, unused */, p0, p1, p2, p3, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, CharU5BU5D_t3528271667*, Il2CppChar, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisChar_t3634460470_m1523447194_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object[])
extern "C"  String_t* StringUtils_FormatWith_m1786611224 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject* ___provider1, ObjectU5BU5D_t2843939325* ___args2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C"  String_t* String_Format_m1881875187 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t2843939325* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C"  void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder,System.IFormatProvider)
extern "C"  void StringWriter__ctor_m3987072682 (StringWriter_t802263757 * __this, StringBuilder_t * p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.Utilities.MathUtils::IntToHex(System.Int32)
extern "C"  Il2CppChar MathUtils_IntToHex_m1986186787 (RuntimeObject * __this /* static, unused */, int32_t ___n0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsUpper(System.Char)
extern "C"  bool Char_IsUpper_m3564669513 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLower(System.Char,System.Globalization.CultureInfo)
extern "C"  Il2CppChar Char_ToLower_m3999837485 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, CultureInfo_t4157843068 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[])
extern "C"  String_t* String_CreateString_m2818852475 (String_t* __this, CharU5BU5D_t3528271667* ___val0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsHighSurrogate(System.Char)
extern "C"  bool Char_IsHighSurrogate_m2151882768 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLowSurrogate(System.Char)
extern "C"  bool Char_IsLowSurrogate_m1445307684 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsInterface()
extern "C"  bool Type_get_IsInterface_m3284996719 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsEnum()
extern "C"  bool Type_get_IsEnum_m208091508 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsClass()
extern "C"  bool Type_get_IsClass_m589177581 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSealed()
extern "C"  bool Type_get_IsSealed_m3543837727 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsAbstract()
extern "C"  bool Type_get_IsAbstract_m1120089130 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsValueType()
extern "C"  bool Type_get_IsValueType_m3108065642 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
extern "C"  bool String_Equals_m2359609904 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::AssignableToTypeName(System.Type,System.String,System.Type&)
extern "C"  bool TypeExtensions_AssignableToTypeName_m503478083 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, String_t* ___fullTypeName1, Type_t ** ___match2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::ImplementInterface(System.Type,System.Type)
extern "C"  bool TypeExtensions_ImplementInterface_m4199275556 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___interfaceType1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AddingNewEventHandler::Invoke(System.Object,System.ComponentModel.AddingNewEventArgs)
extern "C"  void AddingNewEventHandler_Invoke_m2252854360 (AddingNewEventHandler_t4128025860 * __this, RuntimeObject * ___sender0, AddingNewEventArgs_t2974299087 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.NotifyCollectionChangedEventHandler::Invoke(System.Object,System.ComponentModel.NotifyCollectionChangedEventArgs)
extern "C"  void NotifyCollectionChangedEventHandler_Invoke_m1949505131 (NotifyCollectionChangedEventHandler_t2206564399 * __this, RuntimeObject * ___sender0, NotifyCollectionChangedEventArgs_t1368105863 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventArgs::.ctor()
extern "C"  void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangingEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangingEventArgs)
extern "C"  void PropertyChangingEventHandler_Invoke_m4194376157 (PropertyChangingEventHandler_t2830353497 * __this, RuntimeObject * ___sender0, PropertyChangingEventArgs_t2067745136 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass9_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass9_0__ctor_m1379164318 (U3CU3Ec__DisplayClass9_0_t1591754542 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass9_0::<CreateCastConverter>b__0(System.Object)
extern "C"  RuntimeObject * U3CU3Ec__DisplayClass9_0_U3CCreateCastConverterU3Eb__0_m1204656933 (U3CU3Ec__DisplayClass9_0_t1591754542 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass9_0_U3CCreateCastConverterU3Eb__0_m1204656933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t2845904993 * L_0 = __this->get_call_0();
		ObjectU5BU5D_t2843939325* L_1 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject * L_2 = ___o0;
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		RuntimeObject * L_3 = MethodCall_2_Invoke_m386137395(L_0, NULL, L_1, /*hidden argument*/MethodCall_2_Invoke_m386137395_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
extern "C" void TypeConvertKey_t285306760_marshal_pinvoke(const TypeConvertKey_t285306760& unmarshaled, TypeConvertKey_t285306760_marshaled_pinvoke& marshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception,NULL);
}
extern "C" void TypeConvertKey_t285306760_marshal_pinvoke_back(const TypeConvertKey_t285306760_marshaled_pinvoke& marshaled, TypeConvertKey_t285306760& unmarshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception,NULL);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
extern "C" void TypeConvertKey_t285306760_marshal_pinvoke_cleanup(TypeConvertKey_t285306760_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
extern "C" void TypeConvertKey_t285306760_marshal_com(const TypeConvertKey_t285306760& unmarshaled, TypeConvertKey_t285306760_marshaled_com& marshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception,NULL);
}
extern "C" void TypeConvertKey_t285306760_marshal_com_back(const TypeConvertKey_t285306760_marshaled_com& marshaled, TypeConvertKey_t285306760& unmarshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception,NULL);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
extern "C" void TypeConvertKey_t285306760_marshal_com_cleanup(TypeConvertKey_t285306760_marshaled_com& marshaled)
{
}
// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::get_InitialType()
extern "C"  Type_t * TypeConvertKey_get_InitialType_m1948938866 (TypeConvertKey_t285306760 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__initialType_0();
		return L_0;
	}
}
extern "C"  Type_t * TypeConvertKey_get_InitialType_m1948938866_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TypeConvertKey_t285306760 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t285306760 *>(__this + 1);
	return TypeConvertKey_get_InitialType_m1948938866(_thisAdjusted, method);
}
// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::get_TargetType()
extern "C"  Type_t * TypeConvertKey_get_TargetType_m1323123860 (TypeConvertKey_t285306760 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__targetType_1();
		return L_0;
	}
}
extern "C"  Type_t * TypeConvertKey_get_TargetType_m1323123860_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TypeConvertKey_t285306760 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t285306760 *>(__this + 1);
	return TypeConvertKey_get_TargetType_m1323123860(_thisAdjusted, method);
}
// System.Void Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::.ctor(System.Type,System.Type)
extern "C"  void TypeConvertKey__ctor_m1484742788 (TypeConvertKey_t285306760 * __this, Type_t * ___initialType0, Type_t * ___targetType1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___initialType0;
		__this->set__initialType_0(L_0);
		Type_t * L_1 = ___targetType1;
		__this->set__targetType_1(L_1);
		return;
	}
}
extern "C"  void TypeConvertKey__ctor_m1484742788_AdjustorThunk (RuntimeObject * __this, Type_t * ___initialType0, Type_t * ___targetType1, const RuntimeMethod* method)
{
	TypeConvertKey_t285306760 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t285306760 *>(__this + 1);
	TypeConvertKey__ctor_m1484742788(_thisAdjusted, ___initialType0, ___targetType1, method);
}
// System.Int32 Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::GetHashCode()
extern "C"  int32_t TypeConvertKey_GetHashCode_m1557333626 (TypeConvertKey_t285306760 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__initialType_0();
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		Type_t * L_2 = __this->get__targetType_1();
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
extern "C"  int32_t TypeConvertKey_GetHashCode_m1557333626_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TypeConvertKey_t285306760 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t285306760 *>(__this + 1);
	return TypeConvertKey_GetHashCode_m1557333626(_thisAdjusted, method);
}
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(System.Object)
extern "C"  bool TypeConvertKey_Equals_m1519043382 (TypeConvertKey_t285306760 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeConvertKey_Equals_m1519043382_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TypeConvertKey_t285306760_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = TypeConvertKey_Equals_m3807158012(__this, ((*(TypeConvertKey_t285306760 *)((TypeConvertKey_t285306760 *)UnBox(L_1, TypeConvertKey_t285306760_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  bool TypeConvertKey_Equals_m1519043382_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	TypeConvertKey_t285306760 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t285306760 *>(__this + 1);
	return TypeConvertKey_Equals_m1519043382(_thisAdjusted, ___obj0, method);
}
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey)
extern "C"  bool TypeConvertKey_Equals_m3807158012 (TypeConvertKey_t285306760 * __this, TypeConvertKey_t285306760  ___other0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__initialType_0();
		TypeConvertKey_t285306760  L_1 = ___other0;
		Type_t * L_2 = L_1.get__initialType_0();
		if ((!(((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_3 = __this->get__targetType_1();
		TypeConvertKey_t285306760  L_4 = ___other0;
		Type_t * L_5 = L_4.get__targetType_1();
		return (bool)((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
extern "C"  bool TypeConvertKey_Equals_m3807158012_AdjustorThunk (RuntimeObject * __this, TypeConvertKey_t285306760  ___other0, const RuntimeMethod* method)
{
	TypeConvertKey_t285306760 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t285306760 *>(__this + 1);
	return TypeConvertKey_Equals_m3807158012(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.DateTimeParser
extern "C" void DateTimeParser_t3754458704_marshal_pinvoke(const DateTimeParser_t3754458704& unmarshaled, DateTimeParser_t3754458704_marshaled_pinvoke& marshaled)
{
	marshaled.___Year_0 = unmarshaled.get_Year_0();
	marshaled.___Month_1 = unmarshaled.get_Month_1();
	marshaled.___Day_2 = unmarshaled.get_Day_2();
	marshaled.___Hour_3 = unmarshaled.get_Hour_3();
	marshaled.___Minute_4 = unmarshaled.get_Minute_4();
	marshaled.___Second_5 = unmarshaled.get_Second_5();
	marshaled.___Fraction_6 = unmarshaled.get_Fraction_6();
	marshaled.___ZoneHour_7 = unmarshaled.get_ZoneHour_7();
	marshaled.___ZoneMinute_8 = unmarshaled.get_ZoneMinute_8();
	marshaled.___Zone_9 = unmarshaled.get_Zone_9();
	if (unmarshaled.get__text_10() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__text_Length = (unmarshaled.get__text_10())->max_length;
		marshaled.____text_10 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__text_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__text_Length); i++)
		{
			(marshaled.____text_10)[i] = static_cast<uint8_t>((unmarshaled.get__text_10())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____text_10 = NULL;
	}
	marshaled.____end_11 = unmarshaled.get__end_11();
}
extern "C" void DateTimeParser_t3754458704_marshal_pinvoke_back(const DateTimeParser_t3754458704_marshaled_pinvoke& marshaled, DateTimeParser_t3754458704& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeParser_t3754458704_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_Year_temp_0 = 0;
	unmarshaled_Year_temp_0 = marshaled.___Year_0;
	unmarshaled.set_Year_0(unmarshaled_Year_temp_0);
	int32_t unmarshaled_Month_temp_1 = 0;
	unmarshaled_Month_temp_1 = marshaled.___Month_1;
	unmarshaled.set_Month_1(unmarshaled_Month_temp_1);
	int32_t unmarshaled_Day_temp_2 = 0;
	unmarshaled_Day_temp_2 = marshaled.___Day_2;
	unmarshaled.set_Day_2(unmarshaled_Day_temp_2);
	int32_t unmarshaled_Hour_temp_3 = 0;
	unmarshaled_Hour_temp_3 = marshaled.___Hour_3;
	unmarshaled.set_Hour_3(unmarshaled_Hour_temp_3);
	int32_t unmarshaled_Minute_temp_4 = 0;
	unmarshaled_Minute_temp_4 = marshaled.___Minute_4;
	unmarshaled.set_Minute_4(unmarshaled_Minute_temp_4);
	int32_t unmarshaled_Second_temp_5 = 0;
	unmarshaled_Second_temp_5 = marshaled.___Second_5;
	unmarshaled.set_Second_5(unmarshaled_Second_temp_5);
	int32_t unmarshaled_Fraction_temp_6 = 0;
	unmarshaled_Fraction_temp_6 = marshaled.___Fraction_6;
	unmarshaled.set_Fraction_6(unmarshaled_Fraction_temp_6);
	int32_t unmarshaled_ZoneHour_temp_7 = 0;
	unmarshaled_ZoneHour_temp_7 = marshaled.___ZoneHour_7;
	unmarshaled.set_ZoneHour_7(unmarshaled_ZoneHour_temp_7);
	int32_t unmarshaled_ZoneMinute_temp_8 = 0;
	unmarshaled_ZoneMinute_temp_8 = marshaled.___ZoneMinute_8;
	unmarshaled.set_ZoneMinute_8(unmarshaled_ZoneMinute_temp_8);
	int32_t unmarshaled_Zone_temp_9 = 0;
	unmarshaled_Zone_temp_9 = marshaled.___Zone_9;
	unmarshaled.set_Zone_9(unmarshaled_Zone_temp_9);
	if (marshaled.____text_10 != NULL)
	{
		if (unmarshaled.get__text_10() == NULL)
		{
			unmarshaled.set__text_10(reinterpret_cast<CharU5BU5D_t3528271667*>(SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__text_10())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__text_10())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____text_10)[i]));
		}
	}
	int32_t unmarshaled__end_temp_11 = 0;
	unmarshaled__end_temp_11 = marshaled.____end_11;
	unmarshaled.set__end_11(unmarshaled__end_temp_11);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.DateTimeParser
extern "C" void DateTimeParser_t3754458704_marshal_pinvoke_cleanup(DateTimeParser_t3754458704_marshaled_pinvoke& marshaled)
{
	if (marshaled.____text_10 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____text_10);
		marshaled.____text_10 = NULL;
	}
}
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.DateTimeParser
extern "C" void DateTimeParser_t3754458704_marshal_com(const DateTimeParser_t3754458704& unmarshaled, DateTimeParser_t3754458704_marshaled_com& marshaled)
{
	marshaled.___Year_0 = unmarshaled.get_Year_0();
	marshaled.___Month_1 = unmarshaled.get_Month_1();
	marshaled.___Day_2 = unmarshaled.get_Day_2();
	marshaled.___Hour_3 = unmarshaled.get_Hour_3();
	marshaled.___Minute_4 = unmarshaled.get_Minute_4();
	marshaled.___Second_5 = unmarshaled.get_Second_5();
	marshaled.___Fraction_6 = unmarshaled.get_Fraction_6();
	marshaled.___ZoneHour_7 = unmarshaled.get_ZoneHour_7();
	marshaled.___ZoneMinute_8 = unmarshaled.get_ZoneMinute_8();
	marshaled.___Zone_9 = unmarshaled.get_Zone_9();
	if (unmarshaled.get__text_10() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__text_Length = (unmarshaled.get__text_10())->max_length;
		marshaled.____text_10 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__text_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__text_Length); i++)
		{
			(marshaled.____text_10)[i] = static_cast<uint8_t>((unmarshaled.get__text_10())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____text_10 = NULL;
	}
	marshaled.____end_11 = unmarshaled.get__end_11();
}
extern "C" void DateTimeParser_t3754458704_marshal_com_back(const DateTimeParser_t3754458704_marshaled_com& marshaled, DateTimeParser_t3754458704& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeParser_t3754458704_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_Year_temp_0 = 0;
	unmarshaled_Year_temp_0 = marshaled.___Year_0;
	unmarshaled.set_Year_0(unmarshaled_Year_temp_0);
	int32_t unmarshaled_Month_temp_1 = 0;
	unmarshaled_Month_temp_1 = marshaled.___Month_1;
	unmarshaled.set_Month_1(unmarshaled_Month_temp_1);
	int32_t unmarshaled_Day_temp_2 = 0;
	unmarshaled_Day_temp_2 = marshaled.___Day_2;
	unmarshaled.set_Day_2(unmarshaled_Day_temp_2);
	int32_t unmarshaled_Hour_temp_3 = 0;
	unmarshaled_Hour_temp_3 = marshaled.___Hour_3;
	unmarshaled.set_Hour_3(unmarshaled_Hour_temp_3);
	int32_t unmarshaled_Minute_temp_4 = 0;
	unmarshaled_Minute_temp_4 = marshaled.___Minute_4;
	unmarshaled.set_Minute_4(unmarshaled_Minute_temp_4);
	int32_t unmarshaled_Second_temp_5 = 0;
	unmarshaled_Second_temp_5 = marshaled.___Second_5;
	unmarshaled.set_Second_5(unmarshaled_Second_temp_5);
	int32_t unmarshaled_Fraction_temp_6 = 0;
	unmarshaled_Fraction_temp_6 = marshaled.___Fraction_6;
	unmarshaled.set_Fraction_6(unmarshaled_Fraction_temp_6);
	int32_t unmarshaled_ZoneHour_temp_7 = 0;
	unmarshaled_ZoneHour_temp_7 = marshaled.___ZoneHour_7;
	unmarshaled.set_ZoneHour_7(unmarshaled_ZoneHour_temp_7);
	int32_t unmarshaled_ZoneMinute_temp_8 = 0;
	unmarshaled_ZoneMinute_temp_8 = marshaled.___ZoneMinute_8;
	unmarshaled.set_ZoneMinute_8(unmarshaled_ZoneMinute_temp_8);
	int32_t unmarshaled_Zone_temp_9 = 0;
	unmarshaled_Zone_temp_9 = marshaled.___Zone_9;
	unmarshaled.set_Zone_9(unmarshaled_Zone_temp_9);
	if (marshaled.____text_10 != NULL)
	{
		if (unmarshaled.get__text_10() == NULL)
		{
			unmarshaled.set__text_10(reinterpret_cast<CharU5BU5D_t3528271667*>(SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__text_10())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__text_10())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____text_10)[i]));
		}
	}
	int32_t unmarshaled__end_temp_11 = 0;
	unmarshaled__end_temp_11 = marshaled.____end_11;
	unmarshaled.set__end_11(unmarshaled__end_temp_11);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.DateTimeParser
extern "C" void DateTimeParser_t3754458704_marshal_com_cleanup(DateTimeParser_t3754458704_marshaled_com& marshaled)
{
	if (marshaled.____text_10 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____text_10);
		marshaled.____text_10 = NULL;
	}
}
// System.Void Newtonsoft.Json.Utilities.DateTimeParser::.cctor()
extern "C"  void DateTimeParser__cctor_m1006148270 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeParser__cctor_m1006148270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t385246372* L_0 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)7));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255367____9E31F24F64765FCAA589F589324D17C9FCF6A06D_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->set_Power10_12(L_0);
		int32_t L_2 = String_get_Length_m3847582255(_stringLiteral2378956916, /*hidden argument*/NULL);
		((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->set_Lzyyyy_13(L_2);
		int32_t L_3 = String_get_Length_m3847582255(_stringLiteral1235401807, /*hidden argument*/NULL);
		((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->set_Lzyyyy__14(L_3);
		int32_t L_4 = String_get_Length_m3847582255(_stringLiteral3405197142, /*hidden argument*/NULL);
		((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->set_Lzyyyy_MM_15(L_4);
		int32_t L_5 = String_get_Length_m3847582255(_stringLiteral8793942, /*hidden argument*/NULL);
		((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->set_Lzyyyy_MM__16(L_5);
		int32_t L_6 = String_get_Length_m3847582255(_stringLiteral1072719392, /*hidden argument*/NULL);
		((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->set_Lzyyyy_MM_dd_17(L_6);
		int32_t L_7 = String_get_Length_m3847582255(_stringLiteral3804830530, /*hidden argument*/NULL);
		((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->set_Lzyyyy_MM_ddT_18(L_7);
		int32_t L_8 = String_get_Length_m3847582255(_stringLiteral3457333224, /*hidden argument*/NULL);
		((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->set_LzHH_19(L_8);
		int32_t L_9 = String_get_Length_m3847582255(_stringLiteral3886980064, /*hidden argument*/NULL);
		((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->set_LzHH__20(L_9);
		int32_t L_10 = String_get_Length_m3847582255(_stringLiteral3027523993, /*hidden argument*/NULL);
		((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->set_LzHH_mm_21(L_10);
		int32_t L_11 = String_get_Length_m3847582255(_stringLiteral3026868633, /*hidden argument*/NULL);
		((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->set_LzHH_mm__22(L_11);
		int32_t L_12 = String_get_Length_m3847582255(_stringLiteral2357574120, /*hidden argument*/NULL);
		((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->set_LzHH_mm_ss_23(L_12);
		int32_t L_13 = String_get_Length_m3847582255(_stringLiteral3452614531, /*hidden argument*/NULL);
		((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->set_Lz__24(L_13);
		int32_t L_14 = String_get_Length_m3847582255(_stringLiteral1035957435, /*hidden argument*/NULL);
		((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->set_Lz_zz_25(L_14);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::Parse(System.Char[],System.Int32,System.Int32)
extern "C"  bool DateTimeParser_Parse_m73420931 (DateTimeParser_t3754458704 * __this, CharU5BU5D_t3528271667* ___text0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeParser_Parse_m73420931_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t3528271667* L_0 = ___text0;
		__this->set__text_10(L_0);
		int32_t L_1 = ___startIndex1;
		int32_t L_2 = ___length2;
		__this->set__end_11(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)));
		int32_t L_3 = ___startIndex1;
		bool L_4 = DateTimeParser_ParseDate_m1503841812(__this, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t3754458704_il2cpp_TypeInfo_var);
		int32_t L_5 = ((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->get_Lzyyyy_MM_dd_17();
		int32_t L_6 = ___startIndex1;
		bool L_7 = DateTimeParser_ParseChar_m818678987(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6)), ((int32_t)84), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t3754458704_il2cpp_TypeInfo_var);
		int32_t L_8 = ((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->get_Lzyyyy_MM_ddT_18();
		int32_t L_9 = ___startIndex1;
		bool L_10 = DateTimeParser_ParseTimeAndZoneAndWhitespace_m3012059955(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003b;
		}
	}
	{
		return (bool)1;
	}

IL_003b:
	{
		return (bool)0;
	}
}
extern "C"  bool DateTimeParser_Parse_m73420931_AdjustorThunk (RuntimeObject * __this, CharU5BU5D_t3528271667* ___text0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	DateTimeParser_t3754458704 * _thisAdjusted = reinterpret_cast<DateTimeParser_t3754458704 *>(__this + 1);
	return DateTimeParser_Parse_m73420931(_thisAdjusted, ___text0, ___startIndex1, ___length2, method);
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseDate(System.Int32)
extern "C"  bool DateTimeParser_ParseDate_m1503841812 (DateTimeParser_t3754458704 * __this, int32_t ___start0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeParser_ParseDate_m1503841812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___start0;
		int32_t* L_1 = __this->get_address_of_Year_0();
		bool L_2 = DateTimeParser_Parse4Digit_m3204871448(__this, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_3 = __this->get_Year_0();
		if ((((int32_t)1) > ((int32_t)L_3)))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_4 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t3754458704_il2cpp_TypeInfo_var);
		int32_t L_5 = ((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->get_Lzyyyy_13();
		bool L_6 = DateTimeParser_ParseChar_m818678987(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)), ((int32_t)45), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_7 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t3754458704_il2cpp_TypeInfo_var);
		int32_t L_8 = ((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->get_Lzyyyy__14();
		int32_t* L_9 = __this->get_address_of_Month_1();
		bool L_10 = DateTimeParser_Parse2Digit_m78569833(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_11 = __this->get_Month_1();
		if ((((int32_t)1) > ((int32_t)L_11)))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_12 = __this->get_Month_1();
		if ((((int32_t)L_12) > ((int32_t)((int32_t)12))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_13 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t3754458704_il2cpp_TypeInfo_var);
		int32_t L_14 = ((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->get_Lzyyyy_MM_15();
		bool L_15 = DateTimeParser_ParseChar_m818678987(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)), ((int32_t)45), /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_16 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t3754458704_il2cpp_TypeInfo_var);
		int32_t L_17 = ((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->get_Lzyyyy_MM__16();
		int32_t* L_18 = __this->get_address_of_Day_2();
		bool L_19 = DateTimeParser_Parse2Digit_m78569833(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17)), L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_20 = __this->get_Day_2();
		if ((((int32_t)1) > ((int32_t)L_20)))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_21 = __this->get_Day_2();
		int32_t L_22 = __this->get_Year_0();
		int32_t L_23 = __this->get_Month_1();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		int32_t L_24 = DateTime_DaysInMonth_m2587936260(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_21) > ((int32_t)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00a3:
	{
		return (bool)0;
	}
}
extern "C"  bool DateTimeParser_ParseDate_m1503841812_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, const RuntimeMethod* method)
{
	DateTimeParser_t3754458704 * _thisAdjusted = reinterpret_cast<DateTimeParser_t3754458704 *>(__this + 1);
	return DateTimeParser_ParseDate_m1503841812(_thisAdjusted, ___start0, method);
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseTimeAndZoneAndWhitespace(System.Int32)
extern "C"  bool DateTimeParser_ParseTimeAndZoneAndWhitespace_m3012059955 (DateTimeParser_t3754458704 * __this, int32_t ___start0, const RuntimeMethod* method)
{
	{
		bool L_0 = DateTimeParser_ParseTime_m2613649973(__this, (&___start0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___start0;
		bool L_2 = DateTimeParser_ParseZone_m676506294(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0012:
	{
		return (bool)0;
	}
}
extern "C"  bool DateTimeParser_ParseTimeAndZoneAndWhitespace_m3012059955_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, const RuntimeMethod* method)
{
	DateTimeParser_t3754458704 * _thisAdjusted = reinterpret_cast<DateTimeParser_t3754458704 *>(__this + 1);
	return DateTimeParser_ParseTimeAndZoneAndWhitespace_m3012059955(_thisAdjusted, ___start0, method);
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseTime(System.Int32&)
extern "C"  bool DateTimeParser_ParseTime_m2613649973 (DateTimeParser_t3754458704 * __this, int32_t* ___start0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeParser_ParseTime_m2613649973_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t* L_0 = ___start0;
		int32_t* L_1 = __this->get_address_of_Hour_3();
		bool L_2 = DateTimeParser_Parse2Digit_m78569833(__this, (*((int32_t*)L_0)), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_3 = __this->get_Hour_3();
		if ((((int32_t)L_3) > ((int32_t)((int32_t)24))))
		{
			goto IL_009b;
		}
	}
	{
		int32_t* L_4 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t3754458704_il2cpp_TypeInfo_var);
		int32_t L_5 = ((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->get_LzHH_19();
		bool L_6 = DateTimeParser_ParseChar_m818678987(__this, ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_4)), (int32_t)L_5)), ((int32_t)58), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_009b;
		}
	}
	{
		int32_t* L_7 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t3754458704_il2cpp_TypeInfo_var);
		int32_t L_8 = ((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->get_LzHH__20();
		int32_t* L_9 = __this->get_address_of_Minute_4();
		bool L_10 = DateTimeParser_Parse2Digit_m78569833(__this, ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_7)), (int32_t)L_8)), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_11 = __this->get_Minute_4();
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)60))))
		{
			goto IL_009b;
		}
	}
	{
		int32_t* L_12 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t3754458704_il2cpp_TypeInfo_var);
		int32_t L_13 = ((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->get_LzHH_mm_21();
		bool L_14 = DateTimeParser_ParseChar_m818678987(__this, ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_12)), (int32_t)L_13)), ((int32_t)58), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_009b;
		}
	}
	{
		int32_t* L_15 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t3754458704_il2cpp_TypeInfo_var);
		int32_t L_16 = ((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->get_LzHH_mm__22();
		int32_t* L_17 = __this->get_address_of_Second_5();
		bool L_18 = DateTimeParser_Parse2Digit_m78569833(__this, ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_15)), (int32_t)L_16)), L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_19 = __this->get_Second_5();
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)60))))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_20 = __this->get_Hour_3();
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_21 = __this->get_Minute_4();
		if (L_21)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_22 = __this->get_Second_5();
		if (!L_22)
		{
			goto IL_009d;
		}
	}

IL_009b:
	{
		return (bool)0;
	}

IL_009d:
	{
		int32_t* L_23 = ___start0;
		int32_t* L_24 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t3754458704_il2cpp_TypeInfo_var);
		int32_t L_25 = ((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->get_LzHH_mm_ss_23();
		*((int32_t*)(L_23)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_24)), (int32_t)L_25));
		int32_t* L_26 = ___start0;
		bool L_27 = DateTimeParser_ParseChar_m818678987(__this, (*((int32_t*)L_26)), ((int32_t)46), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0131;
		}
	}
	{
		__this->set_Fraction_6(0);
		V_0 = 0;
		goto IL_00e9;
	}

IL_00be:
	{
		CharU5BU5D_t3528271667* L_28 = __this->get__text_10();
		int32_t* L_29 = ___start0;
		int32_t L_30 = (*((int32_t*)L_29));
		uint16_t L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)((int32_t)48)));
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) < ((int32_t)0)))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) > ((int32_t)((int32_t)9))))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_34 = __this->get_Fraction_6();
		int32_t L_35 = V_1;
		__this->set_Fraction_6(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_34, (int32_t)((int32_t)10))), (int32_t)L_35)));
		int32_t L_36 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00e9:
	{
		int32_t* L_37 = ___start0;
		int32_t* L_38 = ___start0;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_38)), (int32_t)1));
		int32_t L_39 = V_2;
		*((int32_t*)(L_37)) = (int32_t)L_39;
		int32_t L_40 = V_2;
		int32_t L_41 = __this->get__end_11();
		if ((((int32_t)L_40) >= ((int32_t)L_41)))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_42 = V_0;
		if ((((int32_t)L_42) < ((int32_t)7)))
		{
			goto IL_00be;
		}
	}

IL_00fe:
	{
		int32_t L_43 = V_0;
		if ((((int32_t)L_43) >= ((int32_t)7)))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_44 = V_0;
		if (L_44)
		{
			goto IL_0107;
		}
	}
	{
		return (bool)0;
	}

IL_0107:
	{
		int32_t L_45 = __this->get_Fraction_6();
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t3754458704_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_46 = ((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->get_Power10_12();
		int32_t L_47 = V_0;
		int32_t L_48 = ((int32_t)il2cpp_codegen_subtract((int32_t)7, (int32_t)L_47));
		int32_t L_49 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		__this->set_Fraction_6(((int32_t)il2cpp_codegen_multiply((int32_t)L_45, (int32_t)L_49)));
	}

IL_011d:
	{
		int32_t L_50 = __this->get_Hour_3();
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_0131;
		}
	}
	{
		int32_t L_51 = __this->get_Fraction_6();
		if (!L_51)
		{
			goto IL_0131;
		}
	}
	{
		return (bool)0;
	}

IL_0131:
	{
		return (bool)1;
	}
}
extern "C"  bool DateTimeParser_ParseTime_m2613649973_AdjustorThunk (RuntimeObject * __this, int32_t* ___start0, const RuntimeMethod* method)
{
	DateTimeParser_t3754458704 * _thisAdjusted = reinterpret_cast<DateTimeParser_t3754458704 *>(__this + 1);
	return DateTimeParser_ParseTime_m2613649973(_thisAdjusted, ___start0, method);
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseZone(System.Int32)
extern "C"  bool DateTimeParser_ParseZone_m676506294 (DateTimeParser_t3754458704 * __this, int32_t ___start0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeParser_ParseZone_m676506294_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = __this->get__end_11();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_00f3;
		}
	}
	{
		CharU5BU5D_t3528271667* L_2 = __this->get__text_10();
		int32_t L_3 = ___start0;
		int32_t L_4 = L_3;
		uint16_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)90))))
		{
			goto IL_001f;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)122)))))
		{
			goto IL_0030;
		}
	}

IL_001f:
	{
		__this->set_Zone_9(1);
		int32_t L_8 = ___start0;
		___start0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		goto IL_00f3;
	}

IL_0030:
	{
		int32_t L_9 = ___start0;
		int32_t L_10 = __this->get__end_11();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2))) >= ((int32_t)L_10)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_11 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t3754458704_il2cpp_TypeInfo_var);
		int32_t L_12 = ((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->get_Lz__24();
		int32_t* L_13 = __this->get_address_of_ZoneHour_7();
		bool L_14 = DateTimeParser_Parse2Digit_m78569833(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)), L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_15 = __this->get_ZoneHour_7();
		if ((((int32_t)L_15) > ((int32_t)((int32_t)99))))
		{
			goto IL_0086;
		}
	}
	{
		Il2CppChar L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)43))))
		{
			goto IL_0076;
		}
	}
	{
		Il2CppChar L_17 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0086;
		}
	}
	{
		__this->set_Zone_9(2);
		int32_t L_18 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t3754458704_il2cpp_TypeInfo_var);
		int32_t L_19 = ((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->get_Lz_zz_25();
		___start0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19));
		goto IL_0086;
	}

IL_0076:
	{
		__this->set_Zone_9(3);
		int32_t L_20 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t3754458704_il2cpp_TypeInfo_var);
		int32_t L_21 = ((DateTimeParser_t3754458704_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t3754458704_il2cpp_TypeInfo_var))->get_Lz_zz_25();
		___start0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21));
	}

IL_0086:
	{
		int32_t L_22 = ___start0;
		int32_t L_23 = __this->get__end_11();
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_24 = ___start0;
		bool L_25 = DateTimeParser_ParseChar_m818678987(__this, L_24, ((int32_t)58), /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_26 = ___start0;
		___start0 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		int32_t L_27 = ___start0;
		int32_t L_28 = __this->get__end_11();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1))) >= ((int32_t)L_28)))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_29 = ___start0;
		int32_t* L_30 = __this->get_address_of_ZoneMinute_8();
		bool L_31 = DateTimeParser_Parse2Digit_m78569833(__this, L_29, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_32 = __this->get_ZoneMinute_8();
		if ((((int32_t)L_32) > ((int32_t)((int32_t)99))))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_33 = ___start0;
		___start0 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)2));
		goto IL_00f3;
	}

IL_00ca:
	{
		int32_t L_34 = ___start0;
		int32_t L_35 = __this->get__end_11();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1))) >= ((int32_t)L_35)))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_36 = ___start0;
		int32_t* L_37 = __this->get_address_of_ZoneMinute_8();
		bool L_38 = DateTimeParser_Parse2Digit_m78569833(__this, L_36, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_39 = __this->get_ZoneMinute_8();
		if ((((int32_t)L_39) > ((int32_t)((int32_t)99))))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_40 = ___start0;
		___start0 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)2));
	}

IL_00f3:
	{
		int32_t L_41 = ___start0;
		int32_t L_42 = __this->get__end_11();
		return (bool)((((int32_t)L_41) == ((int32_t)L_42))? 1 : 0);
	}
}
extern "C"  bool DateTimeParser_ParseZone_m676506294_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, const RuntimeMethod* method)
{
	DateTimeParser_t3754458704 * _thisAdjusted = reinterpret_cast<DateTimeParser_t3754458704 *>(__this + 1);
	return DateTimeParser_ParseZone_m676506294(_thisAdjusted, ___start0, method);
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::Parse4Digit(System.Int32,System.Int32&)
extern "C"  bool DateTimeParser_Parse4Digit_m3204871448 (DateTimeParser_t3754458704 * __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = __this->get__end_11();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)3))) >= ((int32_t)L_1)))
		{
			goto IL_0079;
		}
	}
	{
		CharU5BU5D_t3528271667* L_2 = __this->get__text_10();
		int32_t L_3 = ___start0;
		int32_t L_4 = L_3;
		uint16_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)48)));
		CharU5BU5D_t3528271667* L_6 = __this->get__text_10();
		int32_t L_7 = ___start0;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		uint16_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)48)));
		CharU5BU5D_t3528271667* L_10 = __this->get__text_10();
		int32_t L_11 = ___start0;
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)2));
		uint16_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)48)));
		CharU5BU5D_t3528271667* L_14 = __this->get__text_10();
		int32_t L_15 = ___start0;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)3));
		uint16_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)((int32_t)48)));
		int32_t L_18 = V_0;
		if ((((int32_t)0) > ((int32_t)L_18)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_20 = V_1;
		if ((((int32_t)0) > ((int32_t)L_20)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_22 = V_2;
		if ((((int32_t)0) > ((int32_t)L_22)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_24 = V_3;
		if ((((int32_t)0) > ((int32_t)L_24)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_25 = V_3;
		if ((((int32_t)L_25) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_26 = ___num1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_1;
		int32_t L_29 = V_2;
		int32_t L_30 = V_3;
		*((int32_t*)(L_26)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)((int32_t)10))), (int32_t)L_28)), (int32_t)((int32_t)10))), (int32_t)L_29)), (int32_t)((int32_t)10))), (int32_t)L_30));
		return (bool)1;
	}

IL_0079:
	{
		int32_t* L_31 = ___num1;
		*((int32_t*)(L_31)) = (int32_t)0;
		return (bool)0;
	}
}
extern "C"  bool DateTimeParser_Parse4Digit_m3204871448_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method)
{
	DateTimeParser_t3754458704 * _thisAdjusted = reinterpret_cast<DateTimeParser_t3754458704 *>(__this + 1);
	return DateTimeParser_Parse4Digit_m3204871448(_thisAdjusted, ___start0, ___num1, method);
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::Parse2Digit(System.Int32,System.Int32&)
extern "C"  bool DateTimeParser_Parse2Digit_m78569833 (DateTimeParser_t3754458704 * __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = __this->get__end_11();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))) >= ((int32_t)L_1)))
		{
			goto IL_0041;
		}
	}
	{
		CharU5BU5D_t3528271667* L_2 = __this->get__text_10();
		int32_t L_3 = ___start0;
		int32_t L_4 = L_3;
		uint16_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)48)));
		CharU5BU5D_t3528271667* L_6 = __this->get__text_10();
		int32_t L_7 = ___start0;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		uint16_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)48)));
		int32_t L_10 = V_0;
		if ((((int32_t)0) > ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)0) > ((int32_t)L_12)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t* L_14 = ___num1;
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		*((int32_t*)(L_14)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)((int32_t)10))), (int32_t)L_16));
		return (bool)1;
	}

IL_0041:
	{
		int32_t* L_17 = ___num1;
		*((int32_t*)(L_17)) = (int32_t)0;
		return (bool)0;
	}
}
extern "C"  bool DateTimeParser_Parse2Digit_m78569833_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method)
{
	DateTimeParser_t3754458704 * _thisAdjusted = reinterpret_cast<DateTimeParser_t3754458704 *>(__this + 1);
	return DateTimeParser_Parse2Digit_m78569833(_thisAdjusted, ___start0, ___num1, method);
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseChar(System.Int32,System.Char)
extern "C"  bool DateTimeParser_ParseChar_m818678987 (DateTimeParser_t3754458704 * __this, int32_t ___start0, Il2CppChar ___ch1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = __this->get__end_11();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0015;
		}
	}
	{
		CharU5BU5D_t3528271667* L_2 = __this->get__text_10();
		int32_t L_3 = ___start0;
		int32_t L_4 = L_3;
		uint16_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		Il2CppChar L_6 = ___ch1;
		return (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
	}

IL_0015:
	{
		return (bool)0;
	}
}
extern "C"  bool DateTimeParser_ParseChar_m818678987_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, Il2CppChar ___ch1, const RuntimeMethod* method)
{
	DateTimeParser_t3754458704 * _thisAdjusted = reinterpret_cast<DateTimeParser_t3754458704 *>(__this + 1);
	return DateTimeParser_ParseChar_m818678987(_thisAdjusted, ___start0, ___ch1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::.cctor()
extern "C"  void DateTimeUtils__cctor_m564074174 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils__cctor_m564074174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((DateTimeUtils_t3515429982_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var))->set_InitialJavaScriptDateTicks_0(((int64_t)621355968000000000LL));
		Int32U5BU5D_t385246372* L_0 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13)));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255367____E92B39D8233061927D9ACDE54665E68E7535635A_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		((DateTimeUtils_t3515429982_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var))->set_DaysToMonth365_1(L_0);
		Int32U5BU5D_t385246372* L_2 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13)));
		RuntimeFieldHandle_t1871169219  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255367____DD3AEFEADB1CD615F3017763F1568179FEE640B0_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		((DateTimeUtils_t3515429982_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var))->set_DaysToMonth366_2(L_2);
		return;
	}
}
// System.TimeSpan Newtonsoft.Json.Utilities.DateTimeUtils::GetUtcOffset(System.DateTime)
extern "C"  TimeSpan_t881159249  DateTimeUtils_GetUtcOffset_m575763097 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_GetUtcOffset_m575763097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZone_t2038656743_il2cpp_TypeInfo_var);
		TimeZone_t2038656743 * L_0 = TimeZone_get_CurrentTimeZone_m2520313554(NULL /*static, unused*/, /*hidden argument*/NULL);
		DateTime_t3738529785  L_1 = ___d0;
		TimeSpan_t881159249  L_2 = VirtFuncInvoker1< TimeSpan_t881159249 , DateTime_t3738529785  >::Invoke(5 /* System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime) */, L_0, L_1);
		return L_2;
	}
}
// System.Xml.XmlDateTimeSerializationMode Newtonsoft.Json.Utilities.DateTimeUtils::ToSerializationMode(System.DateTimeKind)
extern "C"  int32_t DateTimeUtils_ToSerializationMode_m2887824490 (RuntimeObject * __this /* static, unused */, int32_t ___kind0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_ToSerializationMode_m2887824490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___kind0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0016;
			}
			case 1:
			{
				goto IL_0018;
			}
			case 2:
			{
				goto IL_0014;
			}
		}
	}
	{
		goto IL_001a;
	}

IL_0014:
	{
		return (int32_t)(0);
	}

IL_0016:
	{
		return (int32_t)(2);
	}

IL_0018:
	{
		return (int32_t)(1);
	}

IL_001a:
	{
		int32_t L_1 = ___kind0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(DateTimeKind_t3468814247_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_t777629997 * L_4 = MiscellaneousUtils_CreateArgumentOutOfRangeException_m1064925786(NULL /*static, unused*/, _stringLiteral835817753, L_3, _stringLiteral3800573230, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4,DateTimeUtils_ToSerializationMode_m2887824490_RuntimeMethod_var);
	}
}
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::EnsureDateTime(System.DateTime,Newtonsoft.Json.DateTimeZoneHandling)
extern "C"  DateTime_t3738529785  DateTimeUtils_EnsureDateTime_m2677626152 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, int32_t ___timeZone1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_EnsureDateTime_m2677626152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___timeZone1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0048;
			}
		}
	}
	{
		goto IL_003d;
	}

IL_0018:
	{
		DateTime_t3738529785  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_2 = DateTimeUtils_SwitchToLocalTime_m3237404399(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		___value0 = L_2;
		goto IL_0048;
	}

IL_0022:
	{
		DateTime_t3738529785  L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_4 = DateTimeUtils_SwitchToUtcTime_m1312603771(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		___value0 = L_4;
		goto IL_0048;
	}

IL_002c:
	{
		int64_t L_5 = DateTime_get_Ticks_m1550640881((&___value0), /*hidden argument*/NULL);
		DateTime__ctor_m1095105629((&___value0), L_5, 0, /*hidden argument*/NULL);
		goto IL_0048;
	}

IL_003d:
	{
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_6, _stringLiteral3627081376, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6,DateTimeUtils_EnsureDateTime_m2677626152_RuntimeMethod_var);
	}

IL_0048:
	{
		DateTime_t3738529785  L_7 = ___value0;
		return L_7;
	}
}
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::SwitchToLocalTime(System.DateTime)
extern "C"  DateTime_t3738529785  DateTimeUtils_SwitchToLocalTime_m3237404399 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = DateTime_get_Kind_m2154871796((&___value0), /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0032;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_001c:
	{
		int64_t L_2 = DateTime_get_Ticks_m1550640881((&___value0), /*hidden argument*/NULL);
		DateTime_t3738529785  L_3;
		memset(&L_3, 0, sizeof(L_3));
		DateTime__ctor_m1095105629((&L_3), L_2, 2, /*hidden argument*/NULL);
		return L_3;
	}

IL_002a:
	{
		DateTime_t3738529785  L_4 = DateTime_ToLocalTime_m3134475597((&___value0), /*hidden argument*/NULL);
		return L_4;
	}

IL_0032:
	{
		DateTime_t3738529785  L_5 = ___value0;
		return L_5;
	}

IL_0034:
	{
		DateTime_t3738529785  L_6 = ___value0;
		return L_6;
	}
}
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::SwitchToUtcTime(System.DateTime)
extern "C"  DateTime_t3738529785  DateTimeUtils_SwitchToUtcTime_m1312603771 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = DateTime_get_Kind_m2154871796((&___value0), /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_002c;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_001c:
	{
		int64_t L_2 = DateTime_get_Ticks_m1550640881((&___value0), /*hidden argument*/NULL);
		DateTime_t3738529785  L_3;
		memset(&L_3, 0, sizeof(L_3));
		DateTime__ctor_m1095105629((&L_3), L_2, 1, /*hidden argument*/NULL);
		return L_3;
	}

IL_002a:
	{
		DateTime_t3738529785  L_4 = ___value0;
		return L_4;
	}

IL_002c:
	{
		DateTime_t3738529785  L_5 = DateTime_ToUniversalTime_m1945318289((&___value0), /*hidden argument*/NULL);
		return L_5;
	}

IL_0034:
	{
		DateTime_t3738529785  L_6 = ___value0;
		return L_6;
	}
}
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ToUniversalTicks(System.DateTime)
extern "C"  int64_t DateTimeUtils_ToUniversalTicks_m4266243281 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___dateTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_ToUniversalTicks_m4266243281_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = DateTime_get_Kind_m2154871796((&___dateTime0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_1 = DateTime_get_Ticks_m1550640881((&___dateTime0), /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		DateTime_t3738529785  L_2 = ___dateTime0;
		DateTime_t3738529785  L_3 = ___dateTime0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_4 = DateTimeUtils_GetUtcOffset_m575763097(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int64_t L_5 = DateTimeUtils_ToUniversalTicks_m444892890(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ToUniversalTicks(System.DateTime,System.TimeSpan)
extern "C"  int64_t DateTimeUtils_ToUniversalTicks_m444892890 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___dateTime0, TimeSpan_t881159249  ___offset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_ToUniversalTicks_m444892890_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		int32_t L_0 = DateTime_get_Kind_m2154871796((&___dateTime0), /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		DateTime_t3738529785  L_1 = ___dateTime0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_2 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MaxValue_2();
		bool L_3 = DateTime_op_Equality_m1022058599(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		DateTime_t3738529785  L_4 = ___dateTime0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_5 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MinValue_3();
		bool L_6 = DateTime_op_Equality_m1022058599(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}

IL_0024:
	{
		int64_t L_7 = DateTime_get_Ticks_m1550640881((&___dateTime0), /*hidden argument*/NULL);
		return L_7;
	}

IL_002c:
	{
		int64_t L_8 = DateTime_get_Ticks_m1550640881((&___dateTime0), /*hidden argument*/NULL);
		int64_t L_9 = TimeSpan_get_Ticks_m2137362016((&___offset1), /*hidden argument*/NULL);
		V_0 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_8, (int64_t)L_9));
		int64_t L_10 = V_0;
		if ((((int64_t)L_10) <= ((int64_t)((int64_t)3155378975999999999LL))))
		{
			goto IL_0052;
		}
	}
	{
		return ((int64_t)3155378975999999999LL);
	}

IL_0052:
	{
		int64_t L_11 = V_0;
		if ((((int64_t)L_11) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_005a;
		}
	}
	{
		return (((int64_t)((int64_t)0)));
	}

IL_005a:
	{
		int64_t L_12 = V_0;
		return L_12;
	}
}
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.TimeSpan)
extern "C"  int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m478085472 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___dateTime0, TimeSpan_t881159249  ___offset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m478085472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t3738529785  L_0 = ___dateTime0;
		TimeSpan_t881159249  L_1 = ___offset1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		int64_t L_2 = DateTimeUtils_ToUniversalTicks_m444892890(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		int64_t L_3 = DateTimeUtils_UniversialTicksToJavaScriptTicks_m3989465022(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime)
extern "C"  int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m4215710814 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___dateTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m4215710814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t3738529785  L_0 = ___dateTime0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		int64_t L_1 = DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m3362411187(NULL /*static, unused*/, L_0, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.Boolean)
extern "C"  int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m3362411187 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___dateTime0, bool ___convertToUtc1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m3362411187_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t G_B3_0 = 0;
	{
		bool L_0 = ___convertToUtc1;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		int64_t L_1 = DateTime_get_Ticks_m1550640881((&___dateTime0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_0012;
	}

IL_000c:
	{
		DateTime_t3738529785  L_2 = ___dateTime0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		int64_t L_3 = DateTimeUtils_ToUniversalTicks_m4266243281(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		int64_t L_4 = DateTimeUtils_UniversialTicksToJavaScriptTicks_m3989465022(NULL /*static, unused*/, G_B3_0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::UniversialTicksToJavaScriptTicks(System.Int64)
extern "C"  int64_t DateTimeUtils_UniversialTicksToJavaScriptTicks_m3989465022 (RuntimeObject * __this /* static, unused */, int64_t ___universialTicks0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_UniversialTicksToJavaScriptTicks_m3989465022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___universialTicks0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		int64_t L_1 = ((DateTimeUtils_t3515429982_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var))->get_InitialJavaScriptDateTicks_0();
		return ((int64_t)((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_0, (int64_t)L_1))/(int64_t)(((int64_t)((int64_t)((int32_t)10000))))));
	}
}
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::ConvertJavaScriptTicksToDateTime(System.Int64)
extern "C"  DateTime_t3738529785  DateTimeUtils_ConvertJavaScriptTicksToDateTime_m2220449017 (RuntimeObject * __this /* static, unused */, int64_t ___javaScriptTicks0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_ConvertJavaScriptTicksToDateTime_m2220449017_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___javaScriptTicks0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		int64_t L_1 = ((DateTimeUtils_t3515429982_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var))->get_InitialJavaScriptDateTicks_0();
		DateTime_t3738529785  L_2;
		memset(&L_2, 0, sizeof(L_2));
		DateTime__ctor_m1095105629((&L_2), ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_0, (int64_t)(((int64_t)((int64_t)((int32_t)10000)))))), (int64_t)L_1)), 1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeIso(Newtonsoft.Json.Utilities.StringReference,Newtonsoft.Json.DateTimeZoneHandling,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTimeIso_m758390143 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___text0, int32_t ___dateTimeZoneHandling1, DateTime_t3738529785 * ___dt2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTimeIso_m758390143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTimeParser_t3754458704  V_0;
	memset(&V_0, 0, sizeof(V_0));
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	TimeSpan_t881159249  V_4;
	memset(&V_4, 0, sizeof(V_4));
	DateTime_t3738529785  V_5;
	memset(&V_5, 0, sizeof(V_5));
	TimeSpan_t881159249  V_6;
	memset(&V_6, 0, sizeof(V_6));
	TimeSpan_t881159249  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DateTimeParser_t3754458704 ));
		CharU5BU5D_t3528271667* L_0 = StringReference_get_Chars_m1428785588((&___text0), /*hidden argument*/NULL);
		int32_t L_1 = StringReference_get_StartIndex_m577516227((&___text0), /*hidden argument*/NULL);
		int32_t L_2 = StringReference_get_Length_m1881544084((&___text0), /*hidden argument*/NULL);
		bool L_3 = DateTimeParser_Parse_m73420931((&V_0), L_0, L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		DateTime_t3738529785 * L_4 = ___dt2;
		il2cpp_codegen_initobj(L_4, sizeof(DateTime_t3738529785 ));
		return (bool)0;
	}

IL_002f:
	{
		DateTimeParser_t3754458704  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_6 = DateTimeUtils_CreateDateTime_m901961958(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		DateTimeParser_t3754458704  L_7 = V_0;
		int32_t L_8 = L_7.get_Zone_9();
		V_3 = L_8;
		int32_t L_9 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_006a;
			}
			case 2:
			{
				goto IL_00f5;
			}
		}
	}
	{
		goto IL_0178;
	}

IL_0056:
	{
		int64_t L_10 = DateTime_get_Ticks_m1550640881((&V_1), /*hidden argument*/NULL);
		DateTime__ctor_m1095105629((&V_1), L_10, 1, /*hidden argument*/NULL);
		goto IL_0178;
	}

IL_006a:
	{
		DateTimeParser_t3754458704  L_11 = V_0;
		int32_t L_12 = L_11.get_ZoneHour_7();
		DateTimeParser_t3754458704  L_13 = V_0;
		int32_t L_14 = L_13.get_ZoneMinute_8();
		TimeSpan__ctor_m3689759052((&V_4), L_12, L_14, 0, /*hidden argument*/NULL);
		int64_t L_15 = DateTime_get_Ticks_m1550640881((&V_1), /*hidden argument*/NULL);
		int64_t L_16 = TimeSpan_get_Ticks_m2137362016((&V_4), /*hidden argument*/NULL);
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_15, (int64_t)L_16));
		int64_t L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_18 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MaxValue_2();
		V_5 = L_18;
		int64_t L_19 = DateTime_get_Ticks_m1550640881((&V_5), /*hidden argument*/NULL);
		if ((((int64_t)L_17) > ((int64_t)L_19)))
		{
			goto IL_00b5;
		}
	}
	{
		int64_t L_20 = V_2;
		DateTime_t3738529785  L_21;
		memset(&L_21, 0, sizeof(L_21));
		DateTime__ctor_m1095105629((&L_21), L_20, 1, /*hidden argument*/NULL);
		V_5 = L_21;
		DateTime_t3738529785  L_22 = DateTime_ToLocalTime_m3134475597((&V_5), /*hidden argument*/NULL);
		V_1 = L_22;
		goto IL_0178;
	}

IL_00b5:
	{
		int64_t L_23 = V_2;
		DateTime_t3738529785  L_24 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_25 = DateTimeUtils_GetUtcOffset_m575763097(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		int64_t L_26 = TimeSpan_get_Ticks_m2137362016((&V_6), /*hidden argument*/NULL);
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_23, (int64_t)L_26));
		int64_t L_27 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_28 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MaxValue_2();
		V_5 = L_28;
		int64_t L_29 = DateTime_get_Ticks_m1550640881((&V_5), /*hidden argument*/NULL);
		if ((((int64_t)L_27) <= ((int64_t)L_29)))
		{
			goto IL_00e7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_30 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MaxValue_2();
		V_5 = L_30;
		int64_t L_31 = DateTime_get_Ticks_m1550640881((&V_5), /*hidden argument*/NULL);
		V_2 = L_31;
	}

IL_00e7:
	{
		int64_t L_32 = V_2;
		DateTime__ctor_m1095105629((&V_1), L_32, 2, /*hidden argument*/NULL);
		goto IL_0178;
	}

IL_00f5:
	{
		DateTimeParser_t3754458704  L_33 = V_0;
		int32_t L_34 = L_33.get_ZoneHour_7();
		DateTimeParser_t3754458704  L_35 = V_0;
		int32_t L_36 = L_35.get_ZoneMinute_8();
		TimeSpan__ctor_m3689759052((&V_7), L_34, L_36, 0, /*hidden argument*/NULL);
		int64_t L_37 = DateTime_get_Ticks_m1550640881((&V_1), /*hidden argument*/NULL);
		int64_t L_38 = TimeSpan_get_Ticks_m2137362016((&V_7), /*hidden argument*/NULL);
		V_2 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_37, (int64_t)L_38));
		int64_t L_39 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_40 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MinValue_3();
		V_5 = L_40;
		int64_t L_41 = DateTime_get_Ticks_m1550640881((&V_5), /*hidden argument*/NULL);
		if ((((int64_t)L_39) < ((int64_t)L_41)))
		{
			goto IL_013d;
		}
	}
	{
		int64_t L_42 = V_2;
		DateTime_t3738529785  L_43;
		memset(&L_43, 0, sizeof(L_43));
		DateTime__ctor_m1095105629((&L_43), L_42, 1, /*hidden argument*/NULL);
		V_5 = L_43;
		DateTime_t3738529785  L_44 = DateTime_ToLocalTime_m3134475597((&V_5), /*hidden argument*/NULL);
		V_1 = L_44;
		goto IL_0178;
	}

IL_013d:
	{
		int64_t L_45 = V_2;
		DateTime_t3738529785  L_46 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_47 = DateTimeUtils_GetUtcOffset_m575763097(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
		V_6 = L_47;
		int64_t L_48 = TimeSpan_get_Ticks_m2137362016((&V_6), /*hidden argument*/NULL);
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_45, (int64_t)L_48));
		int64_t L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_50 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MinValue_3();
		V_5 = L_50;
		int64_t L_51 = DateTime_get_Ticks_m1550640881((&V_5), /*hidden argument*/NULL);
		if ((((int64_t)L_49) >= ((int64_t)L_51)))
		{
			goto IL_016f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_52 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MinValue_3();
		V_5 = L_52;
		int64_t L_53 = DateTime_get_Ticks_m1550640881((&V_5), /*hidden argument*/NULL);
		V_2 = L_53;
	}

IL_016f:
	{
		int64_t L_54 = V_2;
		DateTime__ctor_m1095105629((&V_1), L_54, 2, /*hidden argument*/NULL);
	}

IL_0178:
	{
		DateTime_t3738529785 * L_55 = ___dt2;
		DateTime_t3738529785  L_56 = V_1;
		int32_t L_57 = ___dateTimeZoneHandling1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_58 = DateTimeUtils_EnsureDateTime_m2677626152(NULL /*static, unused*/, L_56, L_57, /*hidden argument*/NULL);
		*(DateTime_t3738529785 *)L_55 = L_58;
		return (bool)1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffsetIso(Newtonsoft.Json.Utilities.StringReference,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffsetIso_m3588505642 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___text0, DateTimeOffset_t3229287507 * ___dt1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTimeOffsetIso_m3588505642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTimeParser_t3754458704  V_0;
	memset(&V_0, 0, sizeof(V_0));
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	TimeSpan_t881159249  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DateTimeParser_t3754458704 ));
		CharU5BU5D_t3528271667* L_0 = StringReference_get_Chars_m1428785588((&___text0), /*hidden argument*/NULL);
		int32_t L_1 = StringReference_get_StartIndex_m577516227((&___text0), /*hidden argument*/NULL);
		int32_t L_2 = StringReference_get_Length_m1881544084((&___text0), /*hidden argument*/NULL);
		bool L_3 = DateTimeParser_Parse_m73420931((&V_0), L_0, L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		DateTimeOffset_t3229287507 * L_4 = ___dt1;
		il2cpp_codegen_initobj(L_4, sizeof(DateTimeOffset_t3229287507 ));
		return (bool)0;
	}

IL_002f:
	{
		DateTimeParser_t3754458704  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_6 = DateTimeUtils_CreateDateTime_m901961958(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		DateTimeParser_t3754458704  L_7 = V_0;
		int32_t L_8 = L_7.get_Zone_9();
		V_4 = L_8;
		int32_t L_9 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0060;
			}
			case 2:
			{
				goto IL_0078;
			}
		}
	}
	{
		goto IL_008e;
	}

IL_0055:
	{
		TimeSpan__ctor_m1896986612((&V_2), (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_0060:
	{
		DateTimeParser_t3754458704  L_10 = V_0;
		int32_t L_11 = L_10.get_ZoneHour_7();
		DateTimeParser_t3754458704  L_12 = V_0;
		int32_t L_13 = L_12.get_ZoneMinute_8();
		TimeSpan__ctor_m3689759052((&V_2), ((-L_11)), ((-L_13)), 0, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_0078:
	{
		DateTimeParser_t3754458704  L_14 = V_0;
		int32_t L_15 = L_14.get_ZoneHour_7();
		DateTimeParser_t3754458704  L_16 = V_0;
		int32_t L_17 = L_16.get_ZoneMinute_8();
		TimeSpan__ctor_m3689759052((&V_2), L_15, L_17, 0, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_008e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_18 = TimeZoneInfo_get_Local_m3767312181(NULL /*static, unused*/, /*hidden argument*/NULL);
		DateTime_t3738529785  L_19 = V_1;
		TimeSpan_t881159249  L_20 = TimeZoneInfo_GetUtcOffset_m3780875423(L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
	}

IL_009a:
	{
		int64_t L_21 = DateTime_get_Ticks_m1550640881((&V_1), /*hidden argument*/NULL);
		int64_t L_22 = TimeSpan_get_Ticks_m2137362016((&V_2), /*hidden argument*/NULL);
		V_3 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_21, (int64_t)L_22));
		int64_t L_23 = V_3;
		if ((((int64_t)L_23) < ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_00bb;
		}
	}
	{
		int64_t L_24 = V_3;
		if ((((int64_t)L_24) <= ((int64_t)((int64_t)3155378975999999999LL))))
		{
			goto IL_00c4;
		}
	}

IL_00bb:
	{
		DateTimeOffset_t3229287507 * L_25 = ___dt1;
		il2cpp_codegen_initobj(L_25, sizeof(DateTimeOffset_t3229287507 ));
		return (bool)0;
	}

IL_00c4:
	{
		DateTimeOffset_t3229287507 * L_26 = ___dt1;
		DateTime_t3738529785  L_27 = V_1;
		TimeSpan_t881159249  L_28 = V_2;
		DateTimeOffset_t3229287507  L_29;
		memset(&L_29, 0, sizeof(L_29));
		DateTimeOffset__ctor_m74032857((&L_29), L_27, L_28, /*hidden argument*/NULL);
		*(DateTimeOffset_t3229287507 *)L_26 = L_29;
		return (bool)1;
	}
}
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::CreateDateTime(Newtonsoft.Json.Utilities.DateTimeParser)
extern "C"  DateTime_t3738529785  DateTimeUtils_CreateDateTime_m901961958 (RuntimeObject * __this /* static, unused */, DateTimeParser_t3754458704  ___dateTimeParser0, const RuntimeMethod* method)
{
	bool V_0 = false;
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		DateTimeParser_t3754458704  L_0 = ___dateTimeParser0;
		int32_t L_1 = L_0.get_Hour_3();
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_0016;
		}
	}
	{
		V_0 = (bool)1;
		(&___dateTimeParser0)->set_Hour_3(0);
		goto IL_0018;
	}

IL_0016:
	{
		V_0 = (bool)0;
	}

IL_0018:
	{
		DateTimeParser_t3754458704  L_2 = ___dateTimeParser0;
		int32_t L_3 = L_2.get_Year_0();
		DateTimeParser_t3754458704  L_4 = ___dateTimeParser0;
		int32_t L_5 = L_4.get_Month_1();
		DateTimeParser_t3754458704  L_6 = ___dateTimeParser0;
		int32_t L_7 = L_6.get_Day_2();
		DateTimeParser_t3754458704  L_8 = ___dateTimeParser0;
		int32_t L_9 = L_8.get_Hour_3();
		DateTimeParser_t3754458704  L_10 = ___dateTimeParser0;
		int32_t L_11 = L_10.get_Minute_4();
		DateTimeParser_t3754458704  L_12 = ___dateTimeParser0;
		int32_t L_13 = L_12.get_Second_5();
		DateTime__ctor_m3895589019((&V_1), L_3, L_5, L_7, L_9, L_11, L_13, /*hidden argument*/NULL);
		DateTimeParser_t3754458704  L_14 = ___dateTimeParser0;
		int32_t L_15 = L_14.get_Fraction_6();
		DateTime_t3738529785  L_16 = DateTime_AddTicks_m3396580426((&V_1), (((int64_t)((int64_t)L_15))), /*hidden argument*/NULL);
		V_1 = L_16;
		bool L_17 = V_0;
		if (!L_17)
		{
			goto IL_0066;
		}
	}
	{
		DateTime_t3738529785  L_18 = DateTime_AddDays_m2583849741((&V_1), (1.0), /*hidden argument*/NULL);
		V_1 = L_18;
	}

IL_0066:
	{
		DateTime_t3738529785  L_19 = V_1;
		return L_19;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTime(Newtonsoft.Json.Utilities.StringReference,Newtonsoft.Json.DateTimeZoneHandling,System.String,System.Globalization.CultureInfo,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTime_m2606903149 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___s0, int32_t ___dateTimeZoneHandling1, String_t* ___dateFormatString2, CultureInfo_t4157843068 * ___culture3, DateTime_t3738529785 * ___dt4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTime_m2606903149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = StringReference_get_Length_m1881544084((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_1 = StringReference_get_StartIndex_m577516227((&___s0), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Il2CppChar L_3 = StringReference_get_Item_m2821876239((&___s0), L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_4 = StringReference_get_Length_m1881544084((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)9))))
		{
			goto IL_0094;
		}
	}
	{
		StringReference_t2912309144  L_5 = ___s0;
		bool L_6 = StringReferenceExtensions_StartsWith_m3064397327(NULL /*static, unused*/, L_5, _stringLiteral2361106233, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0094;
		}
	}
	{
		StringReference_t2912309144  L_7 = ___s0;
		bool L_8 = StringReferenceExtensions_EndsWith_m2070211976(NULL /*static, unused*/, L_7, _stringLiteral3450582919, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0094;
		}
	}
	{
		StringReference_t2912309144  L_9 = ___s0;
		int32_t L_10 = ___dateTimeZoneHandling1;
		DateTime_t3738529785 * L_11 = ___dt4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		bool L_12 = DateTimeUtils_TryParseDateTimeMicrosoft_m896972691(NULL /*static, unused*/, L_9, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		return (bool)1;
	}

IL_0053:
	{
		int32_t L_13 = StringReference_get_Length_m1881544084((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)19))))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_14 = StringReference_get_Length_m1881544084((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_14) > ((int32_t)((int32_t)40))))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_15 = V_0;
		Il2CppChar L_16 = StringReference_get_Item_m2821876239((&___s0), L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_17 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_18 = V_0;
		Il2CppChar L_19 = StringReference_get_Item_m2821876239((&___s0), ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_0094;
		}
	}
	{
		StringReference_t2912309144  L_20 = ___s0;
		int32_t L_21 = ___dateTimeZoneHandling1;
		DateTime_t3738529785 * L_22 = ___dt4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		bool L_23 = DateTimeUtils_TryParseDateTimeIso_m758390143(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0094;
		}
	}
	{
		return (bool)1;
	}

IL_0094:
	{
		String_t* L_24 = ___dateFormatString2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00b7;
		}
	}
	{
		String_t* L_26 = StringReference_ToString_m3051914173((&___s0), /*hidden argument*/NULL);
		int32_t L_27 = ___dateTimeZoneHandling1;
		String_t* L_28 = ___dateFormatString2;
		CultureInfo_t4157843068 * L_29 = ___culture3;
		DateTime_t3738529785 * L_30 = ___dt4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		bool L_31 = DateTimeUtils_TryParseDateTimeExact_m2999446858(NULL /*static, unused*/, L_26, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00b7;
		}
	}
	{
		return (bool)1;
	}

IL_00b7:
	{
		DateTime_t3738529785 * L_32 = ___dt4;
		il2cpp_codegen_initobj(L_32, sizeof(DateTime_t3738529785 ));
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTime(System.String,Newtonsoft.Json.DateTimeZoneHandling,System.String,System.Globalization.CultureInfo,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTime_m1212892142 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___dateTimeZoneHandling1, String_t* ___dateFormatString2, CultureInfo_t4157843068 * ___culture3, DateTime_t3738529785 * ___dt4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTime_m1212892142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		String_t* L_2 = ___s0;
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_2, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_4 = ___s0;
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_6 = ___s0;
		bool L_7 = String_StartsWith_m2640722675(L_6, _stringLiteral2361106233, 4, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_8 = ___s0;
		bool L_9 = String_EndsWith_m2637493491(L_8, _stringLiteral3450582919, 4, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_10 = ___s0;
		CharU5BU5D_t3528271667* L_11 = String_ToCharArray_m1492846834(L_10, /*hidden argument*/NULL);
		String_t* L_12 = ___s0;
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		StringReference_t2912309144  L_14;
		memset(&L_14, 0, sizeof(L_14));
		StringReference__ctor_m345645319((&L_14), L_11, 0, L_13, /*hidden argument*/NULL);
		int32_t L_15 = ___dateTimeZoneHandling1;
		DateTime_t3738529785 * L_16 = ___dt4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		bool L_17 = DateTimeUtils_TryParseDateTimeMicrosoft_m896972691(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00be;
		}
	}
	{
		return (bool)1;
	}

IL_0061:
	{
		String_t* L_18 = ___s0;
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)19))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_20 = ___s0;
		int32_t L_21 = String_get_Length_m3847582255(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_21) > ((int32_t)((int32_t)40))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_22 = ___s0;
		Il2CppChar L_23 = String_get_Chars_m2986988803(L_22, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_24 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_25 = ___s0;
		Il2CppChar L_26 = String_get_Chars_m2986988803(L_25, ((int32_t)10), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_27 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_28 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		DateTime_t3738529785 * L_29 = ___dt4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_30 = DateTime_TryParseExact_m682600744(NULL /*static, unused*/, L_27, _stringLiteral4188457550, L_28, ((int32_t)128), L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00be;
		}
	}
	{
		DateTime_t3738529785 * L_31 = ___dt4;
		DateTime_t3738529785 * L_32 = ___dt4;
		int32_t L_33 = ___dateTimeZoneHandling1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_34 = DateTimeUtils_EnsureDateTime_m2677626152(NULL /*static, unused*/, (*(DateTime_t3738529785 *)L_32), L_33, /*hidden argument*/NULL);
		*(DateTime_t3738529785 *)L_31 = L_34;
		return (bool)1;
	}

IL_00be:
	{
		String_t* L_35 = ___dateFormatString2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_36 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_00d5;
		}
	}
	{
		String_t* L_37 = ___s0;
		int32_t L_38 = ___dateTimeZoneHandling1;
		String_t* L_39 = ___dateFormatString2;
		CultureInfo_t4157843068 * L_40 = ___culture3;
		DateTime_t3738529785 * L_41 = ___dt4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		bool L_42 = DateTimeUtils_TryParseDateTimeExact_m2999446858(NULL /*static, unused*/, L_37, L_38, L_39, L_40, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_00d5;
		}
	}
	{
		return (bool)1;
	}

IL_00d5:
	{
		DateTime_t3738529785 * L_43 = ___dt4;
		il2cpp_codegen_initobj(L_43, sizeof(DateTime_t3738529785 ));
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffset(Newtonsoft.Json.Utilities.StringReference,System.String,System.Globalization.CultureInfo,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffset_m738404597 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___s0, String_t* ___dateFormatString1, CultureInfo_t4157843068 * ___culture2, DateTimeOffset_t3229287507 * ___dt3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTimeOffset_m738404597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = StringReference_get_Length_m1881544084((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_1 = StringReference_get_StartIndex_m577516227((&___s0), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Il2CppChar L_3 = StringReference_get_Item_m2821876239((&___s0), L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_4 = StringReference_get_Length_m1881544084((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)9))))
		{
			goto IL_0090;
		}
	}
	{
		StringReference_t2912309144  L_5 = ___s0;
		bool L_6 = StringReferenceExtensions_StartsWith_m3064397327(NULL /*static, unused*/, L_5, _stringLiteral2361106233, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0090;
		}
	}
	{
		StringReference_t2912309144  L_7 = ___s0;
		bool L_8 = StringReferenceExtensions_EndsWith_m2070211976(NULL /*static, unused*/, L_7, _stringLiteral3450582919, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0090;
		}
	}
	{
		StringReference_t2912309144  L_9 = ___s0;
		DateTimeOffset_t3229287507 * L_10 = ___dt3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		bool L_11 = DateTimeUtils_TryParseDateTimeOffsetMicrosoft_m2314886215(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_12 = StringReference_get_Length_m1881544084((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)19))))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_13 = StringReference_get_Length_m1881544084((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_13) > ((int32_t)((int32_t)40))))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_14 = V_0;
		Il2CppChar L_15 = StringReference_get_Item_m2821876239((&___s0), L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_16 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_17 = V_0;
		Il2CppChar L_18 = StringReference_get_Item_m2821876239((&___s0), ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_0090;
		}
	}
	{
		StringReference_t2912309144  L_19 = ___s0;
		DateTimeOffset_t3229287507 * L_20 = ___dt3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		bool L_21 = DateTimeUtils_TryParseDateTimeOffsetIso_m3588505642(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0090;
		}
	}
	{
		return (bool)1;
	}

IL_0090:
	{
		String_t* L_22 = ___dateFormatString1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_24 = StringReference_ToString_m3051914173((&___s0), /*hidden argument*/NULL);
		String_t* L_25 = ___dateFormatString1;
		CultureInfo_t4157843068 * L_26 = ___culture2;
		DateTimeOffset_t3229287507 * L_27 = ___dt3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		bool L_28 = DateTimeUtils_TryParseDateTimeOffsetExact_m1730563288(NULL /*static, unused*/, L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00b1;
		}
	}
	{
		return (bool)1;
	}

IL_00b1:
	{
		DateTimeOffset_t3229287507 * L_29 = ___dt3;
		il2cpp_codegen_initobj(L_29, sizeof(DateTimeOffset_t3229287507 ));
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffset(System.String,System.String,System.Globalization.CultureInfo,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffset_m1182031007 (RuntimeObject * __this /* static, unused */, String_t* ___s0, String_t* ___dateFormatString1, CultureInfo_t4157843068 * ___culture2, DateTimeOffset_t3229287507 * ___dt3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTimeOffset_m1182031007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_00d6;
		}
	}
	{
		String_t* L_2 = ___s0;
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_2, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_4 = ___s0;
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_6 = ___s0;
		bool L_7 = String_StartsWith_m2640722675(L_6, _stringLiteral2361106233, 4, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_8 = ___s0;
		bool L_9 = String_EndsWith_m2637493491(L_8, _stringLiteral3450582919, 4, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_10 = ___s0;
		CharU5BU5D_t3528271667* L_11 = String_ToCharArray_m1492846834(L_10, /*hidden argument*/NULL);
		String_t* L_12 = ___s0;
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		StringReference_t2912309144  L_14;
		memset(&L_14, 0, sizeof(L_14));
		StringReference__ctor_m345645319((&L_14), L_11, 0, L_13, /*hidden argument*/NULL);
		DateTimeOffset_t3229287507 * L_15 = ___dt3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		bool L_16 = DateTimeUtils_TryParseDateTimeOffsetMicrosoft_m2314886215(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00c1;
		}
	}
	{
		return (bool)1;
	}

IL_005f:
	{
		String_t* L_17 = ___s0;
		int32_t L_18 = String_get_Length_m3847582255(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)19))))
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_19 = ___s0;
		int32_t L_20 = String_get_Length_m3847582255(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_20) > ((int32_t)((int32_t)40))))
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_21 = ___s0;
		Il2CppChar L_22 = String_get_Chars_m2986988803(L_21, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_23 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_24 = ___s0;
		Il2CppChar L_25 = String_get_Chars_m2986988803(L_24, ((int32_t)10), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_26 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_27 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		DateTimeOffset_t3229287507 * L_28 = ___dt3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t3229287507_il2cpp_TypeInfo_var);
		bool L_29 = DateTimeOffset_TryParseExact_m960669624(NULL /*static, unused*/, L_26, _stringLiteral4188457550, L_27, ((int32_t)128), L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_30 = ___s0;
		CharU5BU5D_t3528271667* L_31 = String_ToCharArray_m1492846834(L_30, /*hidden argument*/NULL);
		String_t* L_32 = ___s0;
		int32_t L_33 = String_get_Length_m3847582255(L_32, /*hidden argument*/NULL);
		StringReference_t2912309144  L_34;
		memset(&L_34, 0, sizeof(L_34));
		StringReference__ctor_m345645319((&L_34), L_31, 0, L_33, /*hidden argument*/NULL);
		DateTimeOffset_t3229287507 * L_35 = ___dt3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		bool L_36 = DateTimeUtils_TryParseDateTimeOffsetIso_m3588505642(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00c1;
		}
	}
	{
		return (bool)1;
	}

IL_00c1:
	{
		String_t* L_37 = ___dateFormatString1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_38 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_00d6;
		}
	}
	{
		String_t* L_39 = ___s0;
		String_t* L_40 = ___dateFormatString1;
		CultureInfo_t4157843068 * L_41 = ___culture2;
		DateTimeOffset_t3229287507 * L_42 = ___dt3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		bool L_43 = DateTimeUtils_TryParseDateTimeOffsetExact_m1730563288(NULL /*static, unused*/, L_39, L_40, L_41, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_00d6;
		}
	}
	{
		return (bool)1;
	}

IL_00d6:
	{
		DateTimeOffset_t3229287507 * L_44 = ___dt3;
		il2cpp_codegen_initobj(L_44, sizeof(DateTimeOffset_t3229287507 ));
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseMicrosoftDate(Newtonsoft.Json.Utilities.StringReference,System.Int64&,System.TimeSpan&,System.DateTimeKind&)
extern "C"  bool DateTimeUtils_TryParseMicrosoftDate_m2514602947 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___text0, int64_t* ___ticks1, TimeSpan_t881159249 * ___offset2, int32_t* ___kind3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseMicrosoftDate_m2514602947_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___kind3;
		*((int32_t*)(L_0)) = (int32_t)1;
		StringReference_t2912309144  L_1 = ___text0;
		int32_t L_2 = StringReference_get_Length_m1881544084((&___text0), /*hidden argument*/NULL);
		int32_t L_3 = StringReferenceExtensions_IndexOf_m2457125624(NULL /*static, unused*/, L_1, ((int32_t)43), 7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)8)), /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002d;
		}
	}
	{
		StringReference_t2912309144  L_5 = ___text0;
		int32_t L_6 = StringReference_get_Length_m1881544084((&___text0), /*hidden argument*/NULL);
		int32_t L_7 = StringReferenceExtensions_IndexOf_m2457125624(NULL /*static, unused*/, L_5, ((int32_t)45), 7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)8)), /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_002d:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)(-1))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t* L_9 = ___kind3;
		*((int32_t*)(L_9)) = (int32_t)2;
		StringReference_t2912309144  L_10 = ___text0;
		int32_t L_11 = V_0;
		int32_t L_12 = StringReference_get_StartIndex_m577516227((&___text0), /*hidden argument*/NULL);
		TimeSpan_t881159249 * L_13 = ___offset2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		bool L_14 = DateTimeUtils_TryReadOffset_m3712643023(NULL /*static, unused*/, L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)), L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0061;
		}
	}
	{
		int64_t* L_15 = ___ticks1;
		*((int64_t*)(L_15)) = (int64_t)(((int64_t)((int64_t)0)));
		return (bool)0;
	}

IL_004c:
	{
		TimeSpan_t881159249 * L_16 = ___offset2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_17 = ((TimeSpan_t881159249_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t881159249_il2cpp_TypeInfo_var))->get_Zero_2();
		*(TimeSpan_t881159249 *)L_16 = L_17;
		int32_t L_18 = StringReference_get_Length_m1881544084((&___text0), /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)2));
	}

IL_0061:
	{
		CharU5BU5D_t3528271667* L_19 = StringReference_get_Chars_m1428785588((&___text0), /*hidden argument*/NULL);
		int32_t L_20 = StringReference_get_StartIndex_m577516227((&___text0), /*hidden argument*/NULL);
		int32_t L_21 = V_0;
		int64_t* L_22 = ___ticks1;
		IL2CPP_RUNTIME_CLASS_INIT(ConvertUtils_t2194062972_il2cpp_TypeInfo_var);
		int32_t L_23 = ConvertUtils_Int64TryParse_m4091387998(NULL /*static, unused*/, L_19, ((int32_t)il2cpp_codegen_add((int32_t)6, (int32_t)L_20)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)6)), L_22, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_23) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeMicrosoft(Newtonsoft.Json.Utilities.StringReference,Newtonsoft.Json.DateTimeZoneHandling,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTimeMicrosoft_m896972691 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___text0, int32_t ___dateTimeZoneHandling1, DateTime_t3738529785 * ___dt2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTimeMicrosoft_m896972691_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	TimeSpan_t881159249  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	DateTime_t3738529785  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		StringReference_t2912309144  L_0 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		bool L_1 = DateTimeUtils_TryParseMicrosoftDate_m2514602947(NULL /*static, unused*/, L_0, (&V_0), (&V_1), (&V_2), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		DateTime_t3738529785 * L_2 = ___dt2;
		il2cpp_codegen_initobj(L_2, sizeof(DateTime_t3738529785 ));
		return (bool)0;
	}

IL_0017:
	{
		int64_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_4 = DateTimeUtils_ConvertJavaScriptTicksToDateTime_m2220449017(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		int32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_004b;
	}

IL_0027:
	{
		DateTime_t3738529785 * L_7 = ___dt2;
		DateTime_t3738529785  L_8 = DateTime_ToLocalTime_m3134475597((&V_3), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_9 = DateTime_SpecifyKind_m3332658812(NULL /*static, unused*/, L_8, 0, /*hidden argument*/NULL);
		*(DateTime_t3738529785 *)L_7 = L_9;
		goto IL_0052;
	}

IL_003c:
	{
		DateTime_t3738529785 * L_10 = ___dt2;
		DateTime_t3738529785  L_11 = DateTime_ToLocalTime_m3134475597((&V_3), /*hidden argument*/NULL);
		*(DateTime_t3738529785 *)L_10 = L_11;
		goto IL_0052;
	}

IL_004b:
	{
		DateTime_t3738529785 * L_12 = ___dt2;
		DateTime_t3738529785  L_13 = V_3;
		*(DateTime_t3738529785 *)L_12 = L_13;
	}

IL_0052:
	{
		DateTime_t3738529785 * L_14 = ___dt2;
		DateTime_t3738529785 * L_15 = ___dt2;
		int32_t L_16 = ___dateTimeZoneHandling1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_17 = DateTimeUtils_EnsureDateTime_m2677626152(NULL /*static, unused*/, (*(DateTime_t3738529785 *)L_15), L_16, /*hidden argument*/NULL);
		*(DateTime_t3738529785 *)L_14 = L_17;
		return (bool)1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeExact(System.String,Newtonsoft.Json.DateTimeZoneHandling,System.String,System.Globalization.CultureInfo,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTimeExact_m2999446858 (RuntimeObject * __this /* static, unused */, String_t* ___text0, int32_t ___dateTimeZoneHandling1, String_t* ___dateFormatString2, CultureInfo_t4157843068 * ___culture3, DateTime_t3738529785 * ___dt4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTimeExact_m2999446858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		String_t* L_1 = ___dateFormatString2;
		CultureInfo_t4157843068 * L_2 = ___culture3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_3 = DateTime_TryParseExact_m682600744(NULL /*static, unused*/, L_0, L_1, L_2, ((int32_t)128), (&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		DateTime_t3738529785  L_4 = V_0;
		int32_t L_5 = ___dateTimeZoneHandling1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_6 = DateTimeUtils_EnsureDateTime_m2677626152(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		DateTime_t3738529785 * L_7 = ___dt4;
		DateTime_t3738529785  L_8 = V_0;
		*(DateTime_t3738529785 *)L_7 = L_8;
		return (bool)1;
	}

IL_0023:
	{
		DateTime_t3738529785 * L_9 = ___dt4;
		il2cpp_codegen_initobj(L_9, sizeof(DateTime_t3738529785 ));
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffsetMicrosoft(Newtonsoft.Json.Utilities.StringReference,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffsetMicrosoft_m2314886215 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___text0, DateTimeOffset_t3229287507 * ___dt1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTimeOffsetMicrosoft_m2314886215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	TimeSpan_t881159249  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	DateTime_t3738529785  V_3;
	memset(&V_3, 0, sizeof(V_3));
	DateTime_t3738529785  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		StringReference_t2912309144  L_0 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		bool L_1 = DateTimeUtils_TryParseMicrosoftDate_m2514602947(NULL /*static, unused*/, L_0, (&V_0), (&V_1), (&V_2), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		DateTimeOffset_t3229287507 * L_2 = ___dt1;
		il2cpp_codegen_initobj((&V_4), sizeof(DateTime_t3738529785 ));
		DateTime_t3738529785  L_3 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t3229287507_il2cpp_TypeInfo_var);
		DateTimeOffset_t3229287507  L_4 = DateTimeOffset_op_Implicit_m674883098(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		*(DateTimeOffset_t3229287507 *)L_2 = L_4;
		return (bool)0;
	}

IL_0025:
	{
		int64_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_6 = DateTimeUtils_ConvertJavaScriptTicksToDateTime_m2220449017(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		DateTimeOffset_t3229287507 * L_7 = ___dt1;
		TimeSpan_t881159249  L_8 = V_1;
		DateTime_t3738529785  L_9 = DateTime_Add_m2995894549((&V_3), L_8, /*hidden argument*/NULL);
		V_4 = L_9;
		int64_t L_10 = DateTime_get_Ticks_m1550640881((&V_4), /*hidden argument*/NULL);
		TimeSpan_t881159249  L_11 = V_1;
		DateTimeOffset_t3229287507  L_12;
		memset(&L_12, 0, sizeof(L_12));
		DateTimeOffset__ctor_m1464148220((&L_12), L_10, L_11, /*hidden argument*/NULL);
		*(DateTimeOffset_t3229287507 *)L_7 = L_12;
		return (bool)1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffsetExact(System.String,System.String,System.Globalization.CultureInfo,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffsetExact_m1730563288 (RuntimeObject * __this /* static, unused */, String_t* ___text0, String_t* ___dateFormatString1, CultureInfo_t4157843068 * ___culture2, DateTimeOffset_t3229287507 * ___dt3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTimeOffsetExact_m1730563288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTimeOffset_t3229287507  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		String_t* L_1 = ___dateFormatString1;
		CultureInfo_t4157843068 * L_2 = ___culture2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t3229287507_il2cpp_TypeInfo_var);
		bool L_3 = DateTimeOffset_TryParseExact_m960669624(NULL /*static, unused*/, L_0, L_1, L_2, ((int32_t)128), (&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		DateTimeOffset_t3229287507 * L_4 = ___dt3;
		DateTimeOffset_t3229287507  L_5 = V_0;
		*(DateTimeOffset_t3229287507 *)L_4 = L_5;
		return (bool)1;
	}

IL_001a:
	{
		DateTimeOffset_t3229287507 * L_6 = ___dt3;
		il2cpp_codegen_initobj(L_6, sizeof(DateTimeOffset_t3229287507 ));
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryReadOffset(Newtonsoft.Json.Utilities.StringReference,System.Int32,System.TimeSpan&)
extern "C"  bool DateTimeUtils_TryReadOffset_m3712643023 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___offsetText0, int32_t ___startIndex1, TimeSpan_t881159249 * ___offset2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryReadOffset_m3712643023_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___startIndex1;
		Il2CppChar L_1 = StringReference_get_Item_m2821876239((&___offsetText0), L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)45)))? 1 : 0);
		CharU5BU5D_t3528271667* L_2 = StringReference_get_Chars_m1428785588((&___offsetText0), /*hidden argument*/NULL);
		int32_t L_3 = ___startIndex1;
		IL2CPP_RUNTIME_CLASS_INIT(ConvertUtils_t2194062972_il2cpp_TypeInfo_var);
		int32_t L_4 = ConvertUtils_Int32TryParse_m2513116180(NULL /*static, unused*/, L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), 2, (&V_1), /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		TimeSpan_t881159249 * L_5 = ___offset2;
		il2cpp_codegen_initobj(L_5, sizeof(TimeSpan_t881159249 ));
		return (bool)0;
	}

IL_002b:
	{
		V_2 = 0;
		int32_t L_6 = StringReference_get_Length_m1881544084((&___offsetText0), /*hidden argument*/NULL);
		int32_t L_7 = ___startIndex1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7))) <= ((int32_t)5)))
		{
			goto IL_0057;
		}
	}
	{
		CharU5BU5D_t3528271667* L_8 = StringReference_get_Chars_m1428785588((&___offsetText0), /*hidden argument*/NULL);
		int32_t L_9 = ___startIndex1;
		IL2CPP_RUNTIME_CLASS_INIT(ConvertUtils_t2194062972_il2cpp_TypeInfo_var);
		int32_t L_10 = ConvertUtils_Int32TryParse_m2513116180(NULL /*static, unused*/, L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)3)), 2, (&V_2), /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_0057;
		}
	}
	{
		TimeSpan_t881159249 * L_11 = ___offset2;
		il2cpp_codegen_initobj(L_11, sizeof(TimeSpan_t881159249 ));
		return (bool)0;
	}

IL_0057:
	{
		TimeSpan_t881159249 * L_12 = ___offset2;
		int32_t L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_14 = TimeSpan_FromHours_m1109641064(NULL /*static, unused*/, (((double)((double)L_13))), /*hidden argument*/NULL);
		int32_t L_15 = V_2;
		TimeSpan_t881159249  L_16 = TimeSpan_FromMinutes_m1032812593(NULL /*static, unused*/, (((double)((double)L_15))), /*hidden argument*/NULL);
		TimeSpan_t881159249  L_17 = TimeSpan_op_Addition_m672714982(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
		*(TimeSpan_t881159249 *)L_12 = L_17;
		bool L_18 = V_0;
		if (!L_18)
		{
			goto IL_007f;
		}
	}
	{
		TimeSpan_t881159249 * L_19 = ___offset2;
		TimeSpan_t881159249 * L_20 = ___offset2;
		TimeSpan_t881159249  L_21 = TimeSpan_Negate_m1889505500(L_20, /*hidden argument*/NULL);
		*(TimeSpan_t881159249 *)L_19 = L_21;
	}

IL_007f:
	{
		return (bool)1;
	}
}
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeString(System.IO.TextWriter,System.DateTime,Newtonsoft.Json.DateFormatHandling,System.String,System.Globalization.CultureInfo)
extern "C"  void DateTimeUtils_WriteDateTimeString_m3387101489 (RuntimeObject * __this /* static, unused */, TextWriter_t3478189236 * ___writer0, DateTime_t3738529785  ___value1, int32_t ___format2, String_t* ___formatString3, CultureInfo_t4157843068 * ___culture4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_WriteDateTimeString_m3387101489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	Nullable_1_t2603721331  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		String_t* L_0 = ___formatString3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		V_0 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64)));
		CharU5BU5D_t3528271667* L_2 = V_0;
		DateTime_t3738529785  L_3 = ___value1;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t2603721331 ));
		Nullable_1_t2603721331  L_4 = V_2;
		int32_t L_5 = DateTime_get_Kind_m2154871796((&___value1), /*hidden argument*/NULL);
		int32_t L_6 = ___format2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		int32_t L_7 = DateTimeUtils_WriteDateTimeString_m108143888(NULL /*static, unused*/, L_2, 0, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		TextWriter_t3478189236 * L_8 = ___writer0;
		CharU5BU5D_t3528271667* L_9 = V_0;
		int32_t L_10 = V_1;
		VirtActionInvoker3< CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_8, L_9, 0, L_10);
		return;
	}

IL_0034:
	{
		TextWriter_t3478189236 * L_11 = ___writer0;
		String_t* L_12 = ___formatString3;
		CultureInfo_t4157843068 * L_13 = ___culture4;
		String_t* L_14 = DateTime_ToString_m2992030064((&___value1), L_12, L_13, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, L_14);
		return;
	}
}
// System.Int32 Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeString(System.Char[],System.Int32,System.DateTime,System.Nullable`1<System.TimeSpan>,System.DateTimeKind,Newtonsoft.Json.DateFormatHandling)
extern "C"  int32_t DateTimeUtils_WriteDateTimeString_m108143888 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___chars0, int32_t ___start1, DateTime_t3738529785  ___value2, Nullable_1_t2603721331  ___offset3, int32_t ___kind4, int32_t ___format5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_WriteDateTimeString_m108143888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TimeSpan_t881159249  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int64_t V_2 = 0;
	String_t* V_3 = NULL;
	Nullable_1_t2603721331  V_4;
	memset(&V_4, 0, sizeof(V_4));
	TimeSpan_t881159249  G_B4_0;
	memset(&G_B4_0, 0, sizeof(G_B4_0));
	int32_t G_B16_0 = 0;
	CharU5BU5D_t3528271667* G_B16_1 = NULL;
	int32_t G_B15_0 = 0;
	CharU5BU5D_t3528271667* G_B15_1 = NULL;
	TimeSpan_t881159249  G_B17_0;
	memset(&G_B17_0, 0, sizeof(G_B17_0));
	int32_t G_B17_1 = 0;
	CharU5BU5D_t3528271667* G_B17_2 = NULL;
	{
		int32_t L_0 = ___start1;
		V_0 = L_0;
		int32_t L_1 = ___format5;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_00b6;
		}
	}
	{
		Nullable_1_t2603721331  L_2 = ___offset3;
		V_4 = L_2;
		bool L_3 = Nullable_1_get_HasValue_m1210311128((&V_4), /*hidden argument*/Nullable_1_get_HasValue_m1210311128_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		DateTime_t3738529785  L_4 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_5 = DateTimeUtils_GetUtcOffset_m575763097(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		G_B4_0 = L_5;
		goto IL_0025;
	}

IL_001e:
	{
		TimeSpan_t881159249  L_6 = Nullable_1_GetValueOrDefault_m3497035374((&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_m3497035374_RuntimeMethod_var);
		G_B4_0 = L_6;
	}

IL_0025:
	{
		V_1 = G_B4_0;
		DateTime_t3738529785  L_7 = ___value2;
		TimeSpan_t881159249  L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		int64_t L_9 = DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m478085472(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		CharU5BU5D_t3528271667* L_10 = ___chars0;
		int32_t L_11 = V_0;
		String_CopyTo_m2803757991(_stringLiteral3940528346, 0, L_10, L_11, 7, /*hidden argument*/NULL);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)7));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_13 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_14 = Int64_ToString_m623640997((&V_2), L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		String_t* L_15 = V_3;
		CharU5BU5D_t3528271667* L_16 = ___chars0;
		int32_t L_17 = V_0;
		String_t* L_18 = V_3;
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		String_CopyTo_m2803757991(L_15, 0, L_16, L_17, L_19, /*hidden argument*/NULL);
		int32_t L_20 = V_0;
		String_t* L_21 = V_3;
		int32_t L_22 = String_get_Length_m3847582255(L_21, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_22));
		int32_t L_23 = ___kind4;
		if (!L_23)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_24 = ___kind4;
		if ((((int32_t)L_24) == ((int32_t)2)))
		{
			goto IL_0097;
		}
	}
	{
		goto IL_00a2;
	}

IL_0070:
	{
		DateTime_t3738529785  L_25 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_26 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MaxValue_2();
		bool L_27 = DateTime_op_Inequality_m1382517918(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00a2;
		}
	}
	{
		DateTime_t3738529785  L_28 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_29 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MinValue_3();
		bool L_30 = DateTime_op_Inequality_m1382517918(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00a2;
		}
	}
	{
		CharU5BU5D_t3528271667* L_31 = ___chars0;
		int32_t L_32 = V_0;
		TimeSpan_t881159249  L_33 = V_1;
		int32_t L_34 = ___format5;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		int32_t L_35 = DateTimeUtils_WriteDateTimeOffset_m1794107409(NULL /*static, unused*/, L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
		V_0 = L_35;
		goto IL_00a2;
	}

IL_0097:
	{
		CharU5BU5D_t3528271667* L_36 = ___chars0;
		int32_t L_37 = V_0;
		TimeSpan_t881159249  L_38 = V_1;
		int32_t L_39 = ___format5;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		int32_t L_40 = DateTimeUtils_WriteDateTimeOffset_m1794107409(NULL /*static, unused*/, L_36, L_37, L_38, L_39, /*hidden argument*/NULL);
		V_0 = L_40;
	}

IL_00a2:
	{
		CharU5BU5D_t3528271667* L_41 = ___chars0;
		int32_t L_42 = V_0;
		String_CopyTo_m2803757991(_stringLiteral1064774710, 0, L_41, L_42, 3, /*hidden argument*/NULL);
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)3));
		goto IL_00f9;
	}

IL_00b6:
	{
		CharU5BU5D_t3528271667* L_44 = ___chars0;
		int32_t L_45 = V_0;
		DateTime_t3738529785  L_46 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		int32_t L_47 = DateTimeUtils_WriteDefaultIsoDate_m139031193(NULL /*static, unused*/, L_44, L_45, L_46, /*hidden argument*/NULL);
		V_0 = L_47;
		int32_t L_48 = ___kind4;
		if ((((int32_t)L_48) == ((int32_t)1)))
		{
			goto IL_00f0;
		}
	}
	{
		int32_t L_49 = ___kind4;
		if ((!(((uint32_t)L_49) == ((uint32_t)2))))
		{
			goto IL_00f9;
		}
	}
	{
		CharU5BU5D_t3528271667* L_50 = ___chars0;
		int32_t L_51 = V_0;
		Nullable_1_t2603721331  L_52 = ___offset3;
		V_4 = L_52;
		bool L_53 = Nullable_1_get_HasValue_m1210311128((&V_4), /*hidden argument*/Nullable_1_get_HasValue_m1210311128_RuntimeMethod_var);
		G_B15_0 = L_51;
		G_B15_1 = L_50;
		if (L_53)
		{
			G_B16_0 = L_51;
			G_B16_1 = L_50;
			goto IL_00df;
		}
	}
	{
		DateTime_t3738529785  L_54 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_55 = DateTimeUtils_GetUtcOffset_m575763097(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		G_B17_0 = L_55;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		goto IL_00e6;
	}

IL_00df:
	{
		TimeSpan_t881159249  L_56 = Nullable_1_GetValueOrDefault_m3497035374((&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_m3497035374_RuntimeMethod_var);
		G_B17_0 = L_56;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
	}

IL_00e6:
	{
		int32_t L_57 = ___format5;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		int32_t L_58 = DateTimeUtils_WriteDateTimeOffset_m1794107409(NULL /*static, unused*/, G_B17_2, G_B17_1, G_B17_0, L_57, /*hidden argument*/NULL);
		V_0 = L_58;
		goto IL_00f9;
	}

IL_00f0:
	{
		CharU5BU5D_t3528271667* L_59 = ___chars0;
		int32_t L_60 = V_0;
		int32_t L_61 = L_60;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
		(L_59)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61), (Il2CppChar)((int32_t)90));
	}

IL_00f9:
	{
		int32_t L_62 = V_0;
		return L_62;
	}
}
// System.Int32 Newtonsoft.Json.Utilities.DateTimeUtils::WriteDefaultIsoDate(System.Char[],System.Int32,System.DateTime)
extern "C"  int32_t DateTimeUtils_WriteDefaultIsoDate_m139031193 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___chars0, int32_t ___start1, DateTime_t3738529785  ___dt2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_WriteDefaultIsoDate_m139031193_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		V_0 = ((int32_t)19);
		DateTime_t3738529785  L_0 = ___dt2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		DateTimeUtils_GetDateValues_m237807814(NULL /*static, unused*/, L_0, (&V_1), (&V_2), (&V_3), /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_1 = ___chars0;
		int32_t L_2 = ___start1;
		int32_t L_3 = V_1;
		DateTimeUtils_CopyIntToCharArray_m4133634667(NULL /*static, unused*/, L_1, L_2, L_3, 4, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_4 = ___chars0;
		int32_t L_5 = ___start1;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)4))), (Il2CppChar)((int32_t)45));
		CharU5BU5D_t3528271667* L_6 = ___chars0;
		int32_t L_7 = ___start1;
		int32_t L_8 = V_2;
		DateTimeUtils_CopyIntToCharArray_m4133634667(NULL /*static, unused*/, L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)5)), L_8, 2, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_9 = ___chars0;
		int32_t L_10 = ___start1;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)7))), (Il2CppChar)((int32_t)45));
		CharU5BU5D_t3528271667* L_11 = ___chars0;
		int32_t L_12 = ___start1;
		int32_t L_13 = V_3;
		DateTimeUtils_CopyIntToCharArray_m4133634667(NULL /*static, unused*/, L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)8)), L_13, 2, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_14 = ___chars0;
		int32_t L_15 = ___start1;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)((int32_t)10)))), (Il2CppChar)((int32_t)84));
		CharU5BU5D_t3528271667* L_16 = ___chars0;
		int32_t L_17 = ___start1;
		int32_t L_18 = DateTime_get_Hour_m4153505178((&___dt2), /*hidden argument*/NULL);
		DateTimeUtils_CopyIntToCharArray_m4133634667(NULL /*static, unused*/, L_16, ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)((int32_t)11))), L_18, 2, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_19 = ___chars0;
		int32_t L_20 = ___start1;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)((int32_t)13)))), (Il2CppChar)((int32_t)58));
		CharU5BU5D_t3528271667* L_21 = ___chars0;
		int32_t L_22 = ___start1;
		int32_t L_23 = DateTime_get_Minute_m87527789((&___dt2), /*hidden argument*/NULL);
		DateTimeUtils_CopyIntToCharArray_m4133634667(NULL /*static, unused*/, L_21, ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)((int32_t)14))), L_23, 2, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_24 = ___chars0;
		int32_t L_25 = ___start1;
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)((int32_t)16)))), (Il2CppChar)((int32_t)58));
		CharU5BU5D_t3528271667* L_26 = ___chars0;
		int32_t L_27 = ___start1;
		int32_t L_28 = DateTime_get_Second_m2686182256((&___dt2), /*hidden argument*/NULL);
		DateTimeUtils_CopyIntToCharArray_m4133634667(NULL /*static, unused*/, L_26, ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)((int32_t)17))), L_28, 2, /*hidden argument*/NULL);
		int64_t L_29 = DateTime_get_Ticks_m1550640881((&___dt2), /*hidden argument*/NULL);
		V_4 = (((int32_t)((int32_t)((int64_t)((int64_t)L_29%(int64_t)(((int64_t)((int64_t)((int32_t)10000000)))))))));
		int32_t L_30 = V_4;
		if (!L_30)
		{
			goto IL_00d5;
		}
	}
	{
		V_5 = 7;
		goto IL_00b1;
	}

IL_00a4:
	{
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
		int32_t L_32 = V_4;
		V_4 = ((int32_t)((int32_t)L_32/(int32_t)((int32_t)10)));
	}

IL_00b1:
	{
		int32_t L_33 = V_4;
		if (!((int32_t)((int32_t)L_33%(int32_t)((int32_t)10))))
		{
			goto IL_00a4;
		}
	}
	{
		CharU5BU5D_t3528271667* L_34 = ___chars0;
		int32_t L_35 = ___start1;
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)((int32_t)19)))), (Il2CppChar)((int32_t)46));
		CharU5BU5D_t3528271667* L_36 = ___chars0;
		int32_t L_37 = ___start1;
		int32_t L_38 = V_4;
		int32_t L_39 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		DateTimeUtils_CopyIntToCharArray_m4133634667(NULL /*static, unused*/, L_36, ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)((int32_t)20))), L_38, L_39, /*hidden argument*/NULL);
		int32_t L_40 = V_0;
		int32_t L_41 = V_5;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1))));
	}

IL_00d5:
	{
		int32_t L_42 = ___start1;
		int32_t L_43 = V_0;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)L_43));
	}
}
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::CopyIntToCharArray(System.Char[],System.Int32,System.Int32,System.Int32)
extern "C"  void DateTimeUtils_CopyIntToCharArray_m4133634667 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___chars0, int32_t ___start1, int32_t ___value2, int32_t ___digits3, const RuntimeMethod* method)
{
	{
		goto IL_0015;
	}

IL_0002:
	{
		CharU5BU5D_t3528271667* L_0 = ___chars0;
		int32_t L_1 = ___start1;
		int32_t L_2 = ___digits3;
		int32_t L_3 = ___value2;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_3%(int32_t)((int32_t)10))), (int32_t)((int32_t)48)))))));
		int32_t L_4 = ___value2;
		___value2 = ((int32_t)((int32_t)L_4/(int32_t)((int32_t)10)));
	}

IL_0015:
	{
		int32_t L_5 = ___digits3;
		int32_t L_6 = L_5;
		___digits3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Int32 Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeOffset(System.Char[],System.Int32,System.TimeSpan,Newtonsoft.Json.DateFormatHandling)
extern "C"  int32_t DateTimeUtils_WriteDateTimeOffset_m1794107409 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___chars0, int32_t ___start1, TimeSpan_t881159249  ___offset2, int32_t ___format3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_WriteDateTimeOffset_m1794107409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	CharU5BU5D_t3528271667* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	CharU5BU5D_t3528271667* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	CharU5BU5D_t3528271667* G_B3_2 = NULL;
	{
		CharU5BU5D_t3528271667* L_0 = ___chars0;
		int32_t L_1 = ___start1;
		int32_t L_2 = L_1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		int64_t L_3 = TimeSpan_get_Ticks_m2137362016((&___offset2), /*hidden argument*/NULL);
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if ((((int64_t)L_3) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((int32_t)45);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0018;
	}

IL_0016:
	{
		G_B3_0 = ((int32_t)43);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0018:
	{
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (Il2CppChar)G_B3_0);
		int32_t L_4 = TimeSpan_get_Hours_m550761902((&___offset2), /*hidden argument*/NULL);
		int32_t L_5 = il2cpp_codegen_abs(L_4);
		V_0 = L_5;
		CharU5BU5D_t3528271667* L_6 = ___chars0;
		int32_t L_7 = ___start1;
		int32_t L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		DateTimeUtils_CopyIntToCharArray_m4133634667(NULL /*static, unused*/, L_6, L_7, L_8, 2, /*hidden argument*/NULL);
		int32_t L_9 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2));
		int32_t L_10 = ___format3;
		if (L_10)
		{
			goto IL_0041;
		}
	}
	{
		CharU5BU5D_t3528271667* L_11 = ___chars0;
		int32_t L_12 = ___start1;
		int32_t L_13 = L_12;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (Il2CppChar)((int32_t)58));
	}

IL_0041:
	{
		int32_t L_14 = TimeSpan_get_Minutes_m4278980001((&___offset2), /*hidden argument*/NULL);
		int32_t L_15 = il2cpp_codegen_abs(L_14);
		V_1 = L_15;
		CharU5BU5D_t3528271667* L_16 = ___chars0;
		int32_t L_17 = ___start1;
		int32_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		DateTimeUtils_CopyIntToCharArray_m4133634667(NULL /*static, unused*/, L_16, L_17, L_18, 2, /*hidden argument*/NULL);
		int32_t L_19 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)2));
		int32_t L_20 = ___start1;
		return L_20;
	}
}
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeOffsetString(System.IO.TextWriter,System.DateTimeOffset,Newtonsoft.Json.DateFormatHandling,System.String,System.Globalization.CultureInfo)
extern "C"  void DateTimeUtils_WriteDateTimeOffsetString_m3161479400 (RuntimeObject * __this /* static, unused */, TextWriter_t3478189236 * ___writer0, DateTimeOffset_t3229287507  ___value1, int32_t ___format2, String_t* ___formatString3, CultureInfo_t4157843068 * ___culture4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_WriteDateTimeOffsetString_m3161479400_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	CharU5BU5D_t3528271667* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	CharU5BU5D_t3528271667* G_B2_1 = NULL;
	DateTime_t3738529785  G_B4_0;
	memset(&G_B4_0, 0, sizeof(G_B4_0));
	int32_t G_B4_1 = 0;
	CharU5BU5D_t3528271667* G_B4_2 = NULL;
	{
		String_t* L_0 = ___formatString3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		V_0 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64)));
		CharU5BU5D_t3528271667* L_2 = V_0;
		int32_t L_3 = ___format2;
		G_B2_0 = 0;
		G_B2_1 = L_2;
		if (!L_3)
		{
			G_B3_0 = 0;
			G_B3_1 = L_2;
			goto IL_001e;
		}
	}
	{
		DateTime_t3738529785  L_4 = DateTimeOffset_get_UtcDateTime_m1021718282((&___value1), /*hidden argument*/NULL);
		G_B4_0 = L_4;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0025;
	}

IL_001e:
	{
		DateTime_t3738529785  L_5 = DateTimeOffset_get_DateTime_m620985777((&___value1), /*hidden argument*/NULL);
		G_B4_0 = L_5;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0025:
	{
		TimeSpan_t881159249  L_6 = DateTimeOffset_get_Offset_m2040541042((&___value1), /*hidden argument*/NULL);
		Nullable_1_t2603721331  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Nullable_1__ctor_m3314784284((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_m3314784284_RuntimeMethod_var);
		int32_t L_8 = ___format2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		int32_t L_9 = DateTimeUtils_WriteDateTimeString_m108143888(NULL /*static, unused*/, G_B4_2, G_B4_1, G_B4_0, L_7, 2, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		TextWriter_t3478189236 * L_10 = ___writer0;
		CharU5BU5D_t3528271667* L_11 = V_0;
		int32_t L_12 = V_1;
		VirtActionInvoker3< CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_10, L_11, 0, L_12);
		return;
	}

IL_0043:
	{
		TextWriter_t3478189236 * L_13 = ___writer0;
		String_t* L_14 = ___formatString3;
		CultureInfo_t4157843068 * L_15 = ___culture4;
		String_t* L_16 = DateTimeOffset_ToString_m3985341516((&___value1), L_14, L_15, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_13, L_16);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::GetDateValues(System.DateTime,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void DateTimeUtils_GetDateValues_m237807814 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___td0, int32_t* ___year1, int32_t* ___month2, int32_t* ___day3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_GetDateValues_m237807814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Int32U5BU5D_t385246372* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B9_0 = 0;
	Int32U5BU5D_t385246372* G_B12_0 = NULL;
	{
		int64_t L_0 = DateTime_get_Ticks_m1550640881((&___td0), /*hidden argument*/NULL);
		V_0 = (((int32_t)((int32_t)((int64_t)((int64_t)L_0/(int64_t)((int64_t)864000000000LL))))));
		int32_t L_1 = V_0;
		V_1 = ((int32_t)((int32_t)L_1/(int32_t)((int32_t)146097)));
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)146097)))));
		int32_t L_4 = V_0;
		V_2 = ((int32_t)((int32_t)L_4/(int32_t)((int32_t)36524)));
		int32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) == ((uint32_t)4))))
		{
			goto IL_0033;
		}
	}
	{
		V_2 = 3;
	}

IL_0033:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)36524)))));
		int32_t L_8 = V_0;
		V_3 = ((int32_t)((int32_t)L_8/(int32_t)((int32_t)1461)));
		int32_t L_9 = V_0;
		int32_t L_10 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)((int32_t)1461)))));
		int32_t L_11 = V_0;
		V_4 = ((int32_t)((int32_t)L_11/(int32_t)((int32_t)365)));
		int32_t L_12 = V_4;
		if ((!(((uint32_t)L_12) == ((uint32_t)4))))
		{
			goto IL_0060;
		}
	}
	{
		V_4 = 3;
	}

IL_0060:
	{
		int32_t* L_13 = ___year1;
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17 = V_4;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)((int32_t)400))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)((int32_t)100))))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)4)))), (int32_t)L_17)), (int32_t)1));
		int32_t L_18 = V_0;
		int32_t L_19 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)((int32_t)365)))));
		int32_t L_20 = V_4;
		if ((!(((uint32_t)L_20) == ((uint32_t)3))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_21 = V_3;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_22 = V_2;
		G_B9_0 = ((((int32_t)L_22) == ((int32_t)3))? 1 : 0);
		goto IL_0096;
	}

IL_0092:
	{
		G_B9_0 = 1;
		goto IL_0096;
	}

IL_0095:
	{
		G_B9_0 = 0;
	}

IL_0096:
	{
		if (G_B9_0)
		{
			goto IL_009f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_23 = ((DateTimeUtils_t3515429982_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var))->get_DaysToMonth365_1();
		G_B12_0 = L_23;
		goto IL_00a4;
	}

IL_009f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_24 = ((DateTimeUtils_t3515429982_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeUtils_t3515429982_il2cpp_TypeInfo_var))->get_DaysToMonth366_2();
		G_B12_0 = L_24;
	}

IL_00a4:
	{
		V_5 = G_B12_0;
		int32_t L_25 = V_0;
		V_6 = ((int32_t)((int32_t)L_25>>(int32_t)6));
		goto IL_00b3;
	}

IL_00ad:
	{
		int32_t L_26 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00b3:
	{
		int32_t L_27 = V_0;
		Int32U5BU5D_t385246372* L_28 = V_5;
		int32_t L_29 = V_6;
		int32_t L_30 = L_29;
		int32_t L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		if ((((int32_t)L_27) >= ((int32_t)L_31)))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t* L_32 = ___month2;
		int32_t L_33 = V_6;
		*((int32_t*)(L_32)) = (int32_t)L_33;
		int32_t* L_34 = ___day3;
		int32_t L_35 = V_0;
		Int32U5BU5D_t385246372* L_36 = V_5;
		int32_t L_37 = V_6;
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1));
		int32_t L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		*((int32_t*)(L_34)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)L_39)), (int32_t)1));
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
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String> Newtonsoft.Json.Utilities.EnumUtils::InitializeEnumType(System.Type)
extern "C"  BidirectionalDictionary_2_t787053467 * EnumUtils_InitializeEnumType_m3064468690 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumUtils_InitializeEnumType_m3064468690_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BidirectionalDictionary_2_t787053467 * V_0 = NULL;
	FieldInfoU5BU5D_t846150980* V_1 = NULL;
	int32_t V_2 = 0;
	FieldInfo_t * V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	Func_2_t2419460300 * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_2_t2419460300 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t3301955079_il2cpp_TypeInfo_var);
		StringComparer_t3301955079 * L_0 = StringComparer_get_OrdinalIgnoreCase_m2680809380(NULL /*static, unused*/, /*hidden argument*/NULL);
		StringComparer_t3301955079 * L_1 = StringComparer_get_OrdinalIgnoreCase_m2680809380(NULL /*static, unused*/, /*hidden argument*/NULL);
		BidirectionalDictionary_2_t787053467 * L_2 = (BidirectionalDictionary_2_t787053467 *)il2cpp_codegen_object_new(BidirectionalDictionary_2_t787053467_il2cpp_TypeInfo_var);
		BidirectionalDictionary_2__ctor_m58546930(L_2, L_0, L_1, /*hidden argument*/BidirectionalDictionary_2__ctor_m58546930_RuntimeMethod_var);
		V_0 = L_2;
		Type_t * L_3 = ___type0;
		FieldInfoU5BU5D_t846150980* L_4 = Type_GetFields_m3709891696(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_00ac;
	}

IL_001e:
	{
		FieldInfoU5BU5D_t846150980* L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		FieldInfo_t * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		FieldInfo_t * L_9 = V_3;
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
		V_4 = L_10;
		FieldInfo_t * L_11 = V_3;
		RuntimeTypeHandle_t3027515415  L_12 = { reinterpret_cast<intptr_t> (EnumMemberAttribute_t1084128815_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_14 = VirtFuncInvoker2< ObjectU5BU5D_t2843939325*, Type_t *, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_11, L_13, (bool)1);
		RuntimeObject* L_15 = Enumerable_Cast_TisEnumMemberAttribute_t1084128815_m843212694(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_14, /*hidden argument*/Enumerable_Cast_TisEnumMemberAttribute_t1084128815_m843212694_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2360567884_il2cpp_TypeInfo_var);
		Func_2_t2419460300 * L_16 = ((U3CU3Ec_t2360567884_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2360567884_il2cpp_TypeInfo_var))->get_U3CU3E9__1_0_1();
		Func_2_t2419460300 * L_17 = L_16;
		G_B2_0 = L_17;
		G_B2_1 = L_15;
		if (L_17)
		{
			G_B3_0 = L_17;
			G_B3_1 = L_15;
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2360567884_il2cpp_TypeInfo_var);
		U3CU3Ec_t2360567884 * L_18 = ((U3CU3Ec_t2360567884_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2360567884_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_19 = (intptr_t)U3CU3Ec_U3CInitializeEnumTypeU3Eb__1_0_m76424380_RuntimeMethod_var;
		Func_2_t2419460300 * L_20 = (Func_2_t2419460300 *)il2cpp_codegen_object_new(Func_2_t2419460300_il2cpp_TypeInfo_var);
		Func_2__ctor_m1969356281(L_20, L_18, L_19, /*hidden argument*/Func_2__ctor_m1969356281_RuntimeMethod_var);
		Func_2_t2419460300 * L_21 = L_20;
		((U3CU3Ec_t2360567884_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2360567884_il2cpp_TypeInfo_var))->set_U3CU3E9__1_0_1(L_21);
		G_B3_0 = L_21;
		G_B3_1 = G_B2_1;
	}

IL_005f:
	{
		RuntimeObject* L_22 = Enumerable_Select_TisEnumMemberAttribute_t1084128815_TisString_t_m3180131537(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/Enumerable_Select_TisEnumMemberAttribute_t1084128815_TisString_t_m3180131537_RuntimeMethod_var);
		String_t* L_23 = Enumerable_SingleOrDefault_TisString_t_m4035470101(NULL /*static, unused*/, L_22, /*hidden argument*/Enumerable_SingleOrDefault_TisString_t_m4035470101_RuntimeMethod_var);
		String_t* L_24 = L_23;
		G_B4_0 = L_24;
		if (L_24)
		{
			G_B5_0 = L_24;
			goto IL_0073;
		}
	}
	{
		FieldInfo_t * L_25 = V_3;
		String_t* L_26 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_25);
		G_B5_0 = L_26;
	}

IL_0073:
	{
		V_5 = G_B5_0;
		BidirectionalDictionary_2_t787053467 * L_27 = V_0;
		String_t* L_28 = V_5;
		bool L_29 = BidirectionalDictionary_2_TryGetBySecond_m954730245(L_27, L_28, (&V_6), /*hidden argument*/BidirectionalDictionary_2_TryGetBySecond_m954730245_RuntimeMethod_var);
		if (!L_29)
		{
			goto IL_009e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_30 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_31 = V_5;
		Type_t * L_32 = ___type0;
		String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_32);
		String_t* L_34 = StringUtils_FormatWith_m353537829(NULL /*static, unused*/, _stringLiteral2810825232, L_30, L_31, L_33, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_35 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_35, L_34, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35,EnumUtils_InitializeEnumType_m3064468690_RuntimeMethod_var);
	}

IL_009e:
	{
		BidirectionalDictionary_2_t787053467 * L_36 = V_0;
		String_t* L_37 = V_4;
		String_t* L_38 = V_5;
		BidirectionalDictionary_2_Set_m3266748649(L_36, L_37, L_38, /*hidden argument*/BidirectionalDictionary_2_Set_m3266748649_RuntimeMethod_var);
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00ac:
	{
		int32_t L_40 = V_2;
		FieldInfoU5BU5D_t846150980* L_41 = V_1;
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		BidirectionalDictionary_2_t787053467 * L_42 = V_0;
		return L_42;
	}
}
// System.Collections.Generic.IList`1<System.Object> Newtonsoft.Json.Utilities.EnumUtils::GetValues(System.Type)
extern "C"  RuntimeObject* EnumUtils_GetValues_m1997494740 (RuntimeObject * __this /* static, unused */, Type_t * ___enumType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumUtils_GetValues_m1997494740_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t257213610 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Func_2_t1761491126 * G_B4_0 = NULL;
	FieldInfoU5BU5D_t846150980* G_B4_1 = NULL;
	Func_2_t1761491126 * G_B3_0 = NULL;
	FieldInfoU5BU5D_t846150980* G_B3_1 = NULL;
	{
		Type_t * L_0 = ___enumType0;
		bool L_1 = TypeExtensions_IsEnum_m286495740(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		Type_t * L_2 = ___enumType0;
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2097671996, L_3, _stringLiteral2532280278, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_5 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,EnumUtils_GetValues_m1997494740_RuntimeMethod_var);
	}

IL_0023:
	{
		List_1_t257213610 * L_6 = (List_1_t257213610 *)il2cpp_codegen_object_new(List_1_t257213610_il2cpp_TypeInfo_var);
		List_1__ctor_m2321703786(L_6, /*hidden argument*/List_1__ctor_m2321703786_RuntimeMethod_var);
		V_0 = L_6;
		Type_t * L_7 = ___enumType0;
		FieldInfoU5BU5D_t846150980* L_8 = Type_GetFields_m3709891696(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2360567884_il2cpp_TypeInfo_var);
		Func_2_t1761491126 * L_9 = ((U3CU3Ec_t2360567884_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2360567884_il2cpp_TypeInfo_var))->get_U3CU3E9__5_0_2();
		Func_2_t1761491126 * L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = L_8;
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = L_8;
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2360567884_il2cpp_TypeInfo_var);
		U3CU3Ec_t2360567884 * L_11 = ((U3CU3Ec_t2360567884_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2360567884_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_12 = (intptr_t)U3CU3Ec_U3CGetValuesU3Eb__5_0_m762110753_RuntimeMethod_var;
		Func_2_t1761491126 * L_13 = (Func_2_t1761491126 *)il2cpp_codegen_object_new(Func_2_t1761491126_il2cpp_TypeInfo_var);
		Func_2__ctor_m3933480653(L_13, L_11, L_12, /*hidden argument*/Func_2__ctor_m3933480653_RuntimeMethod_var);
		Func_2_t1761491126 * L_14 = L_13;
		((U3CU3Ec_t2360567884_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2360567884_il2cpp_TypeInfo_var))->set_U3CU3E9__5_0_2(L_14);
		G_B4_0 = L_14;
		G_B4_1 = G_B3_1;
	}

IL_004e:
	{
		RuntimeObject* L_15 = Enumerable_Where_TisFieldInfo_t_m2487357973(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Where_TisFieldInfo_t_m2487357973_RuntimeMethod_var);
		RuntimeObject* L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t3161555474_il2cpp_TypeInfo_var, L_15);
		V_1 = L_16;
	}

IL_0059:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006f;
		}

IL_005b:
		{
			RuntimeObject* L_17 = V_1;
			FieldInfo_t * L_18 = InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t319305757_il2cpp_TypeInfo_var, L_17);
			Type_t * L_19 = ___enumType0;
			RuntimeObject * L_20 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_18, L_19);
			V_2 = L_20;
			List_1_t257213610 * L_21 = V_0;
			RuntimeObject * L_22 = V_2;
			List_1_Add_m3338814081(L_21, L_22, /*hidden argument*/List_1_Add_m3338814081_RuntimeMethod_var);
		}

IL_006f:
		{
			RuntimeObject* L_23 = V_1;
			bool L_24 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_005b;
			}
		}

IL_0077:
		{
			IL2CPP_LEAVE(0x83, FINALLY_0079);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_25 = V_1;
			if (!L_25)
			{
				goto IL_0082;
			}
		}

IL_007c:
		{
			RuntimeObject* L_26 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_26);
		}

IL_0082:
		{
			IL2CPP_END_FINALLY(121)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_JUMP_TBL(0x83, IL_0083)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0083:
	{
		List_1_t257213610 * L_27 = V_0;
		return L_27;
	}
}
// System.Object Newtonsoft.Json.Utilities.EnumUtils::ParseEnumName(System.String,System.Boolean,System.Type)
extern "C"  RuntimeObject * EnumUtils_ParseEnumName_m172858425 (RuntimeObject * __this /* static, unused */, String_t* ___enumText0, bool ___isNullable1, Type_t * ___t2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumUtils_ParseEnumName_m172858425_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	BidirectionalDictionary_2_t787053467 * V_1 = NULL;
	StringU5BU5D_t1281789340* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		String_t* L_0 = ___enumText0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		bool L_3 = ___isNullable1;
		if (!((int32_t)((int32_t)L_2&(int32_t)L_3)))
		{
			goto IL_0011;
		}
	}
	{
		return NULL;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EnumUtils_t2002471470_il2cpp_TypeInfo_var);
		ThreadSafeStore_2_t4165332627 * L_4 = ((EnumUtils_t2002471470_StaticFields*)il2cpp_codegen_static_fields_for(EnumUtils_t2002471470_il2cpp_TypeInfo_var))->get_EnumMemberNamesPerType_0();
		Type_t * L_5 = ___t2;
		BidirectionalDictionary_2_t787053467 * L_6 = ThreadSafeStore_2_Get_m70698259(L_4, L_5, /*hidden argument*/ThreadSafeStore_2_Get_m70698259_RuntimeMethod_var);
		V_1 = L_6;
		String_t* L_7 = ___enumText0;
		int32_t L_8 = String_IndexOf_m363431711(L_7, ((int32_t)44), /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)(-1))))
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_9 = ___enumText0;
		CharU5BU5D_t3528271667* L_10 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		StringU5BU5D_t1281789340* L_11 = String_Split_m3646115398(L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		V_3 = 0;
		goto IL_0057;
	}

IL_003e:
	{
		StringU5BU5D_t1281789340* L_12 = V_2;
		int32_t L_13 = V_3;
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		String_t* L_16 = String_Trim_m923598732(L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		StringU5BU5D_t1281789340* L_17 = V_2;
		int32_t L_18 = V_3;
		BidirectionalDictionary_2_t787053467 * L_19 = V_1;
		String_t* L_20 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(EnumUtils_t2002471470_il2cpp_TypeInfo_var);
		String_t* L_21 = EnumUtils_ResolvedEnumName_m2962574579(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18), (String_t*)L_21);
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_23 = V_3;
		StringU5BU5D_t1281789340* L_24 = V_2;
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_003e;
		}
	}
	{
		StringU5BU5D_t1281789340* L_25 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Join_m2050845953(NULL /*static, unused*/, _stringLiteral3450517380, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		goto IL_0073;
	}

IL_006b:
	{
		BidirectionalDictionary_2_t787053467 * L_27 = V_1;
		String_t* L_28 = ___enumText0;
		IL2CPP_RUNTIME_CLASS_INIT(EnumUtils_t2002471470_il2cpp_TypeInfo_var);
		String_t* L_29 = EnumUtils_ResolvedEnumName_m2962574579(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		V_0 = L_29;
	}

IL_0073:
	{
		Type_t * L_30 = ___t2;
		String_t* L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		RuntimeObject * L_32 = Enum_Parse_m1579637477(NULL /*static, unused*/, L_30, L_31, (bool)1, /*hidden argument*/NULL);
		return L_32;
	}
}
// System.String Newtonsoft.Json.Utilities.EnumUtils::ToEnumName(System.Type,System.String,System.Boolean)
extern "C"  String_t* EnumUtils_ToEnumName_m1516462206 (RuntimeObject * __this /* static, unused */, Type_t * ___enumType0, String_t* ___enumText1, bool ___camelCaseText2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumUtils_ToEnumName_m1516462206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BidirectionalDictionary_2_t787053467 * V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EnumUtils_t2002471470_il2cpp_TypeInfo_var);
		ThreadSafeStore_2_t4165332627 * L_0 = ((EnumUtils_t2002471470_StaticFields*)il2cpp_codegen_static_fields_for(EnumUtils_t2002471470_il2cpp_TypeInfo_var))->get_EnumMemberNamesPerType_0();
		Type_t * L_1 = ___enumType0;
		BidirectionalDictionary_2_t787053467 * L_2 = ThreadSafeStore_2_Get_m70698259(L_0, L_1, /*hidden argument*/ThreadSafeStore_2_Get_m70698259_RuntimeMethod_var);
		V_0 = L_2;
		String_t* L_3 = ___enumText1;
		CharU5BU5D_t3528271667* L_4 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		StringU5BU5D_t1281789340* L_5 = String_Split_m3646115398(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0053;
	}

IL_0022:
	{
		StringU5BU5D_t1281789340* L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		String_t* L_10 = String_Trim_m923598732(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		BidirectionalDictionary_2_t787053467 * L_11 = V_0;
		String_t* L_12 = V_3;
		BidirectionalDictionary_2_TryGetByFirst_m2766949072(L_11, L_12, (&V_4), /*hidden argument*/BidirectionalDictionary_2_TryGetByFirst_m2766949072_RuntimeMethod_var);
		String_t* L_13 = V_4;
		String_t* L_14 = L_13;
		G_B2_0 = L_14;
		if (L_14)
		{
			G_B3_0 = L_14;
			goto IL_003c;
		}
	}
	{
		String_t* L_15 = V_3;
		G_B3_0 = L_15;
	}

IL_003c:
	{
		V_4 = G_B3_0;
		bool L_16 = ___camelCaseText2;
		if (!L_16)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_17 = V_4;
		String_t* L_18 = StringUtils_ToCamelCase_m614090145(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
	}

IL_004a:
	{
		StringU5BU5D_t1281789340* L_19 = V_1;
		int32_t L_20 = V_2;
		String_t* L_21 = V_4;
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20), (String_t*)L_21);
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0053:
	{
		int32_t L_23 = V_2;
		StringU5BU5D_t1281789340* L_24 = V_1;
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_0022;
		}
	}
	{
		StringU5BU5D_t1281789340* L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Join_m2050845953(NULL /*static, unused*/, _stringLiteral3450517380, L_25, /*hidden argument*/NULL);
		return L_26;
	}
}
// System.String Newtonsoft.Json.Utilities.EnumUtils::ResolvedEnumName(Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>,System.String)
extern "C"  String_t* EnumUtils_ResolvedEnumName_m2962574579 (RuntimeObject * __this /* static, unused */, BidirectionalDictionary_2_t787053467 * ___map0, String_t* ___enumText1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumUtils_ResolvedEnumName_m2962574579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		BidirectionalDictionary_2_t787053467 * L_0 = ___map0;
		String_t* L_1 = ___enumText1;
		BidirectionalDictionary_2_TryGetBySecond_m954730245(L_0, L_1, (&V_0), /*hidden argument*/BidirectionalDictionary_2_TryGetBySecond_m954730245_RuntimeMethod_var);
		String_t* L_2 = V_0;
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0010;
		}
	}
	{
		String_t* L_4 = ___enumText1;
		G_B2_0 = L_4;
	}

IL_0010:
	{
		V_0 = G_B2_0;
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Void Newtonsoft.Json.Utilities.EnumUtils::.cctor()
extern "C"  void EnumUtils__cctor_m3466973508 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumUtils__cctor_m3466973508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)EnumUtils_InitializeEnumType_m3064468690_RuntimeMethod_var;
		Func_2_t1251018457 * L_1 = (Func_2_t1251018457 *)il2cpp_codegen_object_new(Func_2_t1251018457_il2cpp_TypeInfo_var);
		Func_2__ctor_m1138174753(L_1, NULL, L_0, /*hidden argument*/Func_2__ctor_m1138174753_RuntimeMethod_var);
		ThreadSafeStore_2_t4165332627 * L_2 = (ThreadSafeStore_2_t4165332627 *)il2cpp_codegen_object_new(ThreadSafeStore_2_t4165332627_il2cpp_TypeInfo_var);
		ThreadSafeStore_2__ctor_m769843296(L_2, L_1, /*hidden argument*/ThreadSafeStore_2__ctor_m769843296_RuntimeMethod_var);
		((EnumUtils_t2002471470_StaticFields*)il2cpp_codegen_static_fields_for(EnumUtils_t2002471470_il2cpp_TypeInfo_var))->set_EnumMemberNamesPerType_0(L_2);
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
// System.Void Newtonsoft.Json.Utilities.EnumUtils/<>c::.cctor()
extern "C"  void U3CU3Ec__cctor_m712977655 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m712977655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2360567884 * L_0 = (U3CU3Ec_t2360567884 *)il2cpp_codegen_object_new(U3CU3Ec_t2360567884_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4100598361(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2360567884_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2360567884_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.EnumUtils/<>c::.ctor()
extern "C"  void U3CU3Ec__ctor_m4100598361 (U3CU3Ec_t2360567884 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.EnumUtils/<>c::<InitializeEnumType>b__1_0(System.Runtime.Serialization.EnumMemberAttribute)
extern "C"  String_t* U3CU3Ec_U3CInitializeEnumTypeU3Eb__1_0_m76424380 (U3CU3Ec_t2360567884 * __this, EnumMemberAttribute_t1084128815 * ___a0, const RuntimeMethod* method)
{
	{
		EnumMemberAttribute_t1084128815 * L_0 = ___a0;
		String_t* L_1 = EnumMemberAttribute_get_Value_m452041758(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.EnumUtils/<>c::<GetValues>b__5_0(System.Reflection.FieldInfo)
extern "C"  bool U3CU3Ec_U3CGetValuesU3Eb__5_0_m762110753 (U3CU3Ec_t2360567884 * __this, FieldInfo_t * ___f0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = ___f0;
		bool L_1 = FieldInfo_get_IsLiteral_m534699794(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Newtonsoft.Json.Utilities.JavaScriptUtils::.cctor()
extern "C"  void JavaScriptUtils__cctor_m2960747719 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JavaScriptUtils__cctor_m2960747719_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Il2CppChar V_3 = 0x0;
	Il2CppChar V_4 = 0x0;
	Il2CppChar V_5 = 0x0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		((JavaScriptUtils_t1108575081_StaticFields*)il2cpp_codegen_static_fields_for(JavaScriptUtils_t1108575081_il2cpp_TypeInfo_var))->set_SingleQuoteCharEscapeFlags_0(((BooleanU5BU5D_t2897418192*)SZArrayNew(BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128))));
		((JavaScriptUtils_t1108575081_StaticFields*)il2cpp_codegen_static_fields_for(JavaScriptUtils_t1108575081_il2cpp_TypeInfo_var))->set_DoubleQuoteCharEscapeFlags_1(((BooleanU5BU5D_t2897418192*)SZArrayNew(BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128))));
		((JavaScriptUtils_t1108575081_StaticFields*)il2cpp_codegen_static_fields_for(JavaScriptUtils_t1108575081_il2cpp_TypeInfo_var))->set_HtmlCharEscapeFlags_2(((BooleanU5BU5D_t2897418192*)SZArrayNew(BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128))));
		List_1_t811567916 * L_0 = (List_1_t811567916 *)il2cpp_codegen_object_new(List_1_t811567916_il2cpp_TypeInfo_var);
		List_1__ctor_m1735334926(L_0, /*hidden argument*/List_1__ctor_m1735334926_RuntimeMethod_var);
		List_1_t811567916 * L_1 = L_0;
		List_1_Add_m1266383442(L_1, ((int32_t)10), /*hidden argument*/List_1_Add_m1266383442_RuntimeMethod_var);
		List_1_t811567916 * L_2 = L_1;
		List_1_Add_m1266383442(L_2, ((int32_t)13), /*hidden argument*/List_1_Add_m1266383442_RuntimeMethod_var);
		List_1_t811567916 * L_3 = L_2;
		List_1_Add_m1266383442(L_3, ((int32_t)9), /*hidden argument*/List_1_Add_m1266383442_RuntimeMethod_var);
		List_1_t811567916 * L_4 = L_3;
		List_1_Add_m1266383442(L_4, ((int32_t)92), /*hidden argument*/List_1_Add_m1266383442_RuntimeMethod_var);
		List_1_t811567916 * L_5 = L_4;
		List_1_Add_m1266383442(L_5, ((int32_t)12), /*hidden argument*/List_1_Add_m1266383442_RuntimeMethod_var);
		List_1_t811567916 * L_6 = L_5;
		List_1_Add_m1266383442(L_6, 8, /*hidden argument*/List_1_Add_m1266383442_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_6;
		V_1 = 0;
		goto IL_0072;
	}

IL_0066:
	{
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_1;
		InterfaceActionInvoker1< Il2CppChar >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Char>::Add(!0) */, ICollection_1_t2167645408_il2cpp_TypeInfo_var, L_7, (((int32_t)((uint16_t)L_8))));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0072:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)32))))
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_11 = V_0;
		CharU5BU5D_t3528271667* L_12 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)39));
		RuntimeObject* L_13 = Enumerable_Union_TisChar_t3634460470_m3294811350(NULL /*static, unused*/, L_11, (RuntimeObject*)(RuntimeObject*)L_12, /*hidden argument*/Enumerable_Union_TisChar_t3634460470_m3294811350_RuntimeMethod_var);
		RuntimeObject* L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Char>::GetEnumerator() */, IEnumerable_1_t2614313359_il2cpp_TypeInfo_var, L_13);
		V_2 = L_14;
	}

IL_008e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009f;
		}

IL_0090:
		{
			RuntimeObject* L_15 = V_2;
			Il2CppChar L_16 = InterfaceFuncInvoker0< Il2CppChar >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Char>::get_Current() */, IEnumerator_1_t4067030938_il2cpp_TypeInfo_var, L_15);
			V_3 = L_16;
			BooleanU5BU5D_t2897418192* L_17 = ((JavaScriptUtils_t1108575081_StaticFields*)il2cpp_codegen_static_fields_for(JavaScriptUtils_t1108575081_il2cpp_TypeInfo_var))->get_SingleQuoteCharEscapeFlags_0();
			Il2CppChar L_18 = V_3;
			(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18), (bool)1);
		}

IL_009f:
		{
			RuntimeObject* L_19 = V_2;
			bool L_20 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_19);
			if (L_20)
			{
				goto IL_0090;
			}
		}

IL_00a7:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_00a9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a9;
	}

FINALLY_00a9:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_21 = V_2;
			if (!L_21)
			{
				goto IL_00b2;
			}
		}

IL_00ac:
		{
			RuntimeObject* L_22 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_22);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(169)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(169)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		RuntimeObject* L_23 = V_0;
		CharU5BU5D_t3528271667* L_24 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)34));
		RuntimeObject* L_25 = Enumerable_Union_TisChar_t3634460470_m3294811350(NULL /*static, unused*/, L_23, (RuntimeObject*)(RuntimeObject*)L_24, /*hidden argument*/Enumerable_Union_TisChar_t3634460470_m3294811350_RuntimeMethod_var);
		RuntimeObject* L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Char>::GetEnumerator() */, IEnumerable_1_t2614313359_il2cpp_TypeInfo_var, L_25);
		V_2 = L_26;
	}

IL_00ca:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00dd;
		}

IL_00cc:
		{
			RuntimeObject* L_27 = V_2;
			Il2CppChar L_28 = InterfaceFuncInvoker0< Il2CppChar >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Char>::get_Current() */, IEnumerator_1_t4067030938_il2cpp_TypeInfo_var, L_27);
			V_4 = L_28;
			BooleanU5BU5D_t2897418192* L_29 = ((JavaScriptUtils_t1108575081_StaticFields*)il2cpp_codegen_static_fields_for(JavaScriptUtils_t1108575081_il2cpp_TypeInfo_var))->get_DoubleQuoteCharEscapeFlags_1();
			Il2CppChar L_30 = V_4;
			(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30), (bool)1);
		}

IL_00dd:
		{
			RuntimeObject* L_31 = V_2;
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_31);
			if (L_32)
			{
				goto IL_00cc;
			}
		}

IL_00e5:
		{
			IL2CPP_LEAVE(0xF1, FINALLY_00e7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e7;
	}

FINALLY_00e7:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_2;
			if (!L_33)
			{
				goto IL_00f0;
			}
		}

IL_00ea:
		{
			RuntimeObject* L_34 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_34);
		}

IL_00f0:
		{
			IL2CPP_END_FINALLY(231)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(231)
	{
		IL2CPP_JUMP_TBL(0xF1, IL_00f1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f1:
	{
		RuntimeObject* L_35 = V_0;
		CharU5BU5D_t3528271667* L_36 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)5));
		RuntimeFieldHandle_t1871169219  L_37 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255367____D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_36, L_37, /*hidden argument*/NULL);
		RuntimeObject* L_38 = Enumerable_Union_TisChar_t3634460470_m3294811350(NULL /*static, unused*/, L_35, (RuntimeObject*)(RuntimeObject*)L_36, /*hidden argument*/Enumerable_Union_TisChar_t3634460470_m3294811350_RuntimeMethod_var);
		RuntimeObject* L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Char>::GetEnumerator() */, IEnumerable_1_t2614313359_il2cpp_TypeInfo_var, L_38);
		V_2 = L_39;
	}

IL_010e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0121;
		}

IL_0110:
		{
			RuntimeObject* L_40 = V_2;
			Il2CppChar L_41 = InterfaceFuncInvoker0< Il2CppChar >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Char>::get_Current() */, IEnumerator_1_t4067030938_il2cpp_TypeInfo_var, L_40);
			V_5 = L_41;
			BooleanU5BU5D_t2897418192* L_42 = ((JavaScriptUtils_t1108575081_StaticFields*)il2cpp_codegen_static_fields_for(JavaScriptUtils_t1108575081_il2cpp_TypeInfo_var))->get_HtmlCharEscapeFlags_2();
			Il2CppChar L_43 = V_5;
			(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43), (bool)1);
		}

IL_0121:
		{
			RuntimeObject* L_44 = V_2;
			bool L_45 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_44);
			if (L_45)
			{
				goto IL_0110;
			}
		}

IL_0129:
		{
			IL2CPP_LEAVE(0x135, FINALLY_012b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012b;
	}

FINALLY_012b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_46 = V_2;
			if (!L_46)
			{
				goto IL_0134;
			}
		}

IL_012e:
		{
			RuntimeObject* L_47 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_47);
		}

IL_0134:
		{
			IL2CPP_END_FINALLY(299)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(299)
	{
		IL2CPP_JUMP_TBL(0x135, IL_0135)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0135:
	{
		return;
	}
}
// System.Boolean[] Newtonsoft.Json.Utilities.JavaScriptUtils::GetCharEscapeFlags(Newtonsoft.Json.StringEscapeHandling,System.Char)
extern "C"  BooleanU5BU5D_t2897418192* JavaScriptUtils_GetCharEscapeFlags_m2215130569 (RuntimeObject * __this /* static, unused */, int32_t ___stringEscapeHandling0, Il2CppChar ___quoteChar1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JavaScriptUtils_GetCharEscapeFlags_m2215130569_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___stringEscapeHandling0;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JavaScriptUtils_t1108575081_il2cpp_TypeInfo_var);
		BooleanU5BU5D_t2897418192* L_1 = ((JavaScriptUtils_t1108575081_StaticFields*)il2cpp_codegen_static_fields_for(JavaScriptUtils_t1108575081_il2cpp_TypeInfo_var))->get_HtmlCharEscapeFlags_2();
		return L_1;
	}

IL_000a:
	{
		Il2CppChar L_2 = ___quoteChar1;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JavaScriptUtils_t1108575081_il2cpp_TypeInfo_var);
		BooleanU5BU5D_t2897418192* L_3 = ((JavaScriptUtils_t1108575081_StaticFields*)il2cpp_codegen_static_fields_for(JavaScriptUtils_t1108575081_il2cpp_TypeInfo_var))->get_DoubleQuoteCharEscapeFlags_1();
		return L_3;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JavaScriptUtils_t1108575081_il2cpp_TypeInfo_var);
		BooleanU5BU5D_t2897418192* L_4 = ((JavaScriptUtils_t1108575081_StaticFields*)il2cpp_codegen_static_fields_for(JavaScriptUtils_t1108575081_il2cpp_TypeInfo_var))->get_SingleQuoteCharEscapeFlags_0();
		return L_4;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.JavaScriptUtils::ShouldEscapeJavaScriptString(System.String,System.Boolean[])
extern "C"  bool JavaScriptUtils_ShouldEscapeJavaScriptString_m4145948594 (RuntimeObject * __this /* static, unused */, String_t* ___s0, BooleanU5BU5D_t2897418192* ___charEscapeFlags1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		String_t* L_1 = ___s0;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0024;
	}

IL_000b:
	{
		String_t* L_2 = V_0;
		int32_t L_3 = V_1;
		Il2CppChar L_4 = String_get_Chars_m2986988803(L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		Il2CppChar L_5 = V_2;
		BooleanU5BU5D_t2897418192* L_6 = ___charEscapeFlags1;
		if ((((int32_t)L_5) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		BooleanU5BU5D_t2897418192* L_7 = ___charEscapeFlags1;
		Il2CppChar L_8 = V_2;
		Il2CppChar L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		if (!L_10)
		{
			goto IL_0020;
		}
	}

IL_001e:
	{
		return (bool)1;
	}

IL_0020:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_12 = V_1;
		String_t* L_13 = V_0;
		int32_t L_14 = String_get_Length_m3847582255(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void Newtonsoft.Json.Utilities.JavaScriptUtils::WriteEscapedJavaScriptString(System.IO.TextWriter,System.String,System.Char,System.Boolean,System.Boolean[],Newtonsoft.Json.StringEscapeHandling,Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[]&)
extern "C"  void JavaScriptUtils_WriteEscapedJavaScriptString_m1556362848 (RuntimeObject * __this /* static, unused */, TextWriter_t3478189236 * ___writer0, String_t* ___s1, Il2CppChar ___delimiter2, bool ___appendDelimiters3, BooleanU5BU5D_t2897418192* ___charEscapeFlags4, int32_t ___stringEscapeHandling5, RuntimeObject* ___bufferPool6, CharU5BU5D_t3528271667** ___writeBuffer7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JavaScriptUtils_WriteEscapedJavaScriptString_m1556362848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	String_t* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	CharU5BU5D_t3528271667* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B41_1 = 0;
	int32_t G_B44_0 = 0;
	{
		bool L_0 = ___appendDelimiters3;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		TextWriter_t3478189236 * L_1 = ___writer0;
		Il2CppChar L_2 = ___delimiter2;
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, L_2);
	}

IL_000a:
	{
		String_t* L_3 = ___s1;
		if (!L_3)
		{
			goto IL_0228;
		}
	}
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_01d0;
	}

IL_0019:
	{
		String_t* L_4 = ___s1;
		int32_t L_5 = V_1;
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		BooleanU5BU5D_t2897418192* L_8 = ___charEscapeFlags4;
		if ((((int32_t)L_7) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0031;
		}
	}
	{
		BooleanU5BU5D_t2897418192* L_9 = ___charEscapeFlags4;
		Il2CppChar L_10 = V_2;
		Il2CppChar L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		if (!L_12)
		{
			goto IL_01cc;
		}
	}

IL_0031:
	{
		Il2CppChar L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_005d;
		}
	}
	{
		Il2CppChar L_14 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)8)))
		{
			case 0:
			{
				goto IL_00a3;
			}
			case 1:
			{
				goto IL_0077;
			}
			case 2:
			{
				goto IL_0082;
			}
			case 3:
			{
				goto IL_00cb;
			}
			case 4:
			{
				goto IL_0098;
			}
			case 5:
			{
				goto IL_008d;
			}
		}
	}
	{
		Il2CppChar L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)92))))
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_00cb;
	}

IL_005d:
	{
		Il2CppChar L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)133))))
		{
			goto IL_00b3;
		}
	}
	{
		Il2CppChar L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)8232))))
		{
			goto IL_00bb;
		}
	}
	{
		Il2CppChar L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)8233))))
		{
			goto IL_00c3;
		}
	}
	{
		goto IL_00cb;
	}

IL_0077:
	{
		V_3 = _stringLiteral3455498228;
		goto IL_0129;
	}

IL_0082:
	{
		V_3 = _stringLiteral3454842868;
		goto IL_0129;
	}

IL_008d:
	{
		V_3 = _stringLiteral3455629300;
		goto IL_0129;
	}

IL_0098:
	{
		V_3 = _stringLiteral3454318580;
		goto IL_0129;
	}

IL_00a3:
	{
		V_3 = _stringLiteral3454580724;
		goto IL_0129;
	}

IL_00ab:
	{
		V_3 = _stringLiteral3458119668;
		goto IL_0129;
	}

IL_00b3:
	{
		V_3 = _stringLiteral3145209596;
		goto IL_0129;
	}

IL_00bb:
	{
		V_3 = _stringLiteral12320812;
		goto IL_0129;
	}

IL_00c3:
	{
		V_3 = _stringLiteral12255276;
		goto IL_0129;
	}

IL_00cb:
	{
		Il2CppChar L_19 = V_2;
		BooleanU5BU5D_t2897418192* L_20 = ___charEscapeFlags4;
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_21 = ___stringEscapeHandling5;
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_0127;
		}
	}

IL_00d7:
	{
		Il2CppChar L_22 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_00e9;
		}
	}
	{
		int32_t L_23 = ___stringEscapeHandling5;
		if ((((int32_t)L_23) == ((int32_t)2)))
		{
			goto IL_00e9;
		}
	}
	{
		V_3 = _stringLiteral3450058740;
		goto IL_0129;
	}

IL_00e9:
	{
		Il2CppChar L_24 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_25 = ___stringEscapeHandling5;
		if ((((int32_t)L_25) == ((int32_t)2)))
		{
			goto IL_00fb;
		}
	}
	{
		V_3 = _stringLiteral3450386420;
		goto IL_0129;
	}

IL_00fb:
	{
		CharU5BU5D_t3528271667** L_26 = ___writeBuffer7;
		if (!(*((CharU5BU5D_t3528271667**)L_26)))
		{
			goto IL_0108;
		}
	}
	{
		CharU5BU5D_t3528271667** L_27 = ___writeBuffer7;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)(*((CharU5BU5D_t3528271667**)L_27)))->max_length))))) >= ((int32_t)6)))
		{
			goto IL_0116;
		}
	}

IL_0108:
	{
		CharU5BU5D_t3528271667** L_28 = ___writeBuffer7;
		RuntimeObject* L_29 = ___bufferPool6;
		CharU5BU5D_t3528271667** L_30 = ___writeBuffer7;
		CharU5BU5D_t3528271667* L_31 = BufferUtils_EnsureBufferSize_m2563135377(NULL /*static, unused*/, L_29, 6, (*((CharU5BU5D_t3528271667**)L_30)), /*hidden argument*/NULL);
		*((RuntimeObject **)(L_28)) = (RuntimeObject *)L_31;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_28), (RuntimeObject *)L_31);
	}

IL_0116:
	{
		Il2CppChar L_32 = V_2;
		CharU5BU5D_t3528271667** L_33 = ___writeBuffer7;
		StringUtils_ToCharAsUnicode_m1857241640(NULL /*static, unused*/, L_32, (*((CharU5BU5D_t3528271667**)L_33)), /*hidden argument*/NULL);
		V_3 = _stringLiteral3452614527;
		goto IL_0129;
	}

IL_0127:
	{
		V_3 = (String_t*)NULL;
	}

IL_0129:
	{
		String_t* L_34 = V_3;
		if (!L_34)
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_35 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_36 = String_Equals_m1744302937(NULL /*static, unused*/, L_35, _stringLiteral3452614527, /*hidden argument*/NULL);
		V_4 = L_36;
		int32_t L_37 = V_1;
		int32_t L_38 = V_0;
		if ((((int32_t)L_37) <= ((int32_t)L_38)))
		{
			goto IL_01b0;
		}
	}
	{
		int32_t L_39 = V_1;
		int32_t L_40 = V_0;
		bool L_41 = V_4;
		G_B39_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_40));
		if (L_41)
		{
			G_B40_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_40));
			goto IL_014a;
		}
	}
	{
		G_B41_0 = 0;
		G_B41_1 = G_B39_0;
		goto IL_014b;
	}

IL_014a:
	{
		G_B41_0 = 6;
		G_B41_1 = G_B40_0;
	}

IL_014b:
	{
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)G_B41_1, (int32_t)G_B41_0));
		bool L_42 = V_4;
		if (L_42)
		{
			goto IL_0155;
		}
	}
	{
		G_B44_0 = 0;
		goto IL_0156;
	}

IL_0155:
	{
		G_B44_0 = 6;
	}

IL_0156:
	{
		V_6 = G_B44_0;
		CharU5BU5D_t3528271667** L_43 = ___writeBuffer7;
		if (!(*((CharU5BU5D_t3528271667**)L_43)))
		{
			goto IL_0166;
		}
	}
	{
		CharU5BU5D_t3528271667** L_44 = ___writeBuffer7;
		int32_t L_45 = V_5;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)(*((CharU5BU5D_t3528271667**)L_44)))->max_length))))) >= ((int32_t)L_45)))
		{
			goto IL_018f;
		}
	}

IL_0166:
	{
		RuntimeObject* L_46 = ___bufferPool6;
		int32_t L_47 = V_5;
		CharU5BU5D_t3528271667* L_48 = BufferUtils_RentBuffer_m2229979349(NULL /*static, unused*/, L_46, L_47, /*hidden argument*/NULL);
		V_7 = L_48;
		bool L_49 = V_4;
		if (!L_49)
		{
			goto IL_0180;
		}
	}
	{
		CharU5BU5D_t3528271667** L_50 = ___writeBuffer7;
		CharU5BU5D_t3528271667* L_51 = V_7;
		Array_Copy_m1988217701(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)(*((CharU5BU5D_t3528271667**)L_50)), (RuntimeArray *)(RuntimeArray *)L_51, 6, /*hidden argument*/NULL);
	}

IL_0180:
	{
		RuntimeObject* L_52 = ___bufferPool6;
		CharU5BU5D_t3528271667** L_53 = ___writeBuffer7;
		BufferUtils_ReturnBuffer_m1757235126(NULL /*static, unused*/, L_52, (*((CharU5BU5D_t3528271667**)L_53)), /*hidden argument*/NULL);
		CharU5BU5D_t3528271667** L_54 = ___writeBuffer7;
		CharU5BU5D_t3528271667* L_55 = V_7;
		*((RuntimeObject **)(L_54)) = (RuntimeObject *)L_55;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_54), (RuntimeObject *)L_55);
	}

IL_018f:
	{
		String_t* L_56 = ___s1;
		int32_t L_57 = V_0;
		CharU5BU5D_t3528271667** L_58 = ___writeBuffer7;
		int32_t L_59 = V_6;
		int32_t L_60 = V_5;
		int32_t L_61 = V_6;
		String_CopyTo_m2803757991(L_56, L_57, (*((CharU5BU5D_t3528271667**)L_58)), L_59, ((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)L_61)), /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_62 = ___writer0;
		CharU5BU5D_t3528271667** L_63 = ___writeBuffer7;
		int32_t L_64 = V_6;
		int32_t L_65 = V_5;
		int32_t L_66 = V_6;
		VirtActionInvoker3< CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_62, (*((CharU5BU5D_t3528271667**)L_63)), L_64, ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)L_66)));
	}

IL_01b0:
	{
		int32_t L_67 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		bool L_68 = V_4;
		if (L_68)
		{
			goto IL_01c1;
		}
	}
	{
		TextWriter_t3478189236 * L_69 = ___writer0;
		String_t* L_70 = V_3;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_69, L_70);
		goto IL_01cc;
	}

IL_01c1:
	{
		TextWriter_t3478189236 * L_71 = ___writer0;
		CharU5BU5D_t3528271667** L_72 = ___writeBuffer7;
		VirtActionInvoker3< CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_71, (*((CharU5BU5D_t3528271667**)L_72)), 0, 6);
	}

IL_01cc:
	{
		int32_t L_73 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
	}

IL_01d0:
	{
		int32_t L_74 = V_1;
		String_t* L_75 = ___s1;
		int32_t L_76 = String_get_Length_m3847582255(L_75, /*hidden argument*/NULL);
		if ((((int32_t)L_74) < ((int32_t)L_76)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_77 = V_0;
		if (L_77)
		{
			goto IL_01e8;
		}
	}
	{
		TextWriter_t3478189236 * L_78 = ___writer0;
		String_t* L_79 = ___s1;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_78, L_79);
		goto IL_0228;
	}

IL_01e8:
	{
		String_t* L_80 = ___s1;
		int32_t L_81 = String_get_Length_m3847582255(L_80, /*hidden argument*/NULL);
		int32_t L_82 = V_0;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)L_82));
		CharU5BU5D_t3528271667** L_83 = ___writeBuffer7;
		if (!(*((CharU5BU5D_t3528271667**)L_83)))
		{
			goto IL_0200;
		}
	}
	{
		CharU5BU5D_t3528271667** L_84 = ___writeBuffer7;
		int32_t L_85 = V_8;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)(*((CharU5BU5D_t3528271667**)L_84)))->max_length))))) >= ((int32_t)L_85)))
		{
			goto IL_020f;
		}
	}

IL_0200:
	{
		CharU5BU5D_t3528271667** L_86 = ___writeBuffer7;
		RuntimeObject* L_87 = ___bufferPool6;
		int32_t L_88 = V_8;
		CharU5BU5D_t3528271667** L_89 = ___writeBuffer7;
		CharU5BU5D_t3528271667* L_90 = BufferUtils_EnsureBufferSize_m2563135377(NULL /*static, unused*/, L_87, L_88, (*((CharU5BU5D_t3528271667**)L_89)), /*hidden argument*/NULL);
		*((RuntimeObject **)(L_86)) = (RuntimeObject *)L_90;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_86), (RuntimeObject *)L_90);
	}

IL_020f:
	{
		String_t* L_91 = ___s1;
		int32_t L_92 = V_0;
		CharU5BU5D_t3528271667** L_93 = ___writeBuffer7;
		int32_t L_94 = V_8;
		String_CopyTo_m2803757991(L_91, L_92, (*((CharU5BU5D_t3528271667**)L_93)), 0, L_94, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_95 = ___writer0;
		CharU5BU5D_t3528271667** L_96 = ___writeBuffer7;
		int32_t L_97 = V_8;
		VirtActionInvoker3< CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_95, (*((CharU5BU5D_t3528271667**)L_96)), 0, L_97);
	}

IL_0228:
	{
		bool L_98 = ___appendDelimiters3;
		if (!L_98)
		{
			goto IL_0232;
		}
	}
	{
		TextWriter_t3478189236 * L_99 = ___writer0;
		Il2CppChar L_100 = ___delimiter2;
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_99, L_100);
	}

IL_0232:
	{
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.JavaScriptUtils::ToEscapedJavaScriptString(System.String,System.Char,System.Boolean,Newtonsoft.Json.StringEscapeHandling)
extern "C"  String_t* JavaScriptUtils_ToEscapedJavaScriptString_m850540215 (RuntimeObject * __this /* static, unused */, String_t* ___value0, Il2CppChar ___delimiter1, bool ___appendDelimiters2, int32_t ___stringEscapeHandling3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JavaScriptUtils_ToEscapedJavaScriptString_m850540215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BooleanU5BU5D_t2897418192* V_0 = NULL;
	StringWriter_t802263757 * V_1 = NULL;
	Nullable_1_t378540539  V_2;
	memset(&V_2, 0, sizeof(V_2));
	CharU5BU5D_t3528271667* V_3 = NULL;
	String_t* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___stringEscapeHandling3;
		Il2CppChar L_1 = ___delimiter1;
		IL2CPP_RUNTIME_CLASS_INIT(JavaScriptUtils_t1108575081_il2cpp_TypeInfo_var);
		BooleanU5BU5D_t2897418192* L_2 = JavaScriptUtils_GetCharEscapeFlags_m2215130569(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___value0;
		Nullable_1_t378540539  L_4 = StringUtils_GetLength_m3427840909(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		bool L_5 = Nullable_1_get_HasValue_m2648265346((&V_2), /*hidden argument*/Nullable_1_get_HasValue_m2648265346_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		G_B3_0 = ((int32_t)16);
		goto IL_0023;
	}

IL_001c:
	{
		int32_t L_6 = Nullable_1_GetValueOrDefault_m2296315628((&V_2), /*hidden argument*/Nullable_1_GetValueOrDefault_m2296315628_RuntimeMethod_var);
		G_B3_0 = L_6;
	}

IL_0023:
	{
		StringWriter_t802263757 * L_7 = StringUtils_CreateStringWriter_m3876739792(NULL /*static, unused*/, G_B3_0, /*hidden argument*/NULL);
		V_1 = L_7;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		V_3 = (CharU5BU5D_t3528271667*)NULL;
		StringWriter_t802263757 * L_8 = V_1;
		String_t* L_9 = ___value0;
		Il2CppChar L_10 = ___delimiter1;
		bool L_11 = ___appendDelimiters2;
		BooleanU5BU5D_t2897418192* L_12 = V_0;
		int32_t L_13 = ___stringEscapeHandling3;
		IL2CPP_RUNTIME_CLASS_INIT(JavaScriptUtils_t1108575081_il2cpp_TypeInfo_var);
		JavaScriptUtils_WriteEscapedJavaScriptString_m1556362848(NULL /*static, unused*/, L_8, L_9, L_10, L_11, L_12, L_13, (RuntimeObject*)NULL, (&V_3), /*hidden argument*/NULL);
		StringWriter_t802263757 * L_14 = V_1;
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		V_4 = L_15;
		IL2CPP_LEAVE(0x4D, FINALLY_0043);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		{
			StringWriter_t802263757 * L_16 = V_1;
			if (!L_16)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			StringWriter_t802263757 * L_17 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_17);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(67)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		String_t* L_18 = V_4;
		return L_18;
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
// System.Boolean Newtonsoft.Json.Utilities.JsonTokenUtils::IsEndToken(Newtonsoft.Json.JsonToken)
extern "C"  bool JsonTokenUtils_IsEndToken_m2314115259 (RuntimeObject * __this /* static, unused */, int32_t ___token0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)13))))
		{
			case 0:
			{
				goto IL_0017;
			}
			case 1:
			{
				goto IL_0017;
			}
			case 2:
			{
				goto IL_0017;
			}
		}
	}
	{
		goto IL_0019;
	}

IL_0017:
	{
		return (bool)1;
	}

IL_0019:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.JsonTokenUtils::IsStartToken(Newtonsoft.Json.JsonToken)
extern "C"  bool JsonTokenUtils_IsStartToken_m2983268978 (RuntimeObject * __this /* static, unused */, int32_t ___token0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0016;
			}
			case 1:
			{
				goto IL_0016;
			}
			case 2:
			{
				goto IL_0016;
			}
		}
	}
	{
		goto IL_0018;
	}

IL_0016:
	{
		return (bool)1;
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.JsonTokenUtils::IsPrimitiveToken(Newtonsoft.Json.JsonToken)
extern "C"  bool JsonTokenUtils_IsPrimitiveToken_m4162264142 (RuntimeObject * __this /* static, unused */, int32_t ___token0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)7)))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_0036;
			}
			case 4:
			{
				goto IL_0036;
			}
			case 5:
			{
				goto IL_0036;
			}
			case 6:
			{
				goto IL_0038;
			}
			case 7:
			{
				goto IL_0038;
			}
			case 8:
			{
				goto IL_0038;
			}
			case 9:
			{
				goto IL_0036;
			}
			case 10:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_0038;
	}

IL_0036:
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
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
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory::get_Instance()
extern "C"  ReflectionDelegateFactory_t2528576452 * LateBoundReflectionDelegateFactory_get_Instance_m3698844514 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LateBoundReflectionDelegateFactory_get_Instance_m3698844514_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LateBoundReflectionDelegateFactory_t925499913_il2cpp_TypeInfo_var);
		LateBoundReflectionDelegateFactory_t925499913 * L_0 = ((LateBoundReflectionDelegateFactory_t925499913_StaticFields*)il2cpp_codegen_static_fields_for(LateBoundReflectionDelegateFactory_t925499913_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory::CreateParameterizedConstructor(System.Reflection.MethodBase)
extern "C"  ObjectConstructor_1_t3207922868 * LateBoundReflectionDelegateFactory_CreateParameterizedConstructor_m655847845 (LateBoundReflectionDelegateFactory_t925499913 * __this, MethodBase_t * ___method0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LateBoundReflectionDelegateFactory_CreateParameterizedConstructor_m655847845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t1939583362 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t1939583362 * L_0 = (U3CU3Ec__DisplayClass3_0_t1939583362 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t1939583362_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_m3663881265(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t1939583362 * L_1 = V_0;
		MethodBase_t * L_2 = ___method0;
		L_1->set_method_1(L_2);
		U3CU3Ec__DisplayClass3_0_t1939583362 * L_3 = V_0;
		MethodBase_t * L_4 = L_3->get_method_1();
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_4, _stringLiteral414301358, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass3_0_t1939583362 * L_5 = V_0;
		U3CU3Ec__DisplayClass3_0_t1939583362 * L_6 = V_0;
		MethodBase_t * L_7 = L_6->get_method_1();
		L_5->set_c_0(((ConstructorInfo_t5769829 *)IsInstClass((RuntimeObject*)L_7, ConstructorInfo_t5769829_il2cpp_TypeInfo_var)));
		U3CU3Ec__DisplayClass3_0_t1939583362 * L_8 = V_0;
		ConstructorInfo_t5769829 * L_9 = L_8->get_c_0();
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		U3CU3Ec__DisplayClass3_0_t1939583362 * L_10 = V_0;
		intptr_t L_11 = (intptr_t)U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__0_m529644205_RuntimeMethod_var;
		ObjectConstructor_1_t3207922868 * L_12 = (ObjectConstructor_1_t3207922868 *)il2cpp_codegen_object_new(ObjectConstructor_1_t3207922868_il2cpp_TypeInfo_var);
		ObjectConstructor_1__ctor_m1181679199(L_12, L_10, L_11, /*hidden argument*/ObjectConstructor_1__ctor_m1181679199_RuntimeMethod_var);
		return L_12;
	}

IL_0043:
	{
		U3CU3Ec__DisplayClass3_0_t1939583362 * L_13 = V_0;
		intptr_t L_14 = (intptr_t)U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__1_m526498226_RuntimeMethod_var;
		ObjectConstructor_1_t3207922868 * L_15 = (ObjectConstructor_1_t3207922868 *)il2cpp_codegen_object_new(ObjectConstructor_1_t3207922868_il2cpp_TypeInfo_var);
		ObjectConstructor_1__ctor_m1181679199(L_15, L_13, L_14, /*hidden argument*/ObjectConstructor_1__ctor_m1181679199_RuntimeMethod_var);
		return L_15;
	}
}
// System.Void Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory::.ctor()
extern "C"  void LateBoundReflectionDelegateFactory__ctor_m2734757472 (LateBoundReflectionDelegateFactory_t925499913 * __this, const RuntimeMethod* method)
{
	{
		ReflectionDelegateFactory__ctor_m3277517333(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory::.cctor()
extern "C"  void LateBoundReflectionDelegateFactory__cctor_m3918907285 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LateBoundReflectionDelegateFactory__cctor_m3918907285_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LateBoundReflectionDelegateFactory_t925499913 * L_0 = (LateBoundReflectionDelegateFactory_t925499913 *)il2cpp_codegen_object_new(LateBoundReflectionDelegateFactory_t925499913_il2cpp_TypeInfo_var);
		LateBoundReflectionDelegateFactory__ctor_m2734757472(L_0, /*hidden argument*/NULL);
		((LateBoundReflectionDelegateFactory_t925499913_StaticFields*)il2cpp_codegen_static_fields_for(LateBoundReflectionDelegateFactory_t925499913_il2cpp_TypeInfo_var))->set__instance_0(L_0);
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
// System.Void Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass3_0__ctor_m3663881265 (U3CU3Ec__DisplayClass3_0_t1939583362 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::<CreateParameterizedConstructor>b__0(System.Object[])
extern "C"  RuntimeObject * U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__0_m529644205 (U3CU3Ec__DisplayClass3_0_t1939583362 * __this, ObjectU5BU5D_t2843939325* ___a0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___a0;
		V_0 = L_0;
		ConstructorInfo_t5769829 * L_1 = __this->get_c_0();
		ObjectU5BU5D_t2843939325* L_2 = V_0;
		RuntimeObject * L_3 = ConstructorInfo_Invoke_m4089836896(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Object Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::<CreateParameterizedConstructor>b__1(System.Object[])
extern "C"  RuntimeObject * U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__1_m526498226 (U3CU3Ec__DisplayClass3_0_t1939583362 * __this, ObjectU5BU5D_t2843939325* ___a0, const RuntimeMethod* method)
{
	{
		MethodBase_t * L_0 = __this->get_method_1();
		ObjectU5BU5D_t2843939325* L_1 = ___a0;
		RuntimeObject * L_2 = MethodBase_Invoke_m1776411915(L_0, NULL, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Int32 Newtonsoft.Json.Utilities.MathUtils::IntLength(System.UInt64)
extern "C"  int32_t MathUtils_IntLength_m3543442926 (RuntimeObject * __this /* static, unused */, uint64_t ___i0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___i0;
		if ((!(((uint64_t)L_0) < ((uint64_t)((int64_t)10000000000LL)))))
		{
			goto IL_006d;
		}
	}
	{
		uint64_t L_1 = ___i0;
		if ((!(((uint64_t)L_1) < ((uint64_t)(((int64_t)((int64_t)((int32_t)10))))))))
		{
			goto IL_0014;
		}
	}
	{
		return 1;
	}

IL_0014:
	{
		uint64_t L_2 = ___i0;
		if ((!(((uint64_t)L_2) < ((uint64_t)(((int64_t)((int64_t)((int32_t)100))))))))
		{
			goto IL_001c;
		}
	}
	{
		return 2;
	}

IL_001c:
	{
		uint64_t L_3 = ___i0;
		if ((!(((uint64_t)L_3) < ((uint64_t)(((int64_t)((int64_t)((int32_t)1000))))))))
		{
			goto IL_0027;
		}
	}
	{
		return 3;
	}

IL_0027:
	{
		uint64_t L_4 = ___i0;
		if ((!(((uint64_t)L_4) < ((uint64_t)(((int64_t)((int64_t)((int32_t)10000))))))))
		{
			goto IL_0032;
		}
	}
	{
		return 4;
	}

IL_0032:
	{
		uint64_t L_5 = ___i0;
		if ((!(((uint64_t)L_5) < ((uint64_t)(((int64_t)((int64_t)((int32_t)100000))))))))
		{
			goto IL_003d;
		}
	}
	{
		return 5;
	}

IL_003d:
	{
		uint64_t L_6 = ___i0;
		if ((!(((uint64_t)L_6) < ((uint64_t)(((int64_t)((int64_t)((int32_t)1000000))))))))
		{
			goto IL_0048;
		}
	}
	{
		return 6;
	}

IL_0048:
	{
		uint64_t L_7 = ___i0;
		if ((!(((uint64_t)L_7) < ((uint64_t)(((int64_t)((int64_t)((int32_t)10000000))))))))
		{
			goto IL_0053;
		}
	}
	{
		return 7;
	}

IL_0053:
	{
		uint64_t L_8 = ___i0;
		if ((!(((uint64_t)L_8) < ((uint64_t)(((int64_t)((int64_t)((int32_t)100000000))))))))
		{
			goto IL_005e;
		}
	}
	{
		return 8;
	}

IL_005e:
	{
		uint64_t L_9 = ___i0;
		if ((!(((uint64_t)L_9) < ((uint64_t)(((int64_t)((int64_t)((int32_t)1000000000))))))))
		{
			goto IL_006a;
		}
	}
	{
		return ((int32_t)9);
	}

IL_006a:
	{
		return ((int32_t)10);
	}

IL_006d:
	{
		uint64_t L_10 = ___i0;
		if ((!(((uint64_t)L_10) < ((uint64_t)((int64_t)100000000000LL)))))
		{
			goto IL_007c;
		}
	}
	{
		return ((int32_t)11);
	}

IL_007c:
	{
		uint64_t L_11 = ___i0;
		if ((!(((uint64_t)L_11) < ((uint64_t)((int64_t)1000000000000LL)))))
		{
			goto IL_008b;
		}
	}
	{
		return ((int32_t)12);
	}

IL_008b:
	{
		uint64_t L_12 = ___i0;
		if ((!(((uint64_t)L_12) < ((uint64_t)((int64_t)10000000000000LL)))))
		{
			goto IL_009a;
		}
	}
	{
		return ((int32_t)13);
	}

IL_009a:
	{
		uint64_t L_13 = ___i0;
		if ((!(((uint64_t)L_13) < ((uint64_t)((int64_t)100000000000000LL)))))
		{
			goto IL_00a9;
		}
	}
	{
		return ((int32_t)14);
	}

IL_00a9:
	{
		uint64_t L_14 = ___i0;
		if ((!(((uint64_t)L_14) < ((uint64_t)((int64_t)1000000000000000LL)))))
		{
			goto IL_00b8;
		}
	}
	{
		return ((int32_t)15);
	}

IL_00b8:
	{
		uint64_t L_15 = ___i0;
		if ((!(((uint64_t)L_15) < ((uint64_t)((int64_t)10000000000000000LL)))))
		{
			goto IL_00c7;
		}
	}
	{
		return ((int32_t)16);
	}

IL_00c7:
	{
		uint64_t L_16 = ___i0;
		if ((!(((uint64_t)L_16) < ((uint64_t)((int64_t)100000000000000000LL)))))
		{
			goto IL_00d6;
		}
	}
	{
		return ((int32_t)17);
	}

IL_00d6:
	{
		uint64_t L_17 = ___i0;
		if ((!(((uint64_t)L_17) < ((uint64_t)((int64_t)1000000000000000000LL)))))
		{
			goto IL_00e5;
		}
	}
	{
		return ((int32_t)18);
	}

IL_00e5:
	{
		uint64_t L_18 = ___i0;
		if ((!(((uint64_t)L_18) < ((uint64_t)((int64_t)-8446744073709551616LL)))))
		{
			goto IL_00f4;
		}
	}
	{
		return ((int32_t)19);
	}

IL_00f4:
	{
		return ((int32_t)20);
	}
}
// System.Char Newtonsoft.Json.Utilities.MathUtils::IntToHex(System.Int32)
extern "C"  Il2CppChar MathUtils_IntToHex_m1986186787 (RuntimeObject * __this /* static, unused */, int32_t ___n0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___n0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)9))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___n0;
		return (((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)48))))));
	}

IL_000b:
	{
		int32_t L_2 = ___n0;
		return (((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)10))), (int32_t)((int32_t)97))))));
	}
}
// System.Boolean Newtonsoft.Json.Utilities.MathUtils::ApproxEquals(System.Double,System.Double)
extern "C"  bool MathUtils_ApproxEquals_m663204704 (RuntimeObject * __this /* static, unused */, double ___d10, double ___d21, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		double L_0 = ___d10;
		double L_1 = ___d21;
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		double L_2 = ___d10;
		double L_3 = fabs(L_2);
		double L_4 = ___d21;
		double L_5 = fabs(L_4);
		V_0 = ((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)L_3, (double)L_5)), (double)(10.0))), (double)(2.2204460492503131E-16)));
		double L_6 = ___d10;
		double L_7 = ___d21;
		V_1 = ((double)il2cpp_codegen_subtract((double)L_6, (double)L_7));
		double L_8 = V_0;
		double L_9 = V_1;
		if ((!(((double)((-L_8))) < ((double)L_9))))
		{
			goto IL_0036;
		}
	}
	{
		double L_10 = V_0;
		double L_11 = V_1;
		return (bool)((((double)L_10) > ((double)L_11))? 1 : 0);
	}

IL_0036:
	{
		return (bool)0;
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
// System.Boolean Newtonsoft.Json.Utilities.MiscellaneousUtils::ValueEquals(System.Object,System.Object)
extern "C"  bool MiscellaneousUtils_ValueEquals_m795470537 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MiscellaneousUtils_ValueEquals_m795470537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Decimal_t2948259380  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___objA0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		RuntimeObject * L_1 = ___objB1;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)1;
	}

IL_0008:
	{
		RuntimeObject * L_2 = ___objA0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject * L_3 = ___objB1;
		if (L_3)
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		RuntimeObject * L_4 = ___objA0;
		if (L_4)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject * L_5 = ___objB1;
		if (!L_5)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject * L_6 = ___objA0;
		Type_t * L_7 = Object_GetType_m88164663(L_6, /*hidden argument*/NULL);
		RuntimeObject * L_8 = ___objB1;
		Type_t * L_9 = Object_GetType_m88164663(L_8, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_7) == ((RuntimeObject*)(Type_t *)L_9)))
		{
			goto IL_00a3;
		}
	}
	{
		RuntimeObject * L_10 = ___objA0;
		IL2CPP_RUNTIME_CLASS_INIT(ConvertUtils_t2194062972_il2cpp_TypeInfo_var);
		bool L_11 = ConvertUtils_IsInteger_m1782566389(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject * L_12 = ___objB1;
		IL2CPP_RUNTIME_CLASS_INIT(ConvertUtils_t2194062972_il2cpp_TypeInfo_var);
		bool L_13 = ConvertUtils_IsInteger_m1782566389(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject * L_14 = ___objA0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_15 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_16 = Convert_ToDecimal_m3815908452(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		RuntimeObject * L_17 = ___objB1;
		CultureInfo_t4157843068 * L_18 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		Decimal_t2948259380  L_19 = Convert_ToDecimal_m3815908452(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		bool L_20 = Decimal_Equals_m2486655999((&V_0), L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_0055:
	{
		RuntimeObject * L_21 = ___objA0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_21, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_22 = ___objA0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_22, Single_t1397266774_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_23 = ___objA0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_23, Decimal_t2948259380_il2cpp_TypeInfo_var)))
		{
			goto IL_00a1;
		}
	}

IL_006d:
	{
		RuntimeObject * L_24 = ___objB1;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_24, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_0085;
		}
	}
	{
		RuntimeObject * L_25 = ___objB1;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_25, Single_t1397266774_il2cpp_TypeInfo_var)))
		{
			goto IL_0085;
		}
	}
	{
		RuntimeObject * L_26 = ___objB1;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_26, Decimal_t2948259380_il2cpp_TypeInfo_var)))
		{
			goto IL_00a1;
		}
	}

IL_0085:
	{
		RuntimeObject * L_27 = ___objA0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_28 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_29 = Convert_ToDouble_m4017511472(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		RuntimeObject * L_30 = ___objB1;
		CultureInfo_t4157843068 * L_31 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		double L_32 = Convert_ToDouble_m4017511472(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		bool L_33 = MathUtils_ApproxEquals_m663204704(NULL /*static, unused*/, L_29, L_32, /*hidden argument*/NULL);
		return L_33;
	}

IL_00a1:
	{
		return (bool)0;
	}

IL_00a3:
	{
		RuntimeObject * L_34 = ___objA0;
		RuntimeObject * L_35 = ___objB1;
		bool L_36 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_34, L_35);
		return L_36;
	}
}
// System.ArgumentOutOfRangeException Newtonsoft.Json.Utilities.MiscellaneousUtils::CreateArgumentOutOfRangeException(System.String,System.Object,System.String)
extern "C"  ArgumentOutOfRangeException_t777629997 * MiscellaneousUtils_CreateArgumentOutOfRangeException_m1064925786 (RuntimeObject * __this /* static, unused */, String_t* ___paramName0, RuntimeObject * ___actualValue1, String_t* ___message2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MiscellaneousUtils_CreateArgumentOutOfRangeException_m1064925786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___message2;
		String_t* L_1 = Environment_get_NewLine_m3211016485(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_2 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject * L_3 = ___actualValue1;
		String_t* L_4 = StringUtils_FormatWith_m3056805521(NULL /*static, unused*/, _stringLiteral1502400109, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, L_0, L_1, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = ___paramName0;
		String_t* L_7 = V_0;
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_8, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String Newtonsoft.Json.Utilities.MiscellaneousUtils::ToString(System.Object)
extern "C"  String_t* MiscellaneousUtils_ToString_m4213282389 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MiscellaneousUtils_ToString_m4213282389_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return _stringLiteral2395288344;
	}

IL_0009:
	{
		RuntimeObject * L_1 = ___value0;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}

IL_0018:
	{
		RuntimeObject * L_4 = ___value0;
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3452614526, L_5, _stringLiteral3452614526, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Int32 Newtonsoft.Json.Utilities.MiscellaneousUtils::ByteArrayCompare(System.Byte[],System.Byte[])
extern "C"  int32_t MiscellaneousUtils_ByteArrayCompare_m2553453521 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___a10, ByteU5BU5D_t4116647657* ___a21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___a10;
		V_1 = (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))));
		ByteU5BU5D_t4116647657* L_1 = ___a21;
		int32_t L_2 = Int32_CompareTo_m4284770383((&V_1), (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}

IL_0014:
	{
		V_2 = 0;
		goto IL_0031;
	}

IL_0018:
	{
		ByteU5BU5D_t4116647657* L_5 = ___a10;
		int32_t L_6 = V_2;
		ByteU5BU5D_t4116647657* L_7 = ___a21;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = Byte_CompareTo_m4207847027(((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6))), L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		int32_t L_12 = V_3;
		if (!L_12)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_13 = V_3;
		return L_13;
	}

IL_002d:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0031:
	{
		int32_t L_15 = V_2;
		ByteU5BU5D_t4116647657* L_16 = ___a10;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}
}
// System.String Newtonsoft.Json.Utilities.MiscellaneousUtils::GetPrefix(System.String)
extern "C"  String_t* MiscellaneousUtils_GetPrefix_m3254256809 (RuntimeObject * __this /* static, unused */, String_t* ___qualifiedName0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___qualifiedName0;
		MiscellaneousUtils_GetQualifiedNameParts_m3121517832(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Newtonsoft.Json.Utilities.MiscellaneousUtils::GetLocalName(System.String)
extern "C"  String_t* MiscellaneousUtils_GetLocalName_m3921824933 (RuntimeObject * __this /* static, unused */, String_t* ___qualifiedName0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___qualifiedName0;
		MiscellaneousUtils_GetQualifiedNameParts_m3121517832(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		String_t* L_1 = V_1;
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Utilities.MiscellaneousUtils::GetQualifiedNameParts(System.String,System.String&,System.String&)
extern "C"  void MiscellaneousUtils_GetQualifiedNameParts_m3121517832 (RuntimeObject * __this /* static, unused */, String_t* ___qualifiedName0, String_t** ___prefix1, String_t** ___localName2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___qualifiedName0;
		int32_t L_1 = String_IndexOf_m363431711(L_0, ((int32_t)58), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ___qualifiedName0;
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1))) == ((uint32_t)L_6))))
		{
			goto IL_0022;
		}
	}

IL_001b:
	{
		String_t** L_7 = ___prefix1;
		*((RuntimeObject **)(L_7)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_7), (RuntimeObject *)NULL);
		String_t** L_8 = ___localName2;
		String_t* L_9 = ___qualifiedName0;
		*((RuntimeObject **)(L_8)) = (RuntimeObject *)L_9;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_8), (RuntimeObject *)L_9);
		return;
	}

IL_0022:
	{
		String_t** L_10 = ___prefix1;
		String_t* L_11 = ___qualifiedName0;
		int32_t L_12 = V_0;
		String_t* L_13 = String_Substring_m1610150815(L_11, 0, L_12, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_10)) = (RuntimeObject *)L_13;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_10), (RuntimeObject *)L_13);
		String_t** L_14 = ___localName2;
		String_t* L_15 = ___qualifiedName0;
		int32_t L_16 = V_0;
		String_t* L_17 = String_Substring_m2848979100(L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
		*((RuntimeObject **)(L_14)) = (RuntimeObject *)L_17;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_14), (RuntimeObject *)L_17);
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.MiscellaneousUtils::FormatValueForPrint(System.Object)
extern "C"  String_t* MiscellaneousUtils_FormatValueForPrint_m2505289556 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MiscellaneousUtils_FormatValueForPrint_m2505289556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return _stringLiteral2395288344;
	}

IL_0009:
	{
		RuntimeObject * L_1 = ___value0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3452614526, L_2, _stringLiteral3452614526, /*hidden argument*/NULL);
		return L_3;
	}

IL_0022:
	{
		RuntimeObject * L_4 = ___value0;
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		return L_5;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.PropertyNameTable::.cctor()
extern "C"  void PropertyNameTable__cctor_m1564092424 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyNameTable__cctor_m1564092424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
		((PropertyNameTable_t4130830590_StaticFields*)il2cpp_codegen_static_fields_for(PropertyNameTable_t4130830590_il2cpp_TypeInfo_var))->set_HashCodeRandomizer_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.PropertyNameTable::.ctor()
extern "C"  void PropertyNameTable__ctor_m727499363 (PropertyNameTable_t4130830590 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyNameTable__ctor_m727499363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__mask_3(((int32_t)31));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get__mask_3();
		__this->set__entries_2(((EntryU5BU5D_t1995962374*)SZArrayNew(EntryU5BU5D_t1995962374_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)))));
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.PropertyNameTable::Get(System.Char[],System.Int32,System.Int32)
extern "C"  String_t* PropertyNameTable_Get_m1245220493 (PropertyNameTable_t4130830590 * __this, CharU5BU5D_t3528271667* ___key0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyNameTable_Get_m1245220493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Entry_t2924091039 * V_3 = NULL;
	{
		int32_t L_0 = ___length2;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_1;
	}

IL_0009:
	{
		int32_t L_2 = ___length2;
		IL2CPP_RUNTIME_CLASS_INIT(PropertyNameTable_t4130830590_il2cpp_TypeInfo_var);
		int32_t L_3 = ((PropertyNameTable_t4130830590_StaticFields*)il2cpp_codegen_static_fields_for(PropertyNameTable_t4130830590_il2cpp_TypeInfo_var))->get_HashCodeRandomizer_0();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3));
		int32_t L_4 = V_0;
		int32_t L_5 = V_0;
		CharU5BU5D_t3528271667* L_6 = ___key0;
		int32_t L_7 = ___start1;
		int32_t L_8 = L_7;
		uint16_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5<<(int32_t)7))^(int32_t)L_9))));
		int32_t L_10 = ___start1;
		int32_t L_11 = ___length2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11));
		int32_t L_12 = ___start1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		goto IL_0033;
	}

IL_0025:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		CharU5BU5D_t3528271667* L_15 = ___key0;
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		uint16_t L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_14<<(int32_t)7))^(int32_t)L_18))));
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_20 = V_2;
		int32_t L_21 = V_1;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_22 = V_0;
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)((int32_t)((int32_t)L_23>>(int32_t)((int32_t)17)))));
		int32_t L_24 = V_0;
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)((int32_t)((int32_t)L_25>>(int32_t)((int32_t)11)))));
		int32_t L_26 = V_0;
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)((int32_t)((int32_t)L_27>>(int32_t)5))));
		EntryU5BU5D_t1995962374* L_28 = __this->get__entries_2();
		int32_t L_29 = V_0;
		int32_t L_30 = __this->get__mask_3();
		int32_t L_31 = ((int32_t)((int32_t)L_29&(int32_t)L_30));
		Entry_t2924091039 * L_32 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = L_32;
		goto IL_0084;
	}

IL_005d:
	{
		Entry_t2924091039 * L_33 = V_3;
		int32_t L_34 = L_33->get_HashCode_1();
		int32_t L_35 = V_0;
		if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
		{
			goto IL_007d;
		}
	}
	{
		Entry_t2924091039 * L_36 = V_3;
		String_t* L_37 = L_36->get_Value_0();
		CharU5BU5D_t3528271667* L_38 = ___key0;
		int32_t L_39 = ___start1;
		int32_t L_40 = ___length2;
		IL2CPP_RUNTIME_CLASS_INIT(PropertyNameTable_t4130830590_il2cpp_TypeInfo_var);
		bool L_41 = PropertyNameTable_TextEquals_m2030128776(NULL /*static, unused*/, L_37, L_38, L_39, L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_007d;
		}
	}
	{
		Entry_t2924091039 * L_42 = V_3;
		String_t* L_43 = L_42->get_Value_0();
		return L_43;
	}

IL_007d:
	{
		Entry_t2924091039 * L_44 = V_3;
		Entry_t2924091039 * L_45 = L_44->get_Next_2();
		V_3 = L_45;
	}

IL_0084:
	{
		Entry_t2924091039 * L_46 = V_3;
		if (L_46)
		{
			goto IL_005d;
		}
	}
	{
		return (String_t*)NULL;
	}
}
// System.String Newtonsoft.Json.Utilities.PropertyNameTable::Add(System.String)
extern "C"  String_t* PropertyNameTable_Add_m2811283804 (PropertyNameTable_t4130830590 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyNameTable_Add_m2811283804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Entry_t2924091039 * V_3 = NULL;
	{
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2600271970, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,PropertyNameTable_Add_m2811283804_RuntimeMethod_var);
	}

IL_000e:
	{
		String_t* L_2 = ___key0;
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PropertyNameTable_t4130830590_il2cpp_TypeInfo_var);
		int32_t L_7 = ((PropertyNameTable_t4130830590_StaticFields*)il2cpp_codegen_static_fields_for(PropertyNameTable_t4130830590_il2cpp_TypeInfo_var))->get_HashCodeRandomizer_0();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7));
		V_2 = 0;
		goto IL_003c;
	}

IL_002a:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_1;
		String_t* L_10 = ___key0;
		int32_t L_11 = V_2;
		Il2CppChar L_12 = String_get_Chars_m2986988803(L_10, L_11, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9<<(int32_t)7))^(int32_t)L_12))));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_14 = V_2;
		String_t* L_15 = ___key0;
		int32_t L_16 = String_get_Length_m3847582255(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)((int32_t)((int32_t)L_18>>(int32_t)((int32_t)17)))));
		int32_t L_19 = V_1;
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)((int32_t)((int32_t)L_20>>(int32_t)((int32_t)11)))));
		int32_t L_21 = V_1;
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)((int32_t)((int32_t)L_22>>(int32_t)5))));
		EntryU5BU5D_t1995962374* L_23 = __this->get__entries_2();
		int32_t L_24 = V_1;
		int32_t L_25 = __this->get__mask_3();
		int32_t L_26 = ((int32_t)((int32_t)L_24&(int32_t)L_25));
		Entry_t2924091039 * L_27 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		V_3 = L_27;
		goto IL_0090;
	}

IL_006b:
	{
		Entry_t2924091039 * L_28 = V_3;
		int32_t L_29 = L_28->get_HashCode_1();
		int32_t L_30 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0089;
		}
	}
	{
		Entry_t2924091039 * L_31 = V_3;
		String_t* L_32 = L_31->get_Value_0();
		String_t* L_33 = ___key0;
		bool L_34 = String_Equals_m2270643605(L_32, L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0089;
		}
	}
	{
		Entry_t2924091039 * L_35 = V_3;
		String_t* L_36 = L_35->get_Value_0();
		return L_36;
	}

IL_0089:
	{
		Entry_t2924091039 * L_37 = V_3;
		Entry_t2924091039 * L_38 = L_37->get_Next_2();
		V_3 = L_38;
	}

IL_0090:
	{
		Entry_t2924091039 * L_39 = V_3;
		if (L_39)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_40 = ___key0;
		int32_t L_41 = V_1;
		String_t* L_42 = PropertyNameTable_AddEntry_m2687197476(__this, L_40, L_41, /*hidden argument*/NULL);
		return L_42;
	}
}
// System.String Newtonsoft.Json.Utilities.PropertyNameTable::AddEntry(System.String,System.Int32)
extern "C"  String_t* PropertyNameTable_AddEntry_m2687197476 (PropertyNameTable_t4130830590 * __this, String_t* ___str0, int32_t ___hashCode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyNameTable_AddEntry_m2687197476_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Entry_t2924091039 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___hashCode1;
		int32_t L_1 = __this->get__mask_3();
		V_0 = ((int32_t)((int32_t)L_0&(int32_t)L_1));
		String_t* L_2 = ___str0;
		int32_t L_3 = ___hashCode1;
		EntryU5BU5D_t1995962374* L_4 = __this->get__entries_2();
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		Entry_t2924091039 * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Entry_t2924091039 * L_8 = (Entry_t2924091039 *)il2cpp_codegen_object_new(Entry_t2924091039_il2cpp_TypeInfo_var);
		Entry__ctor_m1495177254(L_8, L_2, L_3, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		EntryU5BU5D_t1995962374* L_9 = __this->get__entries_2();
		int32_t L_10 = V_0;
		Entry_t2924091039 * L_11 = V_1;
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (Entry_t2924091039 *)L_11);
		int32_t L_12 = __this->get__count_1();
		V_2 = L_12;
		int32_t L_13 = V_2;
		__this->set__count_1(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		int32_t L_14 = V_2;
		int32_t L_15 = __this->get__mask_3();
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0041;
		}
	}
	{
		PropertyNameTable_Grow_m2160967313(__this, /*hidden argument*/NULL);
	}

IL_0041:
	{
		Entry_t2924091039 * L_16 = V_1;
		String_t* L_17 = L_16->get_Value_0();
		return L_17;
	}
}
// System.Void Newtonsoft.Json.Utilities.PropertyNameTable::Grow()
extern "C"  void PropertyNameTable_Grow_m2160967313 (PropertyNameTable_t4130830590 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyNameTable_Grow_m2160967313_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EntryU5BU5D_t1995962374* V_0 = NULL;
	int32_t V_1 = 0;
	EntryU5BU5D_t1995962374* V_2 = NULL;
	int32_t V_3 = 0;
	Entry_t2924091039 * V_4 = NULL;
	Entry_t2924091039 * V_5 = NULL;
	int32_t V_6 = 0;
	{
		EntryU5BU5D_t1995962374* L_0 = __this->get__entries_2();
		V_0 = L_0;
		int32_t L_1 = __this->get__mask_3();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2)), (int32_t)1));
		int32_t L_2 = V_1;
		V_2 = ((EntryU5BU5D_t1995962374*)SZArrayNew(EntryU5BU5D_t1995962374_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))));
		V_3 = 0;
		goto IL_0057;
	}

IL_001f:
	{
		EntryU5BU5D_t1995962374* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		Entry_t2924091039 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_5 = L_6;
		goto IL_004f;
	}

IL_0026:
	{
		Entry_t2924091039 * L_7 = V_5;
		int32_t L_8 = L_7->get_HashCode_1();
		int32_t L_9 = V_1;
		V_6 = ((int32_t)((int32_t)L_8&(int32_t)L_9));
		Entry_t2924091039 * L_10 = V_5;
		Entry_t2924091039 * L_11 = L_10->get_Next_2();
		V_4 = L_11;
		Entry_t2924091039 * L_12 = V_5;
		EntryU5BU5D_t1995962374* L_13 = V_2;
		int32_t L_14 = V_6;
		int32_t L_15 = L_14;
		Entry_t2924091039 * L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		L_12->set_Next_2(L_16);
		EntryU5BU5D_t1995962374* L_17 = V_2;
		int32_t L_18 = V_6;
		Entry_t2924091039 * L_19 = V_5;
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18), (Entry_t2924091039 *)L_19);
		Entry_t2924091039 * L_20 = V_4;
		V_5 = L_20;
	}

IL_004f:
	{
		Entry_t2924091039 * L_21 = V_5;
		if (L_21)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_23 = V_3;
		EntryU5BU5D_t1995962374* L_24 = V_0;
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		EntryU5BU5D_t1995962374* L_25 = V_2;
		__this->set__entries_2(L_25);
		int32_t L_26 = V_1;
		__this->set__mask_3(L_26);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.PropertyNameTable::TextEquals(System.String,System.Char[],System.Int32,System.Int32)
extern "C"  bool PropertyNameTable_TextEquals_m2030128776 (RuntimeObject * __this /* static, unused */, String_t* ___str10, CharU5BU5D_t3528271667* ___str21, int32_t ___str2Start2, int32_t ___str2Length3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___str10;
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___str2Length3;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		V_0 = 0;
		goto IL_0023;
	}

IL_000f:
	{
		String_t* L_3 = ___str10;
		int32_t L_4 = V_0;
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_3, L_4, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_6 = ___str21;
		int32_t L_7 = ___str2Start2;
		int32_t L_8 = V_0;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8));
		uint16_t L_10 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		if ((((int32_t)L_5) == ((int32_t)L_10)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_12 = V_0;
		String_t* L_13 = ___str10;
		int32_t L_14 = String_get_Length_m3847582255(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000f;
		}
	}
	{
		return (bool)1;
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
// System.Void Newtonsoft.Json.Utilities.PropertyNameTable/Entry::.ctor(System.String,System.Int32,Newtonsoft.Json.Utilities.PropertyNameTable/Entry)
extern "C"  void Entry__ctor_m1495177254 (Entry_t2924091039 * __this, String_t* ___value0, int32_t ___hashCode1, Entry_t2924091039 * ___next2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		__this->set_Value_0(L_0);
		int32_t L_1 = ___hashCode1;
		__this->set_HashCode_1(L_1);
		Entry_t2924091039 * L_2 = ___next2;
		__this->set_Next_2(L_2);
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
// System.Void Newtonsoft.Json.Utilities.ReflectionDelegateFactory::.ctor()
extern "C"  void ReflectionDelegateFactory__ctor_m3277517333 (ReflectionDelegateFactory_t2528576452 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Type Newtonsoft.Json.Utilities.ReflectionMember::get_MemberType()
extern "C"  Type_t * ReflectionMember_get_MemberType_m1759785445 (ReflectionMember_t2655407482 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CMemberTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionMember::set_MemberType(System.Type)
extern "C"  void ReflectionMember_set_MemberType_m3957217921 (ReflectionMember_t2655407482 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CMemberTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Func`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionMember::get_Getter()
extern "C"  Func_2_t2447130374 * ReflectionMember_get_Getter_m2488656156 (ReflectionMember_t2655407482 * __this, const RuntimeMethod* method)
{
	{
		Func_2_t2447130374 * L_0 = __this->get_U3CGetterU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionMember::set_Getter(System.Func`2<System.Object,System.Object>)
extern "C"  void ReflectionMember_set_Getter_m3541426260 (ReflectionMember_t2655407482 * __this, Func_2_t2447130374 * ___value0, const RuntimeMethod* method)
{
	{
		Func_2_t2447130374 * L_0 = ___value0;
		__this->set_U3CGetterU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionMember::set_Setter(System.Action`2<System.Object,System.Object>)
extern "C"  void ReflectionMember_set_Setter_m1832329444 (ReflectionMember_t2655407482 * __this, Action_2_t2470008838 * ___value0, const RuntimeMethod* method)
{
	{
		Action_2_t2470008838 * L_0 = ___value0;
		__this->set_U3CSetterU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionMember::.ctor()
extern "C"  void ReflectionMember__ctor_m2612443734 (ReflectionMember_t2655407482 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Utilities.ReflectionObject::get_Creator()
extern "C"  ObjectConstructor_1_t3207922868 * ReflectionObject_get_Creator_m2665801294 (ReflectionObject_t701100009 * __this, const RuntimeMethod* method)
{
	{
		ObjectConstructor_1_t3207922868 * L_0 = __this->get_U3CCreatorU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionObject::set_Creator(Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>)
extern "C"  void ReflectionObject_set_Creator_m3308348627 (ReflectionObject_t701100009 * __this, ObjectConstructor_1_t3207922868 * ___value0, const RuntimeMethod* method)
{
	{
		ObjectConstructor_1_t3207922868 * L_0 = ___value0;
		__this->set_U3CCreatorU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember> Newtonsoft.Json.Utilities.ReflectionObject::get_Members()
extern "C"  RuntimeObject* ReflectionObject_get_Members_m1237437266 (ReflectionObject_t701100009 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CMembersU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionObject::set_Members(System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>)
extern "C"  void ReflectionObject_set_Members_m1728563473 (ReflectionObject_t701100009 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CMembersU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionObject::.ctor()
extern "C"  void ReflectionObject__ctor_m1062647964 (ReflectionObject_t701100009 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionObject__ctor_m1062647964_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Dictionary_2_t2440663781 * L_0 = (Dictionary_2_t2440663781 *)il2cpp_codegen_object_new(Dictionary_2_t2440663781_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2127759587(L_0, /*hidden argument*/Dictionary_2__ctor_m2127759587_RuntimeMethod_var);
		ReflectionObject_set_Members_m1728563473(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionObject::GetValue(System.Object,System.String)
extern "C"  RuntimeObject * ReflectionObject_GetValue_m2531865869 (ReflectionObject_t701100009 * __this, RuntimeObject * ___target0, String_t* ___member1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionObject_GetValue_m2531865869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ReflectionObject_get_Members_m1237437266(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___member1;
		ReflectionMember_t2655407482 * L_2 = InterfaceFuncInvoker1< ReflectionMember_t2655407482 *, String_t* >::Invoke(4 /* !1 System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>::get_Item(!0) */, IDictionary_2_t904515172_il2cpp_TypeInfo_var, L_0, L_1);
		Func_2_t2447130374 * L_3 = ReflectionMember_get_Getter_m2488656156(L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		RuntimeObject * L_5 = Func_2_Invoke_m3285901618(L_3, L_4, /*hidden argument*/Func_2_Invoke_m3285901618_RuntimeMethod_var);
		return L_5;
	}
}
// System.Type Newtonsoft.Json.Utilities.ReflectionObject::GetType(System.String)
extern "C"  Type_t * ReflectionObject_GetType_m2200262811 (ReflectionObject_t701100009 * __this, String_t* ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionObject_GetType_m2200262811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ReflectionObject_get_Members_m1237437266(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___member0;
		ReflectionMember_t2655407482 * L_2 = InterfaceFuncInvoker1< ReflectionMember_t2655407482 *, String_t* >::Invoke(4 /* !1 System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>::get_Item(!0) */, IDictionary_2_t904515172_il2cpp_TypeInfo_var, L_0, L_1);
		Type_t * L_3 = ReflectionMember_get_MemberType_m1759785445(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Newtonsoft.Json.Utilities.ReflectionObject Newtonsoft.Json.Utilities.ReflectionObject::Create(System.Type,System.String[])
extern "C"  ReflectionObject_t701100009 * ReflectionObject_Create_m720835830 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, StringU5BU5D_t1281789340* ___memberNames1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___t0;
		StringU5BU5D_t1281789340* L_1 = ___memberNames1;
		ReflectionObject_t701100009 * L_2 = ReflectionObject_Create_m73781573(NULL /*static, unused*/, L_0, (MethodBase_t *)NULL, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Newtonsoft.Json.Utilities.ReflectionObject Newtonsoft.Json.Utilities.ReflectionObject::Create(System.Type,System.Reflection.MethodBase,System.String[])
extern "C"  ReflectionObject_t701100009 * ReflectionObject_Create_m73781573 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, MethodBase_t * ___creator1, StringU5BU5D_t1281789340* ___memberNames2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionObject_Create_m73781573_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ReflectionObject_t701100009 * V_0 = NULL;
	ReflectionDelegateFactory_t2528576452 * V_1 = NULL;
	U3CU3Ec__DisplayClass13_0_t4294006577 * V_2 = NULL;
	StringU5BU5D_t1281789340* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	MemberInfo_t * V_6 = NULL;
	ReflectionMember_t2655407482 * V_7 = NULL;
	int32_t V_8 = 0;
	MethodInfo_t * V_9 = NULL;
	ParameterInfoU5BU5D_t390618515* V_10 = NULL;
	U3CU3Ec__DisplayClass13_1_t1955354417 * V_11 = NULL;
	U3CU3Ec__DisplayClass13_2_t381376305 * V_12 = NULL;
	MemberInfoU5BU5D_t1302094432* G_B7_0 = NULL;
	MemberInfoU5BU5D_t1302094432* G_B6_0 = NULL;
	{
		ReflectionObject_t701100009 * L_0 = (ReflectionObject_t701100009 *)il2cpp_codegen_object_new(ReflectionObject_t701100009_il2cpp_TypeInfo_var);
		ReflectionObject__ctor_m1062647964(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonTypeReflector_t526591219_il2cpp_TypeInfo_var);
		ReflectionDelegateFactory_t2528576452 * L_1 = JsonTypeReflector_get_ReflectionDelegateFactory_m2937328847(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		MethodBase_t * L_2 = ___creator1;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		ReflectionObject_t701100009 * L_3 = V_0;
		ReflectionDelegateFactory_t2528576452 * L_4 = V_1;
		MethodBase_t * L_5 = ___creator1;
		ObjectConstructor_1_t3207922868 * L_6 = VirtFuncInvoker1< ObjectConstructor_1_t3207922868 *, MethodBase_t * >::Invoke(5 /* Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateParameterizedConstructor(System.Reflection.MethodBase) */, L_4, L_5);
		ReflectionObject_set_Creator_m3308348627(L_3, L_6, /*hidden argument*/NULL);
		goto IL_004c;
	}

IL_001e:
	{
		Type_t * L_7 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_8 = ReflectionUtils_HasDefaultConstructor_m3011828166(NULL /*static, unused*/, L_7, (bool)0, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		U3CU3Ec__DisplayClass13_0_t4294006577 * L_9 = (U3CU3Ec__DisplayClass13_0_t4294006577 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t4294006577_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass13_0__ctor_m2896337997(L_9, /*hidden argument*/NULL);
		V_2 = L_9;
		U3CU3Ec__DisplayClass13_0_t4294006577 * L_10 = V_2;
		ReflectionDelegateFactory_t2528576452 * L_11 = V_1;
		Type_t * L_12 = ___t0;
		Func_1_t2509852811 * L_13 = GenericVirtFuncInvoker1< Func_1_t2509852811 *, Type_t * >::Invoke(ReflectionDelegateFactory_CreateDefaultConstructor_TisRuntimeObject_m1416164154_RuntimeMethod_var, L_11, L_12);
		L_10->set_ctor_0(L_13);
		ReflectionObject_t701100009 * L_14 = V_0;
		U3CU3Ec__DisplayClass13_0_t4294006577 * L_15 = V_2;
		intptr_t L_16 = (intptr_t)U3CU3Ec__DisplayClass13_0_U3CCreateU3Eb__0_m376730355_RuntimeMethod_var;
		ObjectConstructor_1_t3207922868 * L_17 = (ObjectConstructor_1_t3207922868 *)il2cpp_codegen_object_new(ObjectConstructor_1_t3207922868_il2cpp_TypeInfo_var);
		ObjectConstructor_1__ctor_m1181679199(L_17, L_15, L_16, /*hidden argument*/ObjectConstructor_1__ctor_m1181679199_RuntimeMethod_var);
		ReflectionObject_set_Creator_m3308348627(L_14, L_17, /*hidden argument*/NULL);
	}

IL_004c:
	{
		StringU5BU5D_t1281789340* L_18 = ___memberNames2;
		V_3 = L_18;
		V_4 = 0;
		goto IL_020e;
	}

IL_0056:
	{
		StringU5BU5D_t1281789340* L_19 = V_3;
		int32_t L_20 = V_4;
		int32_t L_21 = L_20;
		String_t* L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		Type_t * L_23 = ___t0;
		String_t* L_24 = V_5;
		MemberInfoU5BU5D_t1302094432* L_25 = VirtFuncInvoker2< MemberInfoU5BU5D_t1302094432*, String_t*, int32_t >::Invoke(51 /* System.Reflection.MemberInfo[] System.Type::GetMember(System.String,System.Reflection.BindingFlags) */, L_23, L_24, ((int32_t)20));
		MemberInfoU5BU5D_t1302094432* L_26 = L_25;
		G_B6_0 = L_26;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length))))) == ((int32_t)1)))
		{
			G_B7_0 = L_26;
			goto IL_0083;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_27 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_28 = V_5;
		String_t* L_29 = StringUtils_FormatWith_m3056805521(NULL /*static, unused*/, _stringLiteral2233631454, L_27, L_28, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_30 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_30, L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30,ReflectionObject_Create_m73781573_RuntimeMethod_var);
	}

IL_0083:
	{
		MemberInfo_t * L_31 = Enumerable_Single_TisMemberInfo_t_m851241132(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B7_0, /*hidden argument*/Enumerable_Single_TisMemberInfo_t_m851241132_RuntimeMethod_var);
		V_6 = L_31;
		ReflectionMember_t2655407482 * L_32 = (ReflectionMember_t2655407482 *)il2cpp_codegen_object_new(ReflectionMember_t2655407482_il2cpp_TypeInfo_var);
		ReflectionMember__ctor_m2612443734(L_32, /*hidden argument*/NULL);
		V_7 = L_32;
		MemberInfo_t * L_33 = V_6;
		int32_t L_34 = TypeExtensions_MemberType_m2286386365(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		V_8 = L_34;
		int32_t L_35 = V_8;
		if ((((int32_t)L_35) == ((int32_t)4)))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_36 = V_8;
		if ((((int32_t)L_36) == ((int32_t)8)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_37 = V_8;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0190;
		}
	}

IL_00ad:
	{
		MemberInfo_t * L_38 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_39 = ReflectionUtils_CanReadMemberValue_m1473164796(NULL /*static, unused*/, L_38, (bool)0, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_00c6;
		}
	}
	{
		ReflectionMember_t2655407482 * L_40 = V_7;
		ReflectionDelegateFactory_t2528576452 * L_41 = V_1;
		MemberInfo_t * L_42 = V_6;
		Func_2_t2447130374 * L_43 = ReflectionDelegateFactory_CreateGet_TisRuntimeObject_m2506523516(L_41, L_42, /*hidden argument*/ReflectionDelegateFactory_CreateGet_TisRuntimeObject_m2506523516_RuntimeMethod_var);
		ReflectionMember_set_Getter_m3541426260(L_40, L_43, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		MemberInfo_t * L_44 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_45 = ReflectionUtils_CanSetMemberValue_m1263216356(NULL /*static, unused*/, L_44, (bool)0, (bool)0, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_01b8;
		}
	}
	{
		ReflectionMember_t2655407482 * L_46 = V_7;
		ReflectionDelegateFactory_t2528576452 * L_47 = V_1;
		MemberInfo_t * L_48 = V_6;
		Action_2_t2470008838 * L_49 = ReflectionDelegateFactory_CreateSet_TisRuntimeObject_m2440090338(L_47, L_48, /*hidden argument*/ReflectionDelegateFactory_CreateSet_TisRuntimeObject_m2440090338_RuntimeMethod_var);
		ReflectionMember_set_Setter_m1832329444(L_46, L_49, /*hidden argument*/NULL);
		goto IL_01b8;
	}

IL_00e8:
	{
		MemberInfo_t * L_50 = V_6;
		V_9 = ((MethodInfo_t *)CastclassClass((RuntimeObject*)L_50, MethodInfo_t_il2cpp_TypeInfo_var));
		MethodInfo_t * L_51 = V_9;
		bool L_52 = MethodBase_get_IsPublic_m2180846589(L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_01b8;
		}
	}
	{
		MethodInfo_t * L_53 = V_9;
		ParameterInfoU5BU5D_t390618515* L_54 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_53);
		V_10 = L_54;
		ParameterInfoU5BU5D_t390618515* L_55 = V_10;
		if ((((RuntimeArray *)L_55)->max_length))
		{
			goto IL_014a;
		}
	}
	{
		MethodInfo_t * L_56 = V_9;
		Type_t * L_57 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_56);
		RuntimeTypeHandle_t3027515415  L_58 = { reinterpret_cast<intptr_t> (Void_t1185182177_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_59 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_58, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_57) == ((RuntimeObject*)(Type_t *)L_59)))
		{
			goto IL_014a;
		}
	}
	{
		U3CU3Ec__DisplayClass13_1_t1955354417 * L_60 = (U3CU3Ec__DisplayClass13_1_t1955354417 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_1_t1955354417_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass13_1__ctor_m3019742285(L_60, /*hidden argument*/NULL);
		V_11 = L_60;
		U3CU3Ec__DisplayClass13_1_t1955354417 * L_61 = V_11;
		ReflectionDelegateFactory_t2528576452 * L_62 = V_1;
		MethodInfo_t * L_63 = V_9;
		MethodCall_2_t2845904993 * L_64 = GenericVirtFuncInvoker1< MethodCall_2_t2845904993 *, MethodBase_t * >::Invoke(ReflectionDelegateFactory_CreateMethodCall_TisRuntimeObject_m2397225021_RuntimeMethod_var, L_62, L_63);
		L_61->set_call_0(L_64);
		ReflectionMember_t2655407482 * L_65 = V_7;
		U3CU3Ec__DisplayClass13_1_t1955354417 * L_66 = V_11;
		intptr_t L_67 = (intptr_t)U3CU3Ec__DisplayClass13_1_U3CCreateU3Eb__1_m2235834647_RuntimeMethod_var;
		Func_2_t2447130374 * L_68 = (Func_2_t2447130374 *)il2cpp_codegen_object_new(Func_2_t2447130374_il2cpp_TypeInfo_var);
		Func_2__ctor_m406556452(L_68, L_66, L_67, /*hidden argument*/Func_2__ctor_m406556452_RuntimeMethod_var);
		ReflectionMember_set_Getter_m3541426260(L_65, L_68, /*hidden argument*/NULL);
		goto IL_01b8;
	}

IL_014a:
	{
		ParameterInfoU5BU5D_t390618515* L_69 = V_10;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_69)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_01b8;
		}
	}
	{
		MethodInfo_t * L_70 = V_9;
		Type_t * L_71 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_70);
		RuntimeTypeHandle_t3027515415  L_72 = { reinterpret_cast<intptr_t> (Void_t1185182177_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_73 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_71) == ((RuntimeObject*)(Type_t *)L_73))))
		{
			goto IL_01b8;
		}
	}
	{
		U3CU3Ec__DisplayClass13_2_t381376305 * L_74 = (U3CU3Ec__DisplayClass13_2_t381376305 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_2_t381376305_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass13_2__ctor_m1329372237(L_74, /*hidden argument*/NULL);
		V_12 = L_74;
		U3CU3Ec__DisplayClass13_2_t381376305 * L_75 = V_12;
		ReflectionDelegateFactory_t2528576452 * L_76 = V_1;
		MethodInfo_t * L_77 = V_9;
		MethodCall_2_t2845904993 * L_78 = GenericVirtFuncInvoker1< MethodCall_2_t2845904993 *, MethodBase_t * >::Invoke(ReflectionDelegateFactory_CreateMethodCall_TisRuntimeObject_m2397225021_RuntimeMethod_var, L_76, L_77);
		L_75->set_call_0(L_78);
		ReflectionMember_t2655407482 * L_79 = V_7;
		U3CU3Ec__DisplayClass13_2_t381376305 * L_80 = V_12;
		intptr_t L_81 = (intptr_t)U3CU3Ec__DisplayClass13_2_U3CCreateU3Eb__2_m2723401855_RuntimeMethod_var;
		Action_2_t2470008838 * L_82 = (Action_2_t2470008838 *)il2cpp_codegen_object_new(Action_2_t2470008838_il2cpp_TypeInfo_var);
		Action_2__ctor_m1578862614(L_82, L_80, L_81, /*hidden argument*/Action_2__ctor_m1578862614_RuntimeMethod_var);
		ReflectionMember_set_Setter_m1832329444(L_79, L_82, /*hidden argument*/NULL);
		goto IL_01b8;
	}

IL_0190:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_83 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		MemberInfo_t * L_84 = V_6;
		int32_t L_85 = TypeExtensions_MemberType_m2286386365(NULL /*static, unused*/, L_84, /*hidden argument*/NULL);
		int32_t L_86 = L_85;
		RuntimeObject * L_87 = Box(MemberTypes_t3790569052_il2cpp_TypeInfo_var, &L_86);
		MemberInfo_t * L_88 = V_6;
		String_t* L_89 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_88);
		String_t* L_90 = StringUtils_FormatWith_m353537829(NULL /*static, unused*/, _stringLiteral3336955582, L_83, L_87, L_89, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_91 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_91, L_90, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_91,ReflectionObject_Create_m73781573_RuntimeMethod_var);
	}

IL_01b8:
	{
		MemberInfo_t * L_92 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_93 = ReflectionUtils_CanReadMemberValue_m1473164796(NULL /*static, unused*/, L_92, (bool)0, /*hidden argument*/NULL);
		if (!L_93)
		{
			goto IL_01d1;
		}
	}
	{
		ReflectionMember_t2655407482 * L_94 = V_7;
		ReflectionDelegateFactory_t2528576452 * L_95 = V_1;
		MemberInfo_t * L_96 = V_6;
		Func_2_t2447130374 * L_97 = ReflectionDelegateFactory_CreateGet_TisRuntimeObject_m2506523516(L_95, L_96, /*hidden argument*/ReflectionDelegateFactory_CreateGet_TisRuntimeObject_m2506523516_RuntimeMethod_var);
		ReflectionMember_set_Getter_m3541426260(L_94, L_97, /*hidden argument*/NULL);
	}

IL_01d1:
	{
		MemberInfo_t * L_98 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_99 = ReflectionUtils_CanSetMemberValue_m1263216356(NULL /*static, unused*/, L_98, (bool)0, (bool)0, /*hidden argument*/NULL);
		if (!L_99)
		{
			goto IL_01eb;
		}
	}
	{
		ReflectionMember_t2655407482 * L_100 = V_7;
		ReflectionDelegateFactory_t2528576452 * L_101 = V_1;
		MemberInfo_t * L_102 = V_6;
		Action_2_t2470008838 * L_103 = ReflectionDelegateFactory_CreateSet_TisRuntimeObject_m2440090338(L_101, L_102, /*hidden argument*/ReflectionDelegateFactory_CreateSet_TisRuntimeObject_m2440090338_RuntimeMethod_var);
		ReflectionMember_set_Setter_m1832329444(L_100, L_103, /*hidden argument*/NULL);
	}

IL_01eb:
	{
		ReflectionMember_t2655407482 * L_104 = V_7;
		MemberInfo_t * L_105 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		Type_t * L_106 = ReflectionUtils_GetMemberUnderlyingType_m841662456(NULL /*static, unused*/, L_105, /*hidden argument*/NULL);
		ReflectionMember_set_MemberType_m3957217921(L_104, L_106, /*hidden argument*/NULL);
		ReflectionObject_t701100009 * L_107 = V_0;
		RuntimeObject* L_108 = ReflectionObject_get_Members_m1237437266(L_107, /*hidden argument*/NULL);
		String_t* L_109 = V_5;
		ReflectionMember_t2655407482 * L_110 = V_7;
		InterfaceActionInvoker2< String_t*, ReflectionMember_t2655407482 * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>::set_Item(!0,!1) */, IDictionary_2_t904515172_il2cpp_TypeInfo_var, L_108, L_109, L_110);
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)1));
	}

IL_020e:
	{
		int32_t L_112 = V_4;
		StringU5BU5D_t1281789340* L_113 = V_3;
		if ((((int32_t)L_112) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_113)->max_length)))))))
		{
			goto IL_0056;
		}
	}
	{
		ReflectionObject_t701100009 * L_114 = V_0;
		return L_114;
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
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass13_0__ctor_m2896337997 (U3CU3Ec__DisplayClass13_0_t4294006577 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0::<Create>b__0(System.Object[])
extern "C"  RuntimeObject * U3CU3Ec__DisplayClass13_0_U3CCreateU3Eb__0_m376730355 (U3CU3Ec__DisplayClass13_0_t4294006577 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass13_0_U3CCreateU3Eb__0_m376730355_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t2509852811 * L_0 = __this->get_ctor_0();
		RuntimeObject * L_1 = Func_1_Invoke_m348272648(L_0, /*hidden argument*/Func_1_Invoke_m348272648_RuntimeMethod_var);
		return L_1;
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
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1::.ctor()
extern "C"  void U3CU3Ec__DisplayClass13_1__ctor_m3019742285 (U3CU3Ec__DisplayClass13_1_t1955354417 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1::<Create>b__1(System.Object)
extern "C"  RuntimeObject * U3CU3Ec__DisplayClass13_1_U3CCreateU3Eb__1_m2235834647 (U3CU3Ec__DisplayClass13_1_t1955354417 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass13_1_U3CCreateU3Eb__1_m2235834647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t2845904993 * L_0 = __this->get_call_0();
		RuntimeObject * L_1 = ___target0;
		RuntimeObject * L_2 = MethodCall_2_Invoke_m386137395(L_0, L_1, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/MethodCall_2_Invoke_m386137395_RuntimeMethod_var);
		return L_2;
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
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2::.ctor()
extern "C"  void U3CU3Ec__DisplayClass13_2__ctor_m1329372237 (U3CU3Ec__DisplayClass13_2_t381376305 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2::<Create>b__2(System.Object,System.Object)
extern "C"  void U3CU3Ec__DisplayClass13_2_U3CCreateU3Eb__2_m2723401855 (U3CU3Ec__DisplayClass13_2_t381376305 * __this, RuntimeObject * ___target0, RuntimeObject * ___arg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass13_2_U3CCreateU3Eb__2_m2723401855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t2845904993 * L_0 = __this->get_call_0();
		RuntimeObject * L_1 = ___target0;
		ObjectU5BU5D_t2843939325* L_2 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject * L_3 = ___arg1;
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		MethodCall_2_Invoke_m386137395(L_0, L_1, L_2, /*hidden argument*/MethodCall_2_Invoke_m386137395_RuntimeMethod_var);
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
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::.cctor()
extern "C"  void ReflectionUtils__cctor_m1077063625 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils__cctor_m1077063625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t3940880105* L_0 = ((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->get_EmptyTypes_3();
		((ReflectionUtils_t2669115404_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var))->set_EmptyTypes_0(L_0);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsVirtual(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsVirtual_m3338583030 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_IsVirtual_m3338583030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		PropertyInfo_t * L_0 = ___propertyInfo0;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_0, _stringLiteral2854063445, /*hidden argument*/NULL);
		PropertyInfo_t * L_1 = ___propertyInfo0;
		MethodInfo_t * L_2 = PropertyInfo_GetGetMethod_m1510309854(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		MethodInfo_t * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		MethodInfo_t * L_4 = V_0;
		bool L_5 = MethodBase_get_IsVirtual_m2008546636(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		return (bool)1;
	}

IL_001f:
	{
		PropertyInfo_t * L_6 = ___propertyInfo0;
		MethodInfo_t * L_7 = PropertyInfo_GetSetMethod_m66158558(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		MethodInfo_t * L_8 = V_0;
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		MethodInfo_t * L_9 = V_0;
		bool L_10 = MethodBase_get_IsVirtual_m2008546636(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		return (bool)1;
	}

IL_0033:
	{
		return (bool)0;
	}
}
// System.Reflection.MethodInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetBaseDefinition(System.Reflection.PropertyInfo)
extern "C"  MethodInfo_t * ReflectionUtils_GetBaseDefinition_m628546257 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetBaseDefinition_m628546257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		PropertyInfo_t * L_0 = ___propertyInfo0;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_0, _stringLiteral2854063445, /*hidden argument*/NULL);
		PropertyInfo_t * L_1 = ___propertyInfo0;
		MethodInfo_t * L_2 = PropertyInfo_GetGetMethod_m1510309854(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		MethodInfo_t * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		MethodInfo_t * L_4 = V_0;
		MethodInfo_t * L_5 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(31 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition() */, L_4);
		return L_5;
	}

IL_001c:
	{
		PropertyInfo_t * L_6 = ___propertyInfo0;
		MethodInfo_t * L_7 = PropertyInfo_GetSetMethod_m66158558(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		MethodInfo_t * L_8 = V_0;
		if (!L_8)
		{
			goto IL_002d;
		}
	}
	{
		MethodInfo_t * L_9 = V_0;
		MethodInfo_t * L_10 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(31 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition() */, L_9);
		return L_10;
	}

IL_002d:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsPublic(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsPublic_m3896229770 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___property0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = ___property0;
		MethodInfo_t * L_1 = PropertyInfo_GetGetMethod_m1510309854(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		PropertyInfo_t * L_2 = ___property0;
		MethodInfo_t * L_3 = PropertyInfo_GetGetMethod_m1510309854(L_2, /*hidden argument*/NULL);
		bool L_4 = MethodBase_get_IsPublic_m2180846589(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)1;
	}

IL_0017:
	{
		PropertyInfo_t * L_5 = ___property0;
		MethodInfo_t * L_6 = PropertyInfo_GetSetMethod_m66158558(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		PropertyInfo_t * L_7 = ___property0;
		MethodInfo_t * L_8 = PropertyInfo_GetSetMethod_m66158558(L_7, /*hidden argument*/NULL);
		bool L_9 = MethodBase_get_IsPublic_m2180846589(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return (bool)1;
	}

IL_002e:
	{
		return (bool)0;
	}
}
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetObjectType(System.Object)
extern "C"  Type_t * ReflectionUtils_GetObjectType_m3621750212 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___v0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___v0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (Type_t *)NULL;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___v0;
		Type_t * L_2 = Object_GetType_m88164663(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::GetTypeName(System.Type,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.SerializationBinder)
extern "C"  String_t* ReflectionUtils_GetTypeName_m1666562427 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, int32_t ___assemblyFormat1, SerializationBinder_t274213469 * ___binder2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetTypeName_m1666562427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Type_t * L_0 = ___t0;
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		V_0 = L_1;
		int32_t L_2 = ___assemblyFormat1;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_3 = ___assemblyFormat1;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0019;
	}

IL_0010:
	{
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		String_t* L_5 = ReflectionUtils_RemoveAssemblyDetails_m3671180266(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0017:
	{
		String_t* L_6 = V_0;
		return L_6;
	}

IL_0019:
	{
		ArgumentOutOfRangeException_t777629997 * L_7 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2047740448(L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7,ReflectionUtils_GetTypeName_m1666562427_RuntimeMethod_var);
	}
}
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::RemoveAssemblyDetails(System.String)
extern "C"  String_t* ReflectionUtils_RemoveAssemblyDetails_m3671180266 (RuntimeObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_RemoveAssemblyDetails_m3671180266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = (bool)0;
		V_2 = (bool)0;
		V_3 = 0;
		goto IL_006d;
	}

IL_000e:
	{
		String_t* L_1 = ___fullyQualifiedTypeName0;
		int32_t L_2 = V_3;
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_1, L_2, /*hidden argument*/NULL);
		V_4 = L_3;
		Il2CppChar L_4 = V_4;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)44))))
		{
			goto IL_0049;
		}
	}
	{
		Il2CppChar L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_002b;
		}
	}
	{
		Il2CppChar L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_003a;
		}
	}
	{
		goto IL_005d;
	}

IL_002b:
	{
		V_1 = (bool)0;
		V_2 = (bool)0;
		StringBuilder_t * L_7 = V_0;
		Il2CppChar L_8 = V_4;
		StringBuilder_Append_m2383614642(L_7, L_8, /*hidden argument*/NULL);
		goto IL_0069;
	}

IL_003a:
	{
		V_1 = (bool)0;
		V_2 = (bool)0;
		StringBuilder_t * L_9 = V_0;
		Il2CppChar L_10 = V_4;
		StringBuilder_Append_m2383614642(L_9, L_10, /*hidden argument*/NULL);
		goto IL_0069;
	}

IL_0049:
	{
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0059;
		}
	}
	{
		V_1 = (bool)1;
		StringBuilder_t * L_12 = V_0;
		Il2CppChar L_13 = V_4;
		StringBuilder_Append_m2383614642(L_12, L_13, /*hidden argument*/NULL);
		goto IL_0069;
	}

IL_0059:
	{
		V_2 = (bool)1;
		goto IL_0069;
	}

IL_005d:
	{
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_0069;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		Il2CppChar L_16 = V_4;
		StringBuilder_Append_m2383614642(L_15, L_16, /*hidden argument*/NULL);
	}

IL_0069:
	{
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_006d:
	{
		int32_t L_18 = V_3;
		String_t* L_19 = ___fullyQualifiedTypeName0;
		int32_t L_20 = String_get_Length_m3847582255(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_000e;
		}
	}
	{
		StringBuilder_t * L_21 = V_0;
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		return L_22;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::HasDefaultConstructor(System.Type,System.Boolean)
extern "C"  bool ReflectionUtils_HasDefaultConstructor_m3011828166 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, bool ___nonPublic1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_HasDefaultConstructor_m3011828166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___t0;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_0, _stringLiteral3452614604, /*hidden argument*/NULL);
		Type_t * L_1 = ___t0;
		bool L_2 = TypeExtensions_IsValueType_m852671066(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)1;
	}

IL_0015:
	{
		Type_t * L_3 = ___t0;
		bool L_4 = ___nonPublic1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		ConstructorInfo_t5769829 * L_5 = ReflectionUtils_GetDefaultConstructor_m3042638765(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(ConstructorInfo_t5769829 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetDefaultConstructor(System.Type)
extern "C"  ConstructorInfo_t5769829 * ReflectionUtils_GetDefaultConstructor_m4213349706 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetDefaultConstructor_m4213349706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		ConstructorInfo_t5769829 * L_1 = ReflectionUtils_GetDefaultConstructor_m3042638765(NULL /*static, unused*/, L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetDefaultConstructor(System.Type,System.Boolean)
extern "C"  ConstructorInfo_t5769829 * ReflectionUtils_GetDefaultConstructor_m3042638765 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, bool ___nonPublic1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetDefaultConstructor_m3042638765_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Func_2_t1796590042 * G_B4_0 = NULL;
	ConstructorInfoU5BU5D_t881249896* G_B4_1 = NULL;
	Func_2_t1796590042 * G_B3_0 = NULL;
	ConstructorInfoU5BU5D_t881249896* G_B3_1 = NULL;
	{
		V_0 = ((int32_t)20);
		bool L_0 = ___nonPublic1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1|(int32_t)((int32_t)32)));
	}

IL_000b:
	{
		Type_t * L_2 = ___t0;
		int32_t L_3 = V_0;
		ConstructorInfoU5BU5D_t881249896* L_4 = VirtFuncInvoker1< ConstructorInfoU5BU5D_t881249896*, int32_t >::Invoke(82 /* System.Reflection.ConstructorInfo[] System.Type::GetConstructors(System.Reflection.BindingFlags) */, L_2, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var);
		Func_2_t1796590042 * L_5 = ((U3CU3Ec_t3587133118_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var))->get_U3CU3E9__10_0_1();
		Func_2_t1796590042 * L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = L_4;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_4;
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var);
		U3CU3Ec_t3587133118 * L_7 = ((U3CU3Ec_t3587133118_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_8 = (intptr_t)U3CU3Ec_U3CGetDefaultConstructorU3Eb__10_0_m1917227267_RuntimeMethod_var;
		Func_2_t1796590042 * L_9 = (Func_2_t1796590042 *)il2cpp_codegen_object_new(Func_2_t1796590042_il2cpp_TypeInfo_var);
		Func_2__ctor_m1559270925(L_9, L_7, L_8, /*hidden argument*/Func_2__ctor_m1559270925_RuntimeMethod_var);
		Func_2_t1796590042 * L_10 = L_9;
		((U3CU3Ec_t3587133118_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var))->set_U3CU3E9__10_0_1(L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
	}

IL_0031:
	{
		ConstructorInfo_t5769829 * L_11 = Enumerable_SingleOrDefault_TisConstructorInfo_t5769829_m2282397846(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B4_1, G_B4_0, /*hidden argument*/Enumerable_SingleOrDefault_TisConstructorInfo_t5769829_m2282397846_RuntimeMethod_var);
		return L_11;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsNullable(System.Type)
extern "C"  bool ReflectionUtils_IsNullable_m645225420 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_IsNullable_m645225420_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___t0;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_0, _stringLiteral3452614604, /*hidden argument*/NULL);
		Type_t * L_1 = ___t0;
		bool L_2 = TypeExtensions_IsValueType_m852671066(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_3 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_4 = ReflectionUtils_IsNullableType_m2557784957(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		return (bool)1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsNullableType(System.Type)
extern "C"  bool ReflectionUtils_IsNullableType_m2557784957 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_IsNullableType_m2557784957_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___t0;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_0, _stringLiteral3452614604, /*hidden argument*/NULL);
		Type_t * L_1 = ___t0;
		bool L_2 = TypeExtensions_IsGenericType_m3947308765(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		Type_t * L_3 = ___t0;
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(88 /* System.Type System.Type::GetGenericTypeDefinition() */, L_3);
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (Nullable_1_t3772285925_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return (bool)((((RuntimeObject*)(Type_t *)L_4) == ((RuntimeObject*)(Type_t *)L_6))? 1 : 0);
	}

IL_0026:
	{
		return (bool)0;
	}
}
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::EnsureNotNullableType(System.Type)
extern "C"  Type_t * ReflectionUtils_EnsureNotNullableType_m3060298386 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_EnsureNotNullableType_m3060298386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_1 = ReflectionUtils_IsNullableType_m2557784957(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		Type_t * L_2 = ___t0;
		return L_2;
	}

IL_000a:
	{
		Type_t * L_3 = ___t0;
		Type_t * L_4 = Nullable_GetUnderlyingType_m3905033790(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsGenericDefinition(System.Type,System.Type)
extern "C"  bool ReflectionUtils_IsGenericDefinition_m4108214610 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericInterfaceDefinition1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		bool L_1 = TypeExtensions_IsGenericType_m3947308765(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		Type_t * L_2 = ___type0;
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(88 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		Type_t * L_4 = ___genericInterfaceDefinition1;
		return (bool)((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_4))? 1 : 0);
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::ImplementsGenericDefinition(System.Type,System.Type)
extern "C"  bool ReflectionUtils_ImplementsGenericDefinition_m1481186786 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericInterfaceDefinition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_ImplementsGenericDefinition_m1481186786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		Type_t * L_1 = ___genericInterfaceDefinition1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_2 = ReflectionUtils_ImplementsGenericDefinition_m2172968317(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::ImplementsGenericDefinition(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_ImplementsGenericDefinition_m2172968317 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericInterfaceDefinition1, Type_t ** ___implementingType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_ImplementsGenericDefinition_m2172968317_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	TypeU5BU5D_t3940880105* V_1 = NULL;
	int32_t V_2 = 0;
	Type_t * V_3 = NULL;
	Type_t * V_4 = NULL;
	{
		Type_t * L_0 = ___type0;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_0, _stringLiteral3243520166, /*hidden argument*/NULL);
		Type_t * L_1 = ___genericInterfaceDefinition1;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_1, _stringLiteral4032246892, /*hidden argument*/NULL);
		Type_t * L_2 = ___genericInterfaceDefinition1;
		bool L_3 = TypeExtensions_IsInterface_m3543394130(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Type_t * L_4 = ___genericInterfaceDefinition1;
		bool L_5 = TypeExtensions_IsGenericTypeDefinition_m2160044791(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003c;
		}
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_6 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_7 = ___genericInterfaceDefinition1;
		String_t* L_8 = StringUtils_FormatWith_m3056805521(NULL /*static, unused*/, _stringLiteral3302261911, L_6, L_7, /*hidden argument*/NULL);
		ArgumentNullException_t1615371798 * L_9 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9,ReflectionUtils_ImplementsGenericDefinition_m2172968317_RuntimeMethod_var);
	}

IL_003c:
	{
		Type_t * L_10 = ___type0;
		bool L_11 = TypeExtensions_IsInterface_m3543394130(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		Type_t * L_12 = ___type0;
		bool L_13 = TypeExtensions_IsGenericType_m3947308765(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		Type_t * L_14 = ___type0;
		Type_t * L_15 = VirtFuncInvoker0< Type_t * >::Invoke(88 /* System.Type System.Type::GetGenericTypeDefinition() */, L_14);
		V_0 = L_15;
		Type_t * L_16 = ___genericInterfaceDefinition1;
		Type_t * L_17 = V_0;
		if ((!(((RuntimeObject*)(Type_t *)L_16) == ((RuntimeObject*)(Type_t *)L_17))))
		{
			goto IL_005c;
		}
	}
	{
		Type_t ** L_18 = ___implementingType2;
		Type_t * L_19 = ___type0;
		*((RuntimeObject **)(L_18)) = (RuntimeObject *)L_19;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_18), (RuntimeObject *)L_19);
		return (bool)1;
	}

IL_005c:
	{
		Type_t * L_20 = ___type0;
		TypeU5BU5D_t3940880105* L_21 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(40 /* System.Type[] System.Type::GetInterfaces() */, L_20);
		V_1 = L_21;
		V_2 = 0;
		goto IL_0089;
	}

IL_0067:
	{
		TypeU5BU5D_t3940880105* L_22 = V_1;
		int32_t L_23 = V_2;
		int32_t L_24 = L_23;
		Type_t * L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		V_3 = L_25;
		Type_t * L_26 = V_3;
		bool L_27 = TypeExtensions_IsGenericType_m3947308765(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0085;
		}
	}
	{
		Type_t * L_28 = V_3;
		Type_t * L_29 = VirtFuncInvoker0< Type_t * >::Invoke(88 /* System.Type System.Type::GetGenericTypeDefinition() */, L_28);
		V_4 = L_29;
		Type_t * L_30 = ___genericInterfaceDefinition1;
		Type_t * L_31 = V_4;
		if ((!(((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_31))))
		{
			goto IL_0085;
		}
	}
	{
		Type_t ** L_32 = ___implementingType2;
		Type_t * L_33 = V_3;
		*((RuntimeObject **)(L_32)) = (RuntimeObject *)L_33;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_32), (RuntimeObject *)L_33);
		return (bool)1;
	}

IL_0085:
	{
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_0089:
	{
		int32_t L_35 = V_2;
		TypeU5BU5D_t3940880105* L_36 = V_1;
		if ((((int32_t)L_35) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_36)->max_length)))))))
		{
			goto IL_0067;
		}
	}
	{
		Type_t ** L_37 = ___implementingType2;
		*((RuntimeObject **)(L_37)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_37), (RuntimeObject *)NULL);
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinition(System.Type,System.Type)
extern "C"  bool ReflectionUtils_InheritsGenericDefinition_m3900283873 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericClassDefinition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_InheritsGenericDefinition_m3900283873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		Type_t * L_1 = ___genericClassDefinition1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_2 = ReflectionUtils_InheritsGenericDefinition_m626434391(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinition(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_InheritsGenericDefinition_m626434391 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericClassDefinition1, Type_t ** ___implementingType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_InheritsGenericDefinition_m626434391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_0, _stringLiteral3243520166, /*hidden argument*/NULL);
		Type_t * L_1 = ___genericClassDefinition1;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_1, _stringLiteral908082501, /*hidden argument*/NULL);
		Type_t * L_2 = ___genericClassDefinition1;
		bool L_3 = TypeExtensions_IsClass_m3873378058(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Type_t * L_4 = ___genericClassDefinition1;
		bool L_5 = TypeExtensions_IsGenericTypeDefinition_m2160044791(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003c;
		}
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_6 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_7 = ___genericClassDefinition1;
		String_t* L_8 = StringUtils_FormatWith_m3056805521(NULL /*static, unused*/, _stringLiteral3820141517, L_6, L_7, /*hidden argument*/NULL);
		ArgumentNullException_t1615371798 * L_9 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9,ReflectionUtils_InheritsGenericDefinition_m626434391_RuntimeMethod_var);
	}

IL_003c:
	{
		Type_t * L_10 = ___type0;
		Type_t * L_11 = ___genericClassDefinition1;
		Type_t ** L_12 = ___implementingType2;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_13 = ReflectionUtils_InheritsGenericDefinitionInternal_m2113175446(NULL /*static, unused*/, L_10, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinitionInternal(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_InheritsGenericDefinitionInternal_m2113175446 (RuntimeObject * __this /* static, unused */, Type_t * ___currentType0, Type_t * ___genericClassDefinition1, Type_t ** ___implementingType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_InheritsGenericDefinitionInternal_m2113175446_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___currentType0;
		bool L_1 = TypeExtensions_IsGenericType_m3947308765(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Type_t * L_2 = ___currentType0;
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(88 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		V_0 = L_3;
		Type_t * L_4 = ___genericClassDefinition1;
		Type_t * L_5 = V_0;
		if ((!(((RuntimeObject*)(Type_t *)L_4) == ((RuntimeObject*)(Type_t *)L_5))))
		{
			goto IL_0018;
		}
	}
	{
		Type_t ** L_6 = ___implementingType2;
		Type_t * L_7 = ___currentType0;
		*((RuntimeObject **)(L_6)) = (RuntimeObject *)L_7;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_6), (RuntimeObject *)L_7);
		return (bool)1;
	}

IL_0018:
	{
		Type_t * L_8 = ___currentType0;
		Type_t * L_9 = TypeExtensions_BaseType_m1084285535(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0025;
		}
	}
	{
		Type_t ** L_10 = ___implementingType2;
		*((RuntimeObject **)(L_10)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_10), (RuntimeObject *)NULL);
		return (bool)0;
	}

IL_0025:
	{
		Type_t * L_11 = ___currentType0;
		Type_t * L_12 = TypeExtensions_BaseType_m1084285535(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Type_t * L_13 = ___genericClassDefinition1;
		Type_t ** L_14 = ___implementingType2;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_15 = ReflectionUtils_InheritsGenericDefinitionInternal_m2113175446(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetCollectionItemType(System.Type)
extern "C"  Type_t * ReflectionUtils_GetCollectionItemType_m1243555655 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetCollectionItemType_m1243555655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_0, _stringLiteral3243520166, /*hidden argument*/NULL);
		Type_t * L_1 = ___type0;
		bool L_2 = Type_get_IsArray_m2591212821(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_3 = ___type0;
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, L_3);
		return L_4;
	}

IL_001a:
	{
		Type_t * L_5 = ___type0;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IEnumerable_1_t1615002100_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_8 = ReflectionUtils_ImplementsGenericDefinition_m2172968317(NULL /*static, unused*/, L_5, L_7, (&V_0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		Type_t * L_9 = V_0;
		bool L_10 = TypeExtensions_IsGenericTypeDefinition_m2160044791(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_11 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_12 = ___type0;
		String_t* L_13 = StringUtils_FormatWith_m3056805521(NULL /*static, unused*/, _stringLiteral809145522, L_11, L_12, /*hidden argument*/NULL);
		Exception_t * L_14 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14,ReflectionUtils_GetCollectionItemType_m1243555655_RuntimeMethod_var);
	}

IL_004c:
	{
		Type_t * L_15 = V_0;
		TypeU5BU5D_t3940880105* L_16 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(85 /* System.Type[] System.Type::GetGenericArguments() */, L_15);
		int32_t L_17 = 0;
		Type_t * L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		return L_18;
	}

IL_0055:
	{
		RuntimeTypeHandle_t3027515415  L_19 = { reinterpret_cast<intptr_t> (IEnumerable_t1941168011_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		Type_t * L_21 = ___type0;
		bool L_22 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_20, L_21);
		if (!L_22)
		{
			goto IL_0069;
		}
	}
	{
		return (Type_t *)NULL;
	}

IL_0069:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_23 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_24 = ___type0;
		String_t* L_25 = StringUtils_FormatWith_m3056805521(NULL /*static, unused*/, _stringLiteral809145522, L_23, L_24, /*hidden argument*/NULL);
		Exception_t * L_26 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_26, L_25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26,ReflectionUtils_GetCollectionItemType_m1243555655_RuntimeMethod_var);
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetDictionaryKeyValueTypes(System.Type,System.Type&,System.Type&)
extern "C"  void ReflectionUtils_GetDictionaryKeyValueTypes_m3140437744 (RuntimeObject * __this /* static, unused */, Type_t * ___dictionaryType0, Type_t ** ___keyType1, Type_t ** ___valueType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetDictionaryKeyValueTypes_m3140437744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	TypeU5BU5D_t3940880105* V_1 = NULL;
	{
		Type_t * L_0 = ___dictionaryType0;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_0, _stringLiteral1925115738, /*hidden argument*/NULL);
		Type_t * L_1 = ___dictionaryType0;
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (IDictionary_2_t3177279192_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_4 = ReflectionUtils_ImplementsGenericDefinition_m2172968317(NULL /*static, unused*/, L_1, L_3, (&V_0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		Type_t * L_5 = V_0;
		bool L_6 = TypeExtensions_IsGenericTypeDefinition_m2160044791(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_7 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_8 = ___dictionaryType0;
		String_t* L_9 = StringUtils_FormatWith_m3056805521(NULL /*static, unused*/, _stringLiteral2465504375, L_7, L_8, /*hidden argument*/NULL);
		Exception_t * L_10 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10,ReflectionUtils_GetDictionaryKeyValueTypes_m3140437744_RuntimeMethod_var);
	}

IL_003d:
	{
		Type_t * L_11 = V_0;
		TypeU5BU5D_t3940880105* L_12 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(85 /* System.Type[] System.Type::GetGenericArguments() */, L_11);
		V_1 = L_12;
		Type_t ** L_13 = ___keyType1;
		TypeU5BU5D_t3940880105* L_14 = V_1;
		int32_t L_15 = 0;
		Type_t * L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		*((RuntimeObject **)(L_13)) = (RuntimeObject *)L_16;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_13), (RuntimeObject *)L_16);
		Type_t ** L_17 = ___valueType2;
		TypeU5BU5D_t3940880105* L_18 = V_1;
		int32_t L_19 = 1;
		Type_t * L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		*((RuntimeObject **)(L_17)) = (RuntimeObject *)L_20;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_17), (RuntimeObject *)L_20);
		return;
	}

IL_004f:
	{
		RuntimeTypeHandle_t3027515415  L_21 = { reinterpret_cast<intptr_t> (IDictionary_t1363984059_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		Type_t * L_23 = ___dictionaryType0;
		bool L_24 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_22, L_23);
		if (!L_24)
		{
			goto IL_0068;
		}
	}
	{
		Type_t ** L_25 = ___keyType1;
		*((RuntimeObject **)(L_25)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_25), (RuntimeObject *)NULL);
		Type_t ** L_26 = ___valueType2;
		*((RuntimeObject **)(L_26)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_26), (RuntimeObject *)NULL);
		return;
	}

IL_0068:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_27 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_28 = ___dictionaryType0;
		String_t* L_29 = StringUtils_FormatWith_m3056805521(NULL /*static, unused*/, _stringLiteral2465504375, L_27, L_28, /*hidden argument*/NULL);
		Exception_t * L_30 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_30, L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30,ReflectionUtils_GetDictionaryKeyValueTypes_m3140437744_RuntimeMethod_var);
	}
}
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberUnderlyingType(System.Reflection.MemberInfo)
extern "C"  Type_t * ReflectionUtils_GetMemberUnderlyingType_m841662456 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetMemberUnderlyingType_m841662456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		MemberInfo_t * L_0 = ___member0;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_0, _stringLiteral1586550295, /*hidden argument*/NULL);
		MemberInfo_t * L_1 = ___member0;
		int32_t L_2 = TypeExtensions_MemberType_m2286386365(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)4)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_002b;
		}
	}
	{
		goto IL_005b;
	}

IL_0020:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)8)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_0037;
		}
	}
	{
		goto IL_005b;
	}

IL_002b:
	{
		MemberInfo_t * L_8 = ___member0;
		Type_t * L_9 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_8, FieldInfo_t_il2cpp_TypeInfo_var)));
		return L_9;
	}

IL_0037:
	{
		MemberInfo_t * L_10 = ___member0;
		Type_t * L_11 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_10, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_11;
	}

IL_0043:
	{
		MemberInfo_t * L_12 = ___member0;
		Type_t * L_13 = EventInfo_get_EventHandlerType_m420690865(((EventInfo_t *)CastclassClass((RuntimeObject*)L_12, EventInfo_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_13;
	}

IL_004f:
	{
		MemberInfo_t * L_14 = ___member0;
		Type_t * L_15 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, ((MethodInfo_t *)CastclassClass((RuntimeObject*)L_14, MethodInfo_t_il2cpp_TypeInfo_var)));
		return L_15;
	}

IL_005b:
	{
		ArgumentException_t132251570 * L_16 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_16, _stringLiteral328953099, _stringLiteral1586550295, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16,ReflectionUtils_GetMemberUnderlyingType_m841662456_RuntimeMethod_var);
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsIndexedProperty(System.Reflection.MemberInfo)
extern "C"  bool ReflectionUtils_IsIndexedProperty_m3237349032 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_IsIndexedProperty_m3237349032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t * V_0 = NULL;
	{
		MemberInfo_t * L_0 = ___member0;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_0, _stringLiteral1586550295, /*hidden argument*/NULL);
		MemberInfo_t * L_1 = ___member0;
		V_0 = ((PropertyInfo_t *)IsInstClass((RuntimeObject*)L_1, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		PropertyInfo_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_4 = ReflectionUtils_IsIndexedProperty_m1455784124(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsIndexedProperty(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsIndexedProperty_m1455784124 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___property0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_IsIndexedProperty_m1455784124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___property0;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_0, _stringLiteral4193571962, /*hidden argument*/NULL);
		PropertyInfo_t * L_1 = ___property0;
		ParameterInfoU5BU5D_t390618515* L_2 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(22 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_1);
		return (bool)((!(((uint32_t)(((RuntimeArray *)L_2)->max_length)) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberValue(System.Reflection.MemberInfo,System.Object)
extern "C"  RuntimeObject * ReflectionUtils_GetMemberValue_m2432599679 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetMemberValue_m2432599679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	TargetParameterCountException_t1216617239 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		MemberInfo_t * L_0 = ___member0;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_0, _stringLiteral1586550295, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___target1;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_1, _stringLiteral2833503317, /*hidden argument*/NULL);
		MemberInfo_t * L_2 = ___member0;
		int32_t L_3 = TypeExtensions_MemberType_m2286386365(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)16))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0063;
	}

IL_0028:
	{
		MemberInfo_t * L_6 = ___member0;
		RuntimeObject * L_7 = ___target1;
		RuntimeObject * L_8 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_6, FieldInfo_t_il2cpp_TypeInfo_var)), L_7);
		return L_8;
	}

IL_0035:
	{
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		MemberInfo_t * L_9 = ___member0;
		RuntimeObject * L_10 = ___target1;
		RuntimeObject * L_11 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_9, PropertyInfo_t_il2cpp_TypeInfo_var)), L_10, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		V_1 = L_11;
		goto IL_0088;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (TargetParameterCountException_t1216617239_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Reflection.TargetParameterCountException)
		V_2 = ((TargetParameterCountException_t1216617239 *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_12 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		MemberInfo_t * L_13 = ___member0;
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_13);
		String_t* L_15 = StringUtils_FormatWith_m3056805521(NULL /*static, unused*/, _stringLiteral3087438175, L_12, L_14, /*hidden argument*/NULL);
		TargetParameterCountException_t1216617239 * L_16 = V_2;
		ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1535060261(L_17, L_15, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17,ReflectionUtils_GetMemberValue_m2432599679_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0063:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_18 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		CultureInfo_t4157843068 * L_19 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		MemberInfo_t * L_20 = ___member0;
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_20);
		String_t* L_22 = StringUtils_FormatWith_m353537829(NULL /*static, unused*/, _stringLiteral3705297004, L_18, L_19, L_21, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_23 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_23, L_22, _stringLiteral1586550295, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23,ReflectionUtils_GetMemberValue_m2432599679_RuntimeMethod_var);
	}

IL_0088:
	{
		RuntimeObject * L_24 = V_1;
		return L_24;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::SetMemberValue(System.Reflection.MemberInfo,System.Object,System.Object)
extern "C"  void ReflectionUtils_SetMemberValue_m2425830593 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_SetMemberValue_m2425830593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		MemberInfo_t * L_0 = ___member0;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_0, _stringLiteral1586550295, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___target1;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_1, _stringLiteral2833503317, /*hidden argument*/NULL);
		MemberInfo_t * L_2 = ___member0;
		int32_t L_3 = TypeExtensions_MemberType_m2286386365(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)16))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0045;
	}

IL_0028:
	{
		MemberInfo_t * L_6 = ___member0;
		RuntimeObject * L_7 = ___target1;
		RuntimeObject * L_8 = ___value2;
		FieldInfo_SetValue_m2460171138(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_6, FieldInfo_t_il2cpp_TypeInfo_var)), L_7, L_8, /*hidden argument*/NULL);
		return;
	}

IL_0036:
	{
		MemberInfo_t * L_9 = ___member0;
		RuntimeObject * L_10 = ___target1;
		RuntimeObject * L_11 = ___value2;
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(27 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_9, PropertyInfo_t_il2cpp_TypeInfo_var)), L_10, L_11, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		return;
	}

IL_0045:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_12 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		MemberInfo_t * L_13 = ___member0;
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_13);
		String_t* L_15 = StringUtils_FormatWith_m3056805521(NULL /*static, unused*/, _stringLiteral2657402793, L_12, L_14, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_16 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_16, L_15, _stringLiteral1586550295, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16,ReflectionUtils_SetMemberValue_m2425830593_RuntimeMethod_var);
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanReadMemberValue(System.Reflection.MemberInfo,System.Boolean)
extern "C"  bool ReflectionUtils_CanReadMemberValue_m1473164796 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, bool ___nonPublic1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_CanReadMemberValue_m1473164796_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	PropertyInfo_t * V_2 = NULL;
	{
		MemberInfo_t * L_0 = ___member0;
		int32_t L_1 = TypeExtensions_MemberType_m2286386365(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16))))
		{
			goto IL_002a;
		}
	}
	{
		goto IL_004b;
	}

IL_0012:
	{
		MemberInfo_t * L_4 = ___member0;
		V_1 = ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_4, FieldInfo_t_il2cpp_TypeInfo_var));
		bool L_5 = ___nonPublic1;
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		FieldInfo_t * L_6 = V_1;
		bool L_7 = FieldInfo_get_IsPublic_m3378038140(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		return (bool)0;
	}

IL_002a:
	{
		MemberInfo_t * L_8 = ___member0;
		V_2 = ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_8, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_9 = V_2;
		bool L_10 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_9);
		if (L_10)
		{
			goto IL_003b;
		}
	}
	{
		return (bool)0;
	}

IL_003b:
	{
		bool L_11 = ___nonPublic1;
		if (!L_11)
		{
			goto IL_0040;
		}
	}
	{
		return (bool)1;
	}

IL_0040:
	{
		PropertyInfo_t * L_12 = V_2;
		bool L_13 = ___nonPublic1;
		MethodInfo_t * L_14 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_12, L_13);
		return (bool)((!(((RuntimeObject*)(MethodInfo_t *)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_004b:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanSetMemberValue(System.Reflection.MemberInfo,System.Boolean,System.Boolean)
extern "C"  bool ReflectionUtils_CanSetMemberValue_m1263216356 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, bool ___nonPublic1, bool ___canSetReadOnly2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_CanSetMemberValue_m1263216356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	PropertyInfo_t * V_2 = NULL;
	{
		MemberInfo_t * L_0 = ___member0;
		int32_t L_1 = TypeExtensions_MemberType_m2286386365(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16))))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0062;
	}

IL_0012:
	{
		MemberInfo_t * L_4 = ___member0;
		V_1 = ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_4, FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t * L_5 = V_1;
		bool L_6 = FieldInfo_get_IsLiteral_m534699794(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		FieldInfo_t * L_7 = V_1;
		bool L_8 = FieldInfo_get_IsInitOnly_m930369112(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		bool L_9 = ___canSetReadOnly2;
		if (L_9)
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		bool L_10 = ___nonPublic1;
		if (!L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)1;
	}

IL_0035:
	{
		FieldInfo_t * L_11 = V_1;
		bool L_12 = FieldInfo_get_IsPublic_m3378038140(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		return (bool)1;
	}

IL_003f:
	{
		return (bool)0;
	}

IL_0041:
	{
		MemberInfo_t * L_13 = ___member0;
		V_2 = ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_13, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_14 = V_2;
		bool L_15 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_14);
		if (L_15)
		{
			goto IL_0052;
		}
	}
	{
		return (bool)0;
	}

IL_0052:
	{
		bool L_16 = ___nonPublic1;
		if (!L_16)
		{
			goto IL_0057;
		}
	}
	{
		return (bool)1;
	}

IL_0057:
	{
		PropertyInfo_t * L_17 = V_2;
		bool L_18 = ___nonPublic1;
		MethodInfo_t * L_19 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(24 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_17, L_18);
		return (bool)((!(((RuntimeObject*)(MethodInfo_t *)L_19) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_0062:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.List`1<System.Reflection.MemberInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetFieldsAndProperties(System.Type,System.Reflection.BindingFlags)
extern "C"  List_1_t557109187 * ReflectionUtils_GetFieldsAndProperties_m297325423 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, int32_t ___bindingAttr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetFieldsAndProperties_m297325423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t557109187 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	MemberInfo_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Func_2_t3967597302 * G_B2_0 = NULL;
	List_1_t557109187 * G_B2_1 = NULL;
	Func_2_t3967597302 * G_B1_0 = NULL;
	List_1_t557109187 * G_B1_1 = NULL;
	{
		List_1_t557109187 * L_0 = (List_1_t557109187 *)il2cpp_codegen_object_new(List_1_t557109187_il2cpp_TypeInfo_var);
		List_1__ctor_m2845631487(L_0, /*hidden argument*/List_1__ctor_m2845631487_RuntimeMethod_var);
		List_1_t557109187 * L_1 = L_0;
		Type_t * L_2 = ___type0;
		int32_t L_3 = ___bindingAttr1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ReflectionUtils_GetFields_m2854570455(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		CollectionUtils_AddRange_TisMemberInfo_t_m2053991619(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/CollectionUtils_AddRange_TisMemberInfo_t_m2053991619_RuntimeMethod_var);
		List_1_t557109187 * L_5 = L_1;
		Type_t * L_6 = ___type0;
		int32_t L_7 = ___bindingAttr1;
		RuntimeObject* L_8 = ReflectionUtils_GetProperties_m2510843274(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		CollectionUtils_AddRange_TisMemberInfo_t_m2053991619(NULL /*static, unused*/, L_5, L_8, /*hidden argument*/CollectionUtils_AddRange_TisMemberInfo_t_m2053991619_RuntimeMethod_var);
		List_1_t557109187 * L_9 = L_5;
		int32_t L_10 = List_1_get_Count_m2508260589(L_9, /*hidden argument*/List_1_get_Count_m2508260589_RuntimeMethod_var);
		List_1_t557109187 * L_11 = (List_1_t557109187 *)il2cpp_codegen_object_new(List_1_t557109187_il2cpp_TypeInfo_var);
		List_1__ctor_m4045609786(L_11, L_10, /*hidden argument*/List_1__ctor_m4045609786_RuntimeMethod_var);
		V_0 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var);
		Func_2_t3967597302 * L_12 = ((U3CU3Ec_t3587133118_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var))->get_U3CU3E9__29_0_2();
		Func_2_t3967597302 * L_13 = L_12;
		G_B1_0 = L_13;
		G_B1_1 = L_9;
		if (L_13)
		{
			G_B2_0 = L_13;
			G_B2_1 = L_9;
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var);
		U3CU3Ec_t3587133118 * L_14 = ((U3CU3Ec_t3587133118_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_15 = (intptr_t)U3CU3Ec_U3CGetFieldsAndPropertiesU3Eb__29_0_m3758209495_RuntimeMethod_var;
		Func_2_t3967597302 * L_16 = (Func_2_t3967597302 *)il2cpp_codegen_object_new(Func_2_t3967597302_il2cpp_TypeInfo_var);
		Func_2__ctor_m4252472063(L_16, L_14, L_15, /*hidden argument*/Func_2__ctor_m4252472063_RuntimeMethod_var);
		Func_2_t3967597302 * L_17 = L_16;
		((U3CU3Ec_t3587133118_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var))->set_U3CU3E9__29_0_2(L_17);
		G_B2_0 = L_17;
		G_B2_1 = G_B1_1;
	}

IL_004a:
	{
		RuntimeObject* L_18 = Enumerable_GroupBy_TisMemberInfo_t_TisString_t_m1303684172(NULL /*static, unused*/, G_B2_1, G_B2_0, /*hidden argument*/Enumerable_GroupBy_TisMemberInfo_t_TisString_t_m1303684172_RuntimeMethod_var);
		RuntimeObject* L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<System.String,System.Reflection.MemberInfo>>::GetEnumerator() */, IEnumerable_1_t761185857_il2cpp_TypeInfo_var, L_18);
		V_1 = L_19;
	}

IL_0055:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f2;
		}

IL_005a:
		{
			RuntimeObject* L_20 = V_1;
			RuntimeObject* L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<System.String,System.Reflection.MemberInfo>>::get_Current() */, IEnumerator_1_t2213903436_il2cpp_TypeInfo_var, L_20);
			RuntimeObject* L_22 = L_21;
			int32_t L_23 = Enumerable_Count_TisMemberInfo_t_m2833200946(NULL /*static, unused*/, L_22, /*hidden argument*/Enumerable_Count_TisMemberInfo_t_m2833200946_RuntimeMethod_var);
			V_2 = L_23;
			List_1_t557109187 * L_24 = Enumerable_ToList_TisMemberInfo_t_m3180374575(NULL /*static, unused*/, L_22, /*hidden argument*/Enumerable_ToList_TisMemberInfo_t_m3180374575_RuntimeMethod_var);
			V_3 = (RuntimeObject*)L_24;
			int32_t L_25 = V_2;
			if ((!(((uint32_t)L_25) == ((uint32_t)1))))
			{
				goto IL_007f;
			}
		}

IL_0071:
		{
			List_1_t557109187 * L_26 = V_0;
			RuntimeObject* L_27 = V_3;
			MemberInfo_t * L_28 = Enumerable_First_TisMemberInfo_t_m2952260960(NULL /*static, unused*/, L_27, /*hidden argument*/Enumerable_First_TisMemberInfo_t_m2952260960_RuntimeMethod_var);
			List_1_Add_m304598357(L_26, L_28, /*hidden argument*/List_1_Add_m304598357_RuntimeMethod_var);
			goto IL_00f2;
		}

IL_007f:
		{
			List_1_t557109187 * L_29 = (List_1_t557109187 *)il2cpp_codegen_object_new(List_1_t557109187_il2cpp_TypeInfo_var);
			List_1__ctor_m2845631487(L_29, /*hidden argument*/List_1__ctor_m2845631487_RuntimeMethod_var);
			V_4 = (RuntimeObject*)L_29;
			RuntimeObject* L_30 = V_3;
			RuntimeObject* L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>::GetEnumerator() */, IEnumerable_1_t2359854630_il2cpp_TypeInfo_var, L_30);
			V_5 = L_31;
		}

IL_008e:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00d3;
			}

IL_0090:
			{
				RuntimeObject* L_32 = V_5;
				MemberInfo_t * L_33 = InterfaceFuncInvoker0< MemberInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>::get_Current() */, IEnumerator_1_t3812572209_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				RuntimeObject* L_34 = V_4;
				int32_t L_35 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::get_Count() */, ICollection_1_t1913186679_il2cpp_TypeInfo_var, L_34);
				if (L_35)
				{
					goto IL_00ad;
				}
			}

IL_00a2:
			{
				RuntimeObject* L_36 = V_4;
				MemberInfo_t * L_37 = V_6;
				InterfaceActionInvoker1< MemberInfo_t * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::Add(!0) */, ICollection_1_t1913186679_il2cpp_TypeInfo_var, L_36, L_37);
				goto IL_00d3;
			}

IL_00ad:
			{
				MemberInfo_t * L_38 = V_6;
				int32_t L_39 = ___bindingAttr1;
				IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
				bool L_40 = ReflectionUtils_IsOverridenGenericMember_m1361940080(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
				if (!L_40)
				{
					goto IL_00ca;
				}
			}

IL_00b7:
			{
				MemberInfo_t * L_41 = V_6;
				String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_41);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				bool L_43 = String_op_Equality_m920492651(NULL /*static, unused*/, L_42, _stringLiteral1949155704, /*hidden argument*/NULL);
				if (!L_43)
				{
					goto IL_00d3;
				}
			}

IL_00ca:
			{
				RuntimeObject* L_44 = V_4;
				MemberInfo_t * L_45 = V_6;
				InterfaceActionInvoker1< MemberInfo_t * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::Add(!0) */, ICollection_1_t1913186679_il2cpp_TypeInfo_var, L_44, L_45);
			}

IL_00d3:
			{
				RuntimeObject* L_46 = V_5;
				bool L_47 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_0090;
				}
			}

IL_00dc:
			{
				IL2CPP_LEAVE(0xEA, FINALLY_00de);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00de;
		}

FINALLY_00de:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_48 = V_5;
				if (!L_48)
				{
					goto IL_00e9;
				}
			}

IL_00e2:
			{
				RuntimeObject* L_49 = V_5;
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_49);
			}

IL_00e9:
			{
				IL2CPP_END_FINALLY(222)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(222)
		{
			IL2CPP_JUMP_TBL(0xEA, IL_00ea)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00ea:
		{
			List_1_t557109187 * L_50 = V_0;
			RuntimeObject* L_51 = V_4;
			List_1_AddRange_m2257680807(L_50, L_51, /*hidden argument*/List_1_AddRange_m2257680807_RuntimeMethod_var);
		}

IL_00f2:
		{
			RuntimeObject* L_52 = V_1;
			bool L_53 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_52);
			if (L_53)
			{
				goto IL_005a;
			}
		}

IL_00fd:
		{
			IL2CPP_LEAVE(0x109, FINALLY_00ff);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ff;
	}

FINALLY_00ff:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_54 = V_1;
			if (!L_54)
			{
				goto IL_0108;
			}
		}

IL_0102:
		{
			RuntimeObject* L_55 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_55);
		}

IL_0108:
		{
			IL2CPP_END_FINALLY(255)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(255)
	{
		IL2CPP_JUMP_TBL(0x109, IL_0109)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0109:
	{
		List_1_t557109187 * L_56 = V_0;
		return L_56;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsOverridenGenericMember(System.Reflection.MemberInfo,System.Reflection.BindingFlags)
extern "C"  bool ReflectionUtils_IsOverridenGenericMember_m1361940080 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___memberInfo0, int32_t ___bindingAttr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_IsOverridenGenericMember_m1361940080_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	MemberInfoU5BU5D_t1302094432* V_3 = NULL;
	{
		MemberInfo_t * L_0 = ___memberInfo0;
		int32_t L_1 = TypeExtensions_MemberType_m2286386365(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)16))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		MemberInfo_t * L_2 = ___memberInfo0;
		V_0 = ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_2, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_4 = ReflectionUtils_IsVirtual_m3338583030(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		return (bool)0;
	}

IL_001d:
	{
		PropertyInfo_t * L_5 = V_0;
		Type_t * L_6 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_5);
		V_1 = L_6;
		Type_t * L_7 = V_1;
		bool L_8 = TypeExtensions_IsGenericType_m3947308765(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		Type_t * L_9 = V_1;
		Type_t * L_10 = VirtFuncInvoker0< Type_t * >::Invoke(88 /* System.Type System.Type::GetGenericTypeDefinition() */, L_9);
		V_2 = L_10;
		Type_t * L_11 = V_2;
		if (L_11)
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_003a:
	{
		Type_t * L_12 = V_2;
		PropertyInfo_t * L_13 = V_0;
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_13);
		int32_t L_15 = ___bindingAttr1;
		MemberInfoU5BU5D_t1302094432* L_16 = VirtFuncInvoker2< MemberInfoU5BU5D_t1302094432*, String_t*, int32_t >::Invoke(51 /* System.Reflection.MemberInfo[] System.Type::GetMember(System.String,System.Reflection.BindingFlags) */, L_12, L_14, L_15);
		V_3 = L_16;
		MemberInfoU5BU5D_t1302094432* L_17 = V_3;
		if ((((RuntimeArray *)L_17)->max_length))
		{
			goto IL_004e;
		}
	}
	{
		return (bool)0;
	}

IL_004e:
	{
		MemberInfoU5BU5D_t1302094432* L_18 = V_3;
		int32_t L_19 = 0;
		MemberInfo_t * L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		Type_t * L_21 = ReflectionUtils_GetMemberUnderlyingType_m841662456(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		bool L_22 = VirtFuncInvoker0< bool >::Invoke(91 /* System.Boolean System.Type::get_IsGenericParameter() */, L_21);
		if (L_22)
		{
			goto IL_005f;
		}
	}
	{
		return (bool)0;
	}

IL_005f:
	{
		return (bool)1;
	}
}
// System.Attribute[] Newtonsoft.Json.Utilities.ReflectionUtils::GetAttributes(System.Object,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t1575011174* ReflectionUtils_GetAttributes_m2593182657 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___attributeProvider0, Type_t * ___attributeType1, bool ___inherit2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetAttributes_m2593182657_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t * V_2 = NULL;
	AttributeU5BU5D_t1575011174* V_3 = NULL;
	Assembly_t * V_4 = NULL;
	MemberInfo_t * V_5 = NULL;
	Module_t2987026101 * V_6 = NULL;
	ParameterInfo_t1861056598 * V_7 = NULL;
	ObjectU5BU5D_t2843939325* G_B4_0 = NULL;
	ObjectU5BU5D_t2843939325* G_B27_0 = NULL;
	{
		RuntimeObject * L_0 = ___attributeProvider0;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_0, _stringLiteral950559514, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___attributeProvider0;
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (!((Type_t *)IsInstClass((RuntimeObject*)L_2, Type_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0061;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		V_2 = ((Type_t *)CastclassClass((RuntimeObject*)L_3, Type_t_il2cpp_TypeInfo_var));
		Type_t * L_4 = ___attributeType1;
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		Type_t * L_5 = V_2;
		bool L_6 = ___inherit2;
		ObjectU5BU5D_t2843939325* L_7 = VirtFuncInvoker1< ObjectU5BU5D_t2843939325*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_5, L_6);
		G_B4_0 = L_7;
		goto IL_0030;
	}

IL_0028:
	{
		Type_t * L_8 = V_2;
		Type_t * L_9 = ___attributeType1;
		bool L_10 = ___inherit2;
		ObjectU5BU5D_t2843939325* L_11 = VirtFuncInvoker2< ObjectU5BU5D_t2843939325*, Type_t *, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_8, L_9, L_10);
		G_B4_0 = L_11;
	}

IL_0030:
	{
		RuntimeObject* L_12 = Enumerable_Cast_TisAttribute_t861562559_m1709853543(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B4_0, /*hidden argument*/Enumerable_Cast_TisAttribute_t861562559_m1709853543_RuntimeMethod_var);
		AttributeU5BU5D_t1575011174* L_13 = Enumerable_ToArray_TisAttribute_t861562559_m1336572644(NULL /*static, unused*/, L_12, /*hidden argument*/Enumerable_ToArray_TisAttribute_t861562559_m1336572644_RuntimeMethod_var);
		V_3 = L_13;
		bool L_14 = ___inherit2;
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_2;
		Type_t * L_16 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, L_15);
		if (!L_16)
		{
			goto IL_005f;
		}
	}
	{
		AttributeU5BU5D_t1575011174* L_17 = V_3;
		Type_t * L_18 = V_2;
		Type_t * L_19 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, L_18);
		Type_t * L_20 = ___attributeType1;
		bool L_21 = ___inherit2;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		AttributeU5BU5D_t1575011174* L_22 = ReflectionUtils_GetAttributes_m2593182657(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/NULL);
		RuntimeObject* L_23 = Enumerable_Union_TisAttribute_t861562559_m3425703445(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_17, (RuntimeObject*)(RuntimeObject*)L_22, /*hidden argument*/Enumerable_Union_TisAttribute_t861562559_m3425703445_RuntimeMethod_var);
		AttributeU5BU5D_t1575011174* L_24 = Enumerable_ToArray_TisAttribute_t861562559_m1336572644(NULL /*static, unused*/, L_23, /*hidden argument*/Enumerable_ToArray_TisAttribute_t861562559_m1336572644_RuntimeMethod_var);
		V_3 = L_24;
	}

IL_005f:
	{
		AttributeU5BU5D_t1575011174* L_25 = V_3;
		return L_25;
	}

IL_0061:
	{
		RuntimeObject * L_26 = V_0;
		if (!((Assembly_t *)IsInstClass((RuntimeObject*)L_26, Assembly_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0085;
		}
	}
	{
		RuntimeObject * L_27 = V_0;
		V_4 = ((Assembly_t *)CastclassClass((RuntimeObject*)L_27, Assembly_t_il2cpp_TypeInfo_var));
		Type_t * L_28 = ___attributeType1;
		if (L_28)
		{
			goto IL_007c;
		}
	}
	{
		Assembly_t * L_29 = V_4;
		AttributeU5BU5D_t1575011174* L_30 = Attribute_GetCustomAttributes_m3956931822(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		return L_30;
	}

IL_007c:
	{
		Assembly_t * L_31 = V_4;
		Type_t * L_32 = ___attributeType1;
		AttributeU5BU5D_t1575011174* L_33 = Attribute_GetCustomAttributes_m3340307265(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		return L_33;
	}

IL_0085:
	{
		RuntimeObject * L_34 = V_0;
		if (!((MemberInfo_t *)IsInstClass((RuntimeObject*)L_34, MemberInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_00ab;
		}
	}
	{
		RuntimeObject * L_35 = V_0;
		V_5 = ((MemberInfo_t *)CastclassClass((RuntimeObject*)L_35, MemberInfo_t_il2cpp_TypeInfo_var));
		Type_t * L_36 = ___attributeType1;
		if (L_36)
		{
			goto IL_00a1;
		}
	}
	{
		MemberInfo_t * L_37 = V_5;
		bool L_38 = ___inherit2;
		AttributeU5BU5D_t1575011174* L_39 = Attribute_GetCustomAttributes_m3575848472(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/NULL);
		return L_39;
	}

IL_00a1:
	{
		MemberInfo_t * L_40 = V_5;
		Type_t * L_41 = ___attributeType1;
		bool L_42 = ___inherit2;
		AttributeU5BU5D_t1575011174* L_43 = Attribute_GetCustomAttributes_m1427582442(NULL /*static, unused*/, L_40, L_41, L_42, /*hidden argument*/NULL);
		return L_43;
	}

IL_00ab:
	{
		RuntimeObject * L_44 = V_0;
		if (!((Module_t2987026101 *)IsInstClass((RuntimeObject*)L_44, Module_t2987026101_il2cpp_TypeInfo_var)))
		{
			goto IL_00d1;
		}
	}
	{
		RuntimeObject * L_45 = V_0;
		V_6 = ((Module_t2987026101 *)CastclassClass((RuntimeObject*)L_45, Module_t2987026101_il2cpp_TypeInfo_var));
		Type_t * L_46 = ___attributeType1;
		if (L_46)
		{
			goto IL_00c7;
		}
	}
	{
		Module_t2987026101 * L_47 = V_6;
		bool L_48 = ___inherit2;
		AttributeU5BU5D_t1575011174* L_49 = Attribute_GetCustomAttributes_m4276120683(NULL /*static, unused*/, L_47, L_48, /*hidden argument*/NULL);
		return L_49;
	}

IL_00c7:
	{
		Module_t2987026101 * L_50 = V_6;
		Type_t * L_51 = ___attributeType1;
		bool L_52 = ___inherit2;
		AttributeU5BU5D_t1575011174* L_53 = Attribute_GetCustomAttributes_m635736302(NULL /*static, unused*/, L_50, L_51, L_52, /*hidden argument*/NULL);
		return L_53;
	}

IL_00d1:
	{
		RuntimeObject * L_54 = V_0;
		if (!((ParameterInfo_t1861056598 *)IsInstClass((RuntimeObject*)L_54, ParameterInfo_t1861056598_il2cpp_TypeInfo_var)))
		{
			goto IL_00f7;
		}
	}
	{
		RuntimeObject * L_55 = V_0;
		V_7 = ((ParameterInfo_t1861056598 *)CastclassClass((RuntimeObject*)L_55, ParameterInfo_t1861056598_il2cpp_TypeInfo_var));
		Type_t * L_56 = ___attributeType1;
		if (L_56)
		{
			goto IL_00ed;
		}
	}
	{
		ParameterInfo_t1861056598 * L_57 = V_7;
		bool L_58 = ___inherit2;
		AttributeU5BU5D_t1575011174* L_59 = Attribute_GetCustomAttributes_m4211271358(NULL /*static, unused*/, L_57, L_58, /*hidden argument*/NULL);
		return L_59;
	}

IL_00ed:
	{
		ParameterInfo_t1861056598 * L_60 = V_7;
		Type_t * L_61 = ___attributeType1;
		bool L_62 = ___inherit2;
		AttributeU5BU5D_t1575011174* L_63 = Attribute_GetCustomAttributes_m581407460(NULL /*static, unused*/, L_60, L_61, L_62, /*hidden argument*/NULL);
		return L_63;
	}

IL_00f7:
	{
		RuntimeObject * L_64 = ___attributeProvider0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_64, ICustomAttributeProvider_t1530824137_il2cpp_TypeInfo_var));
		Type_t * L_65 = ___attributeType1;
		if (L_65)
		{
			goto IL_010a;
		}
	}
	{
		RuntimeObject* L_66 = V_1;
		bool L_67 = ___inherit2;
		ObjectU5BU5D_t2843939325* L_68 = InterfaceFuncInvoker1< ObjectU5BU5D_t2843939325*, bool >::Invoke(0 /* System.Object[] System.Reflection.ICustomAttributeProvider::GetCustomAttributes(System.Boolean) */, ICustomAttributeProvider_t1530824137_il2cpp_TypeInfo_var, L_66, L_67);
		G_B27_0 = L_68;
		goto IL_0112;
	}

IL_010a:
	{
		RuntimeObject* L_69 = V_1;
		Type_t * L_70 = ___attributeType1;
		bool L_71 = ___inherit2;
		ObjectU5BU5D_t2843939325* L_72 = InterfaceFuncInvoker2< ObjectU5BU5D_t2843939325*, Type_t *, bool >::Invoke(1 /* System.Object[] System.Reflection.ICustomAttributeProvider::GetCustomAttributes(System.Type,System.Boolean) */, ICustomAttributeProvider_t1530824137_il2cpp_TypeInfo_var, L_69, L_70, L_71);
		G_B27_0 = L_72;
	}

IL_0112:
	{
		return ((AttributeU5BU5D_t1575011174*)Castclass((RuntimeObject*)G_B27_0, AttributeU5BU5D_t1575011174_il2cpp_TypeInfo_var));
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::SplitFullyQualifiedTypeName(System.String,System.String&,System.String&)
extern "C"  void ReflectionUtils_SplitFullyQualifiedTypeName_m956532210 (RuntimeObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName0, String_t** ___typeName1, String_t** ___assemblyName2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_SplitFullyQualifiedTypeName_m956532210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t378540539  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___fullyQualifiedTypeName0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		Nullable_1_t378540539  L_1 = ReflectionUtils_GetAssemblyDelimiterIndex_m2474328121(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = Nullable_1_get_HasValue_m2648265346((&V_0), /*hidden argument*/Nullable_1_get_HasValue_m2648265346_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		String_t** L_3 = ___typeName1;
		String_t* L_4 = ___fullyQualifiedTypeName0;
		int32_t L_5 = Nullable_1_GetValueOrDefault_m2296315628((&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m2296315628_RuntimeMethod_var);
		String_t* L_6 = String_Substring_m1610150815(L_4, 0, L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Trim_m923598732(L_6, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_3)) = (RuntimeObject *)L_7;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_3), (RuntimeObject *)L_7);
		String_t** L_8 = ___assemblyName2;
		String_t* L_9 = ___fullyQualifiedTypeName0;
		int32_t L_10 = Nullable_1_GetValueOrDefault_m2296315628((&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m2296315628_RuntimeMethod_var);
		String_t* L_11 = ___fullyQualifiedTypeName0;
		int32_t L_12 = String_get_Length_m3847582255(L_11, /*hidden argument*/NULL);
		int32_t L_13 = Nullable_1_GetValueOrDefault_m2296315628((&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m2296315628_RuntimeMethod_var);
		String_t* L_14 = String_Substring_m1610150815(L_9, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13)), (int32_t)1)), /*hidden argument*/NULL);
		String_t* L_15 = String_Trim_m923598732(L_14, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_8)) = (RuntimeObject *)L_15;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_8), (RuntimeObject *)L_15);
		return;
	}

IL_004c:
	{
		String_t** L_16 = ___typeName1;
		String_t* L_17 = ___fullyQualifiedTypeName0;
		*((RuntimeObject **)(L_16)) = (RuntimeObject *)L_17;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_16), (RuntimeObject *)L_17);
		String_t** L_18 = ___assemblyName2;
		*((RuntimeObject **)(L_18)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_18), (RuntimeObject *)NULL);
		return;
	}
}
// System.Nullable`1<System.Int32> Newtonsoft.Json.Utilities.ReflectionUtils::GetAssemblyDelimiterIndex(System.String)
extern "C"  Nullable_1_t378540539  ReflectionUtils_GetAssemblyDelimiterIndex_m2474328121 (RuntimeObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetAssemblyDelimiterIndex_m2474328121_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	Nullable_1_t378540539  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0039;
	}

IL_0006:
	{
		String_t* L_0 = ___fullyQualifiedTypeName0;
		int32_t L_1 = V_1;
		Il2CppChar L_2 = String_get_Chars_m2986988803(L_0, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		Il2CppChar L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)44))))
		{
			goto IL_002b;
		}
	}
	{
		Il2CppChar L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)91))))
		{
			goto IL_001f;
		}
	}
	{
		Il2CppChar L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)93))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_001f:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		goto IL_0035;
	}

IL_0025:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_9 = V_1;
		Nullable_1_t378540539  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Nullable_1__ctor_m2076366551((&L_10), L_9, /*hidden argument*/Nullable_1__ctor_m2076366551_RuntimeMethod_var);
		return L_10;
	}

IL_0035:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_12 = V_1;
		String_t* L_13 = ___fullyQualifiedTypeName0;
		int32_t L_14 = String_get_Length_m3847582255(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0006;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t378540539 ));
		Nullable_1_t378540539  L_15 = V_3;
		return L_15;
	}
}
// System.Reflection.MemberInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberInfoFromType(System.Type,System.Reflection.MemberInfo)
extern "C"  MemberInfo_t * ReflectionUtils_GetMemberInfoFromType_m1623736994 (RuntimeObject * __this /* static, unused */, Type_t * ___targetType0, MemberInfo_t * ___memberInfo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetMemberInfoFromType_m1623736994_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PropertyInfo_t * V_1 = NULL;
	TypeU5BU5D_t3940880105* V_2 = NULL;
	Func_2_t3692615456 * G_B3_0 = NULL;
	ParameterInfoU5BU5D_t390618515* G_B3_1 = NULL;
	Func_2_t3692615456 * G_B2_0 = NULL;
	ParameterInfoU5BU5D_t390618515* G_B2_1 = NULL;
	{
		MemberInfo_t * L_0 = ___memberInfo1;
		int32_t L_1 = TypeExtensions_MemberType_m2286386365(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_005b;
		}
	}
	{
		MemberInfo_t * L_3 = ___memberInfo1;
		V_1 = ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_4 = V_1;
		ParameterInfoU5BU5D_t390618515* L_5 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(22 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var);
		Func_2_t3692615456 * L_6 = ((U3CU3Ec_t3587133118_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var))->get_U3CU3E9__37_0_3();
		Func_2_t3692615456 * L_7 = L_6;
		G_B2_0 = L_7;
		G_B2_1 = L_5;
		if (L_7)
		{
			G_B3_0 = L_7;
			G_B3_1 = L_5;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var);
		U3CU3Ec_t3587133118 * L_8 = ((U3CU3Ec_t3587133118_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_9 = (intptr_t)U3CU3Ec_U3CGetMemberInfoFromTypeU3Eb__37_0_m156713168_RuntimeMethod_var;
		Func_2_t3692615456 * L_10 = (Func_2_t3692615456 *)il2cpp_codegen_object_new(Func_2_t3692615456_il2cpp_TypeInfo_var);
		Func_2__ctor_m249082317(L_10, L_8, L_9, /*hidden argument*/Func_2__ctor_m249082317_RuntimeMethod_var);
		Func_2_t3692615456 * L_11 = L_10;
		((U3CU3Ec_t3587133118_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var))->set_U3CU3E9__37_0_3(L_11);
		G_B3_0 = L_11;
		G_B3_1 = G_B2_1;
	}

IL_0038:
	{
		RuntimeObject* L_12 = Enumerable_Select_TisParameterInfo_t1861056598_TisType_t_m1700990983(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B3_1, G_B3_0, /*hidden argument*/Enumerable_Select_TisParameterInfo_t1861056598_TisType_t_m1700990983_RuntimeMethod_var);
		TypeU5BU5D_t3940880105* L_13 = Enumerable_ToArray_TisType_t_m4037995289(NULL /*static, unused*/, L_12, /*hidden argument*/Enumerable_ToArray_TisType_t_m4037995289_RuntimeMethod_var);
		V_2 = L_13;
		Type_t * L_14 = ___targetType0;
		PropertyInfo_t * L_15 = V_1;
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
		PropertyInfo_t * L_17 = V_1;
		Type_t * L_18 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_17);
		TypeU5BU5D_t3940880105* L_19 = V_2;
		PropertyInfo_t * L_20 = Type_GetProperty_m3294104835(L_14, L_16, ((int32_t)60), (Binder_t2999457153 *)NULL, L_18, L_19, (ParameterModifierU5BU5D_t2943407543*)(ParameterModifierU5BU5D_t2943407543*)NULL, /*hidden argument*/NULL);
		return L_20;
	}

IL_005b:
	{
		Type_t * L_21 = ___targetType0;
		MemberInfo_t * L_22 = ___memberInfo1;
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_22);
		MemberInfo_t * L_24 = ___memberInfo1;
		int32_t L_25 = TypeExtensions_MemberType_m2286386365(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		MemberInfoU5BU5D_t1302094432* L_26 = VirtFuncInvoker3< MemberInfoU5BU5D_t1302094432*, String_t*, int32_t, int32_t >::Invoke(52 /* System.Reflection.MemberInfo[] System.Type::GetMember(System.String,System.Reflection.MemberTypes,System.Reflection.BindingFlags) */, L_21, L_23, L_25, ((int32_t)60));
		MemberInfo_t * L_27 = Enumerable_SingleOrDefault_TisMemberInfo_t_m798163977(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_26, /*hidden argument*/Enumerable_SingleOrDefault_TisMemberInfo_t_m798163977_RuntimeMethod_var);
		return L_27;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetFields(System.Type,System.Reflection.BindingFlags)
extern "C"  RuntimeObject* ReflectionUtils_GetFields_m2854570455 (RuntimeObject * __this /* static, unused */, Type_t * ___targetType0, int32_t ___bindingAttr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetFields_m2854570455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___targetType0;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_0, _stringLiteral3252615044, /*hidden argument*/NULL);
		Type_t * L_1 = ___targetType0;
		int32_t L_2 = ___bindingAttr1;
		FieldInfoU5BU5D_t846150980* L_3 = VirtFuncInvoker1< FieldInfoU5BU5D_t846150980*, int32_t >::Invoke(50 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_1, L_2);
		List_1_t557109187 * L_4 = (List_1_t557109187 *)il2cpp_codegen_object_new(List_1_t557109187_il2cpp_TypeInfo_var);
		List_1__ctor_m832393913(L_4, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1__ctor_m832393913_RuntimeMethod_var);
		List_1_t557109187 * L_5 = L_4;
		Type_t * L_6 = ___targetType0;
		int32_t L_7 = ___bindingAttr1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		ReflectionUtils_GetChildPrivateFields_m1505488093(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/NULL);
		RuntimeObject* L_8 = Enumerable_Cast_TisFieldInfo_t_m1416808529(NULL /*static, unused*/, L_5, /*hidden argument*/Enumerable_Cast_TisFieldInfo_t_m1416808529_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetChildPrivateFields(System.Collections.Generic.IList`1<System.Reflection.MemberInfo>,System.Type,System.Reflection.BindingFlags)
extern "C"  void ReflectionUtils_GetChildPrivateFields_m1505488093 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___initialFields0, Type_t * ___targetType1, int32_t ___bindingAttr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetChildPrivateFields_m1505488093_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	Func_2_t1761491126 * G_B4_0 = NULL;
	FieldInfoU5BU5D_t846150980* G_B4_1 = NULL;
	Func_2_t1761491126 * G_B3_0 = NULL;
	FieldInfoU5BU5D_t846150980* G_B3_1 = NULL;
	{
		int32_t L_0 = ___bindingAttr2;
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)32))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_1 = ___bindingAttr2;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		int32_t L_2 = ReflectionUtils_RemoveFlag_m39812133(NULL /*static, unused*/, L_1, ((int32_t)16), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0049;
	}

IL_0011:
	{
		Type_t * L_3 = ___targetType1;
		int32_t L_4 = V_0;
		FieldInfoU5BU5D_t846150980* L_5 = VirtFuncInvoker1< FieldInfoU5BU5D_t846150980*, int32_t >::Invoke(50 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_3, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var);
		Func_2_t1761491126 * L_6 = ((U3CU3Ec_t3587133118_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var))->get_U3CU3E9__39_0_4();
		Func_2_t1761491126 * L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = L_5;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = L_5;
			goto IL_0037;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var);
		U3CU3Ec_t3587133118 * L_8 = ((U3CU3Ec_t3587133118_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_9 = (intptr_t)U3CU3Ec_U3CGetChildPrivateFieldsU3Eb__39_0_m2074452682_RuntimeMethod_var;
		Func_2_t1761491126 * L_10 = (Func_2_t1761491126 *)il2cpp_codegen_object_new(Func_2_t1761491126_il2cpp_TypeInfo_var);
		Func_2__ctor_m3933480653(L_10, L_8, L_9, /*hidden argument*/Func_2__ctor_m3933480653_RuntimeMethod_var);
		Func_2_t1761491126 * L_11 = L_10;
		((U3CU3Ec_t3587133118_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var))->set_U3CU3E9__39_0_4(L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_0037:
	{
		RuntimeObject* L_12 = Enumerable_Where_TisFieldInfo_t_m2487357973(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Where_TisFieldInfo_t_m2487357973_RuntimeMethod_var);
		RuntimeObject* L_13 = Enumerable_Cast_TisMemberInfo_t_m2648121590(NULL /*static, unused*/, L_12, /*hidden argument*/Enumerable_Cast_TisMemberInfo_t_m2648121590_RuntimeMethod_var);
		V_1 = L_13;
		RuntimeObject* L_14 = ___initialFields0;
		RuntimeObject* L_15 = V_1;
		CollectionUtils_AddRange_TisMemberInfo_t_m1468659532(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/CollectionUtils_AddRange_TisMemberInfo_t_m1468659532_RuntimeMethod_var);
	}

IL_0049:
	{
		Type_t * L_16 = ___targetType1;
		Type_t * L_17 = TypeExtensions_BaseType_m1084285535(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		Type_t * L_18 = L_17;
		___targetType1 = L_18;
		if (L_18)
		{
			goto IL_0011;
		}
	}

IL_0054:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetProperties(System.Type,System.Reflection.BindingFlags)
extern "C"  RuntimeObject* ReflectionUtils_GetProperties_m2510843274 (RuntimeObject * __this /* static, unused */, Type_t * ___targetType0, int32_t ___bindingAttr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetProperties_m2510843274_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2159416693 * V_0 = NULL;
	TypeU5BU5D_t3940880105* V_1 = NULL;
	int32_t V_2 = 0;
	Type_t * V_3 = NULL;
	int32_t V_4 = 0;
	PropertyInfo_t * V_5 = NULL;
	PropertyInfo_t * V_6 = NULL;
	{
		Type_t * L_0 = ___targetType0;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_0, _stringLiteral3252615044, /*hidden argument*/NULL);
		Type_t * L_1 = ___targetType0;
		int32_t L_2 = ___bindingAttr1;
		PropertyInfoU5BU5D_t1461822886* L_3 = VirtFuncInvoker1< PropertyInfoU5BU5D_t1461822886*, int32_t >::Invoke(61 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_1, L_2);
		List_1_t2159416693 * L_4 = (List_1_t2159416693 *)il2cpp_codegen_object_new(List_1_t2159416693_il2cpp_TypeInfo_var);
		List_1__ctor_m2781142759(L_4, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1__ctor_m2781142759_RuntimeMethod_var);
		V_0 = L_4;
		Type_t * L_5 = ___targetType0;
		bool L_6 = TypeExtensions_IsInterface_m3543394130(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		Type_t * L_7 = ___targetType0;
		TypeU5BU5D_t3940880105* L_8 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(40 /* System.Type[] System.Type::GetInterfaces() */, L_7);
		V_1 = L_8;
		V_2 = 0;
		goto IL_0040;
	}

IL_002b:
	{
		TypeU5BU5D_t3940880105* L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		Type_t * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		List_1_t2159416693 * L_13 = V_0;
		Type_t * L_14 = V_3;
		int32_t L_15 = ___bindingAttr1;
		PropertyInfoU5BU5D_t1461822886* L_16 = VirtFuncInvoker1< PropertyInfoU5BU5D_t1461822886*, int32_t >::Invoke(61 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_14, L_15);
		List_1_AddRange_m4242658599(L_13, (RuntimeObject*)(RuntimeObject*)L_16, /*hidden argument*/List_1_AddRange_m4242658599_RuntimeMethod_var);
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0040:
	{
		int32_t L_18 = V_2;
		TypeU5BU5D_t3940880105* L_19 = V_1;
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_002b;
		}
	}

IL_0046:
	{
		List_1_t2159416693 * L_20 = V_0;
		Type_t * L_21 = ___targetType0;
		int32_t L_22 = ___bindingAttr1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		ReflectionUtils_GetChildPrivateProperties_m2737051860(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/NULL);
		V_4 = 0;
		goto IL_008c;
	}

IL_0053:
	{
		List_1_t2159416693 * L_23 = V_0;
		int32_t L_24 = V_4;
		PropertyInfo_t * L_25 = List_1_get_Item_m1771064164(L_23, L_24, /*hidden argument*/List_1_get_Item_m1771064164_RuntimeMethod_var);
		V_5 = L_25;
		PropertyInfo_t * L_26 = V_5;
		Type_t * L_27 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_26);
		Type_t * L_28 = ___targetType0;
		if ((((RuntimeObject*)(Type_t *)L_27) == ((RuntimeObject*)(Type_t *)L_28)))
		{
			goto IL_0086;
		}
	}
	{
		PropertyInfo_t * L_29 = V_5;
		Type_t * L_30 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_29);
		PropertyInfo_t * L_31 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		MemberInfo_t * L_32 = ReflectionUtils_GetMemberInfoFromType_m1623736994(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		V_6 = ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_32, PropertyInfo_t_il2cpp_TypeInfo_var));
		List_1_t2159416693 * L_33 = V_0;
		int32_t L_34 = V_4;
		PropertyInfo_t * L_35 = V_6;
		List_1_set_Item_m1136100056(L_33, L_34, L_35, /*hidden argument*/List_1_set_Item_m1136100056_RuntimeMethod_var);
	}

IL_0086:
	{
		int32_t L_36 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_37 = V_4;
		List_1_t2159416693 * L_38 = V_0;
		int32_t L_39 = List_1_get_Count_m4158400089(L_38, /*hidden argument*/List_1_get_Count_m4158400089_RuntimeMethod_var);
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t2159416693 * L_40 = V_0;
		return L_40;
	}
}
// System.Reflection.BindingFlags Newtonsoft.Json.Utilities.ReflectionUtils::RemoveFlag(System.Reflection.BindingFlags,System.Reflection.BindingFlags)
extern "C"  int32_t ReflectionUtils_RemoveFlag_m39812133 (RuntimeObject * __this /* static, unused */, int32_t ___bindingAttr0, int32_t ___flag1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___bindingAttr0;
		int32_t L_1 = ___flag1;
		int32_t L_2 = ___flag1;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((int32_t)L_2)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_3 = ___bindingAttr0;
		return L_3;
	}

IL_0008:
	{
		int32_t L_4 = ___bindingAttr0;
		int32_t L_5 = ___flag1;
		return (int32_t)(((int32_t)((int32_t)L_4^(int32_t)L_5)));
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetChildPrivateProperties(System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>,System.Type,System.Reflection.BindingFlags)
extern "C"  void ReflectionUtils_GetChildPrivateProperties_m2737051860 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___initialProperties0, Type_t * ___targetType1, int32_t ___bindingAttr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetChildPrivateProperties_m2737051860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfoU5BU5D_t1461822886* V_0 = NULL;
	int32_t V_1 = 0;
	PropertyInfo_t * V_2 = NULL;
	U3CU3Ec__DisplayClass42_0_t549567114 * V_3 = NULL;
	int32_t V_4 = 0;
	{
		goto IL_00d6;
	}

IL_0005:
	{
		Type_t * L_0 = ___targetType1;
		int32_t L_1 = ___bindingAttr2;
		PropertyInfoU5BU5D_t1461822886* L_2 = VirtFuncInvoker1< PropertyInfoU5BU5D_t1461822886*, int32_t >::Invoke(61 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_0, L_1);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00cd;
	}

IL_0014:
	{
		PropertyInfoU5BU5D_t1461822886* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		PropertyInfo_t * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		U3CU3Ec__DisplayClass42_0_t549567114 * L_7 = (U3CU3Ec__DisplayClass42_0_t549567114 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass42_0_t549567114_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass42_0__ctor_m3129156399(L_7, /*hidden argument*/NULL);
		V_3 = L_7;
		U3CU3Ec__DisplayClass42_0_t549567114 * L_8 = V_3;
		PropertyInfo_t * L_9 = V_2;
		L_8->set_subTypeProperty_0(L_9);
		U3CU3Ec__DisplayClass42_0_t549567114 * L_10 = V_3;
		PropertyInfo_t * L_11 = L_10->get_subTypeProperty_0();
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_12 = ReflectionUtils_IsPublic_m3896229770(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0078;
		}
	}
	{
		RuntimeObject* L_13 = ___initialProperties0;
		U3CU3Ec__DisplayClass42_0_t549567114 * L_14 = V_3;
		intptr_t L_15 = (intptr_t)U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__0_m3577833364_RuntimeMethod_var;
		Func_2_t2377163032 * L_16 = (Func_2_t2377163032 *)il2cpp_codegen_object_new(Func_2_t2377163032_il2cpp_TypeInfo_var);
		Func_2__ctor_m22287375(L_16, L_14, L_15, /*hidden argument*/Func_2__ctor_m22287375_RuntimeMethod_var);
		int32_t L_17 = CollectionUtils_IndexOf_TisPropertyInfo_t_m2841828123(NULL /*static, unused*/, L_13, L_16, /*hidden argument*/CollectionUtils_IndexOf_TisPropertyInfo_t_m2841828123_RuntimeMethod_var);
		V_4 = L_17;
		int32_t L_18 = V_4;
		if ((!(((uint32_t)L_18) == ((uint32_t)(-1)))))
		{
			goto IL_0059;
		}
	}
	{
		RuntimeObject* L_19 = ___initialProperties0;
		U3CU3Ec__DisplayClass42_0_t549567114 * L_20 = V_3;
		PropertyInfo_t * L_21 = L_20->get_subTypeProperty_0();
		InterfaceActionInvoker1< PropertyInfo_t * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Add(!0) */, ICollection_1_t3515494185_il2cpp_TypeInfo_var, L_19, L_21);
		goto IL_00c9;
	}

IL_0059:
	{
		RuntimeObject* L_22 = ___initialProperties0;
		int32_t L_23 = V_4;
		PropertyInfo_t * L_24 = InterfaceFuncInvoker1< PropertyInfo_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::get_Item(System.Int32) */, IList_1_t2502661734_il2cpp_TypeInfo_var, L_22, L_23);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_25 = ReflectionUtils_IsPublic_m3896229770(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00c9;
		}
	}
	{
		RuntimeObject* L_26 = ___initialProperties0;
		int32_t L_27 = V_4;
		U3CU3Ec__DisplayClass42_0_t549567114 * L_28 = V_3;
		PropertyInfo_t * L_29 = L_28->get_subTypeProperty_0();
		InterfaceActionInvoker2< int32_t, PropertyInfo_t * >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::set_Item(System.Int32,!0) */, IList_1_t2502661734_il2cpp_TypeInfo_var, L_26, L_27, L_29);
		goto IL_00c9;
	}

IL_0078:
	{
		U3CU3Ec__DisplayClass42_0_t549567114 * L_30 = V_3;
		PropertyInfo_t * L_31 = L_30->get_subTypeProperty_0();
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_32 = ReflectionUtils_IsVirtual_m3338583030(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_00a8;
		}
	}
	{
		RuntimeObject* L_33 = ___initialProperties0;
		U3CU3Ec__DisplayClass42_0_t549567114 * L_34 = V_3;
		intptr_t L_35 = (intptr_t)U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__1_m480266349_RuntimeMethod_var;
		Func_2_t2377163032 * L_36 = (Func_2_t2377163032 *)il2cpp_codegen_object_new(Func_2_t2377163032_il2cpp_TypeInfo_var);
		Func_2__ctor_m22287375(L_36, L_34, L_35, /*hidden argument*/Func_2__ctor_m22287375_RuntimeMethod_var);
		int32_t L_37 = CollectionUtils_IndexOf_TisPropertyInfo_t_m2841828123(NULL /*static, unused*/, L_33, L_36, /*hidden argument*/CollectionUtils_IndexOf_TisPropertyInfo_t_m2841828123_RuntimeMethod_var);
		if ((!(((uint32_t)L_37) == ((uint32_t)(-1)))))
		{
			goto IL_00c9;
		}
	}
	{
		RuntimeObject* L_38 = ___initialProperties0;
		U3CU3Ec__DisplayClass42_0_t549567114 * L_39 = V_3;
		PropertyInfo_t * L_40 = L_39->get_subTypeProperty_0();
		InterfaceActionInvoker1< PropertyInfo_t * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Add(!0) */, ICollection_1_t3515494185_il2cpp_TypeInfo_var, L_38, L_40);
		goto IL_00c9;
	}

IL_00a8:
	{
		RuntimeObject* L_41 = ___initialProperties0;
		U3CU3Ec__DisplayClass42_0_t549567114 * L_42 = V_3;
		intptr_t L_43 = (intptr_t)U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__2_m1390801511_RuntimeMethod_var;
		Func_2_t2377163032 * L_44 = (Func_2_t2377163032 *)il2cpp_codegen_object_new(Func_2_t2377163032_il2cpp_TypeInfo_var);
		Func_2__ctor_m22287375(L_44, L_42, L_43, /*hidden argument*/Func_2__ctor_m22287375_RuntimeMethod_var);
		int32_t L_45 = CollectionUtils_IndexOf_TisPropertyInfo_t_m2841828123(NULL /*static, unused*/, L_41, L_44, /*hidden argument*/CollectionUtils_IndexOf_TisPropertyInfo_t_m2841828123_RuntimeMethod_var);
		if ((!(((uint32_t)L_45) == ((uint32_t)(-1)))))
		{
			goto IL_00c9;
		}
	}
	{
		RuntimeObject* L_46 = ___initialProperties0;
		U3CU3Ec__DisplayClass42_0_t549567114 * L_47 = V_3;
		PropertyInfo_t * L_48 = L_47->get_subTypeProperty_0();
		InterfaceActionInvoker1< PropertyInfo_t * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Add(!0) */, ICollection_1_t3515494185_il2cpp_TypeInfo_var, L_46, L_48);
	}

IL_00c9:
	{
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00cd:
	{
		int32_t L_50 = V_1;
		PropertyInfoU5BU5D_t1461822886* L_51 = V_0;
		if ((((int32_t)L_50) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_51)->max_length)))))))
		{
			goto IL_0014;
		}
	}

IL_00d6:
	{
		Type_t * L_52 = ___targetType1;
		Type_t * L_53 = TypeExtensions_BaseType_m1084285535(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		Type_t * L_54 = L_53;
		___targetType1 = L_54;
		if (L_54)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::GetDefaultValue(System.Type)
extern "C"  RuntimeObject * ReflectionUtils_GetDefaultValue_m3591065878 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetDefaultValue_m3591065878_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Guid_t  V_2;
	memset(&V_2, 0, sizeof(V_2));
	DateTimeOffset_t3229287507  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Type_t * L_0 = ___type0;
		bool L_1 = TypeExtensions_IsValueType_m852671066(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return NULL;
	}

IL_000a:
	{
		Type_t * L_2 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ConvertUtils_t2194062972_il2cpp_TypeInfo_var);
		int32_t L_3 = ConvertUtils_GetTypeCode_m66075454(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)2)))
		{
			case 0:
			{
				goto IL_009e;
			}
			case 1:
			{
				goto IL_00ff;
			}
			case 2:
			{
				goto IL_0097;
			}
			case 3:
			{
				goto IL_00ff;
			}
			case 4:
			{
				goto IL_009e;
			}
			case 5:
			{
				goto IL_00ff;
			}
			case 6:
			{
				goto IL_009e;
			}
			case 7:
			{
				goto IL_00ff;
			}
			case 8:
			{
				goto IL_009e;
			}
			case 9:
			{
				goto IL_00ff;
			}
			case 10:
			{
				goto IL_009e;
			}
			case 11:
			{
				goto IL_00ff;
			}
			case 12:
			{
				goto IL_009e;
			}
			case 13:
			{
				goto IL_00ff;
			}
			case 14:
			{
				goto IL_009e;
			}
			case 15:
			{
				goto IL_00ff;
			}
			case 16:
			{
				goto IL_00a5;
			}
			case 17:
			{
				goto IL_00ff;
			}
			case 18:
			{
				goto IL_00a5;
			}
			case 19:
			{
				goto IL_00ff;
			}
			case 20:
			{
				goto IL_00ad;
			}
			case 21:
			{
				goto IL_00ff;
			}
			case 22:
			{
				goto IL_00b8;
			}
			case 23:
			{
				goto IL_00ff;
			}
			case 24:
			{
				goto IL_00d2;
			}
			case 25:
			{
				goto IL_00ff;
			}
			case 26:
			{
				goto IL_00f0;
			}
			case 27:
			{
				goto IL_00ff;
			}
			case 28:
			{
				goto IL_00c7;
			}
			case 29:
			{
				goto IL_00ff;
			}
			case 30:
			{
				goto IL_00e1;
			}
		}
	}
	{
		goto IL_00ff;
	}

IL_0097:
	{
		bool L_5 = ((bool)0);
		RuntimeObject * L_6 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_009e:
	{
		int32_t L_7 = 0;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_00a5:
	{
		int64_t L_9 = (((int64_t)((int64_t)0)));
		RuntimeObject * L_10 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}

IL_00ad:
	{
		float L_11 = (0.0f);
		RuntimeObject * L_12 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}

IL_00b8:
	{
		double L_13 = (0.0);
		RuntimeObject * L_14 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}

IL_00c7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_15 = ((Decimal_t2948259380_StaticFields*)il2cpp_codegen_static_fields_for(Decimal_t2948259380_il2cpp_TypeInfo_var))->get_Zero_4();
		Decimal_t2948259380  L_16 = L_15;
		RuntimeObject * L_17 = Box(Decimal_t2948259380_il2cpp_TypeInfo_var, &L_16);
		return L_17;
	}

IL_00d2:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(DateTime_t3738529785 ));
		DateTime_t3738529785  L_18 = V_1;
		DateTime_t3738529785  L_19 = L_18;
		RuntimeObject * L_20 = Box(DateTime_t3738529785_il2cpp_TypeInfo_var, &L_19);
		return L_20;
	}

IL_00e1:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Guid_t ));
		Guid_t  L_21 = V_2;
		Guid_t  L_22 = L_21;
		RuntimeObject * L_23 = Box(Guid_t_il2cpp_TypeInfo_var, &L_22);
		return L_23;
	}

IL_00f0:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(DateTimeOffset_t3229287507 ));
		DateTimeOffset_t3229287507  L_24 = V_3;
		DateTimeOffset_t3229287507  L_25 = L_24;
		RuntimeObject * L_26 = Box(DateTimeOffset_t3229287507_il2cpp_TypeInfo_var, &L_25);
		return L_26;
	}

IL_00ff:
	{
		Type_t * L_27 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_28 = ReflectionUtils_IsNullable_m645225420(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0109;
		}
	}
	{
		return NULL;
	}

IL_0109:
	{
		Type_t * L_29 = ___type0;
		RuntimeObject * L_30 = Activator_CreateInstance_m3631483688(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		return L_30;
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
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.cctor()
extern "C"  void U3CU3Ec__cctor_m3974653786 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m3974653786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3587133118 * L_0 = (U3CU3Ec_t3587133118 *)il2cpp_codegen_object_new(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m999993876(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3587133118_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3587133118_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.ctor()
extern "C"  void U3CU3Ec__ctor_m999993876 (U3CU3Ec_t3587133118 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetDefaultConstructor>b__10_0(System.Reflection.ConstructorInfo)
extern "C"  bool U3CU3Ec_U3CGetDefaultConstructorU3Eb__10_0_m1917227267 (U3CU3Ec_t3587133118 * __this, ConstructorInfo_t5769829 * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CGetDefaultConstructorU3Eb__10_0_m1917227267_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t5769829 * L_0 = ___c0;
		ParameterInfoU5BU5D_t390618515* L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		bool L_2 = Enumerable_Any_TisParameterInfo_t1861056598_m2308149110(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/Enumerable_Any_TisParameterInfo_t1861056598_m2308149110_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetFieldsAndProperties>b__29_0(System.Reflection.MemberInfo)
extern "C"  String_t* U3CU3Ec_U3CGetFieldsAndPropertiesU3Eb__29_0_m3758209495 (U3CU3Ec_t3587133118 * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = ___m0;
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetMemberInfoFromType>b__37_0(System.Reflection.ParameterInfo)
extern "C"  Type_t * U3CU3Ec_U3CGetMemberInfoFromTypeU3Eb__37_0_m156713168 (U3CU3Ec_t3587133118 * __this, ParameterInfo_t1861056598 * ___p0, const RuntimeMethod* method)
{
	{
		ParameterInfo_t1861056598 * L_0 = ___p0;
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetChildPrivateFields>b__39_0(System.Reflection.FieldInfo)
extern "C"  bool U3CU3Ec_U3CGetChildPrivateFieldsU3Eb__39_0_m2074452682 (U3CU3Ec_t3587133118 * __this, FieldInfo_t * ___f0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = ___f0;
		bool L_1 = FieldInfo_get_IsPrivate_m1717932363(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass42_0__ctor_m3129156399 (U3CU3Ec__DisplayClass42_0_t549567114 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::<GetChildPrivateProperties>b__0(System.Reflection.PropertyInfo)
extern "C"  bool U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__0_m3577833364 (U3CU3Ec__DisplayClass42_0_t549567114 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__0_m3577833364_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___p0;
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::<GetChildPrivateProperties>b__1(System.Reflection.PropertyInfo)
extern "C"  bool U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__1_m480266349 (U3CU3Ec__DisplayClass42_0_t549567114 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__1_m480266349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___p0;
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		PropertyInfo_t * L_5 = ___p0;
		Type_t * L_6 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_5);
		PropertyInfo_t * L_7 = __this->get_subTypeProperty_0();
		Type_t * L_8 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		return (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
	}

IL_002c:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::<GetChildPrivateProperties>b__2(System.Reflection.PropertyInfo)
extern "C"  bool U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__2_m1390801511 (U3CU3Ec__DisplayClass42_0_t549567114 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__2_m1390801511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___p0;
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		PropertyInfo_t * L_5 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		bool L_6 = ReflectionUtils_IsVirtual_m3338583030(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		PropertyInfo_t * L_7 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		MethodInfo_t * L_8 = ReflectionUtils_GetBaseDefinition_m628546257(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		PropertyInfo_t * L_9 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2669115404_il2cpp_TypeInfo_var);
		MethodInfo_t * L_10 = ReflectionUtils_GetBaseDefinition_m628546257(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Type_t * L_11 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_10);
		PropertyInfo_t * L_12 = __this->get_subTypeProperty_0();
		MethodInfo_t * L_13 = ReflectionUtils_GetBaseDefinition_m628546257(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		Type_t * L_14 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_13);
		bool L_15 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_11, L_14);
		return L_15;
	}

IL_0049:
	{
		return (bool)0;
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
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass43_0__ctor_m3129159598 (U3CU3Ec__DisplayClass43_0_t549567113 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.StringBuffer
extern "C" void StringBuffer_t2235727887_marshal_pinvoke(const StringBuffer_t2235727887& unmarshaled, StringBuffer_t2235727887_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get__buffer_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__buffer_Length = (unmarshaled.get__buffer_0())->max_length;
		marshaled.____buffer_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__buffer_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__buffer_Length); i++)
		{
			(marshaled.____buffer_0)[i] = static_cast<uint8_t>((unmarshaled.get__buffer_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____buffer_0 = NULL;
	}
	marshaled.____position_1 = unmarshaled.get__position_1();
}
extern "C" void StringBuffer_t2235727887_marshal_pinvoke_back(const StringBuffer_t2235727887_marshaled_pinvoke& marshaled, StringBuffer_t2235727887& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringBuffer_t2235727887_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____buffer_0 != NULL)
	{
		if (unmarshaled.get__buffer_0() == NULL)
		{
			unmarshaled.set__buffer_0(reinterpret_cast<CharU5BU5D_t3528271667*>(SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__buffer_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__buffer_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____buffer_0)[i]));
		}
	}
	int32_t unmarshaled__position_temp_1 = 0;
	unmarshaled__position_temp_1 = marshaled.____position_1;
	unmarshaled.set__position_1(unmarshaled__position_temp_1);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.StringBuffer
extern "C" void StringBuffer_t2235727887_marshal_pinvoke_cleanup(StringBuffer_t2235727887_marshaled_pinvoke& marshaled)
{
	if (marshaled.____buffer_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____buffer_0);
		marshaled.____buffer_0 = NULL;
	}
}
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.StringBuffer
extern "C" void StringBuffer_t2235727887_marshal_com(const StringBuffer_t2235727887& unmarshaled, StringBuffer_t2235727887_marshaled_com& marshaled)
{
	if (unmarshaled.get__buffer_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__buffer_Length = (unmarshaled.get__buffer_0())->max_length;
		marshaled.____buffer_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__buffer_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__buffer_Length); i++)
		{
			(marshaled.____buffer_0)[i] = static_cast<uint8_t>((unmarshaled.get__buffer_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____buffer_0 = NULL;
	}
	marshaled.____position_1 = unmarshaled.get__position_1();
}
extern "C" void StringBuffer_t2235727887_marshal_com_back(const StringBuffer_t2235727887_marshaled_com& marshaled, StringBuffer_t2235727887& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringBuffer_t2235727887_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____buffer_0 != NULL)
	{
		if (unmarshaled.get__buffer_0() == NULL)
		{
			unmarshaled.set__buffer_0(reinterpret_cast<CharU5BU5D_t3528271667*>(SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__buffer_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__buffer_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____buffer_0)[i]));
		}
	}
	int32_t unmarshaled__position_temp_1 = 0;
	unmarshaled__position_temp_1 = marshaled.____position_1;
	unmarshaled.set__position_1(unmarshaled__position_temp_1);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.StringBuffer
extern "C" void StringBuffer_t2235727887_marshal_com_cleanup(StringBuffer_t2235727887_marshaled_com& marshaled)
{
	if (marshaled.____buffer_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____buffer_0);
		marshaled.____buffer_0 = NULL;
	}
}
// System.Int32 Newtonsoft.Json.Utilities.StringBuffer::get_Position()
extern "C"  int32_t StringBuffer_get_Position_m2575134391 (StringBuffer_t2235727887 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__position_1();
		return L_0;
	}
}
extern "C"  int32_t StringBuffer_get_Position_m2575134391_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	StringBuffer_t2235727887 * _thisAdjusted = reinterpret_cast<StringBuffer_t2235727887 *>(__this + 1);
	return StringBuffer_get_Position_m2575134391(_thisAdjusted, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::set_Position(System.Int32)
extern "C"  void StringBuffer_set_Position_m3776098892 (StringBuffer_t2235727887 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__position_1(L_0);
		return;
	}
}
extern "C"  void StringBuffer_set_Position_m3776098892_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	StringBuffer_t2235727887 * _thisAdjusted = reinterpret_cast<StringBuffer_t2235727887 *>(__this + 1);
	StringBuffer_set_Position_m3776098892(_thisAdjusted, ___value0, method);
}
// System.Boolean Newtonsoft.Json.Utilities.StringBuffer::get_IsEmpty()
extern "C"  bool StringBuffer_get_IsEmpty_m1286579341 (StringBuffer_t2235727887 * __this, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t3528271667* L_0 = __this->get__buffer_0();
		return (bool)((((RuntimeObject*)(CharU5BU5D_t3528271667*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}
}
extern "C"  bool StringBuffer_get_IsEmpty_m1286579341_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	StringBuffer_t2235727887 * _thisAdjusted = reinterpret_cast<StringBuffer_t2235727887 *>(__this + 1);
	return StringBuffer_get_IsEmpty_m1286579341(_thisAdjusted, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
extern "C"  void StringBuffer__ctor_m83474316 (StringBuffer_t2235727887 * __this, RuntimeObject* ___bufferPool0, int32_t ___initalSize1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___bufferPool0;
		int32_t L_1 = ___initalSize1;
		CharU5BU5D_t3528271667* L_2 = BufferUtils_RentBuffer_m2229979349(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		StringBuffer__ctor_m108922253(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void StringBuffer__ctor_m83474316_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___bufferPool0, int32_t ___initalSize1, const RuntimeMethod* method)
{
	StringBuffer_t2235727887 * _thisAdjusted = reinterpret_cast<StringBuffer_t2235727887 *>(__this + 1);
	StringBuffer__ctor_m83474316(_thisAdjusted, ___bufferPool0, ___initalSize1, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor(System.Char[])
extern "C"  void StringBuffer__ctor_m108922253 (StringBuffer_t2235727887 * __this, CharU5BU5D_t3528271667* ___buffer0, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t3528271667* L_0 = ___buffer0;
		__this->set__buffer_0(L_0);
		__this->set__position_1(0);
		return;
	}
}
extern "C"  void StringBuffer__ctor_m108922253_AdjustorThunk (RuntimeObject * __this, CharU5BU5D_t3528271667* ___buffer0, const RuntimeMethod* method)
{
	StringBuffer_t2235727887 * _thisAdjusted = reinterpret_cast<StringBuffer_t2235727887 *>(__this + 1);
	StringBuffer__ctor_m108922253(_thisAdjusted, ___buffer0, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Append(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char)
extern "C"  void StringBuffer_Append_m1645108833 (StringBuffer_t2235727887 * __this, RuntimeObject* ___bufferPool0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get__position_1();
		CharU5BU5D_t3528271667* L_1 = __this->get__buffer_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))))))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_2 = ___bufferPool0;
		StringBuffer_EnsureSize_m377227120(__this, L_2, 1, /*hidden argument*/NULL);
	}

IL_0018:
	{
		CharU5BU5D_t3528271667* L_3 = __this->get__buffer_0();
		int32_t L_4 = __this->get__position_1();
		V_0 = L_4;
		int32_t L_5 = V_0;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		int32_t L_6 = V_0;
		Il2CppChar L_7 = ___value1;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (Il2CppChar)L_7);
		return;
	}
}
extern "C"  void StringBuffer_Append_m1645108833_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___bufferPool0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	StringBuffer_t2235727887 * _thisAdjusted = reinterpret_cast<StringBuffer_t2235727887 *>(__this + 1);
	StringBuffer_Append_m1645108833(_thisAdjusted, ___bufferPool0, ___value1, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Append(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[],System.Int32,System.Int32)
extern "C"  void StringBuffer_Append_m109955405 (StringBuffer_t2235727887 * __this, RuntimeObject* ___bufferPool0, CharU5BU5D_t3528271667* ___buffer1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__position_1();
		int32_t L_1 = ___count3;
		CharU5BU5D_t3528271667* L_2 = __this->get__buffer_0();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_3 = ___bufferPool0;
		int32_t L_4 = ___count3;
		StringBuffer_EnsureSize_m377227120(__this, L_3, L_4, /*hidden argument*/NULL);
	}

IL_001c:
	{
		CharU5BU5D_t3528271667* L_5 = ___buffer1;
		int32_t L_6 = ___startIndex2;
		CharU5BU5D_t3528271667* L_7 = __this->get__buffer_0();
		int32_t L_8 = __this->get__position_1();
		int32_t L_9 = ___count3;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_5, L_6, (RuntimeArray *)(RuntimeArray *)L_7, L_8, L_9, /*hidden argument*/NULL);
		int32_t L_10 = __this->get__position_1();
		int32_t L_11 = ___count3;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)));
		return;
	}
}
extern "C"  void StringBuffer_Append_m109955405_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___bufferPool0, CharU5BU5D_t3528271667* ___buffer1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method)
{
	StringBuffer_t2235727887 * _thisAdjusted = reinterpret_cast<StringBuffer_t2235727887 *>(__this + 1);
	StringBuffer_Append_m109955405(_thisAdjusted, ___bufferPool0, ___buffer1, ___startIndex2, ___count3, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Clear(Newtonsoft.Json.IArrayPool`1<System.Char>)
extern "C"  void StringBuffer_Clear_m2783062614 (StringBuffer_t2235727887 * __this, RuntimeObject* ___bufferPool0, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t3528271667* L_0 = __this->get__buffer_0();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = ___bufferPool0;
		CharU5BU5D_t3528271667* L_2 = __this->get__buffer_0();
		BufferUtils_ReturnBuffer_m1757235126(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		__this->set__buffer_0((CharU5BU5D_t3528271667*)NULL);
	}

IL_001b:
	{
		__this->set__position_1(0);
		return;
	}
}
extern "C"  void StringBuffer_Clear_m2783062614_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___bufferPool0, const RuntimeMethod* method)
{
	StringBuffer_t2235727887 * _thisAdjusted = reinterpret_cast<StringBuffer_t2235727887 *>(__this + 1);
	StringBuffer_Clear_m2783062614(_thisAdjusted, ___bufferPool0, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::EnsureSize(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
extern "C"  void StringBuffer_EnsureSize_m377227120 (StringBuffer_t2235727887 * __this, RuntimeObject* ___bufferPool0, int32_t ___appendLength1, const RuntimeMethod* method)
{
	CharU5BU5D_t3528271667* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___bufferPool0;
		int32_t L_1 = __this->get__position_1();
		int32_t L_2 = ___appendLength1;
		CharU5BU5D_t3528271667* L_3 = BufferUtils_RentBuffer_m2229979349(NULL /*static, unused*/, L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), (int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_3;
		CharU5BU5D_t3528271667* L_4 = __this->get__buffer_0();
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		CharU5BU5D_t3528271667* L_5 = __this->get__buffer_0();
		CharU5BU5D_t3528271667* L_6 = V_0;
		int32_t L_7 = __this->get__position_1();
		Array_Copy_m1988217701(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_5, (RuntimeArray *)(RuntimeArray *)L_6, L_7, /*hidden argument*/NULL);
		RuntimeObject* L_8 = ___bufferPool0;
		CharU5BU5D_t3528271667* L_9 = __this->get__buffer_0();
		BufferUtils_ReturnBuffer_m1757235126(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0037:
	{
		CharU5BU5D_t3528271667* L_10 = V_0;
		__this->set__buffer_0(L_10);
		return;
	}
}
extern "C"  void StringBuffer_EnsureSize_m377227120_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___bufferPool0, int32_t ___appendLength1, const RuntimeMethod* method)
{
	StringBuffer_t2235727887 * _thisAdjusted = reinterpret_cast<StringBuffer_t2235727887 *>(__this + 1);
	StringBuffer_EnsureSize_m377227120(_thisAdjusted, ___bufferPool0, ___appendLength1, method);
}
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString()
extern "C"  String_t* StringBuffer_ToString_m2736734392 (StringBuffer_t2235727887 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__position_1();
		String_t* L_1 = StringBuffer_ToString_m3112979436(__this, 0, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* StringBuffer_ToString_m2736734392_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	StringBuffer_t2235727887 * _thisAdjusted = reinterpret_cast<StringBuffer_t2235727887 *>(__this + 1);
	return StringBuffer_ToString_m2736734392(_thisAdjusted, method);
}
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString(System.Int32,System.Int32)
extern "C"  String_t* StringBuffer_ToString_m3112979436 (StringBuffer_t2235727887 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t3528271667* L_0 = __this->get__buffer_0();
		int32_t L_1 = ___start0;
		int32_t L_2 = ___length1;
		String_t* L_3 = String_CreateString_m860434552(NULL, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
extern "C"  String_t* StringBuffer_ToString_m3112979436_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	StringBuffer_t2235727887 * _thisAdjusted = reinterpret_cast<StringBuffer_t2235727887 *>(__this + 1);
	return StringBuffer_ToString_m3112979436(_thisAdjusted, ___start0, ___length1, method);
}
// System.Char[] Newtonsoft.Json.Utilities.StringBuffer::get_InternalBuffer()
extern "C"  CharU5BU5D_t3528271667* StringBuffer_get_InternalBuffer_m2608640496 (StringBuffer_t2235727887 * __this, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t3528271667* L_0 = __this->get__buffer_0();
		return L_0;
	}
}
extern "C"  CharU5BU5D_t3528271667* StringBuffer_get_InternalBuffer_m2608640496_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	StringBuffer_t2235727887 * _thisAdjusted = reinterpret_cast<StringBuffer_t2235727887 *>(__this + 1);
	return StringBuffer_get_InternalBuffer_m2608640496(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.StringReference
extern "C" void StringReference_t2912309144_marshal_pinvoke(const StringReference_t2912309144& unmarshaled, StringReference_t2912309144_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get__chars_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__chars_Length = (unmarshaled.get__chars_0())->max_length;
		marshaled.____chars_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__chars_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__chars_Length); i++)
		{
			(marshaled.____chars_0)[i] = static_cast<uint8_t>((unmarshaled.get__chars_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____chars_0 = NULL;
	}
	marshaled.____startIndex_1 = unmarshaled.get__startIndex_1();
	marshaled.____length_2 = unmarshaled.get__length_2();
}
extern "C" void StringReference_t2912309144_marshal_pinvoke_back(const StringReference_t2912309144_marshaled_pinvoke& marshaled, StringReference_t2912309144& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringReference_t2912309144_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____chars_0 != NULL)
	{
		if (unmarshaled.get__chars_0() == NULL)
		{
			unmarshaled.set__chars_0(reinterpret_cast<CharU5BU5D_t3528271667*>(SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__chars_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__chars_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____chars_0)[i]));
		}
	}
	int32_t unmarshaled__startIndex_temp_1 = 0;
	unmarshaled__startIndex_temp_1 = marshaled.____startIndex_1;
	unmarshaled.set__startIndex_1(unmarshaled__startIndex_temp_1);
	int32_t unmarshaled__length_temp_2 = 0;
	unmarshaled__length_temp_2 = marshaled.____length_2;
	unmarshaled.set__length_2(unmarshaled__length_temp_2);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.StringReference
extern "C" void StringReference_t2912309144_marshal_pinvoke_cleanup(StringReference_t2912309144_marshaled_pinvoke& marshaled)
{
	if (marshaled.____chars_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____chars_0);
		marshaled.____chars_0 = NULL;
	}
}
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.StringReference
extern "C" void StringReference_t2912309144_marshal_com(const StringReference_t2912309144& unmarshaled, StringReference_t2912309144_marshaled_com& marshaled)
{
	if (unmarshaled.get__chars_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__chars_Length = (unmarshaled.get__chars_0())->max_length;
		marshaled.____chars_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__chars_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__chars_Length); i++)
		{
			(marshaled.____chars_0)[i] = static_cast<uint8_t>((unmarshaled.get__chars_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____chars_0 = NULL;
	}
	marshaled.____startIndex_1 = unmarshaled.get__startIndex_1();
	marshaled.____length_2 = unmarshaled.get__length_2();
}
extern "C" void StringReference_t2912309144_marshal_com_back(const StringReference_t2912309144_marshaled_com& marshaled, StringReference_t2912309144& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringReference_t2912309144_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____chars_0 != NULL)
	{
		if (unmarshaled.get__chars_0() == NULL)
		{
			unmarshaled.set__chars_0(reinterpret_cast<CharU5BU5D_t3528271667*>(SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__chars_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__chars_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____chars_0)[i]));
		}
	}
	int32_t unmarshaled__startIndex_temp_1 = 0;
	unmarshaled__startIndex_temp_1 = marshaled.____startIndex_1;
	unmarshaled.set__startIndex_1(unmarshaled__startIndex_temp_1);
	int32_t unmarshaled__length_temp_2 = 0;
	unmarshaled__length_temp_2 = marshaled.____length_2;
	unmarshaled.set__length_2(unmarshaled__length_temp_2);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.StringReference
extern "C" void StringReference_t2912309144_marshal_com_cleanup(StringReference_t2912309144_marshaled_com& marshaled)
{
	if (marshaled.____chars_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____chars_0);
		marshaled.____chars_0 = NULL;
	}
}
// System.Char Newtonsoft.Json.Utilities.StringReference::get_Item(System.Int32)
extern "C"  Il2CppChar StringReference_get_Item_m2821876239 (StringReference_t2912309144 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t3528271667* L_0 = __this->get__chars_0();
		int32_t L_1 = ___i0;
		int32_t L_2 = L_1;
		uint16_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
extern "C"  Il2CppChar StringReference_get_Item_m2821876239_AdjustorThunk (RuntimeObject * __this, int32_t ___i0, const RuntimeMethod* method)
{
	StringReference_t2912309144 * _thisAdjusted = reinterpret_cast<StringReference_t2912309144 *>(__this + 1);
	return StringReference_get_Item_m2821876239(_thisAdjusted, ___i0, method);
}
// System.Char[] Newtonsoft.Json.Utilities.StringReference::get_Chars()
extern "C"  CharU5BU5D_t3528271667* StringReference_get_Chars_m1428785588 (StringReference_t2912309144 * __this, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t3528271667* L_0 = __this->get__chars_0();
		return L_0;
	}
}
extern "C"  CharU5BU5D_t3528271667* StringReference_get_Chars_m1428785588_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	StringReference_t2912309144 * _thisAdjusted = reinterpret_cast<StringReference_t2912309144 *>(__this + 1);
	return StringReference_get_Chars_m1428785588(_thisAdjusted, method);
}
// System.Int32 Newtonsoft.Json.Utilities.StringReference::get_StartIndex()
extern "C"  int32_t StringReference_get_StartIndex_m577516227 (StringReference_t2912309144 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__startIndex_1();
		return L_0;
	}
}
extern "C"  int32_t StringReference_get_StartIndex_m577516227_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	StringReference_t2912309144 * _thisAdjusted = reinterpret_cast<StringReference_t2912309144 *>(__this + 1);
	return StringReference_get_StartIndex_m577516227(_thisAdjusted, method);
}
// System.Int32 Newtonsoft.Json.Utilities.StringReference::get_Length()
extern "C"  int32_t StringReference_get_Length_m1881544084 (StringReference_t2912309144 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__length_2();
		return L_0;
	}
}
extern "C"  int32_t StringReference_get_Length_m1881544084_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	StringReference_t2912309144 * _thisAdjusted = reinterpret_cast<StringReference_t2912309144 *>(__this + 1);
	return StringReference_get_Length_m1881544084(_thisAdjusted, method);
}
// System.Void Newtonsoft.Json.Utilities.StringReference::.ctor(System.Char[],System.Int32,System.Int32)
extern "C"  void StringReference__ctor_m345645319 (StringReference_t2912309144 * __this, CharU5BU5D_t3528271667* ___chars0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t3528271667* L_0 = ___chars0;
		__this->set__chars_0(L_0);
		int32_t L_1 = ___startIndex1;
		__this->set__startIndex_1(L_1);
		int32_t L_2 = ___length2;
		__this->set__length_2(L_2);
		return;
	}
}
extern "C"  void StringReference__ctor_m345645319_AdjustorThunk (RuntimeObject * __this, CharU5BU5D_t3528271667* ___chars0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	StringReference_t2912309144 * _thisAdjusted = reinterpret_cast<StringReference_t2912309144 *>(__this + 1);
	StringReference__ctor_m345645319(_thisAdjusted, ___chars0, ___startIndex1, ___length2, method);
}
// System.String Newtonsoft.Json.Utilities.StringReference::ToString()
extern "C"  String_t* StringReference_ToString_m3051914173 (StringReference_t2912309144 * __this, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t3528271667* L_0 = __this->get__chars_0();
		int32_t L_1 = __this->get__startIndex_1();
		int32_t L_2 = __this->get__length_2();
		String_t* L_3 = String_CreateString_m860434552(NULL, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
extern "C"  String_t* StringReference_ToString_m3051914173_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	StringReference_t2912309144 * _thisAdjusted = reinterpret_cast<StringReference_t2912309144 *>(__this + 1);
	return StringReference_ToString_m3051914173(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Newtonsoft.Json.Utilities.StringReferenceExtensions::IndexOf(Newtonsoft.Json.Utilities.StringReference,System.Char,System.Int32,System.Int32)
extern "C"  int32_t StringReferenceExtensions_IndexOf_m2457125624 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___s0, Il2CppChar ___c1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringReferenceExtensions_IndexOf_m2457125624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t3528271667* L_0 = StringReference_get_Chars_m1428785588((&___s0), /*hidden argument*/NULL);
		Il2CppChar L_1 = ___c1;
		int32_t L_2 = StringReference_get_StartIndex_m577516227((&___s0), /*hidden argument*/NULL);
		int32_t L_3 = ___startIndex2;
		int32_t L_4 = ___length3;
		int32_t L_5 = Array_IndexOf_TisChar_t3634460470_m1523447194(NULL /*static, unused*/, L_0, L_1, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), L_4, /*hidden argument*/Array_IndexOf_TisChar_t3634460470_m1523447194_RuntimeMethod_var);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		return (-1);
	}

IL_001e:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = StringReference_get_StartIndex_m577516227((&___s0), /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
	}
}
// System.Boolean Newtonsoft.Json.Utilities.StringReferenceExtensions::StartsWith(Newtonsoft.Json.Utilities.StringReference,System.String)
extern "C"  bool StringReferenceExtensions_StartsWith_m3064397327 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___s0, String_t* ___text1, const RuntimeMethod* method)
{
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___text1;
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		int32_t L_2 = StringReference_get_Length_m1881544084((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		CharU5BU5D_t3528271667* L_3 = StringReference_get_Chars_m1428785588((&___s0), /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0037;
	}

IL_001d:
	{
		String_t* L_4 = ___text1;
		int32_t L_5 = V_1;
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_4, L_5, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = StringReference_get_StartIndex_m577516227((&___s0), /*hidden argument*/NULL);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9));
		uint16_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_6) == ((int32_t)L_11)))
		{
			goto IL_0033;
		}
	}
	{
		return (bool)0;
	}

IL_0033:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0037:
	{
		int32_t L_13 = V_1;
		String_t* L_14 = ___text1;
		int32_t L_15 = String_get_Length_m3847582255(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_001d;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.StringReferenceExtensions::EndsWith(Newtonsoft.Json.Utilities.StringReference,System.String)
extern "C"  bool StringReferenceExtensions_EndsWith_m2070211976 (RuntimeObject * __this /* static, unused */, StringReference_t2912309144  ___s0, String_t* ___text1, const RuntimeMethod* method)
{
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___text1;
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		int32_t L_2 = StringReference_get_Length_m1881544084((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		CharU5BU5D_t3528271667* L_3 = StringReference_get_Chars_m1428785588((&___s0), /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = StringReference_get_StartIndex_m577516227((&___s0), /*hidden argument*/NULL);
		int32_t L_5 = StringReference_get_Length_m1881544084((&___s0), /*hidden argument*/NULL);
		String_t* L_6 = ___text1;
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)), (int32_t)L_7));
		V_2 = 0;
		goto IL_0048;
	}

IL_0034:
	{
		String_t* L_8 = ___text1;
		int32_t L_9 = V_2;
		Il2CppChar L_10 = String_get_Chars_m2986988803(L_8, L_9, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_11 = V_0;
		int32_t L_12 = V_2;
		int32_t L_13 = V_1;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		uint16_t L_15 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		if ((((int32_t)L_10) == ((int32_t)L_15)))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0044:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_17 = V_2;
		String_t* L_18 = ___text1;
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)1;
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
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m3056805521 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_m3056805521_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		ObjectU5BU5D_t2843939325* L_2 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject * L_3 = ___arg02;
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		String_t* L_4 = StringUtils_FormatWith_m1786611224(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m353537829 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_m353537829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		ObjectU5BU5D_t2843939325* L_2 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject * L_3 = ___arg02;
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_2;
		RuntimeObject * L_5 = ___arg13;
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		String_t* L_6 = StringUtils_FormatWith_m1786611224(NULL /*static, unused*/, L_0, L_1, L_4, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m17931563 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, RuntimeObject * ___arg24, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_m17931563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		ObjectU5BU5D_t2843939325* L_2 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeObject * L_3 = ___arg02;
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_2;
		RuntimeObject * L_5 = ___arg13;
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_4;
		RuntimeObject * L_7 = ___arg24;
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		String_t* L_8 = StringUtils_FormatWith_m1786611224(NULL /*static, unused*/, L_0, L_1, L_6, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object,System.Object,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m2539955297 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, RuntimeObject * ___arg24, RuntimeObject * ___arg35, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_m2539955297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		ObjectU5BU5D_t2843939325* L_2 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		RuntimeObject * L_3 = ___arg02;
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_2;
		RuntimeObject * L_5 = ___arg13;
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_4;
		RuntimeObject * L_7 = ___arg24;
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_6;
		RuntimeObject * L_9 = ___arg35;
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		String_t* L_10 = StringUtils_FormatWith_m1786611224(NULL /*static, unused*/, L_0, L_1, L_8, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object[])
extern "C"  String_t* StringUtils_FormatWith_m1786611224 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject* ___provider1, ObjectU5BU5D_t2843939325* ___args2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_m1786611224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		ValidationUtils_ArgumentNotNull_m5418296(NULL /*static, unused*/, L_0, _stringLiteral446157247, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___provider1;
		String_t* L_2 = ___format0;
		ObjectU5BU5D_t2843939325* L_3 = ___args2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m1881875187(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.IO.StringWriter Newtonsoft.Json.Utilities.StringUtils::CreateStringWriter(System.Int32)
extern "C"  StringWriter_t802263757 * StringUtils_CreateStringWriter_m3876739792 (RuntimeObject * __this /* static, unused */, int32_t ___capacity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_CreateStringWriter_m3876739792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___capacity0;
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_2 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		StringWriter_t802263757 * L_3 = (StringWriter_t802263757 *)il2cpp_codegen_object_new(StringWriter_t802263757_il2cpp_TypeInfo_var);
		StringWriter__ctor_m3987072682(L_3, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Nullable`1<System.Int32> Newtonsoft.Json.Utilities.StringUtils::GetLength(System.String)
extern "C"  Nullable_1_t378540539  StringUtils_GetLength_m3427840909 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_GetLength_m3427840909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t378540539  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t378540539 ));
		Nullable_1_t378540539  L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___value0;
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		Nullable_1_t378540539  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Nullable_1__ctor_m2076366551((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m2076366551_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Newtonsoft.Json.Utilities.StringUtils::ToCharAsUnicode(System.Char,System.Char[])
extern "C"  void StringUtils_ToCharAsUnicode_m1857241640 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, CharU5BU5D_t3528271667* ___buffer1, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t3528271667* L_0 = ___buffer1;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t3528271667* L_1 = ___buffer1;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)117));
		CharU5BU5D_t3528271667* L_2 = ___buffer1;
		Il2CppChar L_3 = ___c0;
		Il2CppChar L_4 = MathUtils_IntToHex_m1986186787(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_3>>(int32_t)((int32_t)12)))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Il2CppChar)L_4);
		CharU5BU5D_t3528271667* L_5 = ___buffer1;
		Il2CppChar L_6 = ___c0;
		Il2CppChar L_7 = MathUtils_IntToHex_m1986186787(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_6>>(int32_t)8))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Il2CppChar)L_7);
		CharU5BU5D_t3528271667* L_8 = ___buffer1;
		Il2CppChar L_9 = ___c0;
		Il2CppChar L_10 = MathUtils_IntToHex_m1986186787(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_9>>(int32_t)4))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (Il2CppChar)L_10);
		CharU5BU5D_t3528271667* L_11 = ___buffer1;
		Il2CppChar L_12 = ___c0;
		Il2CppChar L_13 = MathUtils_IntToHex_m1986186787(NULL /*static, unused*/, ((int32_t)((int32_t)L_12&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (Il2CppChar)L_13);
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.StringUtils::ToCamelCase(System.String)
extern "C"  String_t* StringUtils_ToCamelCase_m614090145 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_ToCamelCase_m614090145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		String_t* L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_2 = ___s0;
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_2, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_4 = Char_IsUpper_m3564669513(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		String_t* L_5 = ___s0;
		return L_5;
	}

IL_0018:
	{
		String_t* L_6 = ___s0;
		CharU5BU5D_t3528271667* L_7 = String_ToCharArray_m1492846834(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		V_1 = 0;
		goto IL_0062;
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		CharU5BU5D_t3528271667* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		uint16_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_13 = Char_IsUpper_m3564669513(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0068;
		}
	}

IL_0031:
	{
		int32_t L_14 = V_1;
		CharU5BU5D_t3528271667* L_15 = V_0;
		V_2 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1))) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length))))))? 1 : 0);
		int32_t L_16 = V_1;
		bool L_17 = V_2;
		if (!((int32_t)((int32_t)((((int32_t)L_16) > ((int32_t)0))? 1 : 0)&(int32_t)L_17)))
		{
			goto IL_004e;
		}
	}
	{
		CharU5BU5D_t3528271667* L_18 = V_0;
		int32_t L_19 = V_1;
		int32_t L_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		uint16_t L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_22 = Char_IsUpper_m3564669513(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0068;
		}
	}

IL_004e:
	{
		CharU5BU5D_t3528271667* L_23 = V_0;
		int32_t L_24 = V_1;
		CharU5BU5D_t3528271667* L_25 = V_0;
		int32_t L_26 = V_1;
		int32_t L_27 = L_26;
		uint16_t L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_29 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		Il2CppChar L_30 = Char_ToLower_m3999837485(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (Il2CppChar)L_30);
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_0062:
	{
		int32_t L_32 = V_1;
		CharU5BU5D_t3528271667* L_33 = V_0;
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_33)->max_length)))))))
		{
			goto IL_0023;
		}
	}

IL_0068:
	{
		CharU5BU5D_t3528271667* L_34 = V_0;
		String_t* L_35 = String_CreateString_m2818852475(NULL, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::IsHighSurrogate(System.Char)
extern "C"  bool StringUtils_IsHighSurrogate_m2271768366 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_IsHighSurrogate_m2271768366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsHighSurrogate_m2151882768(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::IsLowSurrogate(System.Char)
extern "C"  bool StringUtils_IsLowSurrogate_m4258024248 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_IsLowSurrogate_m4258024248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsLowSurrogate_m1445307684(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::StartsWith(System.String,System.Char)
extern "C"  bool StringUtils_StartsWith_m3114937475 (RuntimeObject * __this /* static, unused */, String_t* ___source0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___source0;
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_2 = ___source0;
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_2, 0, /*hidden argument*/NULL);
		Il2CppChar L_4 = ___value1;
		return (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::EndsWith(System.String,System.Char)
extern "C"  bool StringUtils_EndsWith_m1814538149 (RuntimeObject * __this /* static, unused */, String_t* ___source0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___source0;
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = ___source0;
		String_t* L_3 = ___source0;
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		Il2CppChar L_6 = ___value1;
		return (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
	}

IL_001b:
	{
		return (bool)0;
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
// System.Reflection.MemberTypes Newtonsoft.Json.Utilities.TypeExtensions::MemberType(System.Reflection.MemberInfo)
extern "C"  int32_t TypeExtensions_MemberType_m2286386365 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___memberInfo0, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = ___memberInfo0;
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::ContainsGenericParameters(System.Type)
extern "C"  bool TypeExtensions_ContainsGenericParameters_m2408384511 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(86 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsInterface(System.Type)
extern "C"  bool TypeExtensions_IsInterface_m3543394130 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		bool L_1 = Type_get_IsInterface_m3284996719(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericType(System.Type)
extern "C"  bool TypeExtensions_IsGenericType_m3947308765 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(89 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericTypeDefinition(System.Type)
extern "C"  bool TypeExtensions_IsGenericTypeDefinition_m2160044791 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(87 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_0);
		return L_1;
	}
}
// System.Type Newtonsoft.Json.Utilities.TypeExtensions::BaseType(System.Type)
extern "C"  Type_t * TypeExtensions_BaseType_m1084285535 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsEnum(System.Type)
extern "C"  bool TypeExtensions_IsEnum_m286495740 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		bool L_1 = Type_get_IsEnum_m208091508(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsClass(System.Type)
extern "C"  bool TypeExtensions_IsClass_m3873378058 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		bool L_1 = Type_get_IsClass_m589177581(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsSealed(System.Type)
extern "C"  bool TypeExtensions_IsSealed_m1488474977 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		bool L_1 = Type_get_IsSealed_m3543837727(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsAbstract(System.Type)
extern "C"  bool TypeExtensions_IsAbstract_m723195064 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		bool L_1 = Type_get_IsAbstract_m1120089130(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsValueType(System.Type)
extern "C"  bool TypeExtensions_IsValueType_m852671066 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		bool L_1 = Type_get_IsValueType_m3108065642(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::AssignableToTypeName(System.Type,System.String,System.Type&)
extern "C"  bool TypeExtensions_AssignableToTypeName_m503478083 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, String_t* ___fullTypeName1, Type_t ** ___match2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeExtensions_AssignableToTypeName_m503478083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	TypeU5BU5D_t3940880105* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Type_t * L_0 = ___type0;
		V_0 = L_0;
		goto IL_001f;
	}

IL_0004:
	{
		Type_t * L_1 = V_0;
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_1);
		String_t* L_3 = ___fullTypeName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_Equals_m2359609904(NULL /*static, unused*/, L_2, L_3, 4, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		Type_t ** L_5 = ___match2;
		Type_t * L_6 = V_0;
		*((RuntimeObject **)(L_5)) = (RuntimeObject *)L_6;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_5), (RuntimeObject *)L_6);
		return (bool)1;
	}

IL_0018:
	{
		Type_t * L_7 = V_0;
		Type_t * L_8 = TypeExtensions_BaseType_m1084285535(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_001f:
	{
		Type_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0004;
		}
	}
	{
		Type_t * L_10 = ___type0;
		TypeU5BU5D_t3940880105* L_11 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(40 /* System.Type[] System.Type::GetInterfaces() */, L_10);
		V_1 = L_11;
		V_2 = 0;
		goto IL_0047;
	}

IL_002d:
	{
		TypeU5BU5D_t3940880105* L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		Type_t * L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
		String_t* L_17 = ___fullTypeName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_Equals_m2359609904(NULL /*static, unused*/, L_16, L_17, 4, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0043;
		}
	}
	{
		Type_t ** L_19 = ___match2;
		Type_t * L_20 = ___type0;
		*((RuntimeObject **)(L_19)) = (RuntimeObject *)L_20;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_19), (RuntimeObject *)L_20);
		return (bool)1;
	}

IL_0043:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_22 = V_2;
		TypeU5BU5D_t3940880105* L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_002d;
		}
	}
	{
		Type_t ** L_24 = ___match2;
		*((RuntimeObject **)(L_24)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_24), (RuntimeObject *)NULL);
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::AssignableToTypeName(System.Type,System.String)
extern "C"  bool TypeExtensions_AssignableToTypeName_m361691741 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, String_t* ___fullTypeName1, const RuntimeMethod* method)
{
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		String_t* L_1 = ___fullTypeName1;
		bool L_2 = TypeExtensions_AssignableToTypeName_m503478083(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::ImplementInterface(System.Type,System.Type)
extern "C"  bool TypeExtensions_ImplementInterface_m4199275556 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___interfaceType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeExtensions_ImplementInterface_m4199275556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___type0;
		V_0 = L_0;
		goto IL_0048;
	}

IL_0004:
	{
		Type_t * L_1 = V_0;
		TypeU5BU5D_t3940880105* L_2 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(40 /* System.Type[] System.Type::GetInterfaces() */, L_1);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_t1463797649_il2cpp_TypeInfo_var, (RuntimeObject*)(RuntimeObject*)L_2);
		V_1 = L_3;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002d;
		}

IL_0012:
		{
			RuntimeObject* L_4 = V_1;
			Type_t * L_5 = InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t2916515228_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			Type_t * L_6 = V_2;
			Type_t * L_7 = ___interfaceType1;
			if ((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_7)))
			{
				goto IL_0029;
			}
		}

IL_001d:
		{
			Type_t * L_8 = V_2;
			if (!L_8)
			{
				goto IL_002d;
			}
		}

IL_0020:
		{
			Type_t * L_9 = V_2;
			Type_t * L_10 = ___interfaceType1;
			bool L_11 = TypeExtensions_ImplementInterface_m4199275556(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_002d;
			}
		}

IL_0029:
		{
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x4D, FINALLY_0037);
		}

IL_002d:
		{
			RuntimeObject* L_12 = V_1;
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0012;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_0040;
			}
		}

IL_003a:
		{
			RuntimeObject* L_15 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_15);
		}

IL_0040:
		{
			IL2CPP_END_FINALLY(55)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0041:
	{
		Type_t * L_16 = V_0;
		Type_t * L_17 = TypeExtensions_BaseType_m1084285535(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
	}

IL_0048:
	{
		Type_t * L_18 = V_0;
		if (L_18)
		{
			goto IL_0004;
		}
	}
	{
		return (bool)0;
	}

IL_004d:
	{
		bool L_19 = V_3;
		return L_19;
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
// System.Type Newtonsoft.Json.Utilities.TypeInformation::get_Type()
extern "C"  Type_t * TypeInformation_get_Type_m784892987 (TypeInformation_t1210244291 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.TypeInformation::set_Type(System.Type)
extern "C"  void TypeInformation_set_Type_m330316443 (TypeInformation_t1210244291 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// Newtonsoft.Json.Utilities.PrimitiveTypeCode Newtonsoft.Json.Utilities.TypeInformation::get_TypeCode()
extern "C"  int32_t TypeInformation_get_TypeCode_m1934773876 (TypeInformation_t1210244291 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTypeCodeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.TypeInformation::set_TypeCode(Newtonsoft.Json.Utilities.PrimitiveTypeCode)
extern "C"  void TypeInformation_set_TypeCode_m3433219535 (TypeInformation_t1210244291 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTypeCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.TypeInformation::.ctor()
extern "C"  void TypeInformation__ctor_m68716513 (TypeInformation_t1210244291 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
extern "C"  void ValidationUtils_ArgumentNotNull_m5418296 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, String_t* ___parameterName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValidationUtils_ArgumentNotNull_m5418296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___parameterName1;
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,ValidationUtils_ArgumentNotNull_m5418296_RuntimeMethod_var);
	}

IL_000a:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.AddingNewEventArgs::.ctor()
extern "C"  void AddingNewEventArgs__ctor_m1263652229 (AddingNewEventArgs_t2974299087 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void System.ComponentModel.AddingNewEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AddingNewEventHandler__ctor_m3000141460 (AddingNewEventHandler_t4128025860 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.ComponentModel.AddingNewEventHandler::Invoke(System.Object,System.ComponentModel.AddingNewEventArgs)
extern "C"  void AddingNewEventHandler_Invoke_m2252854360 (AddingNewEventHandler_t4128025860 * __this, RuntimeObject * ___sender0, AddingNewEventArgs_t2974299087 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		AddingNewEventHandler_Invoke_m2252854360((AddingNewEventHandler_t4128025860 *)__this->get_prev_9(), ___sender0, ___e1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, AddingNewEventArgs_t2974299087 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, AddingNewEventArgs_t2974299087 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, AddingNewEventArgs_t2974299087 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, AddingNewEventArgs_t2974299087 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, AddingNewEventArgs_t2974299087 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, AddingNewEventArgs_t2974299087 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, AddingNewEventArgs_t2974299087 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< AddingNewEventArgs_t2974299087 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< AddingNewEventArgs_t2974299087 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< AddingNewEventArgs_t2974299087 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< AddingNewEventArgs_t2974299087 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, AddingNewEventArgs_t2974299087 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult System.ComponentModel.AddingNewEventHandler::BeginInvoke(System.Object,System.ComponentModel.AddingNewEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* AddingNewEventHandler_BeginInvoke_m277671860 (AddingNewEventHandler_t4128025860 * __this, RuntimeObject * ___sender0, AddingNewEventArgs_t2974299087 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void System.ComponentModel.AddingNewEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AddingNewEventHandler_EndInvoke_m2345008926 (AddingNewEventHandler_t4128025860 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.NotifyCollectionChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void NotifyCollectionChangedEventHandler__ctor_m1860079086 (NotifyCollectionChangedEventHandler_t2206564399 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.ComponentModel.NotifyCollectionChangedEventHandler::Invoke(System.Object,System.ComponentModel.NotifyCollectionChangedEventArgs)
extern "C"  void NotifyCollectionChangedEventHandler_Invoke_m1949505131 (NotifyCollectionChangedEventHandler_t2206564399 * __this, RuntimeObject * ___sender0, NotifyCollectionChangedEventArgs_t1368105863 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		NotifyCollectionChangedEventHandler_Invoke_m1949505131((NotifyCollectionChangedEventHandler_t2206564399 *)__this->get_prev_9(), ___sender0, ___e1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, NotifyCollectionChangedEventArgs_t1368105863 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, NotifyCollectionChangedEventArgs_t1368105863 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, NotifyCollectionChangedEventArgs_t1368105863 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, NotifyCollectionChangedEventArgs_t1368105863 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, NotifyCollectionChangedEventArgs_t1368105863 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, NotifyCollectionChangedEventArgs_t1368105863 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, NotifyCollectionChangedEventArgs_t1368105863 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< NotifyCollectionChangedEventArgs_t1368105863 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< NotifyCollectionChangedEventArgs_t1368105863 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< NotifyCollectionChangedEventArgs_t1368105863 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< NotifyCollectionChangedEventArgs_t1368105863 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, NotifyCollectionChangedEventArgs_t1368105863 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult System.ComponentModel.NotifyCollectionChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.NotifyCollectionChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* NotifyCollectionChangedEventHandler_BeginInvoke_m4101134029 (NotifyCollectionChangedEventHandler_t2206564399 * __this, RuntimeObject * ___sender0, NotifyCollectionChangedEventArgs_t1368105863 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void System.ComponentModel.NotifyCollectionChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void NotifyCollectionChangedEventHandler_EndInvoke_m4211225478 (NotifyCollectionChangedEventHandler_t2206564399 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.PropertyChangingEventArgs::.ctor(System.String)
extern "C"  void PropertyChangingEventArgs__ctor_m458964423 (PropertyChangingEventArgs_t2067745136 * __this, String_t* ___propertyName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyChangingEventArgs__ctor_m458964423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___propertyName0;
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.ComponentModel.PropertyChangingEventArgs::set_PropertyName(System.String) */, __this, L_0);
		return;
	}
}
// System.Void System.ComponentModel.PropertyChangingEventArgs::set_PropertyName(System.String)
extern "C"  void PropertyChangingEventArgs_set_PropertyName_m2861796877 (PropertyChangingEventArgs_t2067745136 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPropertyNameU3Ek__BackingField_1(L_0);
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
// System.Void System.ComponentModel.PropertyChangingEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void PropertyChangingEventHandler__ctor_m479677173 (PropertyChangingEventHandler_t2830353497 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.ComponentModel.PropertyChangingEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangingEventArgs)
extern "C"  void PropertyChangingEventHandler_Invoke_m4194376157 (PropertyChangingEventHandler_t2830353497 * __this, RuntimeObject * ___sender0, PropertyChangingEventArgs_t2067745136 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		PropertyChangingEventHandler_Invoke_m4194376157((PropertyChangingEventHandler_t2830353497 *)__this->get_prev_9(), ___sender0, ___e1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, PropertyChangingEventArgs_t2067745136 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, PropertyChangingEventArgs_t2067745136 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, PropertyChangingEventArgs_t2067745136 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, PropertyChangingEventArgs_t2067745136 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, PropertyChangingEventArgs_t2067745136 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, PropertyChangingEventArgs_t2067745136 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, PropertyChangingEventArgs_t2067745136 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< PropertyChangingEventArgs_t2067745136 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< PropertyChangingEventArgs_t2067745136 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< PropertyChangingEventArgs_t2067745136 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< PropertyChangingEventArgs_t2067745136 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, PropertyChangingEventArgs_t2067745136 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult System.ComponentModel.PropertyChangingEventHandler::BeginInvoke(System.Object,System.ComponentModel.PropertyChangingEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* PropertyChangingEventHandler_BeginInvoke_m3950628204 (PropertyChangingEventHandler_t2830353497 * __this, RuntimeObject * ___sender0, PropertyChangingEventArgs_t2067745136 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void System.ComponentModel.PropertyChangingEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void PropertyChangingEventHandler_EndInvoke_m2383392785 (PropertyChangingEventHandler_t2830353497 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
