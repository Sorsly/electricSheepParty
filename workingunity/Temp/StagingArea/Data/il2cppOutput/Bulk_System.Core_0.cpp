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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// Mono.Security.Cryptography.SymmetricTransform
struct SymmetricTransform_t3802591843;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4254223087;
// System.Security.Cryptography.CryptographicException
struct CryptographicException_t248831461;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.ObjectDisposedException
struct ObjectDisposedException_t21392786;
// System.Action
struct Action_t1264377477;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.InvalidTimeZoneException
struct InvalidTimeZoneException_t4066718130;
// System.Exception
struct Exception_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.MonoTODOAttribute
struct MonoTODOAttribute_t4131080583;
// System.Attribute
struct Attribute_t861562559;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t1723066603;
// System.Security.Cryptography.Aes
struct Aes_t1218282760;
// System.Security.Cryptography.KeySizes
struct KeySizes_t85027896;
// System.Security.Cryptography.AesManaged
struct AesManaged_t1129950597;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2733259762;
// System.Security.Cryptography.AesTransform
struct AesTransform_t2957123611;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.TimeZoneInfo
struct TimeZoneInfo_t161405854;
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t1469475992;
// System.TimeZoneInfo/AdjustmentRule
struct AdjustmentRule_t74449909;
// System.TimeZoneNotFoundException
struct TimeZoneNotFoundException_t171073523;
// System.IO.FileStream
struct FileStream_t4292183065;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t736164020;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t1396226614;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct List_1_t1770412147;
// System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>
struct List_1_t1546524651;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2171992254;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t886128184;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.TimeZoneInfo/TimeType[]
struct TimeTypeU5BU5D_t2917227474;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.DictionaryEntry>
struct Transform_1_t2521566318;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t2143006960;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;

extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t Locale_GetText_m2427493201_MetadataUsageId;
extern RuntimeClass* KeyBuilder_t2049230356_il2cpp_TypeInfo_var;
extern const uint32_t KeyBuilder_get_Rng_m3373220441_MetadataUsageId;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const uint32_t KeyBuilder_Key_m2503211157_MetadataUsageId;
extern const uint32_t KeyBuilder_IV_m3340234014_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* CryptographicException_t248831461_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SymmetricTransform__ctor_m2693628991_RuntimeMethod_var;
extern String_t* _stringLiteral2387040967;
extern const uint32_t SymmetricTransform__ctor_m2693628991_MetadataUsageId;
extern RuntimeClass* CipherMode_t84635067_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SymmetricTransform_Transform_m1683494363_RuntimeMethod_var;
extern String_t* _stringLiteral2609825863;
extern const uint32_t SymmetricTransform_Transform_m1683494363_MetadataUsageId;
extern const RuntimeMethod* SymmetricTransform_OFB_m3690147804_RuntimeMethod_var;
extern String_t* _stringLiteral3478177746;
extern const uint32_t SymmetricTransform_OFB_m3690147804_MetadataUsageId;
extern const RuntimeMethod* SymmetricTransform_CTS_m764800021_RuntimeMethod_var;
extern String_t* _stringLiteral3430552138;
extern const uint32_t SymmetricTransform_CTS_m764800021_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SymmetricTransform_CheckInput_m2092289040_RuntimeMethod_var;
extern String_t* _stringLiteral3152468735;
extern String_t* _stringLiteral2167393519;
extern String_t* _stringLiteral3073595182;
extern String_t* _stringLiteral438779933;
extern String_t* _stringLiteral251636811;
extern const uint32_t SymmetricTransform_CheckInput_m2092289040_MetadataUsageId;
extern RuntimeClass* ObjectDisposedException_t21392786_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SymmetricTransform_TransformBlock_m851059707_RuntimeMethod_var;
extern String_t* _stringLiteral389898510;
extern String_t* _stringLiteral2053830539;
extern String_t* _stringLiteral1561769044;
extern const uint32_t SymmetricTransform_TransformBlock_m851059707_MetadataUsageId;
extern const RuntimeMethod* SymmetricTransform_InternalTransformBlock_m1743612142_RuntimeMethod_var;
extern String_t* _stringLiteral3823085299;
extern const uint32_t SymmetricTransform_InternalTransformBlock_m1743612142_MetadataUsageId;
extern const uint32_t SymmetricTransform_Random_m3740038270_MetadataUsageId;
extern RuntimeClass* PaddingMode_t2546806710_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SymmetricTransform_ThrowBadPaddingException_m2898061954_RuntimeMethod_var;
extern String_t* _stringLiteral2101785501;
extern String_t* _stringLiteral289204851;
extern String_t* _stringLiteral4613441;
extern const uint32_t SymmetricTransform_ThrowBadPaddingException_m2898061954_MetadataUsageId;
extern const RuntimeMethod* SymmetricTransform_FinalEncrypt_m748885414_RuntimeMethod_var;
extern String_t* _stringLiteral3246833729;
extern const uint32_t SymmetricTransform_FinalEncrypt_m748885414_MetadataUsageId;
extern const RuntimeMethod* SymmetricTransform_FinalDecrypt_m764004682_RuntimeMethod_var;
extern const uint32_t SymmetricTransform_FinalDecrypt_m764004682_MetadataUsageId;
extern const RuntimeMethod* SymmetricTransform_TransformFinalBlock_m1030888689_RuntimeMethod_var;
extern const uint32_t SymmetricTransform_TransformFinalBlock_m1030888689_MetadataUsageId;
extern const RuntimeMethod* Check_Source_m4098695967_RuntimeMethod_var;
extern String_t* _stringLiteral4294193667;
extern const uint32_t Check_Source_m4098695967_MetadataUsageId;
extern const RuntimeMethod* Check_SourceAndSelector_m4013530551_RuntimeMethod_var;
extern String_t* _stringLiteral3977229295;
extern const uint32_t Check_SourceAndSelector_m4013530551_MetadataUsageId;
extern const RuntimeMethod* Check_SourceAndPredicate_m2332465641_RuntimeMethod_var;
extern String_t* _stringLiteral3941128596;
extern const uint32_t Check_SourceAndPredicate_m2332465641_MetadataUsageId;
extern const RuntimeMethod* Check_FirstAndSecond_m1286658405_RuntimeMethod_var;
extern String_t* _stringLiteral2374226348;
extern String_t* _stringLiteral3502150264;
extern const uint32_t Check_FirstAndSecond_m1286658405_MetadataUsageId;
extern const RuntimeMethod* Check_SourceAndKeySelector_m1202955589_RuntimeMethod_var;
extern String_t* _stringLiteral2212699745;
extern const uint32_t Check_SourceAndKeySelector_m1202955589_MetadataUsageId;
extern const RuntimeMethod* Check_SourceAndKeyElementSelectors_m4285999668_RuntimeMethod_var;
extern String_t* _stringLiteral3009079190;
extern const uint32_t Check_SourceAndKeyElementSelectors_m4285999668_MetadataUsageId;
extern RuntimeClass* KeySizesU5BU5D_t722666473_il2cpp_TypeInfo_var;
extern RuntimeClass* KeySizes_t85027896_il2cpp_TypeInfo_var;
extern const uint32_t Aes__ctor_m178909601_MetadataUsageId;
extern RuntimeClass* AesTransform_t2957123611_il2cpp_TypeInfo_var;
extern const uint32_t AesManaged_CreateDecryptor_m692040246_MetadataUsageId;
extern const uint32_t AesManaged_CreateEncryptor_m2294080233_MetadataUsageId;
extern RuntimeClass* UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AesTransform__ctor_m3143546745_RuntimeMethod_var;
extern String_t* _stringLiteral2153550409;
extern String_t* _stringLiteral2136391555;
extern String_t* _stringLiteral2585275424;
extern const uint32_t AesTransform__ctor_m3143546745_MetadataUsageId;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D1_1_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D2_2_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D3_3_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D4_4_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D5_5_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D6_6_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D7_7_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D8_8_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D9_9_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D10_10_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D11_11_FieldInfo_var;
extern const uint32_t AesTransform__cctor_m2567644034_MetadataUsageId;
extern const uint32_t AesTransform_SubByte_m3350159546_MetadataUsageId;
extern const uint32_t AesTransform_Encrypt128_m424393011_MetadataUsageId;
extern const uint32_t AesTransform_Decrypt128_m3018534522_MetadataUsageId;
extern RuntimeClass* TimeSpan_t881159249_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var;
extern String_t* _stringLiteral3454449607;
extern String_t* _stringLiteral1601163033;
extern String_t* _stringLiteral645215293;
extern String_t* _stringLiteral3372752593;
extern String_t* _stringLiteral1373758191;
extern String_t* _stringLiteral3975560191;
extern String_t* _stringLiteral136749170;
extern String_t* _stringLiteral1453361438;
extern String_t* _stringLiteral2306550058;
extern const uint32_t TimeZoneInfo__ctor_m1956250117_MetadataUsageId;
extern RuntimeClass* TimeZoneInfo_t161405854_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeZoneNotFoundException_t171073523_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TimeZoneInfo_get_Local_m3767312181_RuntimeMethod_var;
extern String_t* _stringLiteral3126236545;
extern String_t* _stringLiteral3497985806;
extern String_t* _stringLiteral2825121886;
extern const uint32_t TimeZoneInfo_get_Local_m3767312181_MetadataUsageId;
extern String_t* _stringLiteral3410052326;
extern const uint32_t TimeZoneInfo_get_Utc_m4037366733_MetadataUsageId;
extern String_t* _stringLiteral1599610208;
extern const uint32_t TimeZoneInfo_get_TimeZoneDirectory_m1493272576_MetadataUsageId;
extern const uint32_t TimeZoneInfo_CreateCustomTimeZone_m4187381152_MetadataUsageId;
extern const uint32_t TimeZoneInfo_CreateCustomTimeZone_m3151472709_MetadataUsageId;
extern const uint32_t TimeZoneInfo_CreateCustomTimeZone_m1792093365_MetadataUsageId;
extern const uint32_t TimeZoneInfo_Equals_m832693802_MetadataUsageId;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268_RuntimeMethod_var;
extern String_t* _stringLiteral2277405654;
extern const uint32_t TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268_MetadataUsageId;
extern RuntimeClass* AdjustmentRuleU5BU5D_t1469475992_il2cpp_TypeInfo_var;
extern const uint32_t TimeZoneInfo_GetAdjustmentRules_m496065111_MetadataUsageId;
extern const RuntimeMethod* TimeZoneInfo_GetObjectData_m2434535635_RuntimeMethod_var;
extern const uint32_t TimeZoneInfo_GetObjectData_m2434535635_MetadataUsageId;
extern const uint32_t TimeZoneInfo_GetUtcOffset_m3780875423_MetadataUsageId;
extern const RuntimeMethod* TimeZoneInfo_HasSameRules_m697432081_RuntimeMethod_var;
extern String_t* _stringLiteral2432405111;
extern const uint32_t TimeZoneInfo_HasSameRules_m697432081_MetadataUsageId;
extern const RuntimeMethod* TimeZoneInfo_IsDaylightSavingTime_m2475480634_RuntimeMethod_var;
extern String_t* _stringLiteral1574560297;
extern const uint32_t TimeZoneInfo_IsDaylightSavingTime_m2475480634_MetadataUsageId;
extern const uint32_t TimeZoneInfo_IsInvalidTime_m1886861930_MetadataUsageId;
extern const RuntimeMethod* TimeZoneInfo_OnDeserialization_m1663302437_RuntimeMethod_var;
extern const uint32_t TimeZoneInfo_OnDeserialization_m1663302437_MetadataUsageId;
extern const uint32_t TimeZoneInfo_GetApplicableRule_m3152592286_MetadataUsageId;
extern const uint32_t TimeZoneInfo_TransitionPoint_m2194238407_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3992013369;
extern const uint32_t TimeZoneInfo_ValidTZFile_m3505397244_MetadataUsageId;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern const uint32_t TimeZoneInfo_ReadBigEndianInt32_m3367804058_MetadataUsageId;
extern RuntimeClass* List_1_t1546524651_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TimeZoneInfo_ParseTZBuffer_m3851257210_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m4064694223_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2315657164_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m27745599_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2470931760_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m2071921741_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m3123410994_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1698810603_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m947837680_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2451877167_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m3286616822_RuntimeMethod_var;
extern const uint32_t TimeZoneInfo_ParseTZBuffer_m3851257210_MetadataUsageId;
extern const RuntimeMethod* List_1_Remove_m1862724733_RuntimeMethod_var;
extern const uint32_t TimeZoneInfo_ValidateRules_m1341992406_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t736164020_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m4261191612_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m1718909353_RuntimeMethod_var;
extern const uint32_t TimeZoneInfo_ParseAbbreviations_m1471889884_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t1396226614_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m224509051_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m823070101_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m670166897_RuntimeMethod_var;
extern const uint32_t TimeZoneInfo_ParseTimesTypes_m1754682716_MetadataUsageId;
extern RuntimeClass* List_1_t1770412147_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2598981433_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2__ctor_m2324111314_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1397479321_RuntimeMethod_var;
extern const uint32_t TimeZoneInfo_ParseTransitions_m542357583_MetadataUsageId;
extern const RuntimeMethod* AdjustmentRule__ctor_m495727949_RuntimeMethod_var;
extern String_t* _stringLiteral1528915702;
extern String_t* _stringLiteral995612621;
extern String_t* _stringLiteral244543716;
extern String_t* _stringLiteral263903928;
extern String_t* _stringLiteral1844453138;
extern String_t* _stringLiteral3638045652;
extern const uint32_t AdjustmentRule__ctor_m495727949_MetadataUsageId;
extern RuntimeClass* AdjustmentRule_t74449909_il2cpp_TypeInfo_var;
extern const uint32_t AdjustmentRule_CreateAdjustmentRule_m1020400594_MetadataUsageId;
extern const uint32_t AdjustmentRule_Equals_m4095462908_MetadataUsageId;
extern const RuntimeMethod* AdjustmentRule_GetObjectData_m2214958557_RuntimeMethod_var;
extern const uint32_t AdjustmentRule_GetObjectData_m2214958557_MetadataUsageId;
extern const RuntimeMethod* AdjustmentRule_OnDeserialization_m2703381884_RuntimeMethod_var;
extern const uint32_t AdjustmentRule_OnDeserialization_m2703381884_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2457238620;
extern String_t* _stringLiteral4248262063;
extern String_t* _stringLiteral2992454296;
extern const uint32_t TimeType_ToString_m3568850299_MetadataUsageId;
extern const RuntimeMethod* TransitionTime__ctor_m1012552555_RuntimeMethod_var;
extern String_t* _stringLiteral1894924580;
extern const uint32_t TransitionTime__ctor_m1012552555_MetadataUsageId;
extern const RuntimeMethod* TransitionTime__ctor_m1241469383_RuntimeMethod_var;
extern String_t* _stringLiteral1771851981;
extern String_t* _stringLiteral2376781826;
extern String_t* _stringLiteral576230762;
extern String_t* _stringLiteral3427887931;
extern const uint32_t TransitionTime__ctor_m1241469383_MetadataUsageId;
extern const RuntimeMethod* TransitionTime_GetObjectData_m565919319_RuntimeMethod_var;
extern const uint32_t TransitionTime_GetObjectData_m565919319_MetadataUsageId;
extern RuntimeClass* TransitionTime_t449921781_il2cpp_TypeInfo_var;
extern const uint32_t TransitionTime_Equals_m2918964558_MetadataUsageId;
extern const RuntimeMethod* TransitionTime_OnDeserialization_m482900757_RuntimeMethod_var;
extern const uint32_t TransitionTime_OnDeserialization_m482900757_MetadataUsageId;
extern const uint32_t TransitionTime_op_Equality_m844747352_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;
struct ByteU5BU5D_t4116647657;
struct KeySizesU5BU5D_t722666473;
struct UInt32U5BU5D_t2770800703;
struct AdjustmentRuleU5BU5D_t1469475992;


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
#ifndef U3CMODULEU3E_T692745528_H
#define U3CMODULEU3E_T692745528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745528 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745528_H
#ifndef ENUMERABLE_T538148348_H
#define ENUMERABLE_T538148348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable
struct  Enumerable_t538148348  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLE_T538148348_H
#ifndef CHECK_T192468399_H
#define CHECK_T192468399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Check
struct  Check_t192468399  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHECK_T192468399_H
#ifndef BITCONVERTER_T3118986983_H
#define BITCONVERTER_T3118986983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BitConverter
struct  BitConverter_t3118986983  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t3118986983_StaticFields
{
public:
	// System.Boolean System.BitConverter::SwappedWordsInDouble
	bool ___SwappedWordsInDouble_0;
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_1;

public:
	inline static int32_t get_offset_of_SwappedWordsInDouble_0() { return static_cast<int32_t>(offsetof(BitConverter_t3118986983_StaticFields, ___SwappedWordsInDouble_0)); }
	inline bool get_SwappedWordsInDouble_0() const { return ___SwappedWordsInDouble_0; }
	inline bool* get_address_of_SwappedWordsInDouble_0() { return &___SwappedWordsInDouble_0; }
	inline void set_SwappedWordsInDouble_0(bool value)
	{
		___SwappedWordsInDouble_0 = value;
	}

	inline static int32_t get_offset_of_IsLittleEndian_1() { return static_cast<int32_t>(offsetof(BitConverter_t3118986983_StaticFields, ___IsLittleEndian_1)); }
	inline bool get_IsLittleEndian_1() const { return ___IsLittleEndian_1; }
	inline bool* get_address_of_IsLittleEndian_1() { return &___IsLittleEndian_1; }
	inline void set_IsLittleEndian_1(bool value)
	{
		___IsLittleEndian_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTER_T3118986983_H
#ifndef SYMMETRICTRANSFORM_T3802591843_H
#define SYMMETRICTRANSFORM_T3802591843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t3802591843  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t4254223087 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t4116647657* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t4116647657* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t4116647657* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t4116647657* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t386037858 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___algo_0)); }
	inline SymmetricAlgorithm_t4254223087 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t4254223087 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t4254223087 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___temp_3)); }
	inline ByteU5BU5D_t4116647657* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t4116647657* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___temp2_4)); }
	inline ByteU5BU5D_t4116647657* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t4116647657* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___workBuff_5)); }
	inline ByteU5BU5D_t4116647657* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t4116647657* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___workout_6)); }
	inline ByteU5BU5D_t4116647657* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t4116647657* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ____rng_11)); }
	inline RandomNumberGenerator_t386037858 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t386037858 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T3802591843_H
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
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef SERIALIZATIONINFO_T950877179_H
#define SERIALIZATIONINFO_T950877179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t950877179  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t1853889766 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t2718874744 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___serialized_0)); }
	inline Hashtable_t1853889766 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t1853889766 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t1853889766 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___values_1)); }
	inline ArrayList_t2718874744 * get_values_1() const { return ___values_1; }
	inline ArrayList_t2718874744 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t2718874744 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T950877179_H
#ifndef DICTIONARY_2_T736164020_H
#define DICTIONARY_2_T736164020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct  Dictionary_2_t736164020  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	StringU5BU5D_t1281789340* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___valueSlots_7)); }
	inline StringU5BU5D_t1281789340* get_valueSlots_7() const { return ___valueSlots_7; }
	inline StringU5BU5D_t1281789340** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(StringU5BU5D_t1281789340* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t736164020_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t886128184 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t886128184 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t886128184 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t886128184 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T736164020_H
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
#ifndef DICTIONARY_2_T1396226614_H
#define DICTIONARY_2_T1396226614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct  Dictionary_2_t1396226614  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	TimeTypeU5BU5D_t2917227474* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___valueSlots_7)); }
	inline TimeTypeU5BU5D_t2917227474* get_valueSlots_7() const { return ___valueSlots_7; }
	inline TimeTypeU5BU5D_t2917227474** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(TimeTypeU5BU5D_t2917227474* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1396226614_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2521566318 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2521566318 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2521566318 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2521566318 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1396226614_H
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
#ifndef LIST_1_T1546524651_H
#define LIST_1_T1546524651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>
struct  List_1_t1546524651  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AdjustmentRuleU5BU5D_t1469475992* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1546524651, ____items_1)); }
	inline AdjustmentRuleU5BU5D_t1469475992* get__items_1() const { return ____items_1; }
	inline AdjustmentRuleU5BU5D_t1469475992** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AdjustmentRuleU5BU5D_t1469475992* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1546524651, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1546524651, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1546524651_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	AdjustmentRuleU5BU5D_t1469475992* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1546524651_StaticFields, ___EmptyArray_4)); }
	inline AdjustmentRuleU5BU5D_t1469475992* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline AdjustmentRuleU5BU5D_t1469475992** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(AdjustmentRuleU5BU5D_t1469475992* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1546524651_H
#ifndef LIST_1_T1770412147_H
#define LIST_1_T1770412147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct  List_1_t1770412147  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t2143006960* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1770412147, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t2143006960* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t2143006960** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t2143006960* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1770412147, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1770412147, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1770412147_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	KeyValuePair_2U5BU5D_t2143006960* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1770412147_StaticFields, ___EmptyArray_4)); }
	inline KeyValuePair_2U5BU5D_t2143006960* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline KeyValuePair_2U5BU5D_t2143006960** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(KeyValuePair_2U5BU5D_t2143006960* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1770412147_H
#ifndef KEYBUILDER_T2049230356_H
#define KEYBUILDER_T2049230356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t2049230356  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t2049230356_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t386037858 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t2049230356_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t386037858 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t386037858 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T2049230356_H
#ifndef RANDOMNUMBERGENERATOR_T386037858_H
#define RANDOMNUMBERGENERATOR_T386037858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t386037858  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMNUMBERGENERATOR_T386037858_H
#ifndef LOCALE_T4128636110_H
#define LOCALE_T4128636110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t4128636110  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T4128636110_H
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
#ifndef KEYSIZES_T85027896_H
#define KEYSIZES_T85027896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeySizes
struct  KeySizes_t85027896  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.KeySizes::_maxSize
	int32_t ____maxSize_0;
	// System.Int32 System.Security.Cryptography.KeySizes::_minSize
	int32_t ____minSize_1;
	// System.Int32 System.Security.Cryptography.KeySizes::_skipSize
	int32_t ____skipSize_2;

public:
	inline static int32_t get_offset_of__maxSize_0() { return static_cast<int32_t>(offsetof(KeySizes_t85027896, ____maxSize_0)); }
	inline int32_t get__maxSize_0() const { return ____maxSize_0; }
	inline int32_t* get_address_of__maxSize_0() { return &____maxSize_0; }
	inline void set__maxSize_0(int32_t value)
	{
		____maxSize_0 = value;
	}

	inline static int32_t get_offset_of__minSize_1() { return static_cast<int32_t>(offsetof(KeySizes_t85027896, ____minSize_1)); }
	inline int32_t get__minSize_1() const { return ____minSize_1; }
	inline int32_t* get_address_of__minSize_1() { return &____minSize_1; }
	inline void set__minSize_1(int32_t value)
	{
		____minSize_1 = value;
	}

	inline static int32_t get_offset_of__skipSize_2() { return static_cast<int32_t>(offsetof(KeySizes_t85027896, ____skipSize_2)); }
	inline int32_t get__skipSize_2() const { return ____skipSize_2; }
	inline int32_t* get_address_of__skipSize_2() { return &____skipSize_2; }
	inline void set__skipSize_2(int32_t value)
	{
		____skipSize_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSIZES_T85027896_H
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
#ifndef TIMEZONENOTFOUNDEXCEPTION_T171073523_H
#define TIMEZONENOTFOUNDEXCEPTION_T171073523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneNotFoundException
struct  TimeZoneNotFoundException_t171073523  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONENOTFOUNDEXCEPTION_T171073523_H
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
#ifndef EXTENSIONATTRIBUTE_T1723066603_H
#define EXTENSIONATTRIBUTE_T1723066603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ExtensionAttribute
struct  ExtensionAttribute_t1723066603  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONATTRIBUTE_T1723066603_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef MONOTODOATTRIBUTE_T4131080583_H
#define MONOTODOATTRIBUTE_T4131080583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t4131080583  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T4131080583_H
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
#ifndef AESTRANSFORM_T2957123611_H
#define AESTRANSFORM_T2957123611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesTransform
struct  AesTransform_t2957123611  : public SymmetricTransform_t3802591843
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::expandedKey
	UInt32U5BU5D_t2770800703* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.AesTransform::Nk
	int32_t ___Nk_13;
	// System.Int32 System.Security.Cryptography.AesTransform::Nr
	int32_t ___Nr_14;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___expandedKey_12)); }
	inline UInt32U5BU5D_t2770800703* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t2770800703** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t2770800703* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nk_13() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___Nk_13)); }
	inline int32_t get_Nk_13() const { return ___Nk_13; }
	inline int32_t* get_address_of_Nk_13() { return &___Nk_13; }
	inline void set_Nk_13(int32_t value)
	{
		___Nk_13 = value;
	}

	inline static int32_t get_offset_of_Nr_14() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___Nr_14)); }
	inline int32_t get_Nr_14() const { return ___Nr_14; }
	inline int32_t* get_address_of_Nr_14() { return &___Nr_14; }
	inline void set_Nr_14(int32_t value)
	{
		___Nr_14 = value;
	}
};

struct AesTransform_t2957123611_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::Rcon
	UInt32U5BU5D_t2770800703* ___Rcon_15;
	// System.Byte[] System.Security.Cryptography.AesTransform::SBox
	ByteU5BU5D_t4116647657* ___SBox_16;
	// System.Byte[] System.Security.Cryptography.AesTransform::iSBox
	ByteU5BU5D_t4116647657* ___iSBox_17;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T0
	UInt32U5BU5D_t2770800703* ___T0_18;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T1
	UInt32U5BU5D_t2770800703* ___T1_19;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T2
	UInt32U5BU5D_t2770800703* ___T2_20;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T3
	UInt32U5BU5D_t2770800703* ___T3_21;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT0
	UInt32U5BU5D_t2770800703* ___iT0_22;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT1
	UInt32U5BU5D_t2770800703* ___iT1_23;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT2
	UInt32U5BU5D_t2770800703* ___iT2_24;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT3
	UInt32U5BU5D_t2770800703* ___iT3_25;

public:
	inline static int32_t get_offset_of_Rcon_15() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___Rcon_15)); }
	inline UInt32U5BU5D_t2770800703* get_Rcon_15() const { return ___Rcon_15; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Rcon_15() { return &___Rcon_15; }
	inline void set_Rcon_15(UInt32U5BU5D_t2770800703* value)
	{
		___Rcon_15 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_15), value);
	}

	inline static int32_t get_offset_of_SBox_16() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___SBox_16)); }
	inline ByteU5BU5D_t4116647657* get_SBox_16() const { return ___SBox_16; }
	inline ByteU5BU5D_t4116647657** get_address_of_SBox_16() { return &___SBox_16; }
	inline void set_SBox_16(ByteU5BU5D_t4116647657* value)
	{
		___SBox_16 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_16), value);
	}

	inline static int32_t get_offset_of_iSBox_17() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iSBox_17)); }
	inline ByteU5BU5D_t4116647657* get_iSBox_17() const { return ___iSBox_17; }
	inline ByteU5BU5D_t4116647657** get_address_of_iSBox_17() { return &___iSBox_17; }
	inline void set_iSBox_17(ByteU5BU5D_t4116647657* value)
	{
		___iSBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_17), value);
	}

	inline static int32_t get_offset_of_T0_18() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T0_18)); }
	inline UInt32U5BU5D_t2770800703* get_T0_18() const { return ___T0_18; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T0_18() { return &___T0_18; }
	inline void set_T0_18(UInt32U5BU5D_t2770800703* value)
	{
		___T0_18 = value;
		Il2CppCodeGenWriteBarrier((&___T0_18), value);
	}

	inline static int32_t get_offset_of_T1_19() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T1_19)); }
	inline UInt32U5BU5D_t2770800703* get_T1_19() const { return ___T1_19; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T1_19() { return &___T1_19; }
	inline void set_T1_19(UInt32U5BU5D_t2770800703* value)
	{
		___T1_19 = value;
		Il2CppCodeGenWriteBarrier((&___T1_19), value);
	}

	inline static int32_t get_offset_of_T2_20() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T2_20)); }
	inline UInt32U5BU5D_t2770800703* get_T2_20() const { return ___T2_20; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T2_20() { return &___T2_20; }
	inline void set_T2_20(UInt32U5BU5D_t2770800703* value)
	{
		___T2_20 = value;
		Il2CppCodeGenWriteBarrier((&___T2_20), value);
	}

	inline static int32_t get_offset_of_T3_21() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T3_21)); }
	inline UInt32U5BU5D_t2770800703* get_T3_21() const { return ___T3_21; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T3_21() { return &___T3_21; }
	inline void set_T3_21(UInt32U5BU5D_t2770800703* value)
	{
		___T3_21 = value;
		Il2CppCodeGenWriteBarrier((&___T3_21), value);
	}

	inline static int32_t get_offset_of_iT0_22() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT0_22)); }
	inline UInt32U5BU5D_t2770800703* get_iT0_22() const { return ___iT0_22; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT0_22() { return &___iT0_22; }
	inline void set_iT0_22(UInt32U5BU5D_t2770800703* value)
	{
		___iT0_22 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_22), value);
	}

	inline static int32_t get_offset_of_iT1_23() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT1_23)); }
	inline UInt32U5BU5D_t2770800703* get_iT1_23() const { return ___iT1_23; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT1_23() { return &___iT1_23; }
	inline void set_iT1_23(UInt32U5BU5D_t2770800703* value)
	{
		___iT1_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_23), value);
	}

	inline static int32_t get_offset_of_iT2_24() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT2_24)); }
	inline UInt32U5BU5D_t2770800703* get_iT2_24() const { return ___iT2_24; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT2_24() { return &___iT2_24; }
	inline void set_iT2_24(UInt32U5BU5D_t2770800703* value)
	{
		___iT2_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_24), value);
	}

	inline static int32_t get_offset_of_iT3_25() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT3_25)); }
	inline UInt32U5BU5D_t2770800703* get_iT3_25() const { return ___iT3_25; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT3_25() { return &___iT3_25; }
	inline void set_iT3_25(UInt32U5BU5D_t2770800703* value)
	{
		___iT3_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESTRANSFORM_T2957123611_H
#ifndef TIMETYPE_T2507513283_H
#define TIMETYPE_T2507513283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo/TimeType
struct  TimeType_t2507513283 
{
public:
	// System.Int32 System.TimeZoneInfo/TimeType::Offset
	int32_t ___Offset_0;
	// System.Boolean System.TimeZoneInfo/TimeType::IsDst
	bool ___IsDst_1;
	// System.String System.TimeZoneInfo/TimeType::Name
	String_t* ___Name_2;

public:
	inline static int32_t get_offset_of_Offset_0() { return static_cast<int32_t>(offsetof(TimeType_t2507513283, ___Offset_0)); }
	inline int32_t get_Offset_0() const { return ___Offset_0; }
	inline int32_t* get_address_of_Offset_0() { return &___Offset_0; }
	inline void set_Offset_0(int32_t value)
	{
		___Offset_0 = value;
	}

	inline static int32_t get_offset_of_IsDst_1() { return static_cast<int32_t>(offsetof(TimeType_t2507513283, ___IsDst_1)); }
	inline bool get_IsDst_1() const { return ___IsDst_1; }
	inline bool* get_address_of_IsDst_1() { return &___IsDst_1; }
	inline void set_IsDst_1(bool value)
	{
		___IsDst_1 = value;
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(TimeType_t2507513283, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.TimeZoneInfo/TimeType
struct TimeType_t2507513283_marshaled_pinvoke
{
	int32_t ___Offset_0;
	int32_t ___IsDst_1;
	char* ___Name_2;
};
// Native definition for COM marshalling of System.TimeZoneInfo/TimeType
struct TimeType_t2507513283_marshaled_com
{
	int32_t ___Offset_0;
	int32_t ___IsDst_1;
	Il2CppChar* ___Name_2;
};
#endif // TIMETYPE_T2507513283_H
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
#ifndef U24ARRAYTYPEU24256_T1929481984_H
#define U24ARRAYTYPEU24256_T1929481984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t1929481984 
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
		uint8_t U24ArrayTypeU24256_t1929481984__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T1929481984_H
#ifndef U24ARRAYTYPEU241024_T3907531058_H
#define U24ARRAYTYPEU241024_T3907531058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t3907531058 
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
		uint8_t U24ArrayTypeU241024_t3907531058__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T3907531058_H
#ifndef U24ARRAYTYPEU24120_T4289081652_H
#define U24ARRAYTYPEU24120_T4289081652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t4289081652 
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
		uint8_t U24ArrayTypeU24120_t4289081652__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T4289081652_H
#ifndef U24ARRAYTYPEU24136_T1950429486_H
#define U24ARRAYTYPEU24136_T1950429486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t1950429486 
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
		uint8_t U24ArrayTypeU24136_t1950429486__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T1950429486_H
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
#ifndef INVALIDTIMEZONEEXCEPTION_T4066718130_H
#define INVALIDTIMEZONEEXCEPTION_T4066718130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidTimeZoneException
struct  InvalidTimeZoneException_t4066718130  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDTIMEZONEEXCEPTION_T4066718130_H
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
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___1)); }
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
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___1)); }
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
#endif // FILEACCESS_T1659085276_H
#ifndef DAYOFWEEK_T3650621421_H
#define DAYOFWEEK_T3650621421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DayOfWeek
struct  DayOfWeek_t3650621421 
{
public:
	// System.Int32 System.DayOfWeek::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DayOfWeek_t3650621421, ___value___1)); }
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
#endif // DAYOFWEEK_T3650621421_H
#ifndef SORTDIRECTION_T3222219096_H
#define SORTDIRECTION_T3222219096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.SortDirection
struct  SortDirection_t3222219096 
{
public:
	// System.Int32 System.Linq.SortDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SortDirection_t3222219096, ___value___1)); }
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
#endif // SORTDIRECTION_T3222219096_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifndef FALLBACK_T3495999270_H
#define FALLBACK_T3495999270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/Fallback
struct  Fallback_t3495999270 
{
public:
	// System.Int32 System.Linq.Enumerable/Fallback::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Fallback_t3495999270, ___value___1)); }
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
#endif // FALLBACK_T3495999270_H
#ifndef PADDINGMODE_T2546806710_H
#define PADDINGMODE_T2546806710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2546806710 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t2546806710, ___value___1)); }
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
#endif // PADDINGMODE_T2546806710_H
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
#ifndef CIPHERMODE_T84635067_H
#define CIPHERMODE_T84635067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t84635067 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t84635067, ___value___1)); }
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
#endif // CIPHERMODE_T84635067_H
#ifndef CRYPTOGRAPHICEXCEPTION_T248831461_H
#define CRYPTOGRAPHICEXCEPTION_T248831461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicException
struct  CryptographicException_t248831461  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICEXCEPTION_T248831461_H
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
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255364_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255364  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU24136_t1950429486  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU24120_t4289081652  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU24256_t1929481984  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU24256_t1929481984  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-7
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D7_7;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-8
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D8_8;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-9
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D9_9;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-10
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D10_10;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-11
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D11_11;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU24136_t1950429486  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU24136_t1950429486 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU24136_t1950429486  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU24120_t4289081652  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU24120_t4289081652 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU24120_t4289081652  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU24256_t1929481984  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU24256_t1929481984 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU24256_t1929481984  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU24256_t1929481984  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU24256_t1929481984 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU24256_t1929481984  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D7_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D7_7)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D7_7() const { return ___U24U24fieldU2D7_7; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D7_7() { return &___U24U24fieldU2D7_7; }
	inline void set_U24U24fieldU2D7_7(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D7_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D8_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D8_8)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D8_8() const { return ___U24U24fieldU2D8_8; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D8_8() { return &___U24U24fieldU2D8_8; }
	inline void set_U24U24fieldU2D8_8(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D8_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D9_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D9_9)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D9_9() const { return ___U24U24fieldU2D9_9; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D9_9() { return &___U24U24fieldU2D9_9; }
	inline void set_U24U24fieldU2D9_9(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D9_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D10_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D10_10)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D10_10() const { return ___U24U24fieldU2D10_10; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D10_10() { return &___U24U24fieldU2D10_10; }
	inline void set_U24U24fieldU2D10_10(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D10_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D11_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D11_11)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D11_11() const { return ___U24U24fieldU2D11_11; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D11_11() { return &___U24U24fieldU2D11_11; }
	inline void set_U24U24fieldU2D11_11(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D11_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255364_H
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
#ifndef OBJECTDISPOSEDEXCEPTION_T21392786_H
#define OBJECTDISPOSEDEXCEPTION_T21392786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_t21392786  : public InvalidOperationException_t56020091
{
public:
	// System.String System.ObjectDisposedException::obj_name
	String_t* ___obj_name_12;
	// System.String System.ObjectDisposedException::msg
	String_t* ___msg_13;

public:
	inline static int32_t get_offset_of_obj_name_12() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t21392786, ___obj_name_12)); }
	inline String_t* get_obj_name_12() const { return ___obj_name_12; }
	inline String_t** get_address_of_obj_name_12() { return &___obj_name_12; }
	inline void set_obj_name_12(String_t* value)
	{
		___obj_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___obj_name_12), value);
	}

	inline static int32_t get_offset_of_msg_13() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t21392786, ___msg_13)); }
	inline String_t* get_msg_13() const { return ___msg_13; }
	inline String_t** get_address_of_msg_13() { return &___msg_13; }
	inline void set_msg_13(String_t* value)
	{
		___msg_13 = value;
		Il2CppCodeGenWriteBarrier((&___msg_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDISPOSEDEXCEPTION_T21392786_H
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
#ifndef SYMMETRICALGORITHM_T4254223087_H
#define SYMMETRICALGORITHM_T4254223087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t4254223087  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t4116647657* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t4116647657* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t722666473* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t722666473* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___IVValue_1)); }
	inline ByteU5BU5D_t4116647657* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t4116647657* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeyValue_3)); }
	inline ByteU5BU5D_t4116647657* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t4116647657* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t722666473* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t722666473* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t722666473* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t722666473* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T4254223087_H
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
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
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
#ifndef FILESTREAM_T4292183065_H
#define FILESTREAM_T4292183065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t4292183065  : public Stream_t1273022909
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_1;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_2;
	// System.Boolean System.IO.FileStream::async
	bool ___async_3;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_4;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_5;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_6;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t4116647657* ___buf_7;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_8;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_9;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_10;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_11;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_12;
	// System.String System.IO.FileStream::name
	String_t* ___name_13;
	// System.IntPtr System.IO.FileStream::handle
	intptr_t ___handle_14;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___owner_2)); }
	inline bool get_owner_2() const { return ___owner_2; }
	inline bool* get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(bool value)
	{
		___owner_2 = value;
	}

	inline static int32_t get_offset_of_async_3() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___async_3)); }
	inline bool get_async_3() const { return ___async_3; }
	inline bool* get_address_of_async_3() { return &___async_3; }
	inline void set_async_3(bool value)
	{
		___async_3 = value;
	}

	inline static int32_t get_offset_of_canseek_4() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___canseek_4)); }
	inline bool get_canseek_4() const { return ___canseek_4; }
	inline bool* get_address_of_canseek_4() { return &___canseek_4; }
	inline void set_canseek_4(bool value)
	{
		___canseek_4 = value;
	}

	inline static int32_t get_offset_of_append_startpos_5() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___append_startpos_5)); }
	inline int64_t get_append_startpos_5() const { return ___append_startpos_5; }
	inline int64_t* get_address_of_append_startpos_5() { return &___append_startpos_5; }
	inline void set_append_startpos_5(int64_t value)
	{
		___append_startpos_5 = value;
	}

	inline static int32_t get_offset_of_anonymous_6() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___anonymous_6)); }
	inline bool get_anonymous_6() const { return ___anonymous_6; }
	inline bool* get_address_of_anonymous_6() { return &___anonymous_6; }
	inline void set_anonymous_6(bool value)
	{
		___anonymous_6 = value;
	}

	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_7)); }
	inline ByteU5BU5D_t4116647657* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_t4116647657* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___buf_7), value);
	}

	inline static int32_t get_offset_of_buf_size_8() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_size_8)); }
	inline int32_t get_buf_size_8() const { return ___buf_size_8; }
	inline int32_t* get_address_of_buf_size_8() { return &___buf_size_8; }
	inline void set_buf_size_8(int32_t value)
	{
		___buf_size_8 = value;
	}

	inline static int32_t get_offset_of_buf_length_9() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_length_9)); }
	inline int32_t get_buf_length_9() const { return ___buf_length_9; }
	inline int32_t* get_address_of_buf_length_9() { return &___buf_length_9; }
	inline void set_buf_length_9(int32_t value)
	{
		___buf_length_9 = value;
	}

	inline static int32_t get_offset_of_buf_offset_10() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_offset_10)); }
	inline int32_t get_buf_offset_10() const { return ___buf_offset_10; }
	inline int32_t* get_address_of_buf_offset_10() { return &___buf_offset_10; }
	inline void set_buf_offset_10(int32_t value)
	{
		___buf_offset_10 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_11() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_dirty_11)); }
	inline bool get_buf_dirty_11() const { return ___buf_dirty_11; }
	inline bool* get_address_of_buf_dirty_11() { return &___buf_dirty_11; }
	inline void set_buf_dirty_11(bool value)
	{
		___buf_dirty_11 = value;
	}

	inline static int32_t get_offset_of_buf_start_12() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_start_12)); }
	inline int64_t get_buf_start_12() const { return ___buf_start_12; }
	inline int64_t* get_address_of_buf_start_12() { return &___buf_start_12; }
	inline void set_buf_start_12(int64_t value)
	{
		___buf_start_12 = value;
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier((&___name_13), value);
	}

	inline static int32_t get_offset_of_handle_14() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___handle_14)); }
	inline intptr_t get_handle_14() const { return ___handle_14; }
	inline intptr_t* get_address_of_handle_14() { return &___handle_14; }
	inline void set_handle_14(intptr_t value)
	{
		___handle_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T4292183065_H
#ifndef TRANSITIONTIME_T449921781_H
#define TRANSITIONTIME_T449921781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo/TransitionTime
struct  TransitionTime_t449921781 
{
public:
	// System.DateTime System.TimeZoneInfo/TransitionTime::timeOfDay
	DateTime_t3738529785  ___timeOfDay_0;
	// System.Int32 System.TimeZoneInfo/TransitionTime::month
	int32_t ___month_1;
	// System.Int32 System.TimeZoneInfo/TransitionTime::day
	int32_t ___day_2;
	// System.Int32 System.TimeZoneInfo/TransitionTime::week
	int32_t ___week_3;
	// System.DayOfWeek System.TimeZoneInfo/TransitionTime::dayOfWeek
	int32_t ___dayOfWeek_4;
	// System.Boolean System.TimeZoneInfo/TransitionTime::isFixedDateRule
	bool ___isFixedDateRule_5;

public:
	inline static int32_t get_offset_of_timeOfDay_0() { return static_cast<int32_t>(offsetof(TransitionTime_t449921781, ___timeOfDay_0)); }
	inline DateTime_t3738529785  get_timeOfDay_0() const { return ___timeOfDay_0; }
	inline DateTime_t3738529785 * get_address_of_timeOfDay_0() { return &___timeOfDay_0; }
	inline void set_timeOfDay_0(DateTime_t3738529785  value)
	{
		___timeOfDay_0 = value;
	}

	inline static int32_t get_offset_of_month_1() { return static_cast<int32_t>(offsetof(TransitionTime_t449921781, ___month_1)); }
	inline int32_t get_month_1() const { return ___month_1; }
	inline int32_t* get_address_of_month_1() { return &___month_1; }
	inline void set_month_1(int32_t value)
	{
		___month_1 = value;
	}

	inline static int32_t get_offset_of_day_2() { return static_cast<int32_t>(offsetof(TransitionTime_t449921781, ___day_2)); }
	inline int32_t get_day_2() const { return ___day_2; }
	inline int32_t* get_address_of_day_2() { return &___day_2; }
	inline void set_day_2(int32_t value)
	{
		___day_2 = value;
	}

	inline static int32_t get_offset_of_week_3() { return static_cast<int32_t>(offsetof(TransitionTime_t449921781, ___week_3)); }
	inline int32_t get_week_3() const { return ___week_3; }
	inline int32_t* get_address_of_week_3() { return &___week_3; }
	inline void set_week_3(int32_t value)
	{
		___week_3 = value;
	}

	inline static int32_t get_offset_of_dayOfWeek_4() { return static_cast<int32_t>(offsetof(TransitionTime_t449921781, ___dayOfWeek_4)); }
	inline int32_t get_dayOfWeek_4() const { return ___dayOfWeek_4; }
	inline int32_t* get_address_of_dayOfWeek_4() { return &___dayOfWeek_4; }
	inline void set_dayOfWeek_4(int32_t value)
	{
		___dayOfWeek_4 = value;
	}

	inline static int32_t get_offset_of_isFixedDateRule_5() { return static_cast<int32_t>(offsetof(TransitionTime_t449921781, ___isFixedDateRule_5)); }
	inline bool get_isFixedDateRule_5() const { return ___isFixedDateRule_5; }
	inline bool* get_address_of_isFixedDateRule_5() { return &___isFixedDateRule_5; }
	inline void set_isFixedDateRule_5(bool value)
	{
		___isFixedDateRule_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.TimeZoneInfo/TransitionTime
struct TransitionTime_t449921781_marshaled_pinvoke
{
	DateTime_t3738529785  ___timeOfDay_0;
	int32_t ___month_1;
	int32_t ___day_2;
	int32_t ___week_3;
	int32_t ___dayOfWeek_4;
	int32_t ___isFixedDateRule_5;
};
// Native definition for COM marshalling of System.TimeZoneInfo/TransitionTime
struct TransitionTime_t449921781_marshaled_com
{
	DateTime_t3738529785  ___timeOfDay_0;
	int32_t ___month_1;
	int32_t ___day_2;
	int32_t ___week_3;
	int32_t ___dayOfWeek_4;
	int32_t ___isFixedDateRule_5;
};
#endif // TRANSITIONTIME_T449921781_H
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
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef AES_T1218282760_H
#define AES_T1218282760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Aes
struct  Aes_t1218282760  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AES_T1218282760_H
#ifndef KEYVALUEPAIR_2_T298337405_H
#define KEYVALUEPAIR_2_T298337405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
struct  KeyValuePair_2_t298337405 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	DateTime_t3738529785  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	TimeType_t2507513283  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t298337405, ___key_0)); }
	inline DateTime_t3738529785  get_key_0() const { return ___key_0; }
	inline DateTime_t3738529785 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(DateTime_t3738529785  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t298337405, ___value_1)); }
	inline TimeType_t2507513283  get_value_1() const { return ___value_1; }
	inline TimeType_t2507513283 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(TimeType_t2507513283  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T298337405_H
#ifndef AESMANAGED_T1129950597_H
#define AESMANAGED_T1129950597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesManaged
struct  AesManaged_t1129950597  : public Aes_t1218282760
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESMANAGED_T1129950597_H
#ifndef ADJUSTMENTRULE_T74449909_H
#define ADJUSTMENTRULE_T74449909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo/AdjustmentRule
struct  AdjustmentRule_t74449909  : public RuntimeObject
{
public:
	// System.DateTime System.TimeZoneInfo/AdjustmentRule::dateEnd
	DateTime_t3738529785  ___dateEnd_0;
	// System.DateTime System.TimeZoneInfo/AdjustmentRule::dateStart
	DateTime_t3738529785  ___dateStart_1;
	// System.TimeSpan System.TimeZoneInfo/AdjustmentRule::daylightDelta
	TimeSpan_t881159249  ___daylightDelta_2;
	// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::daylightTransitionEnd
	TransitionTime_t449921781  ___daylightTransitionEnd_3;
	// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::daylightTransitionStart
	TransitionTime_t449921781  ___daylightTransitionStart_4;

public:
	inline static int32_t get_offset_of_dateEnd_0() { return static_cast<int32_t>(offsetof(AdjustmentRule_t74449909, ___dateEnd_0)); }
	inline DateTime_t3738529785  get_dateEnd_0() const { return ___dateEnd_0; }
	inline DateTime_t3738529785 * get_address_of_dateEnd_0() { return &___dateEnd_0; }
	inline void set_dateEnd_0(DateTime_t3738529785  value)
	{
		___dateEnd_0 = value;
	}

	inline static int32_t get_offset_of_dateStart_1() { return static_cast<int32_t>(offsetof(AdjustmentRule_t74449909, ___dateStart_1)); }
	inline DateTime_t3738529785  get_dateStart_1() const { return ___dateStart_1; }
	inline DateTime_t3738529785 * get_address_of_dateStart_1() { return &___dateStart_1; }
	inline void set_dateStart_1(DateTime_t3738529785  value)
	{
		___dateStart_1 = value;
	}

	inline static int32_t get_offset_of_daylightDelta_2() { return static_cast<int32_t>(offsetof(AdjustmentRule_t74449909, ___daylightDelta_2)); }
	inline TimeSpan_t881159249  get_daylightDelta_2() const { return ___daylightDelta_2; }
	inline TimeSpan_t881159249 * get_address_of_daylightDelta_2() { return &___daylightDelta_2; }
	inline void set_daylightDelta_2(TimeSpan_t881159249  value)
	{
		___daylightDelta_2 = value;
	}

	inline static int32_t get_offset_of_daylightTransitionEnd_3() { return static_cast<int32_t>(offsetof(AdjustmentRule_t74449909, ___daylightTransitionEnd_3)); }
	inline TransitionTime_t449921781  get_daylightTransitionEnd_3() const { return ___daylightTransitionEnd_3; }
	inline TransitionTime_t449921781 * get_address_of_daylightTransitionEnd_3() { return &___daylightTransitionEnd_3; }
	inline void set_daylightTransitionEnd_3(TransitionTime_t449921781  value)
	{
		___daylightTransitionEnd_3 = value;
	}

	inline static int32_t get_offset_of_daylightTransitionStart_4() { return static_cast<int32_t>(offsetof(AdjustmentRule_t74449909, ___daylightTransitionStart_4)); }
	inline TransitionTime_t449921781  get_daylightTransitionStart_4() const { return ___daylightTransitionStart_4; }
	inline TransitionTime_t449921781 * get_address_of_daylightTransitionStart_4() { return &___daylightTransitionStart_4; }
	inline void set_daylightTransitionStart_4(TransitionTime_t449921781  value)
	{
		___daylightTransitionStart_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADJUSTMENTRULE_T74449909_H
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
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeySizes_t85027896 * m_Items[1];

public:
	inline KeySizes_t85027896 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeySizes_t85027896 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeySizes_t85027896 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline KeySizes_t85027896 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeySizes_t85027896 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeySizes_t85027896 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t2770800703  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t1469475992  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AdjustmentRule_t74449909 * m_Items[1];

public:
	inline AdjustmentRule_t74449909 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AdjustmentRule_t74449909 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AdjustmentRule_t74449909 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AdjustmentRule_t74449909 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AdjustmentRule_t74449909 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AdjustmentRule_t74449909 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m4064694223_gshared (Dictionary_2_t1396226614 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Item(!0)
extern "C"  TimeType_t2507513283  Dictionary_2_get_Item_m2315657164_gshared (Dictionary_2_t1396226614 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C"  KeyValuePair_2_t298337405  List_1_get_Item_m2470931760_gshared (List_1_t1770412147 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::get_Key()
extern "C"  DateTime_t3738529785  KeyValuePair_2_get_Key_m2071921741_gshared (KeyValuePair_2_t298337405 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::get_Value()
extern "C"  TimeType_t2507513283  KeyValuePair_2_get_Value_m3123410994_gshared (KeyValuePair_2_t298337405 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C"  int32_t List_1_get_Count_m947837680_gshared (List_1_t1770412147 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C"  ObjectU5BU5D_t2843939325* List_1_ToArray_m4168020446_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C"  bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m2601736566_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2059424751_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m224509051_gshared (Dictionary_2_t1396226614 * __this, int32_t p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m107019914_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m670166897_gshared (Dictionary_2_t1396226614 * __this, int32_t p0, TimeType_t2507513283  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m2598981433_gshared (List_1_t1770412147 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::.ctor(!0,!1)
extern "C"  void KeyValuePair_2__ctor_m2324111314_gshared (KeyValuePair_2_t298337405 * __this, DateTime_t3738529785  p0, TimeType_t2507513283  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(!0)
extern "C"  void List_1_Add_m1397479321_gshared (List_1_t1770412147 * __this, KeyValuePair_2_t298337405  p0, const RuntimeMethod* method);

// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create()
extern "C"  RandomNumberGenerator_t386037858 * RandomNumberGenerator_Create_m4162970280 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::get_Rng()
extern "C"  RandomNumberGenerator_t386037858 * KeyBuilder_get_Rng_m3373220441 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::IV(System.Int32)
extern "C"  ByteU5BU5D_t4116647657* KeyBuilder_IV_m3340234014 (RuntimeObject * __this /* static, unused */, int32_t ___size0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::Clone()
extern "C"  RuntimeObject * Array_Clone_m2672907798 (RuntimeArray * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Locale::GetText(System.String,System.Object[])
extern "C"  String_t* Locale_GetText_m2427493201 (RuntimeObject * __this /* static, unused */, String_t* ___fmt0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
extern "C"  void CryptographicException__ctor_m503735289 (CryptographicException_t248831461 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C"  int32_t Math_Min_m3468062251 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Buffer_BlockCopy_m2884209081 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C"  void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::Finalize()
extern "C"  void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
extern "C"  void Array_Clear_m2231608178 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotImplementedException::.ctor(System.String)
extern "C"  void NotImplementedException__ctor_m3095902440 (NotImplementedException_t3489357830 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Locale::GetText(System.String)
extern "C"  String_t* Locale_GetText_m1626635120 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C"  void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ObjectDisposedException::.ctor(System.String)
extern "C"  void ObjectDisposedException__ctor_m3603759869 (ObjectDisposedException_t21392786 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CheckInput(System.Byte[],System.Int32,System.Int32)
extern "C"  void SymmetricTransform_CheckInput_m2092289040 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String,System.String)
extern "C"  void CryptographicException__ctor_m3803155940 (CryptographicException_t248831461 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_KeepLastBlock()
extern "C"  bool SymmetricTransform_get_KeepLastBlock_m2492071306 (SymmetricTransform_t3802591843 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t SymmetricTransform_InternalTransformBlock_m1743612142 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t4116647657* ___outputBuffer3, int32_t ___outputOffset4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Random(System.Byte[],System.Int32,System.Int32)
extern "C"  void SymmetricTransform_Random_m3740038270 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::ThrowBadPaddingException(System.Security.Cryptography.PaddingMode,System.Int32,System.Int32)
extern "C"  void SymmetricTransform_ThrowBadPaddingException_m2898061954 (SymmetricTransform_t3802591843 * __this, int32_t ___padding0, int32_t ___length1, int32_t ___position2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4116647657* SymmetricTransform_FinalEncrypt_m748885414 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalDecrypt(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4116647657* SymmetricTransform_FinalDecrypt_m764004682 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::Invoke()
extern "C"  void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor()
extern "C"  void Exception__ctor_m213470898 (Exception_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Exception__ctor_m2499432361 (Exception_t * __this, SerializationInfo_t950877179 * p0, StreamingContext_t3711869237  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::.ctor()
extern "C"  void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::.ctor()
extern "C"  void SymmetricAlgorithm__ctor_m467277132 (SymmetricAlgorithm_t4254223087 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.KeySizes::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void KeySizes__ctor_m3113946058 (KeySizes_t85027896 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Aes::.ctor()
extern "C"  void Aes__ctor_m178909601 (Aes_t1218282760 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::Key(System.Int32)
extern "C"  ByteU5BU5D_t4116647657* KeyBuilder_Key_m2503211157 (RuntimeObject * __this /* static, unused */, int32_t ___size0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::.ctor(System.Security.Cryptography.Aes,System.Boolean,System.Byte[],System.Byte[])
extern "C"  void AesTransform__ctor_m3143546745 (AesTransform_t2957123611 * __this, Aes_t1218282760 * ___algo0, bool ___encryption1, ByteU5BU5D_t4116647657* ___key2, ByteU5BU5D_t4116647657* ___iv3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV()
extern "C"  ByteU5BU5D_t4116647657* SymmetricAlgorithm_get_IV_m1875559108 (SymmetricAlgorithm_t4254223087 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[])
extern "C"  void SymmetricAlgorithm_set_IV_m3196220308 (SymmetricAlgorithm_t4254223087 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key()
extern "C"  ByteU5BU5D_t4116647657* SymmetricAlgorithm_get_Key_m3241860519 (SymmetricAlgorithm_t4254223087 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[])
extern "C"  void SymmetricAlgorithm_set_Key_m1775642191 (SymmetricAlgorithm_t4254223087 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize()
extern "C"  int32_t SymmetricAlgorithm_get_KeySize_m4185004893 (SymmetricAlgorithm_t4254223087 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32)
extern "C"  void SymmetricAlgorithm_set_KeySize_m3805756466 (SymmetricAlgorithm_t4254223087 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AesManaged::get_Key()
extern "C"  ByteU5BU5D_t4116647657* AesManaged_get_Key_m538801386 (AesManaged_t1129950597 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AesManaged::get_IV()
extern "C"  ByteU5BU5D_t4116647657* AesManaged_get_IV_m118095902 (AesManaged_t1129950597 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C"  RuntimeObject* AesManaged_CreateDecryptor_m692040246 (AesManaged_t1129950597 * __this, ByteU5BU5D_t4116647657* ___rgbKey0, ByteU5BU5D_t4116647657* ___rgbIV1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C"  RuntimeObject* AesManaged_CreateEncryptor_m2294080233 (AesManaged_t1129950597 * __this, ByteU5BU5D_t4116647657* ___rgbKey0, ByteU5BU5D_t4116647657* ___rgbIV1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Dispose(System.Boolean)
extern "C"  void SymmetricAlgorithm_Dispose_m1120980942 (SymmetricAlgorithm_t4254223087 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[])
extern "C"  void SymmetricTransform__ctor_m2693628991 (SymmetricTransform_t3802591843 * __this, SymmetricAlgorithm_t4254223087 * ___symmAlgo0, bool ___encryption1, ByteU5BU5D_t4116647657* ___rgbIV2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.AesTransform::SubByte(System.UInt32)
extern "C"  uint32_t AesTransform_SubByte_m3350159546 (AesTransform_t2957123611 * __this, uint32_t ___a0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void AesTransform_Encrypt128_m424393011 (AesTransform_t2957123611 * __this, ByteU5BU5D_t4116647657* ___indata0, ByteU5BU5D_t4116647657* ___outdata1, UInt32U5BU5D_t2770800703* ___ekey2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void AesTransform_Decrypt128_m3018534522 (AesTransform_t2957123611 * __this, ByteU5BU5D_t4116647657* ___indata0, ByteU5BU5D_t4116647657* ___outdata1, UInt32U5BU5D_t2770800703* ___ekey2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::get_Ticks()
extern "C"  int64_t TimeSpan_get_Ticks_m2137362016 (TimeSpan_t881159249 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void TimeSpan__ctor_m3689759052 (TimeSpan_t881159249 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_GreaterThan_m734703194 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_LessThan_m1594498345 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidTimeZoneException::.ctor(System.String)
extern "C"  void InvalidTimeZoneException__ctor_m4131156752 (InvalidTimeZoneException_t4066718130 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZoneInfo/AdjustmentRule::get_DaylightDelta()
extern "C"  TimeSpan_t881159249  AdjustmentRule_get_DaylightDelta_m2159274191 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
extern "C"  TimeSpan_t881159249  TimeSpan_op_Addition_m672714982 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZoneInfo/AdjustmentRule::get_DateStart()
extern "C"  DateTime_t3738529785  AdjustmentRule_get_DateStart_m2176962503 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_GreaterThan_m3768590082 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZoneInfo/AdjustmentRule::get_DateEnd()
extern "C"  DateTime_t3738529785  AdjustmentRule_get_DateEnd_m3164615624 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_Equality_m1022058599 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::FindSystemTimeZoneByFileName(System.String,System.String)
extern "C"  TimeZoneInfo_t161405854 * TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268 (RuntimeObject * __this /* static, unused */, String_t* ___id0, String_t* ___filepath1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::get_TimeZoneDirectory()
extern "C"  String_t* TimeZoneInfo_get_TimeZoneDirectory_m1493272576 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C"  String_t* Path_Combine_m3389272516 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneNotFoundException::.ctor()
extern "C"  void TimeZoneNotFoundException__ctor_m2966108609 (TimeZoneNotFoundException_t171073523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int64)
extern "C"  void TimeSpan__ctor_m1896986612 (TimeSpan_t881159249 * __this, int64_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String)
extern "C"  TimeZoneInfo_t161405854 * TimeZoneInfo_CreateCustomTimeZone_m4187381152 (RuntimeObject * __this /* static, unused */, String_t* ___id0, TimeSpan_t881159249  ___baseUtcOffset1, String_t* ___displayName2, String_t* ___standardDisplayName3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[],System.Boolean)
extern "C"  TimeZoneInfo_t161405854 * TimeZoneInfo_CreateCustomTimeZone_m1792093365 (RuntimeObject * __this /* static, unused */, String_t* ___id0, TimeSpan_t881159249  ___baseUtcOffset1, String_t* ___displayName2, String_t* ___standardDisplayName3, String_t* ___daylightDisplayName4, AdjustmentRuleU5BU5D_t1469475992* ___adjustmentRules5, bool ___disableDaylightSavingTime6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo::.ctor(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[],System.Boolean)
extern "C"  void TimeZoneInfo__ctor_m1956250117 (TimeZoneInfo_t161405854 * __this, String_t* ___id0, TimeSpan_t881159249  ___baseUtcOffset1, String_t* ___displayName2, String_t* ___standardDisplayName3, String_t* ___daylightDisplayName4, AdjustmentRuleU5BU5D_t1469475992* ___adjustmentRules5, bool ___disableDaylightSavingTime6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::get_Id()
extern "C"  String_t* TimeZoneInfo_get_Id_m3716673190 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo::HasSameRules(System.TimeZoneInfo)
extern "C"  bool TimeZoneInfo_HasSameRules_m697432081 (TimeZoneInfo_t161405854 * __this, TimeZoneInfo_t161405854 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
extern "C"  bool File_Exists_m3943585060 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C"  FileStream_t4292183065 * File_OpenRead_m2936789020 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo::ValidTZFile(System.Byte[],System.Int32)
extern "C"  bool TimeZoneInfo_ValidTZFile_m3505397244 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___length1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::ParseTZBuffer(System.String,System.Byte[],System.Int32)
extern "C"  TimeZoneInfo_t161405854 * TimeZoneInfo_ParseTZBuffer_m3851257210 (RuntimeObject * __this /* static, unused */, String_t* ___id0, ByteU5BU5D_t4116647657* ___buffer1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetHashCode()
extern "C"  int32_t String_GetHashCode_m1906374149 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::GetAdjustmentRules()
extern "C"  AdjustmentRuleU5BU5D_t1469475992* TimeZoneInfo_GetAdjustmentRules_m496065111 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo/AdjustmentRule::GetHashCode()
extern "C"  int32_t AdjustmentRule_GetHashCode_m3136432906 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotImplementedException::.ctor()
extern "C"  void NotImplementedException__ctor_m3058704252 (NotImplementedException_t3489357830 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo::IsDaylightSavingTime(System.DateTime)
extern "C"  bool TimeZoneInfo_IsDaylightSavingTime_m2475480634 (TimeZoneInfo_t161405854 * __this, DateTime_t3738529785  ___dateTime0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo/AdjustmentRule System.TimeZoneInfo::GetApplicableRule(System.DateTime)
extern "C"  AdjustmentRule_t74449909 * TimeZoneInfo_GetApplicableRule_m3152592286 (TimeZoneInfo_t161405854 * __this, DateTime_t3738529785  ___dateTime0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZoneInfo::get_BaseUtcOffset()
extern "C"  TimeSpan_t881159249  TimeZoneInfo_get_BaseUtcOffset_m808429276 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_Inequality_m2467851530 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/AdjustmentRule::Equals(System.TimeZoneInfo/AdjustmentRule)
extern "C"  bool AdjustmentRule_Equals_m4095462908 (AdjustmentRule_t74449909 * __this, AdjustmentRule_t74449909 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind System.DateTime::get_Kind()
extern "C"  int32_t DateTime_get_Kind_m2154871796 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo::IsInvalidTime(System.DateTime)
extern "C"  bool TimeZoneInfo_IsInvalidTime_m1886861930 (TimeZoneInfo_t161405854 * __this, DateTime_t3738529785  ___dateTime0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::get_Utc()
extern "C"  TimeZoneInfo_t161405854 * TimeZoneInfo_get_Utc_m4037366733 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo::get_SupportsDaylightSavingTime()
extern "C"  bool TimeZoneInfo_get_SupportsDaylightSavingTime_m3644631779 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::get_Local()
extern "C"  TimeZoneInfo_t161405854 * TimeZoneInfo_get_Local_m3767312181 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsDaylightSavingTime()
extern "C"  bool DateTime_IsDaylightSavingTime_m2632700238 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToUniversalTime()
extern "C"  DateTime_t3738529785  DateTime_ToUniversalTime_m1945318289 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
extern "C"  DateTime_t3738529785  DateTime_SpecifyKind_m3332658812 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Date()
extern "C"  DateTime_t3738529785  DateTime_get_Date_m46742767 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::get_DaylightTransitionStart()
extern "C"  TransitionTime_t449921781  AdjustmentRule_get_DaylightTransitionStart_m3488892433 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Year()
extern "C"  int32_t DateTime_get_Year_m1184003812 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZoneInfo::TransitionPoint(System.TimeZoneInfo/TransitionTime,System.Int32)
extern "C"  DateTime_t3738529785  TimeZoneInfo_TransitionPoint_m2194238407 (RuntimeObject * __this /* static, unused */, TransitionTime_t449921781  ___transition0, int32_t ___year1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::get_DaylightTransitionEnd()
extern "C"  TransitionTime_t449921781  AdjustmentRule_get_DaylightTransitionEnd_m3747881060 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Month()
extern "C"  int32_t TransitionTime_get_Month_m1950274531 (TransitionTime_t449921781 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Subtraction(System.DateTime,System.TimeSpan)
extern "C"  DateTime_t3738529785  DateTime_op_Subtraction_m529926081 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThanOrEqual(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_GreaterThanOrEqual_m674703316 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_LessThan_m2497205152 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Addition(System.DateTime,System.TimeSpan)
extern "C"  DateTime_t3738529785  DateTime_op_Addition_m1857121695 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::get_DisplayName()
extern "C"  String_t* TimeZoneInfo_get_DisplayName_m3871974074 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::get_IsFixedDateRule()
extern "C"  bool TransitionTime_get_IsFixedDateRule_m1557984015 (TransitionTime_t449921781 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Day()
extern "C"  int32_t TransitionTime_get_Day_m1297598877 (TransitionTime_t449921781 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void DateTime__ctor_m12900168 (DateTime_t3738529785 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZoneInfo/TransitionTime::get_TimeOfDay()
extern "C"  DateTime_t3738529785  TransitionTime_get_TimeOfDay_m2066448705 (TransitionTime_t449921781 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTime::get_TimeOfDay()
extern "C"  TimeSpan_t881159249  DateTime_get_TimeOfDay_m82064893 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.DateTime::get_DayOfWeek()
extern "C"  int32_t DateTime_get_DayOfWeek_m2326490739 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Week()
extern "C"  int32_t TransitionTime_get_Week_m3334751603 (TransitionTime_t449921781 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.TimeZoneInfo/TransitionTime::get_DayOfWeek()
extern "C"  int32_t TransitionTime_get_DayOfWeek_m3191031940 (TransitionTime_t449921781 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::DaysInMonth(System.Int32,System.Int32)
extern "C"  int32_t DateTime_DaysInMonth_m2587936260 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString()
extern "C"  String_t* StringBuilder_ToString_m3317489284 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
extern "C"  int32_t BitConverter_ToInt32_m1089563119 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo::SwapInt32(System.Int32)
extern "C"  int32_t TimeZoneInfo_SwapInt32_m4051795925 (RuntimeObject * __this /* static, unused */, int32_t ___i0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo::ReadBigEndianInt32(System.Byte[],System.Int32)
extern "C"  int32_t TimeZoneInfo_ReadBigEndianInt32_m3367804058 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___start1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidTimeZoneException::.ctor()
extern "C"  void InvalidTimeZoneException__ctor_m6234683 (InvalidTimeZoneException_t4066718130 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.TimeZoneInfo::ParseAbbreviations(System.Byte[],System.Int32,System.Int32)
extern "C"  Dictionary_2_t736164020 * TimeZoneInfo_ParseAbbreviations_m1471889884 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType> System.TimeZoneInfo::ParseTimesTypes(System.Byte[],System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.String>)
extern "C"  Dictionary_2_t1396226614 * TimeZoneInfo_ParseTimesTypes_m1754682716 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___index1, int32_t ___count2, Dictionary_2_t736164020 * ___abbreviations3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>> System.TimeZoneInfo::ParseTransitions(System.Byte[],System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>)
extern "C"  List_1_t1770412147 * TimeZoneInfo_ParseTransitions_m542357583 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___index1, int32_t ___count2, Dictionary_2_t1396226614 * ___time_types3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Count()
#define Dictionary_2_get_Count_m4064694223(__this, method) ((  int32_t (*) (Dictionary_2_t1396226614 *, const RuntimeMethod*))Dictionary_2_get_Count_m4064694223_gshared)(__this, method)
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Item(!0)
#define Dictionary_2_get_Item_m2315657164(__this, p0, method) ((  TimeType_t2507513283  (*) (Dictionary_2_t1396226614 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m2315657164_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>::.ctor()
#define List_1__ctor_m27745599(__this, method) ((  void (*) (List_1_t1546524651 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
#define List_1_get_Item_m2470931760(__this, p0, method) ((  KeyValuePair_2_t298337405  (*) (List_1_t1770412147 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2470931760_gshared)(__this, p0, method)
// !0 System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::get_Key()
#define KeyValuePair_2_get_Key_m2071921741(__this, method) ((  DateTime_t3738529785  (*) (KeyValuePair_2_t298337405 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2071921741_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::get_Value()
#define KeyValuePair_2_get_Value_m3123410994(__this, method) ((  TimeType_t2507513283  (*) (KeyValuePair_2_t298337405 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3123410994_gshared)(__this, method)
// System.Double System.TimeSpan::get_TotalSeconds()
extern "C"  double TimeSpan_get_TotalSeconds_m4083325051 (TimeSpan_t881159249 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Month()
extern "C"  int32_t DateTime_get_Month_m1566006993 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Day()
extern "C"  int32_t DateTime_get_Day_m1623500273 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateFixedDateRule(System.DateTime,System.Int32,System.Int32)
extern "C"  TransitionTime_t449921781  TransitionTime_CreateFixedDateRule_m488639024 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___timeOfDay0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::op_Inequality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C"  bool TransitionTime_op_Inequality_m1903374519 (RuntimeObject * __this /* static, unused */, TransitionTime_t449921781  ___t10, TransitionTime_t449921781  ___t21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo/AdjustmentRule System.TimeZoneInfo/AdjustmentRule::CreateAdjustmentRule(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C"  AdjustmentRule_t74449909 * AdjustmentRule_CreateAdjustmentRule_m1020400594 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___dateStart0, DateTime_t3738529785  ___dateEnd1, TimeSpan_t881159249  ___daylightDelta2, TransitionTime_t449921781  ___daylightTransitionStart3, TransitionTime_t449921781  ___daylightTransitionEnd4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>::Add(!0)
#define List_1_Add_m1698810603(__this, p0, method) ((  void (*) (List_1_t1546524651 *, AdjustmentRule_t74449909 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
extern "C"  TimeSpan_t881159249  TimeSpan_op_Subtraction_m3592306516 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
#define List_1_get_Count_m947837680(__this, method) ((  int32_t (*) (List_1_t1770412147 *, const RuntimeMethod*))List_1_get_Count_m947837680_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>::get_Count()
#define List_1_get_Count_m2451877167(__this, method) ((  int32_t (*) (List_1_t1546524651 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule> System.TimeZoneInfo::ValidateRules(System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>)
extern "C"  List_1_t1546524651 * TimeZoneInfo_ValidateRules_m1341992406 (RuntimeObject * __this /* static, unused */, List_1_t1546524651 * ___adjustmentRules0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0[] System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>::ToArray()
#define List_1_ToArray_m3286616822(__this, method) ((  AdjustmentRuleU5BU5D_t1469475992* (*) (List_1_t1546524651 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method)
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[])
extern "C"  TimeZoneInfo_t161405854 * TimeZoneInfo_CreateCustomTimeZone_m3151472709 (RuntimeObject * __this /* static, unused */, String_t* ___id0, TimeSpan_t881159249  ___baseUtcOffset1, String_t* ___displayName2, String_t* ___standardDisplayName3, String_t* ___daylightDisplayName4, AdjustmentRuleU5BU5D_t1469475992* ___adjustmentRules5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>::Remove(!0)
#define List_1_Remove_m1862724733(__this, p0, method) ((  bool (*) (List_1_t1546524651 *, AdjustmentRule_t74449909 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor()
#define Dictionary_2__ctor_m4261191612(__this, method) ((  void (*) (Dictionary_2_t736164020 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(!0,!1)
#define Dictionary_2_Add_m1718909353(__this, p0, p1, method) ((  void (*) (Dictionary_2_t736164020 *, int32_t, String_t*, const RuntimeMethod*))Dictionary_2_Add_m2059424751_gshared)(__this, p0, p1, method)
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C"  int32_t StringBuilder_get_Length_m3238060835 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString(System.Int32,System.Int32)
extern "C"  String_t* StringBuilder_ToString_m774364392 (StringBuilder_t * __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Int32)
#define Dictionary_2__ctor_m224509051(__this, p0, method) ((  void (*) (Dictionary_2_t1396226614 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m224509051_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Item(!0)
#define Dictionary_2_get_Item_m823070101(__this, p0, method) ((  String_t* (*) (Dictionary_2_t736164020 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m107019914_gshared)(__this, p0, method)
// System.Void System.TimeZoneInfo/TimeType::.ctor(System.Int32,System.Boolean,System.String)
extern "C"  void TimeType__ctor_m1663688892 (TimeType_t2507513283 * __this, int32_t ___offset0, bool ___is_dst1, String_t* ___abbrev2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Add(!0,!1)
#define Dictionary_2_Add_m670166897(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1396226614 *, int32_t, TimeType_t2507513283 , const RuntimeMethod*))Dictionary_2_Add_m670166897_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Int32)
#define List_1__ctor_m2598981433(__this, p0, method) ((  void (*) (List_1_t1770412147 *, int32_t, const RuntimeMethod*))List_1__ctor_m2598981433_gshared)(__this, p0, method)
// System.DateTime System.TimeZoneInfo::DateTimeFromUnixTime(System.Int64)
extern "C"  DateTime_t3738529785  TimeZoneInfo_DateTimeFromUnixTime_m2151402451 (RuntimeObject * __this /* static, unused */, int64_t ___unix_time0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::.ctor(!0,!1)
#define KeyValuePair_2__ctor_m2324111314(__this, p0, p1, method) ((  void (*) (KeyValuePair_2_t298337405 *, DateTime_t3738529785 , TimeType_t2507513283 , const RuntimeMethod*))KeyValuePair_2__ctor_m2324111314_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(!0)
#define List_1_Add_m1397479321(__this, p0, method) ((  void (*) (List_1_t1770412147 *, KeyValuePair_2_t298337405 , const RuntimeMethod*))List_1_Add_m1397479321_gshared)(__this, p0, method)
// System.DateTime System.DateTime::AddSeconds(System.Double)
extern "C"  DateTime_t3738529785  DateTime_AddSeconds_m332574389 (DateTime_t3738529785 * __this, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::op_Equality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C"  bool TransitionTime_op_Equality_m844747352 (RuntimeObject * __this /* static, unused */, TransitionTime_t449921781  ___t10, TransitionTime_t449921781  ___t21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::get_Ticks()
extern "C"  int64_t DateTime_get_Ticks_m1550640881 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/AdjustmentRule::.ctor(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C"  void AdjustmentRule__ctor_m495727949 (AdjustmentRule_t74449909 * __this, DateTime_t3738529785  ___dateStart0, DateTime_t3738529785  ___dateEnd1, TimeSpan_t881159249  ___daylightDelta2, TransitionTime_t449921781  ___daylightTransitionStart3, TransitionTime_t449921781  ___daylightTransitionEnd4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_Equality_m1999885032 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::GetHashCode()
extern "C"  int32_t DateTime_GetHashCode_m2261847002 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::GetHashCode()
extern "C"  int32_t TimeSpan_GetHashCode_m1939414618 (TimeSpan_t881159249 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo/TransitionTime::GetHashCode()
extern "C"  int32_t TransitionTime_GetHashCode_m2153693963 (TransitionTime_t449921781 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo/TimeType::ToString()
extern "C"  String_t* TimeType_ToString_m3568850299 (TimeType_t2507513283 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.DateTime,System.Int32)
extern "C"  void TransitionTime__ctor_m1241469383 (TransitionTime_t449921781 * __this, DateTime_t3738529785  ___timeOfDay0, int32_t ___month1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.DateTime,System.Int32,System.Int32)
extern "C"  void TransitionTime__ctor_m1012552555 (TransitionTime_t449921781 * __this, DateTime_t3738529785  ___timeOfDay0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/TransitionTime::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TransitionTime_GetObjectData_m565919319 (TransitionTime_t449921781 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.Object)
extern "C"  bool TransitionTime_Equals_m2918964558 (TransitionTime_t449921781 * __this, RuntimeObject * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.TimeZoneInfo/TransitionTime)
extern "C"  bool TransitionTime_Equals_m2330892423 (TransitionTime_t449921781 * __this, TransitionTime_t449921781  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/TransitionTime::OnDeserialization(System.Object)
extern "C"  void TransitionTime_OnDeserialization_m482900757 (TransitionTime_t449921781 * __this, RuntimeObject * ___sender0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.String Locale::GetText(System.String)
extern "C"  String_t* Locale_GetText_m1626635120 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___msg0;
		return L_0;
	}
}
// System.String Locale::GetText(System.String,System.Object[])
extern "C"  String_t* Locale_GetText_m2427493201 (RuntimeObject * __this /* static, unused */, String_t* ___fmt0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Locale_GetText_m2427493201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___fmt0;
		ObjectU5BU5D_t2843939325* L_1 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m630303134(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
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
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::get_Rng()
extern "C"  RandomNumberGenerator_t386037858 * KeyBuilder_get_Rng_m3373220441 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyBuilder_get_Rng_m3373220441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RandomNumberGenerator_t386037858 * L_0 = ((KeyBuilder_t2049230356_StaticFields*)il2cpp_codegen_static_fields_for(KeyBuilder_t2049230356_il2cpp_TypeInfo_var))->get_rng_0();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		RandomNumberGenerator_t386037858 * L_1 = RandomNumberGenerator_Create_m4162970280(NULL /*static, unused*/, /*hidden argument*/NULL);
		((KeyBuilder_t2049230356_StaticFields*)il2cpp_codegen_static_fields_for(KeyBuilder_t2049230356_il2cpp_TypeInfo_var))->set_rng_0(L_1);
	}

IL_0014:
	{
		RandomNumberGenerator_t386037858 * L_2 = ((KeyBuilder_t2049230356_StaticFields*)il2cpp_codegen_static_fields_for(KeyBuilder_t2049230356_il2cpp_TypeInfo_var))->get_rng_0();
		return L_2;
	}
}
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::Key(System.Int32)
extern "C"  ByteU5BU5D_t4116647657* KeyBuilder_Key_m2503211157 (RuntimeObject * __this /* static, unused */, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyBuilder_Key_m2503211157_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		int32_t L_0 = ___size0;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_0));
		RandomNumberGenerator_t386037858 * L_1 = KeyBuilder_get_Rng_m3373220441(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_2 = V_0;
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_1, L_2);
		ByteU5BU5D_t4116647657* L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::IV(System.Int32)
extern "C"  ByteU5BU5D_t4116647657* KeyBuilder_IV_m3340234014 (RuntimeObject * __this /* static, unused */, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyBuilder_IV_m3340234014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		int32_t L_0 = ___size0;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_0));
		RandomNumberGenerator_t386037858 * L_1 = KeyBuilder_get_Rng_m3373220441(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_2 = V_0;
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_1, L_2);
		ByteU5BU5D_t4116647657* L_3 = V_0;
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
// System.Void Mono.Security.Cryptography.SymmetricTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[])
extern "C"  void SymmetricTransform__ctor_m2693628991 (SymmetricTransform_t3802591843 * __this, SymmetricAlgorithm_t4254223087 * ___symmAlgo0, bool ___encryption1, ByteU5BU5D_t4116647657* ___rgbIV2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform__ctor_m2693628991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SymmetricAlgorithm_t4254223087 * L_0 = ___symmAlgo0;
		__this->set_algo_0(L_0);
		bool L_1 = ___encryption1;
		__this->set_encrypt_1(L_1);
		SymmetricAlgorithm_t4254223087 * L_2 = __this->get_algo_0();
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize() */, L_2);
		__this->set_BlockSizeByte_2(((int32_t)((int32_t)L_3>>(int32_t)3)));
		ByteU5BU5D_t4116647657* L_4 = ___rgbIV2;
		if (L_4)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_5 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_6 = KeyBuilder_IV_m3340234014(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		___rgbIV2 = L_6;
		goto IL_004c;
	}

IL_003f:
	{
		ByteU5BU5D_t4116647657* L_7 = ___rgbIV2;
		RuntimeObject * L_8 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_7, /*hidden argument*/NULL);
		___rgbIV2 = ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_8, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
	}

IL_004c:
	{
		ByteU5BU5D_t4116647657* L_9 = ___rgbIV2;
		int32_t L_10 = __this->get_BlockSizeByte_2();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length))))) >= ((int32_t)L_10)))
		{
			goto IL_008b;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_11 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		ByteU5BU5D_t4116647657* L_12 = ___rgbIV2;
		int32_t L_13 = (((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length))));
		RuntimeObject * L_14 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_13);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_14);
		ObjectU5BU5D_t2843939325* L_15 = L_11;
		int32_t L_16 = __this->get_BlockSizeByte_2();
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_17);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_18);
		String_t* L_19 = Locale_GetText_m2427493201(NULL /*static, unused*/, _stringLiteral2387040967, L_15, /*hidden argument*/NULL);
		V_0 = L_19;
		String_t* L_20 = V_0;
		CryptographicException_t248831461 * L_21 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_21, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21,SymmetricTransform__ctor_m2693628991_RuntimeMethod_var);
	}

IL_008b:
	{
		int32_t L_22 = __this->get_BlockSizeByte_2();
		__this->set_temp_3(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_22)));
		ByteU5BU5D_t4116647657* L_23 = ___rgbIV2;
		ByteU5BU5D_t4116647657* L_24 = __this->get_temp_3();
		int32_t L_25 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_26 = ___rgbIV2;
		int32_t L_27 = Math_Min_m3468062251(NULL /*static, unused*/, L_25, (((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))), /*hidden argument*/NULL);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_23, 0, (RuntimeArray *)(RuntimeArray *)L_24, 0, L_27, /*hidden argument*/NULL);
		int32_t L_28 = __this->get_BlockSizeByte_2();
		__this->set_temp2_4(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_28)));
		SymmetricAlgorithm_t4254223087 * L_29 = __this->get_algo_0();
		int32_t L_30 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize() */, L_29);
		__this->set_FeedBackByte_7(((int32_t)((int32_t)L_30>>(int32_t)3)));
		int32_t L_31 = __this->get_FeedBackByte_7();
		if (!L_31)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_32 = __this->get_BlockSizeByte_2();
		int32_t L_33 = __this->get_FeedBackByte_7();
		__this->set_FeedBackIter_8(((int32_t)((int32_t)L_32/(int32_t)L_33)));
	}

IL_00fa:
	{
		int32_t L_34 = __this->get_BlockSizeByte_2();
		__this->set_workBuff_5(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_34)));
		int32_t L_35 = __this->get_BlockSizeByte_2();
		__this->set_workout_6(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_35)));
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::System.IDisposable.Dispose()
extern "C"  void SymmetricTransform_System_IDisposable_Dispose_m3657987482 (SymmetricTransform_t3802591843 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean) */, __this, (bool)1);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::Finalize()
extern "C"  void SymmetricTransform_Finalize_m4129642865 (SymmetricTransform_t3802591843 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean)
extern "C"  void SymmetricTransform_Dispose_m375394407 (SymmetricTransform_t3802591843 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_disposed_9();
		if (L_0)
		{
			goto IL_004a;
		}
	}
	{
		bool L_1 = ___disposing0;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = __this->get_temp_3();
		int32_t L_3 = __this->get_BlockSizeByte_2();
		Array_Clear_m2231608178(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, 0, L_3, /*hidden argument*/NULL);
		__this->set_temp_3((ByteU5BU5D_t4116647657*)NULL);
		ByteU5BU5D_t4116647657* L_4 = __this->get_temp2_4();
		int32_t L_5 = __this->get_BlockSizeByte_2();
		Array_Clear_m2231608178(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, 0, L_5, /*hidden argument*/NULL);
		__this->set_temp2_4((ByteU5BU5D_t4116647657*)NULL);
	}

IL_0043:
	{
		__this->set_m_disposed_9((bool)1);
	}

IL_004a:
	{
		return;
	}
}
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_CanReuseTransform()
extern "C"  bool SymmetricTransform_get_CanReuseTransform_m3495714228 (SymmetricTransform_t3802591843 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[])
extern "C"  void SymmetricTransform_Transform_m1683494363 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___input0, ByteU5BU5D_t4116647657* ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_Transform_m1683494363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SymmetricAlgorithm_t4254223087 * L_0 = __this->get_algo_0();
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0054;
			}
			case 3:
			{
				goto IL_0047;
			}
			case 4:
			{
				goto IL_0061;
			}
		}
	}
	{
		goto IL_006e;
	}

IL_002d:
	{
		ByteU5BU5D_t4116647657* L_3 = ___input0;
		ByteU5BU5D_t4116647657* L_4 = ___output1;
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[]) */, __this, L_3, L_4);
		goto IL_0093;
	}

IL_003a:
	{
		ByteU5BU5D_t4116647657* L_5 = ___input0;
		ByteU5BU5D_t4116647657* L_6 = ___output1;
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(12 /* System.Void Mono.Security.Cryptography.SymmetricTransform::CBC(System.Byte[],System.Byte[]) */, __this, L_5, L_6);
		goto IL_0093;
	}

IL_0047:
	{
		ByteU5BU5D_t4116647657* L_7 = ___input0;
		ByteU5BU5D_t4116647657* L_8 = ___output1;
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(13 /* System.Void Mono.Security.Cryptography.SymmetricTransform::CFB(System.Byte[],System.Byte[]) */, __this, L_7, L_8);
		goto IL_0093;
	}

IL_0054:
	{
		ByteU5BU5D_t4116647657* L_9 = ___input0;
		ByteU5BU5D_t4116647657* L_10 = ___output1;
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(14 /* System.Void Mono.Security.Cryptography.SymmetricTransform::OFB(System.Byte[],System.Byte[]) */, __this, L_9, L_10);
		goto IL_0093;
	}

IL_0061:
	{
		ByteU5BU5D_t4116647657* L_11 = ___input0;
		ByteU5BU5D_t4116647657* L_12 = ___output1;
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(15 /* System.Void Mono.Security.Cryptography.SymmetricTransform::CTS(System.Byte[],System.Byte[]) */, __this, L_11, L_12);
		goto IL_0093;
	}

IL_006e:
	{
		SymmetricAlgorithm_t4254223087 * L_13 = __this->get_algo_0();
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode() */, L_13);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(CipherMode_t84635067_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (Enum_t4135868527 *)L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2609825863, L_17, /*hidden argument*/NULL);
		NotImplementedException_t3489357830 * L_19 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3095902440(L_19, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19,SymmetricTransform_Transform_m1683494363_RuntimeMethod_var);
	}

IL_0093:
	{
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::CBC(System.Byte[],System.Byte[])
extern "C"  void SymmetricTransform_CBC_m3648398454 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___input0, ByteU5BU5D_t4116647657* ___output1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get_encrypt_1();
		if (!L_0)
		{
			goto IL_005c;
		}
	}
	{
		V_0 = 0;
		goto IL_002a;
	}

IL_0012:
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_temp_3();
		int32_t L_2 = V_0;
		uint8_t* L_3 = ((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2)));
		ByteU5BU5D_t4116647657* L_4 = ___input0;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		*((int8_t*)(L_3)) = (int8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(*((uint8_t*)L_3))^(int32_t)L_7)))));
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = __this->get_BlockSizeByte_2();
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_11 = __this->get_temp_3();
		ByteU5BU5D_t4116647657* L_12 = ___output1;
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[]) */, __this, L_11, L_12);
		ByteU5BU5D_t4116647657* L_13 = ___output1;
		ByteU5BU5D_t4116647657* L_14 = __this->get_temp_3();
		int32_t L_15 = __this->get_BlockSizeByte_2();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_13, 0, (RuntimeArray *)(RuntimeArray *)L_14, 0, L_15, /*hidden argument*/NULL);
		goto IL_00bc;
	}

IL_005c:
	{
		ByteU5BU5D_t4116647657* L_16 = ___input0;
		ByteU5BU5D_t4116647657* L_17 = __this->get_temp2_4();
		int32_t L_18 = __this->get_BlockSizeByte_2();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_16, 0, (RuntimeArray *)(RuntimeArray *)L_17, 0, L_18, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_19 = ___input0;
		ByteU5BU5D_t4116647657* L_20 = ___output1;
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[]) */, __this, L_19, L_20);
		V_1 = 0;
		goto IL_0097;
	}

IL_007f:
	{
		ByteU5BU5D_t4116647657* L_21 = ___output1;
		int32_t L_22 = V_1;
		uint8_t* L_23 = ((L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_22)));
		ByteU5BU5D_t4116647657* L_24 = __this->get_temp_3();
		int32_t L_25 = V_1;
		int32_t L_26 = L_25;
		uint8_t L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		*((int8_t*)(L_23)) = (int8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(*((uint8_t*)L_23))^(int32_t)L_27)))));
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0097:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->get_BlockSizeByte_2();
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_007f;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_31 = __this->get_temp2_4();
		ByteU5BU5D_t4116647657* L_32 = __this->get_temp_3();
		int32_t L_33 = __this->get_BlockSizeByte_2();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_31, 0, (RuntimeArray *)(RuntimeArray *)L_32, 0, L_33, /*hidden argument*/NULL);
	}

IL_00bc:
	{
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::CFB(System.Byte[],System.Byte[])
extern "C"  void SymmetricTransform_CFB_m1755507252 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___input0, ByteU5BU5D_t4116647657* ___output1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		bool L_0 = __this->get_encrypt_1();
		if (!L_0)
		{
			goto IL_00a9;
		}
	}
	{
		V_0 = 0;
		goto IL_0098;
	}

IL_0012:
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_temp_3();
		ByteU5BU5D_t4116647657* L_2 = __this->get_temp2_4();
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[]) */, __this, L_1, L_2);
		V_1 = 0;
		goto IL_0043;
	}

IL_002b:
	{
		ByteU5BU5D_t4116647657* L_3 = ___output1;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		ByteU5BU5D_t4116647657* L_6 = __this->get_temp2_4();
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_t4116647657* L_10 = ___input0;
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12));
		uint8_t L_14 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_9^(int32_t)L_14))))));
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = __this->get_FeedBackByte_7();
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_002b;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_18 = __this->get_temp_3();
		int32_t L_19 = __this->get_FeedBackByte_7();
		ByteU5BU5D_t4116647657* L_20 = __this->get_temp_3();
		int32_t L_21 = __this->get_BlockSizeByte_2();
		int32_t L_22 = __this->get_FeedBackByte_7();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_18, L_19, (RuntimeArray *)(RuntimeArray *)L_20, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22)), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_23 = ___output1;
		int32_t L_24 = V_0;
		ByteU5BU5D_t4116647657* L_25 = __this->get_temp_3();
		int32_t L_26 = __this->get_BlockSizeByte_2();
		int32_t L_27 = __this->get_FeedBackByte_7();
		int32_t L_28 = __this->get_FeedBackByte_7();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_23, L_24, (RuntimeArray *)(RuntimeArray *)L_25, ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_27)), L_28, /*hidden argument*/NULL);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0098:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = __this->get_FeedBackIter_8();
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0150;
	}

IL_00a9:
	{
		V_2 = 0;
		goto IL_0144;
	}

IL_00b0:
	{
		__this->set_encrypt_1((bool)1);
		ByteU5BU5D_t4116647657* L_32 = __this->get_temp_3();
		ByteU5BU5D_t4116647657* L_33 = __this->get_temp2_4();
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[]) */, __this, L_32, L_33);
		__this->set_encrypt_1((bool)0);
		ByteU5BU5D_t4116647657* L_34 = __this->get_temp_3();
		int32_t L_35 = __this->get_FeedBackByte_7();
		ByteU5BU5D_t4116647657* L_36 = __this->get_temp_3();
		int32_t L_37 = __this->get_BlockSizeByte_2();
		int32_t L_38 = __this->get_FeedBackByte_7();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_34, L_35, (RuntimeArray *)(RuntimeArray *)L_36, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)L_38)), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_39 = ___input0;
		int32_t L_40 = V_2;
		ByteU5BU5D_t4116647657* L_41 = __this->get_temp_3();
		int32_t L_42 = __this->get_BlockSizeByte_2();
		int32_t L_43 = __this->get_FeedBackByte_7();
		int32_t L_44 = __this->get_FeedBackByte_7();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_39, L_40, (RuntimeArray *)(RuntimeArray *)L_41, ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)L_43)), L_44, /*hidden argument*/NULL);
		V_3 = 0;
		goto IL_0134;
	}

IL_011c:
	{
		ByteU5BU5D_t4116647657* L_45 = ___output1;
		int32_t L_46 = V_3;
		int32_t L_47 = V_2;
		ByteU5BU5D_t4116647657* L_48 = __this->get_temp2_4();
		int32_t L_49 = V_3;
		int32_t L_50 = L_49;
		uint8_t L_51 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		ByteU5BU5D_t4116647657* L_52 = ___input0;
		int32_t L_53 = V_3;
		int32_t L_54 = V_2;
		int32_t L_55 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)L_54));
		uint8_t L_56 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_51^(int32_t)L_56))))));
		int32_t L_57 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_0134:
	{
		int32_t L_58 = V_3;
		int32_t L_59 = __this->get_FeedBackByte_7();
		if ((((int32_t)L_58) < ((int32_t)L_59)))
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_60 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_0144:
	{
		int32_t L_61 = V_2;
		int32_t L_62 = __this->get_FeedBackIter_8();
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_00b0;
		}
	}

IL_0150:
	{
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::OFB(System.Byte[],System.Byte[])
extern "C"  void SymmetricTransform_OFB_m3690147804 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___input0, ByteU5BU5D_t4116647657* ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_OFB_m3690147804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CryptographicException_t248831461 * L_0 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_0, _stringLiteral3478177746, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,SymmetricTransform_OFB_m3690147804_RuntimeMethod_var);
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::CTS(System.Byte[],System.Byte[])
extern "C"  void SymmetricTransform_CTS_m764800021 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___input0, ByteU5BU5D_t4116647657* ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_CTS_m764800021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CryptographicException_t248831461 * L_0 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_0, _stringLiteral3430552138, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,SymmetricTransform_CTS_m764800021_RuntimeMethod_var);
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::CheckInput(System.Byte[],System.Int32,System.Int32)
extern "C"  void SymmetricTransform_CheckInput_m2092289040 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_CheckInput_m2092289040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___inputBuffer0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3152468735, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,SymmetricTransform_CheckInput_m2092289040_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = ___inputOffset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_3, _stringLiteral2167393519, _stringLiteral3073595182, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,SymmetricTransform_CheckInput_m2092289040_RuntimeMethod_var);
	}

IL_0028:
	{
		int32_t L_4 = ___inputCount2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_5, _stringLiteral438779933, _stringLiteral3073595182, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,SymmetricTransform_CheckInput_m2092289040_RuntimeMethod_var);
	}

IL_003f:
	{
		int32_t L_6 = ___inputOffset1;
		ByteU5BU5D_t4116647657* L_7 = ___inputBuffer0;
		int32_t L_8 = ___inputCount2;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))), (int32_t)L_8)))))
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_9 = Locale_GetText_m1626635120(NULL /*static, unused*/, _stringLiteral251636811, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_10 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_10, _stringLiteral3152468735, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10,SymmetricTransform_CheckInput_m2092289040_RuntimeMethod_var);
	}

IL_005f:
	{
		return;
	}
}
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t SymmetricTransform_TransformBlock_m851059707 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t4116647657* ___outputBuffer3, int32_t ___outputOffset4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_TransformBlock_m851059707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_m_disposed_9();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral389898510, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,SymmetricTransform_TransformBlock_m851059707_RuntimeMethod_var);
	}

IL_0016:
	{
		ByteU5BU5D_t4116647657* L_2 = ___inputBuffer0;
		int32_t L_3 = ___inputOffset1;
		int32_t L_4 = ___inputCount2;
		SymmetricTransform_CheckInput_m2092289040(__this, L_2, L_3, L_4, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_5 = ___outputBuffer3;
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_6 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_6, _stringLiteral2053830539, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6,SymmetricTransform_TransformBlock_m851059707_RuntimeMethod_var);
	}

IL_0031:
	{
		int32_t L_7 = ___outputOffset4;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_8, _stringLiteral1561769044, _stringLiteral3073595182, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8,SymmetricTransform_TransformBlock_m851059707_RuntimeMethod_var);
	}

IL_0049:
	{
		ByteU5BU5D_t4116647657* L_9 = ___outputBuffer3;
		int32_t L_10 = ___inputCount2;
		int32_t L_11 = ___outputOffset4;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))), (int32_t)L_10)), (int32_t)L_11));
		bool L_12 = __this->get_encrypt_1();
		if (L_12)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)0) <= ((int32_t)L_13)))
		{
			goto IL_009c;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_14 = __this->get_algo_0();
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_14);
		if ((((int32_t)L_15) == ((int32_t)1)))
		{
			goto IL_0087;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_16 = __this->get_algo_0();
		int32_t L_17 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_16);
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_009c;
		}
	}

IL_0087:
	{
		String_t* L_18 = Locale_GetText_m1626635120(NULL /*static, unused*/, _stringLiteral251636811, /*hidden argument*/NULL);
		CryptographicException_t248831461 * L_19 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m3803155940(L_19, _stringLiteral2053830539, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19,SymmetricTransform_TransformBlock_m851059707_RuntimeMethod_var);
	}

IL_009c:
	{
		bool L_20 = SymmetricTransform_get_KeepLastBlock_m2492071306(__this, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_21 = V_0;
		int32_t L_22 = __this->get_BlockSizeByte_2();
		if ((((int32_t)0) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22)))))
		{
			goto IL_00ca;
		}
	}
	{
		String_t* L_23 = Locale_GetText_m1626635120(NULL /*static, unused*/, _stringLiteral251636811, /*hidden argument*/NULL);
		CryptographicException_t248831461 * L_24 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m3803155940(L_24, _stringLiteral2053830539, L_23, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24,SymmetricTransform_TransformBlock_m851059707_RuntimeMethod_var);
	}

IL_00ca:
	{
		goto IL_010e;
	}

IL_00cf:
	{
		int32_t L_25 = V_0;
		if ((((int32_t)0) <= ((int32_t)L_25)))
		{
			goto IL_010e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_26 = ___inputBuffer0;
		int32_t L_27 = ___inputOffset1;
		ByteU5BU5D_t4116647657* L_28 = ___outputBuffer3;
		int32_t L_29 = __this->get_BlockSizeByte_2();
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))), (int32_t)L_27)), (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length))))))) == ((uint32_t)L_29))))
		{
			goto IL_00f9;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_30 = ___outputBuffer3;
		int32_t L_31 = ___outputOffset4;
		___inputCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))), (int32_t)L_31));
		goto IL_010e;
	}

IL_00f9:
	{
		String_t* L_32 = Locale_GetText_m1626635120(NULL /*static, unused*/, _stringLiteral251636811, /*hidden argument*/NULL);
		CryptographicException_t248831461 * L_33 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m3803155940(L_33, _stringLiteral2053830539, L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33,SymmetricTransform_TransformBlock_m851059707_RuntimeMethod_var);
	}

IL_010e:
	{
		ByteU5BU5D_t4116647657* L_34 = ___inputBuffer0;
		int32_t L_35 = ___inputOffset1;
		int32_t L_36 = ___inputCount2;
		ByteU5BU5D_t4116647657* L_37 = ___outputBuffer3;
		int32_t L_38 = ___outputOffset4;
		int32_t L_39 = SymmetricTransform_InternalTransformBlock_m1743612142(__this, L_34, L_35, L_36, L_37, L_38, /*hidden argument*/NULL);
		return L_39;
	}
}
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_KeepLastBlock()
extern "C"  bool SymmetricTransform_get_KeepLastBlock_m2492071306 (SymmetricTransform_t3802591843 * __this, const RuntimeMethod* method)
{
	int32_t G_B4_0 = 0;
	{
		bool L_0 = __this->get_encrypt_1();
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_1 = __this->get_algo_0();
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_3 = __this->get_algo_0();
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_3);
		G_B4_0 = ((((int32_t)((((int32_t)L_4) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B4_0 = 0;
	}

IL_0030:
	{
		return (bool)G_B4_0;
	}
}
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t SymmetricTransform_InternalTransformBlock_m1743612142 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t4116647657* ___outputBuffer3, int32_t ___outputOffset4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_InternalTransformBlock_m1743612142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___inputOffset1;
		V_0 = L_0;
		int32_t L_1 = ___inputCount2;
		int32_t L_2 = __this->get_BlockSizeByte_2();
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = ___inputCount2;
		int32_t L_4 = __this->get_BlockSizeByte_2();
		if (!((int32_t)((int32_t)L_3%(int32_t)L_4)))
		{
			goto IL_0026;
		}
	}
	{
		CryptographicException_t248831461 * L_5 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_5, _stringLiteral3823085299, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,SymmetricTransform_InternalTransformBlock_m1743612142_RuntimeMethod_var);
	}

IL_0026:
	{
		int32_t L_6 = ___inputCount2;
		int32_t L_7 = __this->get_BlockSizeByte_2();
		V_1 = ((int32_t)((int32_t)L_6/(int32_t)L_7));
		goto IL_0036;
	}

IL_0034:
	{
		V_1 = 1;
	}

IL_0036:
	{
		bool L_8 = SymmetricTransform_get_KeepLastBlock_m2492071306(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
	}

IL_0045:
	{
		V_2 = 0;
		bool L_10 = __this->get_lastBlock_10();
		if (!L_10)
		{
			goto IL_0095;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_11 = __this->get_workBuff_5();
		ByteU5BU5D_t4116647657* L_12 = __this->get_workout_6();
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(10 /* System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[]) */, __this, L_11, L_12);
		ByteU5BU5D_t4116647657* L_13 = __this->get_workout_6();
		ByteU5BU5D_t4116647657* L_14 = ___outputBuffer3;
		int32_t L_15 = ___outputOffset4;
		int32_t L_16 = __this->get_BlockSizeByte_2();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_13, 0, (RuntimeArray *)(RuntimeArray *)L_14, L_15, L_16, /*hidden argument*/NULL);
		int32_t L_17 = ___outputOffset4;
		int32_t L_18 = __this->get_BlockSizeByte_2();
		___outputOffset4 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18));
		int32_t L_19 = V_2;
		int32_t L_20 = __this->get_BlockSizeByte_2();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20));
		__this->set_lastBlock_10((bool)0);
	}

IL_0095:
	{
		V_3 = 0;
		goto IL_00f9;
	}

IL_009c:
	{
		ByteU5BU5D_t4116647657* L_21 = ___inputBuffer0;
		int32_t L_22 = V_0;
		ByteU5BU5D_t4116647657* L_23 = __this->get_workBuff_5();
		int32_t L_24 = __this->get_BlockSizeByte_2();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_21, L_22, (RuntimeArray *)(RuntimeArray *)L_23, 0, L_24, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_25 = __this->get_workBuff_5();
		ByteU5BU5D_t4116647657* L_26 = __this->get_workout_6();
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(10 /* System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[]) */, __this, L_25, L_26);
		ByteU5BU5D_t4116647657* L_27 = __this->get_workout_6();
		ByteU5BU5D_t4116647657* L_28 = ___outputBuffer3;
		int32_t L_29 = ___outputOffset4;
		int32_t L_30 = __this->get_BlockSizeByte_2();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_27, 0, (RuntimeArray *)(RuntimeArray *)L_28, L_29, L_30, /*hidden argument*/NULL);
		int32_t L_31 = V_0;
		int32_t L_32 = __this->get_BlockSizeByte_2();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32));
		int32_t L_33 = ___outputOffset4;
		int32_t L_34 = __this->get_BlockSizeByte_2();
		___outputOffset4 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_34));
		int32_t L_35 = V_2;
		int32_t L_36 = __this->get_BlockSizeByte_2();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_36));
		int32_t L_37 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00f9:
	{
		int32_t L_38 = V_3;
		int32_t L_39 = V_1;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_009c;
		}
	}
	{
		bool L_40 = SymmetricTransform_get_KeepLastBlock_m2492071306(__this, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0126;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_41 = ___inputBuffer0;
		int32_t L_42 = V_0;
		ByteU5BU5D_t4116647657* L_43 = __this->get_workBuff_5();
		int32_t L_44 = __this->get_BlockSizeByte_2();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_41, L_42, (RuntimeArray *)(RuntimeArray *)L_43, 0, L_44, /*hidden argument*/NULL);
		__this->set_lastBlock_10((bool)1);
	}

IL_0126:
	{
		int32_t L_45 = V_2;
		return L_45;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::Random(System.Byte[],System.Int32,System.Int32)
extern "C"  void SymmetricTransform_Random_m3740038270 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_Random_m3740038270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		RandomNumberGenerator_t386037858 * L_0 = __this->get__rng_11();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		RandomNumberGenerator_t386037858 * L_1 = RandomNumberGenerator_Create_m4162970280(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__rng_11(L_1);
	}

IL_0016:
	{
		int32_t L_2 = ___length2;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_2));
		RandomNumberGenerator_t386037858 * L_3 = __this->get__rng_11();
		ByteU5BU5D_t4116647657* L_4 = V_0;
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_3, L_4);
		ByteU5BU5D_t4116647657* L_5 = V_0;
		ByteU5BU5D_t4116647657* L_6 = ___buffer0;
		int32_t L_7 = ___start1;
		int32_t L_8 = ___length2;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_5, 0, (RuntimeArray *)(RuntimeArray *)L_6, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::ThrowBadPaddingException(System.Security.Cryptography.PaddingMode,System.Int32,System.Int32)
extern "C"  void SymmetricTransform_ThrowBadPaddingException_m2898061954 (SymmetricTransform_t3802591843 * __this, int32_t ___padding0, int32_t ___length1, int32_t ___position2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_ThrowBadPaddingException_m2898061954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = Locale_GetText_m1626635120(NULL /*static, unused*/, _stringLiteral2101785501, /*hidden argument*/NULL);
		int32_t L_1 = ___padding0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(PaddingMode_t2546806710_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m2844511972(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = ___length1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_6 = V_0;
		String_t* L_7 = Locale_GetText_m1626635120(NULL /*static, unused*/, _stringLiteral289204851, /*hidden argument*/NULL);
		int32_t L_8 = ___length1;
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m2844511972(NULL /*static, unused*/, L_7, L_10, /*hidden argument*/NULL);
		String_t* L_12 = String_Concat_m3937257545(NULL /*static, unused*/, L_6, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_0039:
	{
		int32_t L_13 = ___position2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_14 = V_0;
		String_t* L_15 = Locale_GetText_m1626635120(NULL /*static, unused*/, _stringLiteral4613441, /*hidden argument*/NULL);
		int32_t L_16 = ___position2;
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Format_m2844511972(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/NULL);
		String_t* L_20 = String_Concat_m3937257545(NULL /*static, unused*/, L_14, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
	}

IL_005c:
	{
		String_t* L_21 = V_0;
		CryptographicException_t248831461 * L_22 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_22, L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22,SymmetricTransform_ThrowBadPaddingException_m2898061954_RuntimeMethod_var);
	}
}
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4116647657* SymmetricTransform_FinalEncrypt_m748885414 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_FinalEncrypt_m748885414_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		int32_t L_0 = ___inputCount2;
		int32_t L_1 = __this->get_BlockSizeByte_2();
		int32_t L_2 = __this->get_BlockSizeByte_2();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_0/(int32_t)L_1)), (int32_t)L_2));
		int32_t L_3 = ___inputCount2;
		int32_t L_4 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4));
		int32_t L_5 = V_0;
		V_2 = L_5;
		SymmetricAlgorithm_t4254223087 * L_6 = __this->get_algo_0();
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_6);
		V_8 = L_7;
		int32_t L_8 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_004f;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_004f;
	}

IL_0041:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = __this->get_BlockSizeByte_2();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10));
		goto IL_00a8;
	}

IL_004f:
	{
		int32_t L_11 = ___inputCount2;
		if (L_11)
		{
			goto IL_005c;
		}
	}
	{
		return ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)0));
	}

IL_005c:
	{
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_00a3;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_13 = __this->get_algo_0();
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_13);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_007e;
		}
	}
	{
		CryptographicException_t248831461 * L_15 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_15, _stringLiteral3246833729, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15,SymmetricTransform_FinalEncrypt_m748885414_RuntimeMethod_var);
	}

IL_007e:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = __this->get_BlockSizeByte_2();
		V_3 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17))));
		ByteU5BU5D_t4116647657* L_18 = ___inputBuffer0;
		int32_t L_19 = ___inputOffset1;
		ByteU5BU5D_t4116647657* L_20 = V_3;
		int32_t L_21 = ___inputCount2;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_18, L_19, (RuntimeArray *)(RuntimeArray *)L_20, 0, L_21, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_22 = V_3;
		___inputBuffer0 = L_22;
		___inputOffset1 = 0;
		ByteU5BU5D_t4116647657* L_23 = V_3;
		___inputCount2 = (((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length))));
		int32_t L_24 = ___inputCount2;
		V_2 = L_24;
	}

IL_00a3:
	{
		goto IL_00a8;
	}

IL_00a8:
	{
		int32_t L_25 = V_2;
		V_4 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_25));
		V_5 = 0;
		goto IL_00e9;
	}

IL_00b8:
	{
		ByteU5BU5D_t4116647657* L_26 = ___inputBuffer0;
		int32_t L_27 = ___inputOffset1;
		int32_t L_28 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_29 = V_4;
		int32_t L_30 = V_5;
		SymmetricTransform_InternalTransformBlock_m1743612142(__this, L_26, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		int32_t L_31 = ___inputOffset1;
		int32_t L_32 = __this->get_BlockSizeByte_2();
		___inputOffset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32));
		int32_t L_33 = V_5;
		int32_t L_34 = __this->get_BlockSizeByte_2();
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_34));
		int32_t L_35 = V_2;
		int32_t L_36 = __this->get_BlockSizeByte_2();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)L_36));
	}

IL_00e9:
	{
		int32_t L_37 = V_2;
		int32_t L_38 = __this->get_BlockSizeByte_2();
		if ((((int32_t)L_37) > ((int32_t)L_38)))
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_39 = __this->get_BlockSizeByte_2();
		int32_t L_40 = V_1;
		V_6 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_40)))));
		SymmetricAlgorithm_t4254223087 * L_41 = __this->get_algo_0();
		int32_t L_42 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_41);
		V_8 = L_42;
		int32_t L_43 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)2)))
		{
			case 0:
			{
				goto IL_019a;
			}
			case 1:
			{
				goto IL_01e2;
			}
			case 2:
			{
				goto IL_012b;
			}
			case 3:
			{
				goto IL_0159;
			}
		}
	}
	{
		goto IL_01e2;
	}

IL_012b:
	{
		ByteU5BU5D_t4116647657* L_44 = V_4;
		ByteU5BU5D_t4116647657* L_45 = V_4;
		uint8_t L_46 = V_6;
		(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_45)->max_length)))), (int32_t)1))), (uint8_t)L_46);
		ByteU5BU5D_t4116647657* L_47 = ___inputBuffer0;
		int32_t L_48 = ___inputOffset1;
		ByteU5BU5D_t4116647657* L_49 = V_4;
		int32_t L_50 = V_0;
		int32_t L_51 = V_1;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_47, L_48, (RuntimeArray *)(RuntimeArray *)L_49, L_50, L_51, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_52 = V_4;
		int32_t L_53 = V_0;
		int32_t L_54 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_55 = V_4;
		int32_t L_56 = V_0;
		SymmetricTransform_InternalTransformBlock_m1743612142(__this, L_52, L_53, L_54, L_55, L_56, /*hidden argument*/NULL);
		goto IL_01fa;
	}

IL_0159:
	{
		ByteU5BU5D_t4116647657* L_57 = V_4;
		ByteU5BU5D_t4116647657* L_58 = V_4;
		uint8_t L_59 = V_6;
		uint8_t L_60 = V_6;
		SymmetricTransform_Random_m3740038270(__this, L_57, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_58)->max_length)))), (int32_t)L_59)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)1)), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_61 = V_4;
		ByteU5BU5D_t4116647657* L_62 = V_4;
		uint8_t L_63 = V_6;
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_62)->max_length)))), (int32_t)1))), (uint8_t)L_63);
		ByteU5BU5D_t4116647657* L_64 = ___inputBuffer0;
		int32_t L_65 = ___inputOffset1;
		ByteU5BU5D_t4116647657* L_66 = V_4;
		int32_t L_67 = V_0;
		int32_t L_68 = V_1;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_64, L_65, (RuntimeArray *)(RuntimeArray *)L_66, L_67, L_68, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_69 = V_4;
		int32_t L_70 = V_0;
		int32_t L_71 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_72 = V_4;
		int32_t L_73 = V_0;
		SymmetricTransform_InternalTransformBlock_m1743612142(__this, L_69, L_70, L_71, L_72, L_73, /*hidden argument*/NULL);
		goto IL_01fa;
	}

IL_019a:
	{
		ByteU5BU5D_t4116647657* L_74 = V_4;
		V_7 = (((int32_t)((int32_t)(((RuntimeArray *)L_74)->max_length))));
		goto IL_01ac;
	}

IL_01a5:
	{
		ByteU5BU5D_t4116647657* L_75 = V_4;
		int32_t L_76 = V_7;
		uint8_t L_77 = V_6;
		(L_75)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76), (uint8_t)L_77);
	}

IL_01ac:
	{
		int32_t L_78 = V_7;
		int32_t L_79 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_78, (int32_t)1));
		V_7 = L_79;
		ByteU5BU5D_t4116647657* L_80 = V_4;
		uint8_t L_81 = V_6;
		if ((((int32_t)L_79) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_80)->max_length)))), (int32_t)L_81)))))
		{
			goto IL_01a5;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_82 = ___inputBuffer0;
		int32_t L_83 = ___inputOffset1;
		ByteU5BU5D_t4116647657* L_84 = V_4;
		int32_t L_85 = V_0;
		int32_t L_86 = V_1;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_82, L_83, (RuntimeArray *)(RuntimeArray *)L_84, L_85, L_86, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_87 = V_4;
		int32_t L_88 = V_0;
		int32_t L_89 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_90 = V_4;
		int32_t L_91 = V_0;
		SymmetricTransform_InternalTransformBlock_m1743612142(__this, L_87, L_88, L_89, L_90, L_91, /*hidden argument*/NULL);
		goto IL_01fa;
	}

IL_01e2:
	{
		ByteU5BU5D_t4116647657* L_92 = ___inputBuffer0;
		int32_t L_93 = ___inputOffset1;
		int32_t L_94 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_95 = V_4;
		int32_t L_96 = V_5;
		SymmetricTransform_InternalTransformBlock_m1743612142(__this, L_92, L_93, L_94, L_95, L_96, /*hidden argument*/NULL);
		goto IL_01fa;
	}

IL_01fa:
	{
		ByteU5BU5D_t4116647657* L_97 = V_4;
		return L_97;
	}
}
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalDecrypt(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4116647657* SymmetricTransform_FinalDecrypt_m764004682 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_FinalDecrypt_m764004682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5D_t4116647657* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t G_B12_0 = 0;
	{
		int32_t L_0 = ___inputCount2;
		int32_t L_1 = __this->get_BlockSizeByte_2();
		if ((((int32_t)((int32_t)((int32_t)L_0%(int32_t)L_1))) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		CryptographicException_t248831461 * L_2 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_2, _stringLiteral3823085299, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,SymmetricTransform_FinalDecrypt_m764004682_RuntimeMethod_var);
	}

IL_0019:
	{
		int32_t L_3 = ___inputCount2;
		V_0 = L_3;
		bool L_4 = __this->get_lastBlock_10();
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_BlockSizeByte_2();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6));
	}

IL_002f:
	{
		int32_t L_7 = V_0;
		V_1 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_7));
		V_2 = 0;
		goto IL_0066;
	}

IL_003d:
	{
		ByteU5BU5D_t4116647657* L_8 = ___inputBuffer0;
		int32_t L_9 = ___inputOffset1;
		int32_t L_10 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_11 = V_1;
		int32_t L_12 = V_2;
		int32_t L_13 = SymmetricTransform_InternalTransformBlock_m1743612142(__this, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		int32_t L_14 = ___inputOffset1;
		int32_t L_15 = __this->get_BlockSizeByte_2();
		___inputOffset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15));
		int32_t L_16 = V_2;
		int32_t L_17 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17));
		int32_t L_18 = ___inputCount2;
		int32_t L_19 = __this->get_BlockSizeByte_2();
		___inputCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19));
	}

IL_0066:
	{
		int32_t L_20 = ___inputCount2;
		if ((((int32_t)L_20) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		bool L_21 = __this->get_lastBlock_10();
		if (!L_21)
		{
			goto IL_00ae;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_22 = __this->get_workBuff_5();
		ByteU5BU5D_t4116647657* L_23 = __this->get_workout_6();
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(10 /* System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[]) */, __this, L_22, L_23);
		ByteU5BU5D_t4116647657* L_24 = __this->get_workout_6();
		ByteU5BU5D_t4116647657* L_25 = V_1;
		int32_t L_26 = V_2;
		int32_t L_27 = __this->get_BlockSizeByte_2();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_24, 0, (RuntimeArray *)(RuntimeArray *)L_25, L_26, L_27, /*hidden argument*/NULL);
		int32_t L_28 = V_2;
		int32_t L_29 = __this->get_BlockSizeByte_2();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29));
		__this->set_lastBlock_10((bool)0);
	}

IL_00ae:
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_00bf;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_31 = V_1;
		int32_t L_32 = V_0;
		int32_t L_33 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1));
		uint8_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		G_B12_0 = ((int32_t)(L_34));
		goto IL_00c0;
	}

IL_00bf:
	{
		G_B12_0 = 0;
	}

IL_00c0:
	{
		V_4 = (uint8_t)G_B12_0;
		SymmetricAlgorithm_t4254223087 * L_35 = __this->get_algo_0();
		int32_t L_36 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_35);
		V_8 = L_36;
		int32_t L_37 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1)))
		{
			case 0:
			{
				goto IL_01fd;
			}
			case 1:
			{
				goto IL_018f;
			}
			case 2:
			{
				goto IL_01fd;
			}
			case 3:
			{
				goto IL_00f1;
			}
			case 4:
			{
				goto IL_015d;
			}
		}
	}
	{
		goto IL_0202;
	}

IL_00f1:
	{
		uint8_t L_38 = V_4;
		if (!L_38)
		{
			goto IL_0105;
		}
	}
	{
		uint8_t L_39 = V_4;
		int32_t L_40 = __this->get_BlockSizeByte_2();
		if ((((int32_t)L_39) <= ((int32_t)L_40)))
		{
			goto IL_0119;
		}
	}

IL_0105:
	{
		SymmetricAlgorithm_t4254223087 * L_41 = __this->get_algo_0();
		int32_t L_42 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_41);
		uint8_t L_43 = V_4;
		SymmetricTransform_ThrowBadPaddingException_m2898061954(__this, L_42, L_43, (-1), /*hidden argument*/NULL);
	}

IL_0119:
	{
		uint8_t L_44 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1));
		goto IL_014b;
	}

IL_0124:
	{
		ByteU5BU5D_t4116647657* L_45 = V_1;
		int32_t L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)1)), (int32_t)L_47));
		uint8_t L_49 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		if (!L_49)
		{
			goto IL_0145;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_50 = __this->get_algo_0();
		int32_t L_51 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_50);
		int32_t L_52 = V_5;
		SymmetricTransform_ThrowBadPaddingException_m2898061954(__this, L_51, (-1), L_52, /*hidden argument*/NULL);
	}

IL_0145:
	{
		int32_t L_53 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)1));
	}

IL_014b:
	{
		int32_t L_54 = V_5;
		if ((((int32_t)L_54) > ((int32_t)0)))
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_55 = V_0;
		uint8_t L_56 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)L_56));
		goto IL_0202;
	}

IL_015d:
	{
		uint8_t L_57 = V_4;
		if (!L_57)
		{
			goto IL_0171;
		}
	}
	{
		uint8_t L_58 = V_4;
		int32_t L_59 = __this->get_BlockSizeByte_2();
		if ((((int32_t)L_58) <= ((int32_t)L_59)))
		{
			goto IL_0185;
		}
	}

IL_0171:
	{
		SymmetricAlgorithm_t4254223087 * L_60 = __this->get_algo_0();
		int32_t L_61 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_60);
		uint8_t L_62 = V_4;
		SymmetricTransform_ThrowBadPaddingException_m2898061954(__this, L_61, L_62, (-1), /*hidden argument*/NULL);
	}

IL_0185:
	{
		int32_t L_63 = V_0;
		uint8_t L_64 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_63, (int32_t)L_64));
		goto IL_0202;
	}

IL_018f:
	{
		uint8_t L_65 = V_4;
		if (!L_65)
		{
			goto IL_01a3;
		}
	}
	{
		uint8_t L_66 = V_4;
		int32_t L_67 = __this->get_BlockSizeByte_2();
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01b7;
		}
	}

IL_01a3:
	{
		SymmetricAlgorithm_t4254223087 * L_68 = __this->get_algo_0();
		int32_t L_69 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_68);
		uint8_t L_70 = V_4;
		SymmetricTransform_ThrowBadPaddingException_m2898061954(__this, L_69, L_70, (-1), /*hidden argument*/NULL);
	}

IL_01b7:
	{
		uint8_t L_71 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_71, (int32_t)1));
		goto IL_01eb;
	}

IL_01c2:
	{
		ByteU5BU5D_t4116647657* L_72 = V_1;
		int32_t L_73 = V_0;
		int32_t L_74 = V_6;
		int32_t L_75 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_73, (int32_t)1)), (int32_t)L_74));
		uint8_t L_76 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_75));
		uint8_t L_77 = V_4;
		if ((((int32_t)L_76) == ((int32_t)L_77)))
		{
			goto IL_01e5;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_78 = __this->get_algo_0();
		int32_t L_79 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_78);
		int32_t L_80 = V_6;
		SymmetricTransform_ThrowBadPaddingException_m2898061954(__this, L_79, (-1), L_80, /*hidden argument*/NULL);
	}

IL_01e5:
	{
		int32_t L_81 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)1));
	}

IL_01eb:
	{
		int32_t L_82 = V_6;
		if ((((int32_t)L_82) > ((int32_t)0)))
		{
			goto IL_01c2;
		}
	}
	{
		int32_t L_83 = V_0;
		uint8_t L_84 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)L_84));
		goto IL_0202;
	}

IL_01fd:
	{
		goto IL_0202;
	}

IL_0202:
	{
		int32_t L_85 = V_0;
		if ((((int32_t)L_85) <= ((int32_t)0)))
		{
			goto IL_0229;
		}
	}
	{
		int32_t L_86 = V_0;
		V_7 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_86));
		ByteU5BU5D_t4116647657* L_87 = V_1;
		ByteU5BU5D_t4116647657* L_88 = V_7;
		int32_t L_89 = V_0;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_87, 0, (RuntimeArray *)(RuntimeArray *)L_88, 0, L_89, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_90 = V_1;
		ByteU5BU5D_t4116647657* L_91 = V_1;
		Array_Clear_m2231608178(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_90, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_91)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_92 = V_7;
		return L_92;
	}

IL_0229:
	{
		return ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)0));
	}
}
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4116647657* SymmetricTransform_TransformFinalBlock_m1030888689 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_TransformFinalBlock_m1030888689_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_disposed_9();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral389898510, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,SymmetricTransform_TransformFinalBlock_m1030888689_RuntimeMethod_var);
	}

IL_0016:
	{
		ByteU5BU5D_t4116647657* L_2 = ___inputBuffer0;
		int32_t L_3 = ___inputOffset1;
		int32_t L_4 = ___inputCount2;
		SymmetricTransform_CheckInput_m2092289040(__this, L_2, L_3, L_4, /*hidden argument*/NULL);
		bool L_5 = __this->get_encrypt_1();
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_6 = ___inputBuffer0;
		int32_t L_7 = ___inputOffset1;
		int32_t L_8 = ___inputCount2;
		ByteU5BU5D_t4116647657* L_9 = SymmetricTransform_FinalEncrypt_m748885414(__this, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0034:
	{
		ByteU5BU5D_t4116647657* L_10 = ___inputBuffer0;
		int32_t L_11 = ___inputOffset1;
		int32_t L_12 = ___inputCount2;
		ByteU5BU5D_t4116647657* L_13 = SymmetricTransform_FinalDecrypt_m764004682(__this, L_10, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
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
extern "C"  void DelegatePInvokeWrapper_Action_t1264377477 (Action_t1264377477 * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.Action::Invoke()
extern "C"  void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Action_Invoke_m937035532((Action_t1264377477 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult System.Action::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* Action_BeginInvoke_m2907948038 (Action_t1264377477 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void System.Action::EndInvoke(System.IAsyncResult)
extern "C"  void Action_EndInvoke_m1690492879 (Action_t1264377477 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void System.InvalidTimeZoneException::.ctor()
extern "C"  void InvalidTimeZoneException__ctor_m6234683 (InvalidTimeZoneException_t4066718130 * __this, const RuntimeMethod* method)
{
	{
		Exception__ctor_m213470898(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.InvalidTimeZoneException::.ctor(System.String)
extern "C"  void InvalidTimeZoneException__ctor_m4131156752 (InvalidTimeZoneException_t4066718130 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception__ctor_m1152696503(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.InvalidTimeZoneException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void InvalidTimeZoneException__ctor_m2740086004 (InvalidTimeZoneException_t4066718130 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___sc1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___sc1;
		Exception__ctor_m2499432361(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.Linq.Check::Source(System.Object)
extern "C"  void Check_Source_m4098695967 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Check_Source_m4098695967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___source0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Check_Source_m4098695967_RuntimeMethod_var);
	}

IL_0011:
	{
		return;
	}
}
// System.Void System.Linq.Check::SourceAndSelector(System.Object,System.Object)
extern "C"  void Check_SourceAndSelector_m4013530551 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, RuntimeObject * ___selector1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Check_SourceAndSelector_m4013530551_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___source0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Check_SourceAndSelector_m4013530551_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject * L_2 = ___selector1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral3977229295, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,Check_SourceAndSelector_m4013530551_RuntimeMethod_var);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Linq.Check::SourceAndPredicate(System.Object,System.Object)
extern "C"  void Check_SourceAndPredicate_m2332465641 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, RuntimeObject * ___predicate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Check_SourceAndPredicate_m2332465641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___source0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Check_SourceAndPredicate_m2332465641_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject * L_2 = ___predicate1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral3941128596, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,Check_SourceAndPredicate_m2332465641_RuntimeMethod_var);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Linq.Check::FirstAndSecond(System.Object,System.Object)
extern "C"  void Check_FirstAndSecond_m1286658405 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___first0, RuntimeObject * ___second1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Check_FirstAndSecond_m1286658405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___first0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2374226348, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Check_FirstAndSecond_m1286658405_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject * L_2 = ___second1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral3502150264, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,Check_FirstAndSecond_m1286658405_RuntimeMethod_var);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Linq.Check::SourceAndKeySelector(System.Object,System.Object)
extern "C"  void Check_SourceAndKeySelector_m1202955589 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, RuntimeObject * ___keySelector1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Check_SourceAndKeySelector_m1202955589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___source0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Check_SourceAndKeySelector_m1202955589_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject * L_2 = ___keySelector1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral2212699745, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,Check_SourceAndKeySelector_m1202955589_RuntimeMethod_var);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Linq.Check::SourceAndKeyElementSelectors(System.Object,System.Object,System.Object)
extern "C"  void Check_SourceAndKeyElementSelectors_m4285999668 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, RuntimeObject * ___keySelector1, RuntimeObject * ___elementSelector2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Check_SourceAndKeyElementSelectors_m4285999668_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___source0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Check_SourceAndKeyElementSelectors_m4285999668_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject * L_2 = ___keySelector1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral2212699745, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,Check_SourceAndKeyElementSelectors_m4285999668_RuntimeMethod_var);
	}

IL_0022:
	{
		RuntimeObject * L_4 = ___elementSelector2;
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_5 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_5, _stringLiteral3009079190, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,Check_SourceAndKeyElementSelectors_m4285999668_RuntimeMethod_var);
	}

IL_0033:
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
// System.Void System.MonoTODOAttribute::.ctor()
extern "C"  void MonoTODOAttribute__ctor_m2619396706 (MonoTODOAttribute_t4131080583 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
extern "C"  void ExtensionAttribute__ctor_m1708143005 (ExtensionAttribute_t1723066603 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
// System.Void System.Security.Cryptography.Aes::.ctor()
extern "C"  void Aes__ctor_m178909601 (Aes_t1218282760 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Aes__ctor_m178909601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SymmetricAlgorithm__ctor_m467277132(__this, /*hidden argument*/NULL);
		((SymmetricAlgorithm_t4254223087 *)__this)->set_KeySizeValue_2(((int32_t)256));
		((SymmetricAlgorithm_t4254223087 *)__this)->set_BlockSizeValue_0(((int32_t)128));
		((SymmetricAlgorithm_t4254223087 *)__this)->set_LegalKeySizesValue_5(((KeySizesU5BU5D_t722666473*)SZArrayNew(KeySizesU5BU5D_t722666473_il2cpp_TypeInfo_var, (uint32_t)1)));
		KeySizesU5BU5D_t722666473* L_0 = ((SymmetricAlgorithm_t4254223087 *)__this)->get_LegalKeySizesValue_5();
		KeySizes_t85027896 * L_1 = (KeySizes_t85027896 *)il2cpp_codegen_object_new(KeySizes_t85027896_il2cpp_TypeInfo_var);
		KeySizes__ctor_m3113946058(L_1, ((int32_t)128), ((int32_t)256), ((int32_t)64), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (KeySizes_t85027896 *)L_1);
		((SymmetricAlgorithm_t4254223087 *)__this)->set_LegalBlockSizesValue_4(((KeySizesU5BU5D_t722666473*)SZArrayNew(KeySizesU5BU5D_t722666473_il2cpp_TypeInfo_var, (uint32_t)1)));
		KeySizesU5BU5D_t722666473* L_2 = ((SymmetricAlgorithm_t4254223087 *)__this)->get_LegalBlockSizesValue_4();
		KeySizes_t85027896 * L_3 = (KeySizes_t85027896 *)il2cpp_codegen_object_new(KeySizes_t85027896_il2cpp_TypeInfo_var);
		KeySizes__ctor_m3113946058(L_3, ((int32_t)128), ((int32_t)128), 0, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (KeySizes_t85027896 *)L_3);
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
// System.Void System.Security.Cryptography.AesManaged::.ctor()
extern "C"  void AesManaged__ctor_m1349486362 (AesManaged_t1129950597 * __this, const RuntimeMethod* method)
{
	{
		Aes__ctor_m178909601(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.AesManaged::GenerateIV()
extern "C"  void AesManaged_GenerateIV_m1368817386 (AesManaged_t1129950597 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ((SymmetricAlgorithm_t4254223087 *)__this)->get_BlockSizeValue_0();
		ByteU5BU5D_t4116647657* L_1 = KeyBuilder_IV_m3340234014(NULL /*static, unused*/, ((int32_t)((int32_t)L_0>>(int32_t)3)), /*hidden argument*/NULL);
		((SymmetricAlgorithm_t4254223087 *)__this)->set_IVValue_1(L_1);
		return;
	}
}
// System.Void System.Security.Cryptography.AesManaged::GenerateKey()
extern "C"  void AesManaged_GenerateKey_m2004209814 (AesManaged_t1129950597 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ((SymmetricAlgorithm_t4254223087 *)__this)->get_KeySizeValue_2();
		ByteU5BU5D_t4116647657* L_1 = KeyBuilder_Key_m2503211157(NULL /*static, unused*/, ((int32_t)((int32_t)L_0>>(int32_t)3)), /*hidden argument*/NULL);
		((SymmetricAlgorithm_t4254223087 *)__this)->set_KeyValue_3(L_1);
		return;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C"  RuntimeObject* AesManaged_CreateDecryptor_m692040246 (AesManaged_t1129950597 * __this, ByteU5BU5D_t4116647657* ___rgbKey0, ByteU5BU5D_t4116647657* ___rgbIV1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AesManaged_CreateDecryptor_m692040246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgbKey0;
		ByteU5BU5D_t4116647657* L_1 = ___rgbIV1;
		AesTransform_t2957123611 * L_2 = (AesTransform_t2957123611 *)il2cpp_codegen_object_new(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		AesTransform__ctor_m3143546745(L_2, __this, (bool)0, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C"  RuntimeObject* AesManaged_CreateEncryptor_m2294080233 (AesManaged_t1129950597 * __this, ByteU5BU5D_t4116647657* ___rgbKey0, ByteU5BU5D_t4116647657* ___rgbIV1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AesManaged_CreateEncryptor_m2294080233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgbKey0;
		ByteU5BU5D_t4116647657* L_1 = ___rgbIV1;
		AesTransform_t2957123611 * L_2 = (AesTransform_t2957123611 *)il2cpp_codegen_object_new(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		AesTransform__ctor_m3143546745(L_2, __this, (bool)1, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Byte[] System.Security.Cryptography.AesManaged::get_IV()
extern "C"  ByteU5BU5D_t4116647657* AesManaged_get_IV_m118095902 (AesManaged_t1129950597 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = SymmetricAlgorithm_get_IV_m1875559108(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Security.Cryptography.AesManaged::set_IV(System.Byte[])
extern "C"  void AesManaged_set_IV_m3705704588 (AesManaged_t1129950597 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		SymmetricAlgorithm_set_IV_m3196220308(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] System.Security.Cryptography.AesManaged::get_Key()
extern "C"  ByteU5BU5D_t4116647657* AesManaged_get_Key_m538801386 (AesManaged_t1129950597 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = SymmetricAlgorithm_get_Key_m3241860519(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Security.Cryptography.AesManaged::set_Key(System.Byte[])
extern "C"  void AesManaged_set_Key_m767972181 (AesManaged_t1129950597 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		SymmetricAlgorithm_set_Key_m1775642191(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Security.Cryptography.AesManaged::get_KeySize()
extern "C"  int32_t AesManaged_get_KeySize_m1181452829 (AesManaged_t1129950597 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = SymmetricAlgorithm_get_KeySize_m4185004893(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Security.Cryptography.AesManaged::set_KeySize(System.Int32)
extern "C"  void AesManaged_set_KeySize_m1150692274 (AesManaged_t1129950597 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		SymmetricAlgorithm_set_KeySize_m3805756466(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor()
extern "C"  RuntimeObject* AesManaged_CreateDecryptor_m752875210 (AesManaged_t1129950597 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = AesManaged_get_Key_m538801386(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_1 = AesManaged_get_IV_m118095902(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = AesManaged_CreateDecryptor_m692040246(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor()
extern "C"  RuntimeObject* AesManaged_CreateEncryptor_m1611897367 (AesManaged_t1129950597 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = AesManaged_get_Key_m538801386(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_1 = AesManaged_get_IV_m118095902(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = AesManaged_CreateEncryptor_m2294080233(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Security.Cryptography.AesManaged::Dispose(System.Boolean)
extern "C"  void AesManaged_Dispose_m615303088 (AesManaged_t1129950597 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___disposing0;
		SymmetricAlgorithm_Dispose_m1120980942(__this, L_0, /*hidden argument*/NULL);
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
// System.Void System.Security.Cryptography.AesTransform::.ctor(System.Security.Cryptography.Aes,System.Boolean,System.Byte[],System.Byte[])
extern "C"  void AesTransform__ctor_m3143546745 (AesTransform_t2957123611 * __this, Aes_t1218282760 * ___algo0, bool ___encryption1, ByteU5BU5D_t4116647657* ___key2, ByteU5BU5D_t4116647657* ___iv3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AesTransform__ctor_m3143546745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	UInt32U5BU5D_t2770800703* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		Aes_t1218282760 * L_0 = ___algo0;
		bool L_1 = ___encryption1;
		ByteU5BU5D_t4116647657* L_2 = ___iv3;
		SymmetricTransform__ctor_m2693628991(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_3 = ___key2;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		CryptographicException_t248831461 * L_4 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_4, _stringLiteral2153550409, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4,AesTransform__ctor_m3143546745_RuntimeMethod_var);
	}

IL_001b:
	{
		ByteU5BU5D_t4116647657* L_5 = ___iv3;
		if (!L_5)
		{
			goto IL_0067;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_6 = ___iv3;
		Aes_t1218282760 * L_7 = ___algo0;
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize() */, L_7);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length))))) == ((int32_t)((int32_t)((int32_t)L_8>>(int32_t)3)))))
		{
			goto IL_0067;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_9 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		ByteU5BU5D_t4116647657* L_10 = ___iv3;
		int32_t L_11 = (((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))));
		RuntimeObject * L_12 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_11);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_9;
		Aes_t1218282760 * L_14 = ___algo0;
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize() */, L_14);
		int32_t L_16 = ((int32_t)((int32_t)L_15>>(int32_t)3));
		RuntimeObject * L_17 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_16);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_17);
		String_t* L_18 = Locale_GetText_m2427493201(NULL /*static, unused*/, _stringLiteral2136391555, L_13, /*hidden argument*/NULL);
		V_0 = L_18;
		String_t* L_19 = V_0;
		CryptographicException_t248831461 * L_20 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_20, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20,AesTransform__ctor_m3143546745_RuntimeMethod_var);
	}

IL_0067:
	{
		ByteU5BU5D_t4116647657* L_21 = ___key2;
		V_1 = (((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length))));
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)16))))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)24))))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)32))))
		{
			goto IL_00c2;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_25 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		int32_t L_26 = V_1;
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_27);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_28);
		ObjectU5BU5D_t2843939325* L_29 = L_25;
		int32_t L_30 = ((int32_t)16);
		RuntimeObject * L_31 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_30);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_31);
		ObjectU5BU5D_t2843939325* L_32 = L_29;
		int32_t L_33 = ((int32_t)24);
		RuntimeObject * L_34 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_33);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_34);
		ObjectU5BU5D_t2843939325* L_35 = L_32;
		int32_t L_36 = ((int32_t)32);
		RuntimeObject * L_37 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_36);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_37);
		String_t* L_38 = Locale_GetText_m2427493201(NULL /*static, unused*/, _stringLiteral2585275424, L_35, /*hidden argument*/NULL);
		V_2 = L_38;
		String_t* L_39 = V_2;
		CryptographicException_t248831461 * L_40 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_40, L_39, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40,AesTransform__ctor_m3143546745_RuntimeMethod_var);
	}

IL_00c2:
	{
		int32_t L_41 = V_1;
		V_1 = ((int32_t)((int32_t)L_41<<(int32_t)3));
		int32_t L_42 = V_1;
		__this->set_Nk_13(((int32_t)((int32_t)L_42>>(int32_t)5)));
		int32_t L_43 = __this->get_Nk_13();
		if ((!(((uint32_t)L_43) == ((uint32_t)8))))
		{
			goto IL_00e8;
		}
	}
	{
		__this->set_Nr_14(((int32_t)14));
		goto IL_0109;
	}

IL_00e8:
	{
		int32_t L_44 = __this->get_Nk_13();
		if ((!(((uint32_t)L_44) == ((uint32_t)6))))
		{
			goto IL_0101;
		}
	}
	{
		__this->set_Nr_14(((int32_t)12));
		goto IL_0109;
	}

IL_0101:
	{
		__this->set_Nr_14(((int32_t)10));
	}

IL_0109:
	{
		int32_t L_45 = __this->get_Nr_14();
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1))));
		int32_t L_46 = V_3;
		V_4 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)L_46));
		V_5 = 0;
		V_6 = 0;
		goto IL_0171;
	}

IL_0127:
	{
		ByteU5BU5D_t4116647657* L_47 = ___key2;
		int32_t L_48 = V_5;
		int32_t L_49 = L_48;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		int32_t L_50 = L_49;
		uint8_t L_51 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		V_7 = ((int32_t)((int32_t)L_51<<(int32_t)((int32_t)24)));
		uint32_t L_52 = V_7;
		ByteU5BU5D_t4116647657* L_53 = ___key2;
		int32_t L_54 = V_5;
		int32_t L_55 = L_54;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
		int32_t L_56 = L_55;
		uint8_t L_57 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_7 = ((int32_t)((int32_t)L_52|(int32_t)((int32_t)((int32_t)L_57<<(int32_t)((int32_t)16)))));
		uint32_t L_58 = V_7;
		ByteU5BU5D_t4116647657* L_59 = ___key2;
		int32_t L_60 = V_5;
		int32_t L_61 = L_60;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
		int32_t L_62 = L_61;
		uint8_t L_63 = (L_59)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		V_7 = ((int32_t)((int32_t)L_58|(int32_t)((int32_t)((int32_t)L_63<<(int32_t)8))));
		uint32_t L_64 = V_7;
		ByteU5BU5D_t4116647657* L_65 = ___key2;
		int32_t L_66 = V_5;
		int32_t L_67 = L_66;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		int32_t L_68 = L_67;
		uint8_t L_69 = (L_65)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		V_7 = ((int32_t)((int32_t)L_64|(int32_t)L_69));
		UInt32U5BU5D_t2770800703* L_70 = V_4;
		int32_t L_71 = V_6;
		uint32_t L_72 = V_7;
		(L_70)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71), (uint32_t)L_72);
		int32_t L_73 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
	}

IL_0171:
	{
		int32_t L_74 = V_6;
		int32_t L_75 = __this->get_Nk_13();
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_76 = __this->get_Nk_13();
		V_8 = L_76;
		goto IL_0212;
	}

IL_018b:
	{
		UInt32U5BU5D_t2770800703* L_77 = V_4;
		int32_t L_78 = V_8;
		int32_t L_79 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_78, (int32_t)1));
		uint32_t L_80 = (L_77)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_79));
		V_9 = L_80;
		int32_t L_81 = V_8;
		int32_t L_82 = __this->get_Nk_13();
		if (((int32_t)((int32_t)L_81%(int32_t)L_82)))
		{
			goto IL_01d3;
		}
	}
	{
		uint32_t L_83 = V_9;
		uint32_t L_84 = V_9;
		V_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_83<<(int32_t)8))|(int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_84>>((int32_t)24)))&(int32_t)((int32_t)255)))));
		uint32_t L_85 = V_10;
		uint32_t L_86 = AesTransform_SubByte_m3350159546(__this, L_85, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_87 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_Rcon_15();
		int32_t L_88 = V_8;
		int32_t L_89 = __this->get_Nk_13();
		int32_t L_90 = ((int32_t)((int32_t)L_88/(int32_t)L_89));
		uint32_t L_91 = (L_87)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_90));
		V_9 = ((int32_t)((int32_t)L_86^(int32_t)L_91));
		goto IL_01f8;
	}

IL_01d3:
	{
		int32_t L_92 = __this->get_Nk_13();
		if ((((int32_t)L_92) <= ((int32_t)6)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_93 = V_8;
		int32_t L_94 = __this->get_Nk_13();
		if ((!(((uint32_t)((int32_t)((int32_t)L_93%(int32_t)L_94))) == ((uint32_t)4))))
		{
			goto IL_01f8;
		}
	}
	{
		uint32_t L_95 = V_9;
		uint32_t L_96 = AesTransform_SubByte_m3350159546(__this, L_95, /*hidden argument*/NULL);
		V_9 = L_96;
	}

IL_01f8:
	{
		UInt32U5BU5D_t2770800703* L_97 = V_4;
		int32_t L_98 = V_8;
		UInt32U5BU5D_t2770800703* L_99 = V_4;
		int32_t L_100 = V_8;
		int32_t L_101 = __this->get_Nk_13();
		int32_t L_102 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_100, (int32_t)L_101));
		uint32_t L_103 = (L_99)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_102));
		uint32_t L_104 = V_9;
		(L_97)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_98), (uint32_t)((int32_t)((int32_t)L_103^(int32_t)L_104)));
		int32_t L_105 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1));
	}

IL_0212:
	{
		int32_t L_106 = V_8;
		int32_t L_107 = V_3;
		if ((((int32_t)L_106) < ((int32_t)L_107)))
		{
			goto IL_018b;
		}
	}
	{
		bool L_108 = ___encryption1;
		if (L_108)
		{
			goto IL_02ef;
		}
	}
	{
		V_11 = 0;
		int32_t L_109 = V_3;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_109, (int32_t)4));
		goto IL_0273;
	}

IL_022d:
	{
		V_13 = 0;
		goto IL_025f;
	}

IL_0235:
	{
		UInt32U5BU5D_t2770800703* L_110 = V_4;
		int32_t L_111 = V_11;
		int32_t L_112 = V_13;
		int32_t L_113 = ((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)L_112));
		uint32_t L_114 = (L_110)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_113));
		V_14 = L_114;
		UInt32U5BU5D_t2770800703* L_115 = V_4;
		int32_t L_116 = V_11;
		int32_t L_117 = V_13;
		UInt32U5BU5D_t2770800703* L_118 = V_4;
		int32_t L_119 = V_12;
		int32_t L_120 = V_13;
		int32_t L_121 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)L_120));
		uint32_t L_122 = (L_118)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_121));
		(L_115)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)L_117))), (uint32_t)L_122);
		UInt32U5BU5D_t2770800703* L_123 = V_4;
		int32_t L_124 = V_12;
		int32_t L_125 = V_13;
		uint32_t L_126 = V_14;
		(L_123)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)L_125))), (uint32_t)L_126);
		int32_t L_127 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)1));
	}

IL_025f:
	{
		int32_t L_128 = V_13;
		if ((((int32_t)L_128) < ((int32_t)4)))
		{
			goto IL_0235;
		}
	}
	{
		int32_t L_129 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)4));
		int32_t L_130 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_130, (int32_t)4));
	}

IL_0273:
	{
		int32_t L_131 = V_11;
		int32_t L_132 = V_12;
		if ((((int32_t)L_131) < ((int32_t)L_132)))
		{
			goto IL_022d;
		}
	}
	{
		V_15 = 4;
		goto IL_02e2;
	}

IL_0284:
	{
		UInt32U5BU5D_t2770800703* L_133 = V_4;
		int32_t L_134 = V_15;
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_135 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		ByteU5BU5D_t4116647657* L_136 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		UInt32U5BU5D_t2770800703* L_137 = V_4;
		int32_t L_138 = V_15;
		int32_t L_139 = L_138;
		uint32_t L_140 = (L_137)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_139));
		uintptr_t L_141 = (((uintptr_t)((int32_t)((uint32_t)L_140>>((int32_t)24)))));
		uint8_t L_142 = (L_136)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_141));
		uint8_t L_143 = L_142;
		uint32_t L_144 = (L_135)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_143));
		UInt32U5BU5D_t2770800703* L_145 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		ByteU5BU5D_t4116647657* L_146 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		UInt32U5BU5D_t2770800703* L_147 = V_4;
		int32_t L_148 = V_15;
		int32_t L_149 = L_148;
		uint32_t L_150 = (L_147)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_149));
		int32_t L_151 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_150>>((int32_t)16))))));
		uint8_t L_152 = (L_146)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_151));
		uint8_t L_153 = L_152;
		uint32_t L_154 = (L_145)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_153));
		UInt32U5BU5D_t2770800703* L_155 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		ByteU5BU5D_t4116647657* L_156 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		UInt32U5BU5D_t2770800703* L_157 = V_4;
		int32_t L_158 = V_15;
		int32_t L_159 = L_158;
		uint32_t L_160 = (L_157)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_159));
		int32_t L_161 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_160>>8)))));
		uint8_t L_162 = (L_156)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_161));
		uint8_t L_163 = L_162;
		uint32_t L_164 = (L_155)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_163));
		UInt32U5BU5D_t2770800703* L_165 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		ByteU5BU5D_t4116647657* L_166 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		UInt32U5BU5D_t2770800703* L_167 = V_4;
		int32_t L_168 = V_15;
		int32_t L_169 = L_168;
		uint32_t L_170 = (L_167)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_169));
		int32_t L_171 = (((int32_t)((uint8_t)L_170)));
		uint8_t L_172 = (L_166)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_171));
		uint8_t L_173 = L_172;
		uint32_t L_174 = (L_165)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_173));
		(L_133)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_134), (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_144^(int32_t)L_154))^(int32_t)L_164))^(int32_t)L_174)));
		int32_t L_175 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_175, (int32_t)1));
	}

IL_02e2:
	{
		int32_t L_176 = V_15;
		UInt32U5BU5D_t2770800703* L_177 = V_4;
		if ((((int32_t)L_176) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_177)->max_length)))), (int32_t)4)))))
		{
			goto IL_0284;
		}
	}

IL_02ef:
	{
		UInt32U5BU5D_t2770800703* L_178 = V_4;
		__this->set_expandedKey_12(L_178);
		return;
	}
}
// System.Void System.Security.Cryptography.AesTransform::.cctor()
extern "C"  void AesTransform__cctor_m2567644034 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AesTransform__cctor_m2567644034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t2770800703* L_0 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30)));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D1_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_Rcon_15(L_0);
		ByteU5BU5D_t4116647657* L_2 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256)));
		RuntimeFieldHandle_t1871169219  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D2_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_SBox_16(L_2);
		ByteU5BU5D_t4116647657* L_4 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256)));
		RuntimeFieldHandle_t1871169219  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D3_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_iSBox_17(L_4);
		UInt32U5BU5D_t2770800703* L_6 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256)));
		RuntimeFieldHandle_t1871169219  L_7 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D4_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_6, L_7, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_T0_18(L_6);
		UInt32U5BU5D_t2770800703* L_8 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256)));
		RuntimeFieldHandle_t1871169219  L_9 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D5_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_8, L_9, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_T1_19(L_8);
		UInt32U5BU5D_t2770800703* L_10 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256)));
		RuntimeFieldHandle_t1871169219  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D6_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_T2_20(L_10);
		UInt32U5BU5D_t2770800703* L_12 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256)));
		RuntimeFieldHandle_t1871169219  L_13 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D7_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_12, L_13, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_T3_21(L_12);
		UInt32U5BU5D_t2770800703* L_14 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256)));
		RuntimeFieldHandle_t1871169219  L_15 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D8_8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_14, L_15, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_iT0_22(L_14);
		UInt32U5BU5D_t2770800703* L_16 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256)));
		RuntimeFieldHandle_t1871169219  L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D9_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_16, L_17, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_iT1_23(L_16);
		UInt32U5BU5D_t2770800703* L_18 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256)));
		RuntimeFieldHandle_t1871169219  L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D10_10_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_18, L_19, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_iT2_24(L_18);
		UInt32U5BU5D_t2770800703* L_20 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256)));
		RuntimeFieldHandle_t1871169219  L_21 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D11_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_20, L_21, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_iT3_25(L_20);
		return;
	}
}
// System.Void System.Security.Cryptography.AesTransform::ECB(System.Byte[],System.Byte[])
extern "C"  void AesTransform_ECB_m240244807 (AesTransform_t2957123611 * __this, ByteU5BU5D_t4116647657* ___input0, ByteU5BU5D_t4116647657* ___output1, const RuntimeMethod* method)
{
	{
		bool L_0 = ((SymmetricTransform_t3802591843 *)__this)->get_encrypt_1();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___input0;
		ByteU5BU5D_t4116647657* L_2 = ___output1;
		UInt32U5BU5D_t2770800703* L_3 = __this->get_expandedKey_12();
		AesTransform_Encrypt128_m424393011(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		goto IL_002c;
	}

IL_001e:
	{
		ByteU5BU5D_t4116647657* L_4 = ___input0;
		ByteU5BU5D_t4116647657* L_5 = ___output1;
		UInt32U5BU5D_t2770800703* L_6 = __this->get_expandedKey_12();
		AesTransform_Decrypt128_m3018534522(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.UInt32 System.Security.Cryptography.AesTransform::SubByte(System.UInt32)
extern "C"  uint32_t AesTransform_SubByte_m3350159546 (AesTransform_t2957123611 * __this, uint32_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AesTransform_SubByte_m3350159546_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___a0;
		V_0 = ((int32_t)((int32_t)((int32_t)255)&(int32_t)L_0));
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_1 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_2 = V_0;
		uintptr_t L_3 = (((uintptr_t)L_2));
		uint8_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		uint32_t L_5 = ___a0;
		V_0 = ((int32_t)((int32_t)((int32_t)255)&(int32_t)((int32_t)((uint32_t)L_5>>8))));
		uint32_t L_6 = V_1;
		ByteU5BU5D_t4116647657* L_7 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_8 = V_0;
		uintptr_t L_9 = (((uintptr_t)L_8));
		uint8_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)((int32_t)L_10<<(int32_t)8))));
		uint32_t L_11 = ___a0;
		V_0 = ((int32_t)((int32_t)((int32_t)255)&(int32_t)((int32_t)((uint32_t)L_11>>((int32_t)16)))));
		uint32_t L_12 = V_1;
		ByteU5BU5D_t4116647657* L_13 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_14 = V_0;
		uintptr_t L_15 = (((uintptr_t)L_14));
		uint8_t L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		V_1 = ((int32_t)((int32_t)L_12|(int32_t)((int32_t)((int32_t)L_16<<(int32_t)((int32_t)16)))));
		uint32_t L_17 = ___a0;
		V_0 = ((int32_t)((int32_t)((int32_t)255)&(int32_t)((int32_t)((uint32_t)L_17>>((int32_t)24)))));
		uint32_t L_18 = V_1;
		ByteU5BU5D_t4116647657* L_19 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_20 = V_0;
		uintptr_t L_21 = (((uintptr_t)L_20));
		uint8_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		return ((int32_t)((int32_t)L_18|(int32_t)((int32_t)((int32_t)L_22<<(int32_t)((int32_t)24)))));
	}
}
// System.Void System.Security.Cryptography.AesTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void AesTransform_Encrypt128_m424393011 (AesTransform_t2957123611 * __this, ByteU5BU5D_t4116647657* ___indata0, ByteU5BU5D_t4116647657* ___outdata1, UInt32U5BU5D_t2770800703* ___ekey2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AesTransform_Encrypt128_m424393011_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		V_8 = ((int32_t)40);
		ByteU5BU5D_t4116647657* L_0 = ___indata0;
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_t4116647657* L_3 = ___indata0;
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_t4116647657* L_6 = ___indata0;
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_t4116647657* L_9 = ___indata0;
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		UInt32U5BU5D_t2770800703* L_12 = ___ekey2;
		int32_t L_13 = 0;
		uint32_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_8<<(int32_t)8))))|(int32_t)L_11))^(int32_t)L_14));
		ByteU5BU5D_t4116647657* L_15 = ___indata0;
		int32_t L_16 = 4;
		uint8_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_t4116647657* L_18 = ___indata0;
		int32_t L_19 = 5;
		uint8_t L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_t4116647657* L_21 = ___indata0;
		int32_t L_22 = 6;
		uint8_t L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_t4116647657* L_24 = ___indata0;
		int32_t L_25 = 7;
		uint8_t L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		UInt32U5BU5D_t2770800703* L_27 = ___ekey2;
		int32_t L_28 = 1;
		uint32_t L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_20<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_23<<(int32_t)8))))|(int32_t)L_26))^(int32_t)L_29));
		ByteU5BU5D_t4116647657* L_30 = ___indata0;
		int32_t L_31 = 8;
		uint8_t L_32 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		ByteU5BU5D_t4116647657* L_33 = ___indata0;
		int32_t L_34 = ((int32_t)9);
		uint8_t L_35 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		ByteU5BU5D_t4116647657* L_36 = ___indata0;
		int32_t L_37 = ((int32_t)10);
		uint8_t L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		ByteU5BU5D_t4116647657* L_39 = ___indata0;
		int32_t L_40 = ((int32_t)11);
		uint8_t L_41 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		UInt32U5BU5D_t2770800703* L_42 = ___ekey2;
		int32_t L_43 = 2;
		uint32_t L_44 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_32<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_35<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_38<<(int32_t)8))))|(int32_t)L_41))^(int32_t)L_44));
		ByteU5BU5D_t4116647657* L_45 = ___indata0;
		int32_t L_46 = ((int32_t)12);
		uint8_t L_47 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		ByteU5BU5D_t4116647657* L_48 = ___indata0;
		int32_t L_49 = ((int32_t)13);
		uint8_t L_50 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		ByteU5BU5D_t4116647657* L_51 = ___indata0;
		int32_t L_52 = ((int32_t)14);
		uint8_t L_53 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		ByteU5BU5D_t4116647657* L_54 = ___indata0;
		int32_t L_55 = ((int32_t)15);
		uint8_t L_56 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		UInt32U5BU5D_t2770800703* L_57 = ___ekey2;
		int32_t L_58 = 3;
		uint32_t L_59 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_47<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_50<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_53<<(int32_t)8))))|(int32_t)L_56))^(int32_t)L_59));
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_60 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_61 = V_0;
		uintptr_t L_62 = (((uintptr_t)((int32_t)((uint32_t)L_61>>((int32_t)24)))));
		uint32_t L_63 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t2770800703* L_64 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_65 = V_1;
		int32_t L_66 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_65>>((int32_t)16))))));
		uint32_t L_67 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		UInt32U5BU5D_t2770800703* L_68 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_69 = V_2;
		int32_t L_70 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_69>>8)))));
		uint32_t L_71 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t2770800703* L_72 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_73 = V_3;
		int32_t L_74 = (((int32_t)((uint8_t)L_73)));
		uint32_t L_75 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
		UInt32U5BU5D_t2770800703* L_76 = ___ekey2;
		int32_t L_77 = 4;
		uint32_t L_78 = (L_76)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_63^(int32_t)L_67))^(int32_t)L_71))^(int32_t)L_75))^(int32_t)L_78));
		UInt32U5BU5D_t2770800703* L_79 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_80 = V_1;
		uintptr_t L_81 = (((uintptr_t)((int32_t)((uint32_t)L_80>>((int32_t)24)))));
		uint32_t L_82 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		UInt32U5BU5D_t2770800703* L_83 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_84 = V_2;
		int32_t L_85 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_84>>((int32_t)16))))));
		uint32_t L_86 = (L_83)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85));
		UInt32U5BU5D_t2770800703* L_87 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_88 = V_3;
		int32_t L_89 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_88>>8)))));
		uint32_t L_90 = (L_87)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_89));
		UInt32U5BU5D_t2770800703* L_91 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_92 = V_0;
		int32_t L_93 = (((int32_t)((uint8_t)L_92)));
		uint32_t L_94 = (L_91)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_93));
		UInt32U5BU5D_t2770800703* L_95 = ___ekey2;
		int32_t L_96 = 5;
		uint32_t L_97 = (L_95)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_96));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_82^(int32_t)L_86))^(int32_t)L_90))^(int32_t)L_94))^(int32_t)L_97));
		UInt32U5BU5D_t2770800703* L_98 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_99 = V_2;
		uintptr_t L_100 = (((uintptr_t)((int32_t)((uint32_t)L_99>>((int32_t)24)))));
		uint32_t L_101 = (L_98)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_100));
		UInt32U5BU5D_t2770800703* L_102 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_103 = V_3;
		int32_t L_104 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_103>>((int32_t)16))))));
		uint32_t L_105 = (L_102)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_104));
		UInt32U5BU5D_t2770800703* L_106 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_107 = V_0;
		int32_t L_108 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_107>>8)))));
		uint32_t L_109 = (L_106)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_108));
		UInt32U5BU5D_t2770800703* L_110 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_111 = V_1;
		int32_t L_112 = (((int32_t)((uint8_t)L_111)));
		uint32_t L_113 = (L_110)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_112));
		UInt32U5BU5D_t2770800703* L_114 = ___ekey2;
		int32_t L_115 = 6;
		uint32_t L_116 = (L_114)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_115));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_101^(int32_t)L_105))^(int32_t)L_109))^(int32_t)L_113))^(int32_t)L_116));
		UInt32U5BU5D_t2770800703* L_117 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_118 = V_3;
		uintptr_t L_119 = (((uintptr_t)((int32_t)((uint32_t)L_118>>((int32_t)24)))));
		uint32_t L_120 = (L_117)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_119));
		UInt32U5BU5D_t2770800703* L_121 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_122 = V_0;
		int32_t L_123 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_122>>((int32_t)16))))));
		uint32_t L_124 = (L_121)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_123));
		UInt32U5BU5D_t2770800703* L_125 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_126 = V_1;
		int32_t L_127 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_126>>8)))));
		uint32_t L_128 = (L_125)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_127));
		UInt32U5BU5D_t2770800703* L_129 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_130 = V_2;
		int32_t L_131 = (((int32_t)((uint8_t)L_130)));
		uint32_t L_132 = (L_129)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_131));
		UInt32U5BU5D_t2770800703* L_133 = ___ekey2;
		int32_t L_134 = 7;
		uint32_t L_135 = (L_133)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_134));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_120^(int32_t)L_124))^(int32_t)L_128))^(int32_t)L_132))^(int32_t)L_135));
		UInt32U5BU5D_t2770800703* L_136 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_137 = V_4;
		uintptr_t L_138 = (((uintptr_t)((int32_t)((uint32_t)L_137>>((int32_t)24)))));
		uint32_t L_139 = (L_136)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_138));
		UInt32U5BU5D_t2770800703* L_140 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_141 = V_5;
		int32_t L_142 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_141>>((int32_t)16))))));
		uint32_t L_143 = (L_140)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_142));
		UInt32U5BU5D_t2770800703* L_144 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_145 = V_6;
		int32_t L_146 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_145>>8)))));
		uint32_t L_147 = (L_144)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_146));
		UInt32U5BU5D_t2770800703* L_148 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_149 = V_7;
		int32_t L_150 = (((int32_t)((uint8_t)L_149)));
		uint32_t L_151 = (L_148)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_150));
		UInt32U5BU5D_t2770800703* L_152 = ___ekey2;
		int32_t L_153 = 8;
		uint32_t L_154 = (L_152)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_153));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_139^(int32_t)L_143))^(int32_t)L_147))^(int32_t)L_151))^(int32_t)L_154));
		UInt32U5BU5D_t2770800703* L_155 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_156 = V_5;
		uintptr_t L_157 = (((uintptr_t)((int32_t)((uint32_t)L_156>>((int32_t)24)))));
		uint32_t L_158 = (L_155)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_157));
		UInt32U5BU5D_t2770800703* L_159 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_160 = V_6;
		int32_t L_161 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_160>>((int32_t)16))))));
		uint32_t L_162 = (L_159)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_161));
		UInt32U5BU5D_t2770800703* L_163 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_164 = V_7;
		int32_t L_165 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_164>>8)))));
		uint32_t L_166 = (L_163)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_165));
		UInt32U5BU5D_t2770800703* L_167 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_168 = V_4;
		int32_t L_169 = (((int32_t)((uint8_t)L_168)));
		uint32_t L_170 = (L_167)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_169));
		UInt32U5BU5D_t2770800703* L_171 = ___ekey2;
		int32_t L_172 = ((int32_t)9);
		uint32_t L_173 = (L_171)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_172));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_158^(int32_t)L_162))^(int32_t)L_166))^(int32_t)L_170))^(int32_t)L_173));
		UInt32U5BU5D_t2770800703* L_174 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_175 = V_6;
		uintptr_t L_176 = (((uintptr_t)((int32_t)((uint32_t)L_175>>((int32_t)24)))));
		uint32_t L_177 = (L_174)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_176));
		UInt32U5BU5D_t2770800703* L_178 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_179 = V_7;
		int32_t L_180 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_179>>((int32_t)16))))));
		uint32_t L_181 = (L_178)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_180));
		UInt32U5BU5D_t2770800703* L_182 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_183 = V_4;
		int32_t L_184 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_183>>8)))));
		uint32_t L_185 = (L_182)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_184));
		UInt32U5BU5D_t2770800703* L_186 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_187 = V_5;
		int32_t L_188 = (((int32_t)((uint8_t)L_187)));
		uint32_t L_189 = (L_186)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_188));
		UInt32U5BU5D_t2770800703* L_190 = ___ekey2;
		int32_t L_191 = ((int32_t)10);
		uint32_t L_192 = (L_190)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_191));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_177^(int32_t)L_181))^(int32_t)L_185))^(int32_t)L_189))^(int32_t)L_192));
		UInt32U5BU5D_t2770800703* L_193 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_194 = V_7;
		uintptr_t L_195 = (((uintptr_t)((int32_t)((uint32_t)L_194>>((int32_t)24)))));
		uint32_t L_196 = (L_193)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_195));
		UInt32U5BU5D_t2770800703* L_197 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_198 = V_4;
		int32_t L_199 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_198>>((int32_t)16))))));
		uint32_t L_200 = (L_197)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_199));
		UInt32U5BU5D_t2770800703* L_201 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_202 = V_5;
		int32_t L_203 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_202>>8)))));
		uint32_t L_204 = (L_201)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_203));
		UInt32U5BU5D_t2770800703* L_205 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_206 = V_6;
		int32_t L_207 = (((int32_t)((uint8_t)L_206)));
		uint32_t L_208 = (L_205)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_207));
		UInt32U5BU5D_t2770800703* L_209 = ___ekey2;
		int32_t L_210 = ((int32_t)11);
		uint32_t L_211 = (L_209)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_210));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_196^(int32_t)L_200))^(int32_t)L_204))^(int32_t)L_208))^(int32_t)L_211));
		UInt32U5BU5D_t2770800703* L_212 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_213 = V_0;
		uintptr_t L_214 = (((uintptr_t)((int32_t)((uint32_t)L_213>>((int32_t)24)))));
		uint32_t L_215 = (L_212)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_214));
		UInt32U5BU5D_t2770800703* L_216 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_217 = V_1;
		int32_t L_218 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_217>>((int32_t)16))))));
		uint32_t L_219 = (L_216)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_218));
		UInt32U5BU5D_t2770800703* L_220 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_221 = V_2;
		int32_t L_222 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_221>>8)))));
		uint32_t L_223 = (L_220)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_222));
		UInt32U5BU5D_t2770800703* L_224 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_225 = V_3;
		int32_t L_226 = (((int32_t)((uint8_t)L_225)));
		uint32_t L_227 = (L_224)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_226));
		UInt32U5BU5D_t2770800703* L_228 = ___ekey2;
		int32_t L_229 = ((int32_t)12);
		uint32_t L_230 = (L_228)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_229));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_215^(int32_t)L_219))^(int32_t)L_223))^(int32_t)L_227))^(int32_t)L_230));
		UInt32U5BU5D_t2770800703* L_231 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_232 = V_1;
		uintptr_t L_233 = (((uintptr_t)((int32_t)((uint32_t)L_232>>((int32_t)24)))));
		uint32_t L_234 = (L_231)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_233));
		UInt32U5BU5D_t2770800703* L_235 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_236 = V_2;
		int32_t L_237 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_236>>((int32_t)16))))));
		uint32_t L_238 = (L_235)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_237));
		UInt32U5BU5D_t2770800703* L_239 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_240 = V_3;
		int32_t L_241 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_240>>8)))));
		uint32_t L_242 = (L_239)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_241));
		UInt32U5BU5D_t2770800703* L_243 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_244 = V_0;
		int32_t L_245 = (((int32_t)((uint8_t)L_244)));
		uint32_t L_246 = (L_243)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_245));
		UInt32U5BU5D_t2770800703* L_247 = ___ekey2;
		int32_t L_248 = ((int32_t)13);
		uint32_t L_249 = (L_247)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_248));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_234^(int32_t)L_238))^(int32_t)L_242))^(int32_t)L_246))^(int32_t)L_249));
		UInt32U5BU5D_t2770800703* L_250 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_251 = V_2;
		uintptr_t L_252 = (((uintptr_t)((int32_t)((uint32_t)L_251>>((int32_t)24)))));
		uint32_t L_253 = (L_250)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_252));
		UInt32U5BU5D_t2770800703* L_254 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_255 = V_3;
		int32_t L_256 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_255>>((int32_t)16))))));
		uint32_t L_257 = (L_254)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_256));
		UInt32U5BU5D_t2770800703* L_258 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_259 = V_0;
		int32_t L_260 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_259>>8)))));
		uint32_t L_261 = (L_258)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_260));
		UInt32U5BU5D_t2770800703* L_262 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_263 = V_1;
		int32_t L_264 = (((int32_t)((uint8_t)L_263)));
		uint32_t L_265 = (L_262)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_264));
		UInt32U5BU5D_t2770800703* L_266 = ___ekey2;
		int32_t L_267 = ((int32_t)14);
		uint32_t L_268 = (L_266)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_267));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_253^(int32_t)L_257))^(int32_t)L_261))^(int32_t)L_265))^(int32_t)L_268));
		UInt32U5BU5D_t2770800703* L_269 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_270 = V_3;
		uintptr_t L_271 = (((uintptr_t)((int32_t)((uint32_t)L_270>>((int32_t)24)))));
		uint32_t L_272 = (L_269)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_271));
		UInt32U5BU5D_t2770800703* L_273 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_274 = V_0;
		int32_t L_275 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_274>>((int32_t)16))))));
		uint32_t L_276 = (L_273)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_275));
		UInt32U5BU5D_t2770800703* L_277 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_278 = V_1;
		int32_t L_279 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_278>>8)))));
		uint32_t L_280 = (L_277)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_279));
		UInt32U5BU5D_t2770800703* L_281 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_282 = V_2;
		int32_t L_283 = (((int32_t)((uint8_t)L_282)));
		uint32_t L_284 = (L_281)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_283));
		UInt32U5BU5D_t2770800703* L_285 = ___ekey2;
		int32_t L_286 = ((int32_t)15);
		uint32_t L_287 = (L_285)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_286));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_272^(int32_t)L_276))^(int32_t)L_280))^(int32_t)L_284))^(int32_t)L_287));
		UInt32U5BU5D_t2770800703* L_288 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_289 = V_4;
		uintptr_t L_290 = (((uintptr_t)((int32_t)((uint32_t)L_289>>((int32_t)24)))));
		uint32_t L_291 = (L_288)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_290));
		UInt32U5BU5D_t2770800703* L_292 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_293 = V_5;
		int32_t L_294 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_293>>((int32_t)16))))));
		uint32_t L_295 = (L_292)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_294));
		UInt32U5BU5D_t2770800703* L_296 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_297 = V_6;
		int32_t L_298 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_297>>8)))));
		uint32_t L_299 = (L_296)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_298));
		UInt32U5BU5D_t2770800703* L_300 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_301 = V_7;
		int32_t L_302 = (((int32_t)((uint8_t)L_301)));
		uint32_t L_303 = (L_300)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_302));
		UInt32U5BU5D_t2770800703* L_304 = ___ekey2;
		int32_t L_305 = ((int32_t)16);
		uint32_t L_306 = (L_304)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_305));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_291^(int32_t)L_295))^(int32_t)L_299))^(int32_t)L_303))^(int32_t)L_306));
		UInt32U5BU5D_t2770800703* L_307 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_308 = V_5;
		uintptr_t L_309 = (((uintptr_t)((int32_t)((uint32_t)L_308>>((int32_t)24)))));
		uint32_t L_310 = (L_307)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_309));
		UInt32U5BU5D_t2770800703* L_311 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_312 = V_6;
		int32_t L_313 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_312>>((int32_t)16))))));
		uint32_t L_314 = (L_311)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_313));
		UInt32U5BU5D_t2770800703* L_315 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_316 = V_7;
		int32_t L_317 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_316>>8)))));
		uint32_t L_318 = (L_315)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_317));
		UInt32U5BU5D_t2770800703* L_319 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_320 = V_4;
		int32_t L_321 = (((int32_t)((uint8_t)L_320)));
		uint32_t L_322 = (L_319)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_321));
		UInt32U5BU5D_t2770800703* L_323 = ___ekey2;
		int32_t L_324 = ((int32_t)17);
		uint32_t L_325 = (L_323)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_324));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_310^(int32_t)L_314))^(int32_t)L_318))^(int32_t)L_322))^(int32_t)L_325));
		UInt32U5BU5D_t2770800703* L_326 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_327 = V_6;
		uintptr_t L_328 = (((uintptr_t)((int32_t)((uint32_t)L_327>>((int32_t)24)))));
		uint32_t L_329 = (L_326)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_328));
		UInt32U5BU5D_t2770800703* L_330 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_331 = V_7;
		int32_t L_332 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_331>>((int32_t)16))))));
		uint32_t L_333 = (L_330)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_332));
		UInt32U5BU5D_t2770800703* L_334 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_335 = V_4;
		int32_t L_336 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_335>>8)))));
		uint32_t L_337 = (L_334)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_336));
		UInt32U5BU5D_t2770800703* L_338 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_339 = V_5;
		int32_t L_340 = (((int32_t)((uint8_t)L_339)));
		uint32_t L_341 = (L_338)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_340));
		UInt32U5BU5D_t2770800703* L_342 = ___ekey2;
		int32_t L_343 = ((int32_t)18);
		uint32_t L_344 = (L_342)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_343));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_329^(int32_t)L_333))^(int32_t)L_337))^(int32_t)L_341))^(int32_t)L_344));
		UInt32U5BU5D_t2770800703* L_345 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_346 = V_7;
		uintptr_t L_347 = (((uintptr_t)((int32_t)((uint32_t)L_346>>((int32_t)24)))));
		uint32_t L_348 = (L_345)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_347));
		UInt32U5BU5D_t2770800703* L_349 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_350 = V_4;
		int32_t L_351 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_350>>((int32_t)16))))));
		uint32_t L_352 = (L_349)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_351));
		UInt32U5BU5D_t2770800703* L_353 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_354 = V_5;
		int32_t L_355 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_354>>8)))));
		uint32_t L_356 = (L_353)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_355));
		UInt32U5BU5D_t2770800703* L_357 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_358 = V_6;
		int32_t L_359 = (((int32_t)((uint8_t)L_358)));
		uint32_t L_360 = (L_357)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_359));
		UInt32U5BU5D_t2770800703* L_361 = ___ekey2;
		int32_t L_362 = ((int32_t)19);
		uint32_t L_363 = (L_361)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_362));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_348^(int32_t)L_352))^(int32_t)L_356))^(int32_t)L_360))^(int32_t)L_363));
		UInt32U5BU5D_t2770800703* L_364 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_365 = V_0;
		uintptr_t L_366 = (((uintptr_t)((int32_t)((uint32_t)L_365>>((int32_t)24)))));
		uint32_t L_367 = (L_364)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_366));
		UInt32U5BU5D_t2770800703* L_368 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_369 = V_1;
		int32_t L_370 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_369>>((int32_t)16))))));
		uint32_t L_371 = (L_368)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_370));
		UInt32U5BU5D_t2770800703* L_372 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_373 = V_2;
		int32_t L_374 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_373>>8)))));
		uint32_t L_375 = (L_372)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_374));
		UInt32U5BU5D_t2770800703* L_376 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_377 = V_3;
		int32_t L_378 = (((int32_t)((uint8_t)L_377)));
		uint32_t L_379 = (L_376)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_378));
		UInt32U5BU5D_t2770800703* L_380 = ___ekey2;
		int32_t L_381 = ((int32_t)20);
		uint32_t L_382 = (L_380)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_381));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_367^(int32_t)L_371))^(int32_t)L_375))^(int32_t)L_379))^(int32_t)L_382));
		UInt32U5BU5D_t2770800703* L_383 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_384 = V_1;
		uintptr_t L_385 = (((uintptr_t)((int32_t)((uint32_t)L_384>>((int32_t)24)))));
		uint32_t L_386 = (L_383)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_385));
		UInt32U5BU5D_t2770800703* L_387 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_388 = V_2;
		int32_t L_389 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_388>>((int32_t)16))))));
		uint32_t L_390 = (L_387)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_389));
		UInt32U5BU5D_t2770800703* L_391 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_392 = V_3;
		int32_t L_393 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_392>>8)))));
		uint32_t L_394 = (L_391)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_393));
		UInt32U5BU5D_t2770800703* L_395 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_396 = V_0;
		int32_t L_397 = (((int32_t)((uint8_t)L_396)));
		uint32_t L_398 = (L_395)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_397));
		UInt32U5BU5D_t2770800703* L_399 = ___ekey2;
		int32_t L_400 = ((int32_t)21);
		uint32_t L_401 = (L_399)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_400));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_386^(int32_t)L_390))^(int32_t)L_394))^(int32_t)L_398))^(int32_t)L_401));
		UInt32U5BU5D_t2770800703* L_402 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_403 = V_2;
		uintptr_t L_404 = (((uintptr_t)((int32_t)((uint32_t)L_403>>((int32_t)24)))));
		uint32_t L_405 = (L_402)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_404));
		UInt32U5BU5D_t2770800703* L_406 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_407 = V_3;
		int32_t L_408 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_407>>((int32_t)16))))));
		uint32_t L_409 = (L_406)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_408));
		UInt32U5BU5D_t2770800703* L_410 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_411 = V_0;
		int32_t L_412 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_411>>8)))));
		uint32_t L_413 = (L_410)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_412));
		UInt32U5BU5D_t2770800703* L_414 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_415 = V_1;
		int32_t L_416 = (((int32_t)((uint8_t)L_415)));
		uint32_t L_417 = (L_414)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_416));
		UInt32U5BU5D_t2770800703* L_418 = ___ekey2;
		int32_t L_419 = ((int32_t)22);
		uint32_t L_420 = (L_418)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_419));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_405^(int32_t)L_409))^(int32_t)L_413))^(int32_t)L_417))^(int32_t)L_420));
		UInt32U5BU5D_t2770800703* L_421 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_422 = V_3;
		uintptr_t L_423 = (((uintptr_t)((int32_t)((uint32_t)L_422>>((int32_t)24)))));
		uint32_t L_424 = (L_421)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_423));
		UInt32U5BU5D_t2770800703* L_425 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_426 = V_0;
		int32_t L_427 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_426>>((int32_t)16))))));
		uint32_t L_428 = (L_425)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_427));
		UInt32U5BU5D_t2770800703* L_429 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_430 = V_1;
		int32_t L_431 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_430>>8)))));
		uint32_t L_432 = (L_429)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_431));
		UInt32U5BU5D_t2770800703* L_433 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_434 = V_2;
		int32_t L_435 = (((int32_t)((uint8_t)L_434)));
		uint32_t L_436 = (L_433)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_435));
		UInt32U5BU5D_t2770800703* L_437 = ___ekey2;
		int32_t L_438 = ((int32_t)23);
		uint32_t L_439 = (L_437)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_438));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_424^(int32_t)L_428))^(int32_t)L_432))^(int32_t)L_436))^(int32_t)L_439));
		UInt32U5BU5D_t2770800703* L_440 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_441 = V_4;
		uintptr_t L_442 = (((uintptr_t)((int32_t)((uint32_t)L_441>>((int32_t)24)))));
		uint32_t L_443 = (L_440)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_442));
		UInt32U5BU5D_t2770800703* L_444 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_445 = V_5;
		int32_t L_446 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_445>>((int32_t)16))))));
		uint32_t L_447 = (L_444)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_446));
		UInt32U5BU5D_t2770800703* L_448 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_449 = V_6;
		int32_t L_450 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_449>>8)))));
		uint32_t L_451 = (L_448)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_450));
		UInt32U5BU5D_t2770800703* L_452 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_453 = V_7;
		int32_t L_454 = (((int32_t)((uint8_t)L_453)));
		uint32_t L_455 = (L_452)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_454));
		UInt32U5BU5D_t2770800703* L_456 = ___ekey2;
		int32_t L_457 = ((int32_t)24);
		uint32_t L_458 = (L_456)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_457));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_443^(int32_t)L_447))^(int32_t)L_451))^(int32_t)L_455))^(int32_t)L_458));
		UInt32U5BU5D_t2770800703* L_459 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_460 = V_5;
		uintptr_t L_461 = (((uintptr_t)((int32_t)((uint32_t)L_460>>((int32_t)24)))));
		uint32_t L_462 = (L_459)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_461));
		UInt32U5BU5D_t2770800703* L_463 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_464 = V_6;
		int32_t L_465 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_464>>((int32_t)16))))));
		uint32_t L_466 = (L_463)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_465));
		UInt32U5BU5D_t2770800703* L_467 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_468 = V_7;
		int32_t L_469 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_468>>8)))));
		uint32_t L_470 = (L_467)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_469));
		UInt32U5BU5D_t2770800703* L_471 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_472 = V_4;
		int32_t L_473 = (((int32_t)((uint8_t)L_472)));
		uint32_t L_474 = (L_471)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_473));
		UInt32U5BU5D_t2770800703* L_475 = ___ekey2;
		int32_t L_476 = ((int32_t)25);
		uint32_t L_477 = (L_475)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_476));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_462^(int32_t)L_466))^(int32_t)L_470))^(int32_t)L_474))^(int32_t)L_477));
		UInt32U5BU5D_t2770800703* L_478 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_479 = V_6;
		uintptr_t L_480 = (((uintptr_t)((int32_t)((uint32_t)L_479>>((int32_t)24)))));
		uint32_t L_481 = (L_478)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_480));
		UInt32U5BU5D_t2770800703* L_482 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_483 = V_7;
		int32_t L_484 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_483>>((int32_t)16))))));
		uint32_t L_485 = (L_482)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_484));
		UInt32U5BU5D_t2770800703* L_486 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_487 = V_4;
		int32_t L_488 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_487>>8)))));
		uint32_t L_489 = (L_486)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_488));
		UInt32U5BU5D_t2770800703* L_490 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_491 = V_5;
		int32_t L_492 = (((int32_t)((uint8_t)L_491)));
		uint32_t L_493 = (L_490)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_492));
		UInt32U5BU5D_t2770800703* L_494 = ___ekey2;
		int32_t L_495 = ((int32_t)26);
		uint32_t L_496 = (L_494)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_495));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_481^(int32_t)L_485))^(int32_t)L_489))^(int32_t)L_493))^(int32_t)L_496));
		UInt32U5BU5D_t2770800703* L_497 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_498 = V_7;
		uintptr_t L_499 = (((uintptr_t)((int32_t)((uint32_t)L_498>>((int32_t)24)))));
		uint32_t L_500 = (L_497)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_499));
		UInt32U5BU5D_t2770800703* L_501 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_502 = V_4;
		int32_t L_503 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_502>>((int32_t)16))))));
		uint32_t L_504 = (L_501)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_503));
		UInt32U5BU5D_t2770800703* L_505 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_506 = V_5;
		int32_t L_507 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_506>>8)))));
		uint32_t L_508 = (L_505)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_507));
		UInt32U5BU5D_t2770800703* L_509 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_510 = V_6;
		int32_t L_511 = (((int32_t)((uint8_t)L_510)));
		uint32_t L_512 = (L_509)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_511));
		UInt32U5BU5D_t2770800703* L_513 = ___ekey2;
		int32_t L_514 = ((int32_t)27);
		uint32_t L_515 = (L_513)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_514));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_500^(int32_t)L_504))^(int32_t)L_508))^(int32_t)L_512))^(int32_t)L_515));
		UInt32U5BU5D_t2770800703* L_516 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_517 = V_0;
		uintptr_t L_518 = (((uintptr_t)((int32_t)((uint32_t)L_517>>((int32_t)24)))));
		uint32_t L_519 = (L_516)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_518));
		UInt32U5BU5D_t2770800703* L_520 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_521 = V_1;
		int32_t L_522 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_521>>((int32_t)16))))));
		uint32_t L_523 = (L_520)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_522));
		UInt32U5BU5D_t2770800703* L_524 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_525 = V_2;
		int32_t L_526 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_525>>8)))));
		uint32_t L_527 = (L_524)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_526));
		UInt32U5BU5D_t2770800703* L_528 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_529 = V_3;
		int32_t L_530 = (((int32_t)((uint8_t)L_529)));
		uint32_t L_531 = (L_528)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_530));
		UInt32U5BU5D_t2770800703* L_532 = ___ekey2;
		int32_t L_533 = ((int32_t)28);
		uint32_t L_534 = (L_532)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_533));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_519^(int32_t)L_523))^(int32_t)L_527))^(int32_t)L_531))^(int32_t)L_534));
		UInt32U5BU5D_t2770800703* L_535 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_536 = V_1;
		uintptr_t L_537 = (((uintptr_t)((int32_t)((uint32_t)L_536>>((int32_t)24)))));
		uint32_t L_538 = (L_535)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_537));
		UInt32U5BU5D_t2770800703* L_539 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_540 = V_2;
		int32_t L_541 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_540>>((int32_t)16))))));
		uint32_t L_542 = (L_539)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_541));
		UInt32U5BU5D_t2770800703* L_543 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_544 = V_3;
		int32_t L_545 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_544>>8)))));
		uint32_t L_546 = (L_543)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_545));
		UInt32U5BU5D_t2770800703* L_547 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_548 = V_0;
		int32_t L_549 = (((int32_t)((uint8_t)L_548)));
		uint32_t L_550 = (L_547)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_549));
		UInt32U5BU5D_t2770800703* L_551 = ___ekey2;
		int32_t L_552 = ((int32_t)29);
		uint32_t L_553 = (L_551)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_552));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_538^(int32_t)L_542))^(int32_t)L_546))^(int32_t)L_550))^(int32_t)L_553));
		UInt32U5BU5D_t2770800703* L_554 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_555 = V_2;
		uintptr_t L_556 = (((uintptr_t)((int32_t)((uint32_t)L_555>>((int32_t)24)))));
		uint32_t L_557 = (L_554)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_556));
		UInt32U5BU5D_t2770800703* L_558 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_559 = V_3;
		int32_t L_560 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_559>>((int32_t)16))))));
		uint32_t L_561 = (L_558)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_560));
		UInt32U5BU5D_t2770800703* L_562 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_563 = V_0;
		int32_t L_564 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_563>>8)))));
		uint32_t L_565 = (L_562)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_564));
		UInt32U5BU5D_t2770800703* L_566 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_567 = V_1;
		int32_t L_568 = (((int32_t)((uint8_t)L_567)));
		uint32_t L_569 = (L_566)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_568));
		UInt32U5BU5D_t2770800703* L_570 = ___ekey2;
		int32_t L_571 = ((int32_t)30);
		uint32_t L_572 = (L_570)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_571));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_557^(int32_t)L_561))^(int32_t)L_565))^(int32_t)L_569))^(int32_t)L_572));
		UInt32U5BU5D_t2770800703* L_573 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_574 = V_3;
		uintptr_t L_575 = (((uintptr_t)((int32_t)((uint32_t)L_574>>((int32_t)24)))));
		uint32_t L_576 = (L_573)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_575));
		UInt32U5BU5D_t2770800703* L_577 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_578 = V_0;
		int32_t L_579 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_578>>((int32_t)16))))));
		uint32_t L_580 = (L_577)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_579));
		UInt32U5BU5D_t2770800703* L_581 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_582 = V_1;
		int32_t L_583 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_582>>8)))));
		uint32_t L_584 = (L_581)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_583));
		UInt32U5BU5D_t2770800703* L_585 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_586 = V_2;
		int32_t L_587 = (((int32_t)((uint8_t)L_586)));
		uint32_t L_588 = (L_585)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_587));
		UInt32U5BU5D_t2770800703* L_589 = ___ekey2;
		int32_t L_590 = ((int32_t)31);
		uint32_t L_591 = (L_589)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_590));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_576^(int32_t)L_580))^(int32_t)L_584))^(int32_t)L_588))^(int32_t)L_591));
		UInt32U5BU5D_t2770800703* L_592 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_593 = V_4;
		uintptr_t L_594 = (((uintptr_t)((int32_t)((uint32_t)L_593>>((int32_t)24)))));
		uint32_t L_595 = (L_592)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_594));
		UInt32U5BU5D_t2770800703* L_596 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_597 = V_5;
		int32_t L_598 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_597>>((int32_t)16))))));
		uint32_t L_599 = (L_596)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_598));
		UInt32U5BU5D_t2770800703* L_600 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_601 = V_6;
		int32_t L_602 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_601>>8)))));
		uint32_t L_603 = (L_600)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_602));
		UInt32U5BU5D_t2770800703* L_604 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_605 = V_7;
		int32_t L_606 = (((int32_t)((uint8_t)L_605)));
		uint32_t L_607 = (L_604)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_606));
		UInt32U5BU5D_t2770800703* L_608 = ___ekey2;
		int32_t L_609 = ((int32_t)32);
		uint32_t L_610 = (L_608)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_609));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_595^(int32_t)L_599))^(int32_t)L_603))^(int32_t)L_607))^(int32_t)L_610));
		UInt32U5BU5D_t2770800703* L_611 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_612 = V_5;
		uintptr_t L_613 = (((uintptr_t)((int32_t)((uint32_t)L_612>>((int32_t)24)))));
		uint32_t L_614 = (L_611)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_613));
		UInt32U5BU5D_t2770800703* L_615 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_616 = V_6;
		int32_t L_617 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_616>>((int32_t)16))))));
		uint32_t L_618 = (L_615)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_617));
		UInt32U5BU5D_t2770800703* L_619 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_620 = V_7;
		int32_t L_621 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_620>>8)))));
		uint32_t L_622 = (L_619)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_621));
		UInt32U5BU5D_t2770800703* L_623 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_624 = V_4;
		int32_t L_625 = (((int32_t)((uint8_t)L_624)));
		uint32_t L_626 = (L_623)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_625));
		UInt32U5BU5D_t2770800703* L_627 = ___ekey2;
		int32_t L_628 = ((int32_t)33);
		uint32_t L_629 = (L_627)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_628));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_614^(int32_t)L_618))^(int32_t)L_622))^(int32_t)L_626))^(int32_t)L_629));
		UInt32U5BU5D_t2770800703* L_630 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_631 = V_6;
		uintptr_t L_632 = (((uintptr_t)((int32_t)((uint32_t)L_631>>((int32_t)24)))));
		uint32_t L_633 = (L_630)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_632));
		UInt32U5BU5D_t2770800703* L_634 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_635 = V_7;
		int32_t L_636 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_635>>((int32_t)16))))));
		uint32_t L_637 = (L_634)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_636));
		UInt32U5BU5D_t2770800703* L_638 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_639 = V_4;
		int32_t L_640 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_639>>8)))));
		uint32_t L_641 = (L_638)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_640));
		UInt32U5BU5D_t2770800703* L_642 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_643 = V_5;
		int32_t L_644 = (((int32_t)((uint8_t)L_643)));
		uint32_t L_645 = (L_642)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_644));
		UInt32U5BU5D_t2770800703* L_646 = ___ekey2;
		int32_t L_647 = ((int32_t)34);
		uint32_t L_648 = (L_646)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_647));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_633^(int32_t)L_637))^(int32_t)L_641))^(int32_t)L_645))^(int32_t)L_648));
		UInt32U5BU5D_t2770800703* L_649 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_650 = V_7;
		uintptr_t L_651 = (((uintptr_t)((int32_t)((uint32_t)L_650>>((int32_t)24)))));
		uint32_t L_652 = (L_649)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_651));
		UInt32U5BU5D_t2770800703* L_653 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_654 = V_4;
		int32_t L_655 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_654>>((int32_t)16))))));
		uint32_t L_656 = (L_653)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_655));
		UInt32U5BU5D_t2770800703* L_657 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_658 = V_5;
		int32_t L_659 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_658>>8)))));
		uint32_t L_660 = (L_657)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_659));
		UInt32U5BU5D_t2770800703* L_661 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_662 = V_6;
		int32_t L_663 = (((int32_t)((uint8_t)L_662)));
		uint32_t L_664 = (L_661)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_663));
		UInt32U5BU5D_t2770800703* L_665 = ___ekey2;
		int32_t L_666 = ((int32_t)35);
		uint32_t L_667 = (L_665)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_666));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_652^(int32_t)L_656))^(int32_t)L_660))^(int32_t)L_664))^(int32_t)L_667));
		UInt32U5BU5D_t2770800703* L_668 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_669 = V_0;
		uintptr_t L_670 = (((uintptr_t)((int32_t)((uint32_t)L_669>>((int32_t)24)))));
		uint32_t L_671 = (L_668)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_670));
		UInt32U5BU5D_t2770800703* L_672 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_673 = V_1;
		int32_t L_674 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_673>>((int32_t)16))))));
		uint32_t L_675 = (L_672)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_674));
		UInt32U5BU5D_t2770800703* L_676 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_677 = V_2;
		int32_t L_678 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_677>>8)))));
		uint32_t L_679 = (L_676)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_678));
		UInt32U5BU5D_t2770800703* L_680 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_681 = V_3;
		int32_t L_682 = (((int32_t)((uint8_t)L_681)));
		uint32_t L_683 = (L_680)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_682));
		UInt32U5BU5D_t2770800703* L_684 = ___ekey2;
		int32_t L_685 = ((int32_t)36);
		uint32_t L_686 = (L_684)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_685));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_671^(int32_t)L_675))^(int32_t)L_679))^(int32_t)L_683))^(int32_t)L_686));
		UInt32U5BU5D_t2770800703* L_687 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_688 = V_1;
		uintptr_t L_689 = (((uintptr_t)((int32_t)((uint32_t)L_688>>((int32_t)24)))));
		uint32_t L_690 = (L_687)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_689));
		UInt32U5BU5D_t2770800703* L_691 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_692 = V_2;
		int32_t L_693 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_692>>((int32_t)16))))));
		uint32_t L_694 = (L_691)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_693));
		UInt32U5BU5D_t2770800703* L_695 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_696 = V_3;
		int32_t L_697 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_696>>8)))));
		uint32_t L_698 = (L_695)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_697));
		UInt32U5BU5D_t2770800703* L_699 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_700 = V_0;
		int32_t L_701 = (((int32_t)((uint8_t)L_700)));
		uint32_t L_702 = (L_699)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_701));
		UInt32U5BU5D_t2770800703* L_703 = ___ekey2;
		int32_t L_704 = ((int32_t)37);
		uint32_t L_705 = (L_703)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_704));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_690^(int32_t)L_694))^(int32_t)L_698))^(int32_t)L_702))^(int32_t)L_705));
		UInt32U5BU5D_t2770800703* L_706 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_707 = V_2;
		uintptr_t L_708 = (((uintptr_t)((int32_t)((uint32_t)L_707>>((int32_t)24)))));
		uint32_t L_709 = (L_706)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_708));
		UInt32U5BU5D_t2770800703* L_710 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_711 = V_3;
		int32_t L_712 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_711>>((int32_t)16))))));
		uint32_t L_713 = (L_710)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_712));
		UInt32U5BU5D_t2770800703* L_714 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_715 = V_0;
		int32_t L_716 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_715>>8)))));
		uint32_t L_717 = (L_714)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_716));
		UInt32U5BU5D_t2770800703* L_718 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_719 = V_1;
		int32_t L_720 = (((int32_t)((uint8_t)L_719)));
		uint32_t L_721 = (L_718)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_720));
		UInt32U5BU5D_t2770800703* L_722 = ___ekey2;
		int32_t L_723 = ((int32_t)38);
		uint32_t L_724 = (L_722)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_723));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_709^(int32_t)L_713))^(int32_t)L_717))^(int32_t)L_721))^(int32_t)L_724));
		UInt32U5BU5D_t2770800703* L_725 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_726 = V_3;
		uintptr_t L_727 = (((uintptr_t)((int32_t)((uint32_t)L_726>>((int32_t)24)))));
		uint32_t L_728 = (L_725)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_727));
		UInt32U5BU5D_t2770800703* L_729 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_730 = V_0;
		int32_t L_731 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_730>>((int32_t)16))))));
		uint32_t L_732 = (L_729)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_731));
		UInt32U5BU5D_t2770800703* L_733 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_734 = V_1;
		int32_t L_735 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_734>>8)))));
		uint32_t L_736 = (L_733)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_735));
		UInt32U5BU5D_t2770800703* L_737 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_738 = V_2;
		int32_t L_739 = (((int32_t)((uint8_t)L_738)));
		uint32_t L_740 = (L_737)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_739));
		UInt32U5BU5D_t2770800703* L_741 = ___ekey2;
		int32_t L_742 = ((int32_t)39);
		uint32_t L_743 = (L_741)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_742));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_728^(int32_t)L_732))^(int32_t)L_736))^(int32_t)L_740))^(int32_t)L_743));
		int32_t L_744 = __this->get_Nr_14();
		if ((((int32_t)L_744) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0b08;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_745 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_746 = V_4;
		uintptr_t L_747 = (((uintptr_t)((int32_t)((uint32_t)L_746>>((int32_t)24)))));
		uint32_t L_748 = (L_745)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_747));
		UInt32U5BU5D_t2770800703* L_749 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_750 = V_5;
		int32_t L_751 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_750>>((int32_t)16))))));
		uint32_t L_752 = (L_749)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_751));
		UInt32U5BU5D_t2770800703* L_753 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_754 = V_6;
		int32_t L_755 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_754>>8)))));
		uint32_t L_756 = (L_753)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_755));
		UInt32U5BU5D_t2770800703* L_757 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_758 = V_7;
		int32_t L_759 = (((int32_t)((uint8_t)L_758)));
		uint32_t L_760 = (L_757)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_759));
		UInt32U5BU5D_t2770800703* L_761 = ___ekey2;
		int32_t L_762 = ((int32_t)40);
		uint32_t L_763 = (L_761)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_762));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_748^(int32_t)L_752))^(int32_t)L_756))^(int32_t)L_760))^(int32_t)L_763));
		UInt32U5BU5D_t2770800703* L_764 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_765 = V_5;
		uintptr_t L_766 = (((uintptr_t)((int32_t)((uint32_t)L_765>>((int32_t)24)))));
		uint32_t L_767 = (L_764)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_766));
		UInt32U5BU5D_t2770800703* L_768 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_769 = V_6;
		int32_t L_770 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_769>>((int32_t)16))))));
		uint32_t L_771 = (L_768)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_770));
		UInt32U5BU5D_t2770800703* L_772 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_773 = V_7;
		int32_t L_774 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_773>>8)))));
		uint32_t L_775 = (L_772)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_774));
		UInt32U5BU5D_t2770800703* L_776 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_777 = V_4;
		int32_t L_778 = (((int32_t)((uint8_t)L_777)));
		uint32_t L_779 = (L_776)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_778));
		UInt32U5BU5D_t2770800703* L_780 = ___ekey2;
		int32_t L_781 = ((int32_t)41);
		uint32_t L_782 = (L_780)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_781));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_767^(int32_t)L_771))^(int32_t)L_775))^(int32_t)L_779))^(int32_t)L_782));
		UInt32U5BU5D_t2770800703* L_783 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_784 = V_6;
		uintptr_t L_785 = (((uintptr_t)((int32_t)((uint32_t)L_784>>((int32_t)24)))));
		uint32_t L_786 = (L_783)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_785));
		UInt32U5BU5D_t2770800703* L_787 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_788 = V_7;
		int32_t L_789 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_788>>((int32_t)16))))));
		uint32_t L_790 = (L_787)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_789));
		UInt32U5BU5D_t2770800703* L_791 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_792 = V_4;
		int32_t L_793 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_792>>8)))));
		uint32_t L_794 = (L_791)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_793));
		UInt32U5BU5D_t2770800703* L_795 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_796 = V_5;
		int32_t L_797 = (((int32_t)((uint8_t)L_796)));
		uint32_t L_798 = (L_795)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_797));
		UInt32U5BU5D_t2770800703* L_799 = ___ekey2;
		int32_t L_800 = ((int32_t)42);
		uint32_t L_801 = (L_799)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_800));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_786^(int32_t)L_790))^(int32_t)L_794))^(int32_t)L_798))^(int32_t)L_801));
		UInt32U5BU5D_t2770800703* L_802 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_803 = V_7;
		uintptr_t L_804 = (((uintptr_t)((int32_t)((uint32_t)L_803>>((int32_t)24)))));
		uint32_t L_805 = (L_802)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_804));
		UInt32U5BU5D_t2770800703* L_806 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_807 = V_4;
		int32_t L_808 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_807>>((int32_t)16))))));
		uint32_t L_809 = (L_806)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_808));
		UInt32U5BU5D_t2770800703* L_810 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_811 = V_5;
		int32_t L_812 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_811>>8)))));
		uint32_t L_813 = (L_810)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_812));
		UInt32U5BU5D_t2770800703* L_814 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_815 = V_6;
		int32_t L_816 = (((int32_t)((uint8_t)L_815)));
		uint32_t L_817 = (L_814)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_816));
		UInt32U5BU5D_t2770800703* L_818 = ___ekey2;
		int32_t L_819 = ((int32_t)43);
		uint32_t L_820 = (L_818)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_819));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_805^(int32_t)L_809))^(int32_t)L_813))^(int32_t)L_817))^(int32_t)L_820));
		UInt32U5BU5D_t2770800703* L_821 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_822 = V_0;
		uintptr_t L_823 = (((uintptr_t)((int32_t)((uint32_t)L_822>>((int32_t)24)))));
		uint32_t L_824 = (L_821)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_823));
		UInt32U5BU5D_t2770800703* L_825 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_826 = V_1;
		int32_t L_827 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_826>>((int32_t)16))))));
		uint32_t L_828 = (L_825)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_827));
		UInt32U5BU5D_t2770800703* L_829 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_830 = V_2;
		int32_t L_831 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_830>>8)))));
		uint32_t L_832 = (L_829)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_831));
		UInt32U5BU5D_t2770800703* L_833 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_834 = V_3;
		int32_t L_835 = (((int32_t)((uint8_t)L_834)));
		uint32_t L_836 = (L_833)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_835));
		UInt32U5BU5D_t2770800703* L_837 = ___ekey2;
		int32_t L_838 = ((int32_t)44);
		uint32_t L_839 = (L_837)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_838));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_824^(int32_t)L_828))^(int32_t)L_832))^(int32_t)L_836))^(int32_t)L_839));
		UInt32U5BU5D_t2770800703* L_840 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_841 = V_1;
		uintptr_t L_842 = (((uintptr_t)((int32_t)((uint32_t)L_841>>((int32_t)24)))));
		uint32_t L_843 = (L_840)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_842));
		UInt32U5BU5D_t2770800703* L_844 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_845 = V_2;
		int32_t L_846 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_845>>((int32_t)16))))));
		uint32_t L_847 = (L_844)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_846));
		UInt32U5BU5D_t2770800703* L_848 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_849 = V_3;
		int32_t L_850 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_849>>8)))));
		uint32_t L_851 = (L_848)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_850));
		UInt32U5BU5D_t2770800703* L_852 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_853 = V_0;
		int32_t L_854 = (((int32_t)((uint8_t)L_853)));
		uint32_t L_855 = (L_852)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_854));
		UInt32U5BU5D_t2770800703* L_856 = ___ekey2;
		int32_t L_857 = ((int32_t)45);
		uint32_t L_858 = (L_856)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_857));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_843^(int32_t)L_847))^(int32_t)L_851))^(int32_t)L_855))^(int32_t)L_858));
		UInt32U5BU5D_t2770800703* L_859 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_860 = V_2;
		uintptr_t L_861 = (((uintptr_t)((int32_t)((uint32_t)L_860>>((int32_t)24)))));
		uint32_t L_862 = (L_859)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_861));
		UInt32U5BU5D_t2770800703* L_863 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_864 = V_3;
		int32_t L_865 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_864>>((int32_t)16))))));
		uint32_t L_866 = (L_863)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_865));
		UInt32U5BU5D_t2770800703* L_867 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_868 = V_0;
		int32_t L_869 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_868>>8)))));
		uint32_t L_870 = (L_867)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_869));
		UInt32U5BU5D_t2770800703* L_871 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_872 = V_1;
		int32_t L_873 = (((int32_t)((uint8_t)L_872)));
		uint32_t L_874 = (L_871)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_873));
		UInt32U5BU5D_t2770800703* L_875 = ___ekey2;
		int32_t L_876 = ((int32_t)46);
		uint32_t L_877 = (L_875)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_876));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_862^(int32_t)L_866))^(int32_t)L_870))^(int32_t)L_874))^(int32_t)L_877));
		UInt32U5BU5D_t2770800703* L_878 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_879 = V_3;
		uintptr_t L_880 = (((uintptr_t)((int32_t)((uint32_t)L_879>>((int32_t)24)))));
		uint32_t L_881 = (L_878)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_880));
		UInt32U5BU5D_t2770800703* L_882 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_883 = V_0;
		int32_t L_884 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_883>>((int32_t)16))))));
		uint32_t L_885 = (L_882)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_884));
		UInt32U5BU5D_t2770800703* L_886 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_887 = V_1;
		int32_t L_888 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_887>>8)))));
		uint32_t L_889 = (L_886)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_888));
		UInt32U5BU5D_t2770800703* L_890 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_891 = V_2;
		int32_t L_892 = (((int32_t)((uint8_t)L_891)));
		uint32_t L_893 = (L_890)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_892));
		UInt32U5BU5D_t2770800703* L_894 = ___ekey2;
		int32_t L_895 = ((int32_t)47);
		uint32_t L_896 = (L_894)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_895));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_881^(int32_t)L_885))^(int32_t)L_889))^(int32_t)L_893))^(int32_t)L_896));
		V_8 = ((int32_t)48);
		int32_t L_897 = __this->get_Nr_14();
		if ((((int32_t)L_897) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0b08;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_898 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_899 = V_4;
		uintptr_t L_900 = (((uintptr_t)((int32_t)((uint32_t)L_899>>((int32_t)24)))));
		uint32_t L_901 = (L_898)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_900));
		UInt32U5BU5D_t2770800703* L_902 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_903 = V_5;
		int32_t L_904 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_903>>((int32_t)16))))));
		uint32_t L_905 = (L_902)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_904));
		UInt32U5BU5D_t2770800703* L_906 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_907 = V_6;
		int32_t L_908 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_907>>8)))));
		uint32_t L_909 = (L_906)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_908));
		UInt32U5BU5D_t2770800703* L_910 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_911 = V_7;
		int32_t L_912 = (((int32_t)((uint8_t)L_911)));
		uint32_t L_913 = (L_910)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_912));
		UInt32U5BU5D_t2770800703* L_914 = ___ekey2;
		int32_t L_915 = ((int32_t)48);
		uint32_t L_916 = (L_914)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_915));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_901^(int32_t)L_905))^(int32_t)L_909))^(int32_t)L_913))^(int32_t)L_916));
		UInt32U5BU5D_t2770800703* L_917 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_918 = V_5;
		uintptr_t L_919 = (((uintptr_t)((int32_t)((uint32_t)L_918>>((int32_t)24)))));
		uint32_t L_920 = (L_917)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_919));
		UInt32U5BU5D_t2770800703* L_921 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_922 = V_6;
		int32_t L_923 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_922>>((int32_t)16))))));
		uint32_t L_924 = (L_921)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_923));
		UInt32U5BU5D_t2770800703* L_925 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_926 = V_7;
		int32_t L_927 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_926>>8)))));
		uint32_t L_928 = (L_925)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_927));
		UInt32U5BU5D_t2770800703* L_929 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_930 = V_4;
		int32_t L_931 = (((int32_t)((uint8_t)L_930)));
		uint32_t L_932 = (L_929)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_931));
		UInt32U5BU5D_t2770800703* L_933 = ___ekey2;
		int32_t L_934 = ((int32_t)49);
		uint32_t L_935 = (L_933)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_934));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_920^(int32_t)L_924))^(int32_t)L_928))^(int32_t)L_932))^(int32_t)L_935));
		UInt32U5BU5D_t2770800703* L_936 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_937 = V_6;
		uintptr_t L_938 = (((uintptr_t)((int32_t)((uint32_t)L_937>>((int32_t)24)))));
		uint32_t L_939 = (L_936)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_938));
		UInt32U5BU5D_t2770800703* L_940 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_941 = V_7;
		int32_t L_942 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_941>>((int32_t)16))))));
		uint32_t L_943 = (L_940)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_942));
		UInt32U5BU5D_t2770800703* L_944 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_945 = V_4;
		int32_t L_946 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_945>>8)))));
		uint32_t L_947 = (L_944)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_946));
		UInt32U5BU5D_t2770800703* L_948 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_949 = V_5;
		int32_t L_950 = (((int32_t)((uint8_t)L_949)));
		uint32_t L_951 = (L_948)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_950));
		UInt32U5BU5D_t2770800703* L_952 = ___ekey2;
		int32_t L_953 = ((int32_t)50);
		uint32_t L_954 = (L_952)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_953));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_939^(int32_t)L_943))^(int32_t)L_947))^(int32_t)L_951))^(int32_t)L_954));
		UInt32U5BU5D_t2770800703* L_955 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_956 = V_7;
		uintptr_t L_957 = (((uintptr_t)((int32_t)((uint32_t)L_956>>((int32_t)24)))));
		uint32_t L_958 = (L_955)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_957));
		UInt32U5BU5D_t2770800703* L_959 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_960 = V_4;
		int32_t L_961 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_960>>((int32_t)16))))));
		uint32_t L_962 = (L_959)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_961));
		UInt32U5BU5D_t2770800703* L_963 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_964 = V_5;
		int32_t L_965 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_964>>8)))));
		uint32_t L_966 = (L_963)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_965));
		UInt32U5BU5D_t2770800703* L_967 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_968 = V_6;
		int32_t L_969 = (((int32_t)((uint8_t)L_968)));
		uint32_t L_970 = (L_967)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_969));
		UInt32U5BU5D_t2770800703* L_971 = ___ekey2;
		int32_t L_972 = ((int32_t)51);
		uint32_t L_973 = (L_971)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_972));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_958^(int32_t)L_962))^(int32_t)L_966))^(int32_t)L_970))^(int32_t)L_973));
		UInt32U5BU5D_t2770800703* L_974 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_975 = V_0;
		uintptr_t L_976 = (((uintptr_t)((int32_t)((uint32_t)L_975>>((int32_t)24)))));
		uint32_t L_977 = (L_974)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_976));
		UInt32U5BU5D_t2770800703* L_978 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_979 = V_1;
		int32_t L_980 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_979>>((int32_t)16))))));
		uint32_t L_981 = (L_978)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_980));
		UInt32U5BU5D_t2770800703* L_982 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_983 = V_2;
		int32_t L_984 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_983>>8)))));
		uint32_t L_985 = (L_982)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_984));
		UInt32U5BU5D_t2770800703* L_986 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_987 = V_3;
		int32_t L_988 = (((int32_t)((uint8_t)L_987)));
		uint32_t L_989 = (L_986)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_988));
		UInt32U5BU5D_t2770800703* L_990 = ___ekey2;
		int32_t L_991 = ((int32_t)52);
		uint32_t L_992 = (L_990)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_991));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_977^(int32_t)L_981))^(int32_t)L_985))^(int32_t)L_989))^(int32_t)L_992));
		UInt32U5BU5D_t2770800703* L_993 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_994 = V_1;
		uintptr_t L_995 = (((uintptr_t)((int32_t)((uint32_t)L_994>>((int32_t)24)))));
		uint32_t L_996 = (L_993)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_995));
		UInt32U5BU5D_t2770800703* L_997 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_998 = V_2;
		int32_t L_999 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_998>>((int32_t)16))))));
		uint32_t L_1000 = (L_997)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_999));
		UInt32U5BU5D_t2770800703* L_1001 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_1002 = V_3;
		int32_t L_1003 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1002>>8)))));
		uint32_t L_1004 = (L_1001)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1003));
		UInt32U5BU5D_t2770800703* L_1005 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_1006 = V_0;
		int32_t L_1007 = (((int32_t)((uint8_t)L_1006)));
		uint32_t L_1008 = (L_1005)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1007));
		UInt32U5BU5D_t2770800703* L_1009 = ___ekey2;
		int32_t L_1010 = ((int32_t)53);
		uint32_t L_1011 = (L_1009)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1010));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_996^(int32_t)L_1000))^(int32_t)L_1004))^(int32_t)L_1008))^(int32_t)L_1011));
		UInt32U5BU5D_t2770800703* L_1012 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_1013 = V_2;
		uintptr_t L_1014 = (((uintptr_t)((int32_t)((uint32_t)L_1013>>((int32_t)24)))));
		uint32_t L_1015 = (L_1012)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1014));
		UInt32U5BU5D_t2770800703* L_1016 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_1017 = V_3;
		int32_t L_1018 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1017>>((int32_t)16))))));
		uint32_t L_1019 = (L_1016)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1018));
		UInt32U5BU5D_t2770800703* L_1020 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_1021 = V_0;
		int32_t L_1022 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1021>>8)))));
		uint32_t L_1023 = (L_1020)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1022));
		UInt32U5BU5D_t2770800703* L_1024 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_1025 = V_1;
		int32_t L_1026 = (((int32_t)((uint8_t)L_1025)));
		uint32_t L_1027 = (L_1024)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1026));
		UInt32U5BU5D_t2770800703* L_1028 = ___ekey2;
		int32_t L_1029 = ((int32_t)54);
		uint32_t L_1030 = (L_1028)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1029));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1015^(int32_t)L_1019))^(int32_t)L_1023))^(int32_t)L_1027))^(int32_t)L_1030));
		UInt32U5BU5D_t2770800703* L_1031 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_1032 = V_3;
		uintptr_t L_1033 = (((uintptr_t)((int32_t)((uint32_t)L_1032>>((int32_t)24)))));
		uint32_t L_1034 = (L_1031)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1033));
		UInt32U5BU5D_t2770800703* L_1035 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_1036 = V_0;
		int32_t L_1037 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1036>>((int32_t)16))))));
		uint32_t L_1038 = (L_1035)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1037));
		UInt32U5BU5D_t2770800703* L_1039 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_1040 = V_1;
		int32_t L_1041 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1040>>8)))));
		uint32_t L_1042 = (L_1039)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1041));
		UInt32U5BU5D_t2770800703* L_1043 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_1044 = V_2;
		int32_t L_1045 = (((int32_t)((uint8_t)L_1044)));
		uint32_t L_1046 = (L_1043)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1045));
		UInt32U5BU5D_t2770800703* L_1047 = ___ekey2;
		int32_t L_1048 = ((int32_t)55);
		uint32_t L_1049 = (L_1047)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1048));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1034^(int32_t)L_1038))^(int32_t)L_1042))^(int32_t)L_1046))^(int32_t)L_1049));
		V_8 = ((int32_t)56);
	}

IL_0b08:
	{
		ByteU5BU5D_t4116647657* L_1050 = ___outdata1;
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_1051 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1052 = V_4;
		uintptr_t L_1053 = (((uintptr_t)((int32_t)((uint32_t)L_1052>>((int32_t)24)))));
		uint8_t L_1054 = (L_1051)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1053));
		UInt32U5BU5D_t2770800703* L_1055 = ___ekey2;
		int32_t L_1056 = V_8;
		int32_t L_1057 = L_1056;
		uint32_t L_1058 = (L_1055)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1057));
		(L_1050)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1054^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1058>>((int32_t)24))))))))))));
		ByteU5BU5D_t4116647657* L_1059 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1060 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1061 = V_5;
		int32_t L_1062 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1061>>((int32_t)16))))));
		uint8_t L_1063 = (L_1060)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1062));
		UInt32U5BU5D_t2770800703* L_1064 = ___ekey2;
		int32_t L_1065 = V_8;
		int32_t L_1066 = L_1065;
		uint32_t L_1067 = (L_1064)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1066));
		(L_1059)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1063^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1067>>((int32_t)16))))))))))));
		ByteU5BU5D_t4116647657* L_1068 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1069 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1070 = V_6;
		int32_t L_1071 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1070>>8)))));
		uint8_t L_1072 = (L_1069)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1071));
		UInt32U5BU5D_t2770800703* L_1073 = ___ekey2;
		int32_t L_1074 = V_8;
		int32_t L_1075 = L_1074;
		uint32_t L_1076 = (L_1073)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1075));
		(L_1068)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1072^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1076>>8)))))))))));
		ByteU5BU5D_t4116647657* L_1077 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1078 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1079 = V_7;
		int32_t L_1080 = (((int32_t)((uint8_t)L_1079)));
		uint8_t L_1081 = (L_1078)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1080));
		UInt32U5BU5D_t2770800703* L_1082 = ___ekey2;
		int32_t L_1083 = V_8;
		int32_t L_1084 = L_1083;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1084, (int32_t)1));
		int32_t L_1085 = L_1084;
		uint32_t L_1086 = (L_1082)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1085));
		(L_1077)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1081^(int32_t)(((int32_t)((uint8_t)L_1086)))))))));
		ByteU5BU5D_t4116647657* L_1087 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1088 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1089 = V_5;
		uintptr_t L_1090 = (((uintptr_t)((int32_t)((uint32_t)L_1089>>((int32_t)24)))));
		uint8_t L_1091 = (L_1088)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1090));
		UInt32U5BU5D_t2770800703* L_1092 = ___ekey2;
		int32_t L_1093 = V_8;
		int32_t L_1094 = L_1093;
		uint32_t L_1095 = (L_1092)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1094));
		(L_1087)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1091^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1095>>((int32_t)24))))))))))));
		ByteU5BU5D_t4116647657* L_1096 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1097 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1098 = V_6;
		int32_t L_1099 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1098>>((int32_t)16))))));
		uint8_t L_1100 = (L_1097)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1099));
		UInt32U5BU5D_t2770800703* L_1101 = ___ekey2;
		int32_t L_1102 = V_8;
		int32_t L_1103 = L_1102;
		uint32_t L_1104 = (L_1101)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1103));
		(L_1096)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1100^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1104>>((int32_t)16))))))))))));
		ByteU5BU5D_t4116647657* L_1105 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1106 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1107 = V_7;
		int32_t L_1108 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1107>>8)))));
		uint8_t L_1109 = (L_1106)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1108));
		UInt32U5BU5D_t2770800703* L_1110 = ___ekey2;
		int32_t L_1111 = V_8;
		int32_t L_1112 = L_1111;
		uint32_t L_1113 = (L_1110)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1112));
		(L_1105)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1109^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1113>>8)))))))))));
		ByteU5BU5D_t4116647657* L_1114 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1115 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1116 = V_4;
		int32_t L_1117 = (((int32_t)((uint8_t)L_1116)));
		uint8_t L_1118 = (L_1115)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1117));
		UInt32U5BU5D_t2770800703* L_1119 = ___ekey2;
		int32_t L_1120 = V_8;
		int32_t L_1121 = L_1120;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1121, (int32_t)1));
		int32_t L_1122 = L_1121;
		uint32_t L_1123 = (L_1119)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1122));
		(L_1114)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1118^(int32_t)(((int32_t)((uint8_t)L_1123)))))))));
		ByteU5BU5D_t4116647657* L_1124 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1125 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1126 = V_6;
		uintptr_t L_1127 = (((uintptr_t)((int32_t)((uint32_t)L_1126>>((int32_t)24)))));
		uint8_t L_1128 = (L_1125)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1127));
		UInt32U5BU5D_t2770800703* L_1129 = ___ekey2;
		int32_t L_1130 = V_8;
		int32_t L_1131 = L_1130;
		uint32_t L_1132 = (L_1129)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1131));
		(L_1124)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1128^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1132>>((int32_t)24))))))))))));
		ByteU5BU5D_t4116647657* L_1133 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1134 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1135 = V_7;
		int32_t L_1136 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1135>>((int32_t)16))))));
		uint8_t L_1137 = (L_1134)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1136));
		UInt32U5BU5D_t2770800703* L_1138 = ___ekey2;
		int32_t L_1139 = V_8;
		int32_t L_1140 = L_1139;
		uint32_t L_1141 = (L_1138)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1140));
		(L_1133)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1137^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1141>>((int32_t)16))))))))))));
		ByteU5BU5D_t4116647657* L_1142 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1143 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1144 = V_4;
		int32_t L_1145 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1144>>8)))));
		uint8_t L_1146 = (L_1143)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1145));
		UInt32U5BU5D_t2770800703* L_1147 = ___ekey2;
		int32_t L_1148 = V_8;
		int32_t L_1149 = L_1148;
		uint32_t L_1150 = (L_1147)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1149));
		(L_1142)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1146^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1150>>8)))))))))));
		ByteU5BU5D_t4116647657* L_1151 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1152 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1153 = V_5;
		int32_t L_1154 = (((int32_t)((uint8_t)L_1153)));
		uint8_t L_1155 = (L_1152)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1154));
		UInt32U5BU5D_t2770800703* L_1156 = ___ekey2;
		int32_t L_1157 = V_8;
		int32_t L_1158 = L_1157;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1158, (int32_t)1));
		int32_t L_1159 = L_1158;
		uint32_t L_1160 = (L_1156)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1159));
		(L_1151)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1155^(int32_t)(((int32_t)((uint8_t)L_1160)))))))));
		ByteU5BU5D_t4116647657* L_1161 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1162 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1163 = V_7;
		uintptr_t L_1164 = (((uintptr_t)((int32_t)((uint32_t)L_1163>>((int32_t)24)))));
		uint8_t L_1165 = (L_1162)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1164));
		UInt32U5BU5D_t2770800703* L_1166 = ___ekey2;
		int32_t L_1167 = V_8;
		int32_t L_1168 = L_1167;
		uint32_t L_1169 = (L_1166)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1168));
		(L_1161)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1165^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1169>>((int32_t)24))))))))))));
		ByteU5BU5D_t4116647657* L_1170 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1171 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1172 = V_4;
		int32_t L_1173 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1172>>((int32_t)16))))));
		uint8_t L_1174 = (L_1171)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1173));
		UInt32U5BU5D_t2770800703* L_1175 = ___ekey2;
		int32_t L_1176 = V_8;
		int32_t L_1177 = L_1176;
		uint32_t L_1178 = (L_1175)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1177));
		(L_1170)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1174^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1178>>((int32_t)16))))))))))));
		ByteU5BU5D_t4116647657* L_1179 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1180 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1181 = V_5;
		int32_t L_1182 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1181>>8)))));
		uint8_t L_1183 = (L_1180)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1182));
		UInt32U5BU5D_t2770800703* L_1184 = ___ekey2;
		int32_t L_1185 = V_8;
		int32_t L_1186 = L_1185;
		uint32_t L_1187 = (L_1184)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1186));
		(L_1179)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1183^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1187>>8)))))))))));
		ByteU5BU5D_t4116647657* L_1188 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1189 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1190 = V_6;
		int32_t L_1191 = (((int32_t)((uint8_t)L_1190)));
		uint8_t L_1192 = (L_1189)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1191));
		UInt32U5BU5D_t2770800703* L_1193 = ___ekey2;
		int32_t L_1194 = V_8;
		int32_t L_1195 = L_1194;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1195, (int32_t)1));
		int32_t L_1196 = L_1195;
		uint32_t L_1197 = (L_1193)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1196));
		(L_1188)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1192^(int32_t)(((int32_t)((uint8_t)L_1197)))))))));
		return;
	}
}
// System.Void System.Security.Cryptography.AesTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void AesTransform_Decrypt128_m3018534522 (AesTransform_t2957123611 * __this, ByteU5BU5D_t4116647657* ___indata0, ByteU5BU5D_t4116647657* ___outdata1, UInt32U5BU5D_t2770800703* ___ekey2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AesTransform_Decrypt128_m3018534522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		V_8 = ((int32_t)40);
		ByteU5BU5D_t4116647657* L_0 = ___indata0;
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_t4116647657* L_3 = ___indata0;
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_t4116647657* L_6 = ___indata0;
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_t4116647657* L_9 = ___indata0;
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		UInt32U5BU5D_t2770800703* L_12 = ___ekey2;
		int32_t L_13 = 0;
		uint32_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_8<<(int32_t)8))))|(int32_t)L_11))^(int32_t)L_14));
		ByteU5BU5D_t4116647657* L_15 = ___indata0;
		int32_t L_16 = 4;
		uint8_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_t4116647657* L_18 = ___indata0;
		int32_t L_19 = 5;
		uint8_t L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_t4116647657* L_21 = ___indata0;
		int32_t L_22 = 6;
		uint8_t L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_t4116647657* L_24 = ___indata0;
		int32_t L_25 = 7;
		uint8_t L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		UInt32U5BU5D_t2770800703* L_27 = ___ekey2;
		int32_t L_28 = 1;
		uint32_t L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_20<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_23<<(int32_t)8))))|(int32_t)L_26))^(int32_t)L_29));
		ByteU5BU5D_t4116647657* L_30 = ___indata0;
		int32_t L_31 = 8;
		uint8_t L_32 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		ByteU5BU5D_t4116647657* L_33 = ___indata0;
		int32_t L_34 = ((int32_t)9);
		uint8_t L_35 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		ByteU5BU5D_t4116647657* L_36 = ___indata0;
		int32_t L_37 = ((int32_t)10);
		uint8_t L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		ByteU5BU5D_t4116647657* L_39 = ___indata0;
		int32_t L_40 = ((int32_t)11);
		uint8_t L_41 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		UInt32U5BU5D_t2770800703* L_42 = ___ekey2;
		int32_t L_43 = 2;
		uint32_t L_44 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_32<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_35<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_38<<(int32_t)8))))|(int32_t)L_41))^(int32_t)L_44));
		ByteU5BU5D_t4116647657* L_45 = ___indata0;
		int32_t L_46 = ((int32_t)12);
		uint8_t L_47 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		ByteU5BU5D_t4116647657* L_48 = ___indata0;
		int32_t L_49 = ((int32_t)13);
		uint8_t L_50 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		ByteU5BU5D_t4116647657* L_51 = ___indata0;
		int32_t L_52 = ((int32_t)14);
		uint8_t L_53 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		ByteU5BU5D_t4116647657* L_54 = ___indata0;
		int32_t L_55 = ((int32_t)15);
		uint8_t L_56 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		UInt32U5BU5D_t2770800703* L_57 = ___ekey2;
		int32_t L_58 = 3;
		uint32_t L_59 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_47<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_50<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_53<<(int32_t)8))))|(int32_t)L_56))^(int32_t)L_59));
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_60 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_61 = V_0;
		uintptr_t L_62 = (((uintptr_t)((int32_t)((uint32_t)L_61>>((int32_t)24)))));
		uint32_t L_63 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t2770800703* L_64 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_65 = V_3;
		int32_t L_66 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_65>>((int32_t)16))))));
		uint32_t L_67 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		UInt32U5BU5D_t2770800703* L_68 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_69 = V_2;
		int32_t L_70 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_69>>8)))));
		uint32_t L_71 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t2770800703* L_72 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_73 = V_1;
		int32_t L_74 = (((int32_t)((uint8_t)L_73)));
		uint32_t L_75 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
		UInt32U5BU5D_t2770800703* L_76 = ___ekey2;
		int32_t L_77 = 4;
		uint32_t L_78 = (L_76)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_63^(int32_t)L_67))^(int32_t)L_71))^(int32_t)L_75))^(int32_t)L_78));
		UInt32U5BU5D_t2770800703* L_79 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_80 = V_1;
		uintptr_t L_81 = (((uintptr_t)((int32_t)((uint32_t)L_80>>((int32_t)24)))));
		uint32_t L_82 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		UInt32U5BU5D_t2770800703* L_83 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_84 = V_0;
		int32_t L_85 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_84>>((int32_t)16))))));
		uint32_t L_86 = (L_83)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85));
		UInt32U5BU5D_t2770800703* L_87 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_88 = V_3;
		int32_t L_89 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_88>>8)))));
		uint32_t L_90 = (L_87)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_89));
		UInt32U5BU5D_t2770800703* L_91 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_92 = V_2;
		int32_t L_93 = (((int32_t)((uint8_t)L_92)));
		uint32_t L_94 = (L_91)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_93));
		UInt32U5BU5D_t2770800703* L_95 = ___ekey2;
		int32_t L_96 = 5;
		uint32_t L_97 = (L_95)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_96));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_82^(int32_t)L_86))^(int32_t)L_90))^(int32_t)L_94))^(int32_t)L_97));
		UInt32U5BU5D_t2770800703* L_98 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_99 = V_2;
		uintptr_t L_100 = (((uintptr_t)((int32_t)((uint32_t)L_99>>((int32_t)24)))));
		uint32_t L_101 = (L_98)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_100));
		UInt32U5BU5D_t2770800703* L_102 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_103 = V_1;
		int32_t L_104 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_103>>((int32_t)16))))));
		uint32_t L_105 = (L_102)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_104));
		UInt32U5BU5D_t2770800703* L_106 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_107 = V_0;
		int32_t L_108 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_107>>8)))));
		uint32_t L_109 = (L_106)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_108));
		UInt32U5BU5D_t2770800703* L_110 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_111 = V_3;
		int32_t L_112 = (((int32_t)((uint8_t)L_111)));
		uint32_t L_113 = (L_110)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_112));
		UInt32U5BU5D_t2770800703* L_114 = ___ekey2;
		int32_t L_115 = 6;
		uint32_t L_116 = (L_114)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_115));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_101^(int32_t)L_105))^(int32_t)L_109))^(int32_t)L_113))^(int32_t)L_116));
		UInt32U5BU5D_t2770800703* L_117 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_118 = V_3;
		uintptr_t L_119 = (((uintptr_t)((int32_t)((uint32_t)L_118>>((int32_t)24)))));
		uint32_t L_120 = (L_117)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_119));
		UInt32U5BU5D_t2770800703* L_121 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_122 = V_2;
		int32_t L_123 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_122>>((int32_t)16))))));
		uint32_t L_124 = (L_121)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_123));
		UInt32U5BU5D_t2770800703* L_125 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_126 = V_1;
		int32_t L_127 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_126>>8)))));
		uint32_t L_128 = (L_125)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_127));
		UInt32U5BU5D_t2770800703* L_129 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_130 = V_0;
		int32_t L_131 = (((int32_t)((uint8_t)L_130)));
		uint32_t L_132 = (L_129)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_131));
		UInt32U5BU5D_t2770800703* L_133 = ___ekey2;
		int32_t L_134 = 7;
		uint32_t L_135 = (L_133)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_134));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_120^(int32_t)L_124))^(int32_t)L_128))^(int32_t)L_132))^(int32_t)L_135));
		UInt32U5BU5D_t2770800703* L_136 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_137 = V_4;
		uintptr_t L_138 = (((uintptr_t)((int32_t)((uint32_t)L_137>>((int32_t)24)))));
		uint32_t L_139 = (L_136)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_138));
		UInt32U5BU5D_t2770800703* L_140 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_141 = V_7;
		int32_t L_142 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_141>>((int32_t)16))))));
		uint32_t L_143 = (L_140)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_142));
		UInt32U5BU5D_t2770800703* L_144 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_145 = V_6;
		int32_t L_146 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_145>>8)))));
		uint32_t L_147 = (L_144)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_146));
		UInt32U5BU5D_t2770800703* L_148 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_149 = V_5;
		int32_t L_150 = (((int32_t)((uint8_t)L_149)));
		uint32_t L_151 = (L_148)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_150));
		UInt32U5BU5D_t2770800703* L_152 = ___ekey2;
		int32_t L_153 = 8;
		uint32_t L_154 = (L_152)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_153));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_139^(int32_t)L_143))^(int32_t)L_147))^(int32_t)L_151))^(int32_t)L_154));
		UInt32U5BU5D_t2770800703* L_155 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_156 = V_5;
		uintptr_t L_157 = (((uintptr_t)((int32_t)((uint32_t)L_156>>((int32_t)24)))));
		uint32_t L_158 = (L_155)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_157));
		UInt32U5BU5D_t2770800703* L_159 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_160 = V_4;
		int32_t L_161 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_160>>((int32_t)16))))));
		uint32_t L_162 = (L_159)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_161));
		UInt32U5BU5D_t2770800703* L_163 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_164 = V_7;
		int32_t L_165 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_164>>8)))));
		uint32_t L_166 = (L_163)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_165));
		UInt32U5BU5D_t2770800703* L_167 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_168 = V_6;
		int32_t L_169 = (((int32_t)((uint8_t)L_168)));
		uint32_t L_170 = (L_167)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_169));
		UInt32U5BU5D_t2770800703* L_171 = ___ekey2;
		int32_t L_172 = ((int32_t)9);
		uint32_t L_173 = (L_171)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_172));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_158^(int32_t)L_162))^(int32_t)L_166))^(int32_t)L_170))^(int32_t)L_173));
		UInt32U5BU5D_t2770800703* L_174 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_175 = V_6;
		uintptr_t L_176 = (((uintptr_t)((int32_t)((uint32_t)L_175>>((int32_t)24)))));
		uint32_t L_177 = (L_174)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_176));
		UInt32U5BU5D_t2770800703* L_178 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_179 = V_5;
		int32_t L_180 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_179>>((int32_t)16))))));
		uint32_t L_181 = (L_178)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_180));
		UInt32U5BU5D_t2770800703* L_182 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_183 = V_4;
		int32_t L_184 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_183>>8)))));
		uint32_t L_185 = (L_182)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_184));
		UInt32U5BU5D_t2770800703* L_186 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_187 = V_7;
		int32_t L_188 = (((int32_t)((uint8_t)L_187)));
		uint32_t L_189 = (L_186)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_188));
		UInt32U5BU5D_t2770800703* L_190 = ___ekey2;
		int32_t L_191 = ((int32_t)10);
		uint32_t L_192 = (L_190)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_191));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_177^(int32_t)L_181))^(int32_t)L_185))^(int32_t)L_189))^(int32_t)L_192));
		UInt32U5BU5D_t2770800703* L_193 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_194 = V_7;
		uintptr_t L_195 = (((uintptr_t)((int32_t)((uint32_t)L_194>>((int32_t)24)))));
		uint32_t L_196 = (L_193)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_195));
		UInt32U5BU5D_t2770800703* L_197 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_198 = V_6;
		int32_t L_199 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_198>>((int32_t)16))))));
		uint32_t L_200 = (L_197)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_199));
		UInt32U5BU5D_t2770800703* L_201 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_202 = V_5;
		int32_t L_203 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_202>>8)))));
		uint32_t L_204 = (L_201)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_203));
		UInt32U5BU5D_t2770800703* L_205 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_206 = V_4;
		int32_t L_207 = (((int32_t)((uint8_t)L_206)));
		uint32_t L_208 = (L_205)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_207));
		UInt32U5BU5D_t2770800703* L_209 = ___ekey2;
		int32_t L_210 = ((int32_t)11);
		uint32_t L_211 = (L_209)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_210));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_196^(int32_t)L_200))^(int32_t)L_204))^(int32_t)L_208))^(int32_t)L_211));
		UInt32U5BU5D_t2770800703* L_212 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_213 = V_0;
		uintptr_t L_214 = (((uintptr_t)((int32_t)((uint32_t)L_213>>((int32_t)24)))));
		uint32_t L_215 = (L_212)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_214));
		UInt32U5BU5D_t2770800703* L_216 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_217 = V_3;
		int32_t L_218 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_217>>((int32_t)16))))));
		uint32_t L_219 = (L_216)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_218));
		UInt32U5BU5D_t2770800703* L_220 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_221 = V_2;
		int32_t L_222 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_221>>8)))));
		uint32_t L_223 = (L_220)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_222));
		UInt32U5BU5D_t2770800703* L_224 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_225 = V_1;
		int32_t L_226 = (((int32_t)((uint8_t)L_225)));
		uint32_t L_227 = (L_224)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_226));
		UInt32U5BU5D_t2770800703* L_228 = ___ekey2;
		int32_t L_229 = ((int32_t)12);
		uint32_t L_230 = (L_228)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_229));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_215^(int32_t)L_219))^(int32_t)L_223))^(int32_t)L_227))^(int32_t)L_230));
		UInt32U5BU5D_t2770800703* L_231 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_232 = V_1;
		uintptr_t L_233 = (((uintptr_t)((int32_t)((uint32_t)L_232>>((int32_t)24)))));
		uint32_t L_234 = (L_231)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_233));
		UInt32U5BU5D_t2770800703* L_235 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_236 = V_0;
		int32_t L_237 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_236>>((int32_t)16))))));
		uint32_t L_238 = (L_235)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_237));
		UInt32U5BU5D_t2770800703* L_239 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_240 = V_3;
		int32_t L_241 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_240>>8)))));
		uint32_t L_242 = (L_239)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_241));
		UInt32U5BU5D_t2770800703* L_243 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_244 = V_2;
		int32_t L_245 = (((int32_t)((uint8_t)L_244)));
		uint32_t L_246 = (L_243)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_245));
		UInt32U5BU5D_t2770800703* L_247 = ___ekey2;
		int32_t L_248 = ((int32_t)13);
		uint32_t L_249 = (L_247)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_248));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_234^(int32_t)L_238))^(int32_t)L_242))^(int32_t)L_246))^(int32_t)L_249));
		UInt32U5BU5D_t2770800703* L_250 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_251 = V_2;
		uintptr_t L_252 = (((uintptr_t)((int32_t)((uint32_t)L_251>>((int32_t)24)))));
		uint32_t L_253 = (L_250)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_252));
		UInt32U5BU5D_t2770800703* L_254 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_255 = V_1;
		int32_t L_256 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_255>>((int32_t)16))))));
		uint32_t L_257 = (L_254)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_256));
		UInt32U5BU5D_t2770800703* L_258 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_259 = V_0;
		int32_t L_260 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_259>>8)))));
		uint32_t L_261 = (L_258)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_260));
		UInt32U5BU5D_t2770800703* L_262 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_263 = V_3;
		int32_t L_264 = (((int32_t)((uint8_t)L_263)));
		uint32_t L_265 = (L_262)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_264));
		UInt32U5BU5D_t2770800703* L_266 = ___ekey2;
		int32_t L_267 = ((int32_t)14);
		uint32_t L_268 = (L_266)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_267));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_253^(int32_t)L_257))^(int32_t)L_261))^(int32_t)L_265))^(int32_t)L_268));
		UInt32U5BU5D_t2770800703* L_269 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_270 = V_3;
		uintptr_t L_271 = (((uintptr_t)((int32_t)((uint32_t)L_270>>((int32_t)24)))));
		uint32_t L_272 = (L_269)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_271));
		UInt32U5BU5D_t2770800703* L_273 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_274 = V_2;
		int32_t L_275 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_274>>((int32_t)16))))));
		uint32_t L_276 = (L_273)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_275));
		UInt32U5BU5D_t2770800703* L_277 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_278 = V_1;
		int32_t L_279 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_278>>8)))));
		uint32_t L_280 = (L_277)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_279));
		UInt32U5BU5D_t2770800703* L_281 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_282 = V_0;
		int32_t L_283 = (((int32_t)((uint8_t)L_282)));
		uint32_t L_284 = (L_281)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_283));
		UInt32U5BU5D_t2770800703* L_285 = ___ekey2;
		int32_t L_286 = ((int32_t)15);
		uint32_t L_287 = (L_285)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_286));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_272^(int32_t)L_276))^(int32_t)L_280))^(int32_t)L_284))^(int32_t)L_287));
		UInt32U5BU5D_t2770800703* L_288 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_289 = V_4;
		uintptr_t L_290 = (((uintptr_t)((int32_t)((uint32_t)L_289>>((int32_t)24)))));
		uint32_t L_291 = (L_288)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_290));
		UInt32U5BU5D_t2770800703* L_292 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_293 = V_7;
		int32_t L_294 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_293>>((int32_t)16))))));
		uint32_t L_295 = (L_292)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_294));
		UInt32U5BU5D_t2770800703* L_296 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_297 = V_6;
		int32_t L_298 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_297>>8)))));
		uint32_t L_299 = (L_296)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_298));
		UInt32U5BU5D_t2770800703* L_300 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_301 = V_5;
		int32_t L_302 = (((int32_t)((uint8_t)L_301)));
		uint32_t L_303 = (L_300)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_302));
		UInt32U5BU5D_t2770800703* L_304 = ___ekey2;
		int32_t L_305 = ((int32_t)16);
		uint32_t L_306 = (L_304)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_305));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_291^(int32_t)L_295))^(int32_t)L_299))^(int32_t)L_303))^(int32_t)L_306));
		UInt32U5BU5D_t2770800703* L_307 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_308 = V_5;
		uintptr_t L_309 = (((uintptr_t)((int32_t)((uint32_t)L_308>>((int32_t)24)))));
		uint32_t L_310 = (L_307)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_309));
		UInt32U5BU5D_t2770800703* L_311 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_312 = V_4;
		int32_t L_313 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_312>>((int32_t)16))))));
		uint32_t L_314 = (L_311)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_313));
		UInt32U5BU5D_t2770800703* L_315 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_316 = V_7;
		int32_t L_317 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_316>>8)))));
		uint32_t L_318 = (L_315)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_317));
		UInt32U5BU5D_t2770800703* L_319 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_320 = V_6;
		int32_t L_321 = (((int32_t)((uint8_t)L_320)));
		uint32_t L_322 = (L_319)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_321));
		UInt32U5BU5D_t2770800703* L_323 = ___ekey2;
		int32_t L_324 = ((int32_t)17);
		uint32_t L_325 = (L_323)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_324));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_310^(int32_t)L_314))^(int32_t)L_318))^(int32_t)L_322))^(int32_t)L_325));
		UInt32U5BU5D_t2770800703* L_326 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_327 = V_6;
		uintptr_t L_328 = (((uintptr_t)((int32_t)((uint32_t)L_327>>((int32_t)24)))));
		uint32_t L_329 = (L_326)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_328));
		UInt32U5BU5D_t2770800703* L_330 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_331 = V_5;
		int32_t L_332 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_331>>((int32_t)16))))));
		uint32_t L_333 = (L_330)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_332));
		UInt32U5BU5D_t2770800703* L_334 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_335 = V_4;
		int32_t L_336 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_335>>8)))));
		uint32_t L_337 = (L_334)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_336));
		UInt32U5BU5D_t2770800703* L_338 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_339 = V_7;
		int32_t L_340 = (((int32_t)((uint8_t)L_339)));
		uint32_t L_341 = (L_338)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_340));
		UInt32U5BU5D_t2770800703* L_342 = ___ekey2;
		int32_t L_343 = ((int32_t)18);
		uint32_t L_344 = (L_342)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_343));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_329^(int32_t)L_333))^(int32_t)L_337))^(int32_t)L_341))^(int32_t)L_344));
		UInt32U5BU5D_t2770800703* L_345 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_346 = V_7;
		uintptr_t L_347 = (((uintptr_t)((int32_t)((uint32_t)L_346>>((int32_t)24)))));
		uint32_t L_348 = (L_345)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_347));
		UInt32U5BU5D_t2770800703* L_349 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_350 = V_6;
		int32_t L_351 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_350>>((int32_t)16))))));
		uint32_t L_352 = (L_349)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_351));
		UInt32U5BU5D_t2770800703* L_353 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_354 = V_5;
		int32_t L_355 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_354>>8)))));
		uint32_t L_356 = (L_353)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_355));
		UInt32U5BU5D_t2770800703* L_357 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_358 = V_4;
		int32_t L_359 = (((int32_t)((uint8_t)L_358)));
		uint32_t L_360 = (L_357)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_359));
		UInt32U5BU5D_t2770800703* L_361 = ___ekey2;
		int32_t L_362 = ((int32_t)19);
		uint32_t L_363 = (L_361)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_362));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_348^(int32_t)L_352))^(int32_t)L_356))^(int32_t)L_360))^(int32_t)L_363));
		UInt32U5BU5D_t2770800703* L_364 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_365 = V_0;
		uintptr_t L_366 = (((uintptr_t)((int32_t)((uint32_t)L_365>>((int32_t)24)))));
		uint32_t L_367 = (L_364)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_366));
		UInt32U5BU5D_t2770800703* L_368 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_369 = V_3;
		int32_t L_370 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_369>>((int32_t)16))))));
		uint32_t L_371 = (L_368)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_370));
		UInt32U5BU5D_t2770800703* L_372 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_373 = V_2;
		int32_t L_374 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_373>>8)))));
		uint32_t L_375 = (L_372)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_374));
		UInt32U5BU5D_t2770800703* L_376 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_377 = V_1;
		int32_t L_378 = (((int32_t)((uint8_t)L_377)));
		uint32_t L_379 = (L_376)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_378));
		UInt32U5BU5D_t2770800703* L_380 = ___ekey2;
		int32_t L_381 = ((int32_t)20);
		uint32_t L_382 = (L_380)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_381));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_367^(int32_t)L_371))^(int32_t)L_375))^(int32_t)L_379))^(int32_t)L_382));
		UInt32U5BU5D_t2770800703* L_383 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_384 = V_1;
		uintptr_t L_385 = (((uintptr_t)((int32_t)((uint32_t)L_384>>((int32_t)24)))));
		uint32_t L_386 = (L_383)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_385));
		UInt32U5BU5D_t2770800703* L_387 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_388 = V_0;
		int32_t L_389 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_388>>((int32_t)16))))));
		uint32_t L_390 = (L_387)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_389));
		UInt32U5BU5D_t2770800703* L_391 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_392 = V_3;
		int32_t L_393 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_392>>8)))));
		uint32_t L_394 = (L_391)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_393));
		UInt32U5BU5D_t2770800703* L_395 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_396 = V_2;
		int32_t L_397 = (((int32_t)((uint8_t)L_396)));
		uint32_t L_398 = (L_395)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_397));
		UInt32U5BU5D_t2770800703* L_399 = ___ekey2;
		int32_t L_400 = ((int32_t)21);
		uint32_t L_401 = (L_399)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_400));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_386^(int32_t)L_390))^(int32_t)L_394))^(int32_t)L_398))^(int32_t)L_401));
		UInt32U5BU5D_t2770800703* L_402 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_403 = V_2;
		uintptr_t L_404 = (((uintptr_t)((int32_t)((uint32_t)L_403>>((int32_t)24)))));
		uint32_t L_405 = (L_402)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_404));
		UInt32U5BU5D_t2770800703* L_406 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_407 = V_1;
		int32_t L_408 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_407>>((int32_t)16))))));
		uint32_t L_409 = (L_406)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_408));
		UInt32U5BU5D_t2770800703* L_410 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_411 = V_0;
		int32_t L_412 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_411>>8)))));
		uint32_t L_413 = (L_410)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_412));
		UInt32U5BU5D_t2770800703* L_414 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_415 = V_3;
		int32_t L_416 = (((int32_t)((uint8_t)L_415)));
		uint32_t L_417 = (L_414)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_416));
		UInt32U5BU5D_t2770800703* L_418 = ___ekey2;
		int32_t L_419 = ((int32_t)22);
		uint32_t L_420 = (L_418)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_419));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_405^(int32_t)L_409))^(int32_t)L_413))^(int32_t)L_417))^(int32_t)L_420));
		UInt32U5BU5D_t2770800703* L_421 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_422 = V_3;
		uintptr_t L_423 = (((uintptr_t)((int32_t)((uint32_t)L_422>>((int32_t)24)))));
		uint32_t L_424 = (L_421)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_423));
		UInt32U5BU5D_t2770800703* L_425 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_426 = V_2;
		int32_t L_427 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_426>>((int32_t)16))))));
		uint32_t L_428 = (L_425)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_427));
		UInt32U5BU5D_t2770800703* L_429 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_430 = V_1;
		int32_t L_431 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_430>>8)))));
		uint32_t L_432 = (L_429)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_431));
		UInt32U5BU5D_t2770800703* L_433 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_434 = V_0;
		int32_t L_435 = (((int32_t)((uint8_t)L_434)));
		uint32_t L_436 = (L_433)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_435));
		UInt32U5BU5D_t2770800703* L_437 = ___ekey2;
		int32_t L_438 = ((int32_t)23);
		uint32_t L_439 = (L_437)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_438));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_424^(int32_t)L_428))^(int32_t)L_432))^(int32_t)L_436))^(int32_t)L_439));
		UInt32U5BU5D_t2770800703* L_440 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_441 = V_4;
		uintptr_t L_442 = (((uintptr_t)((int32_t)((uint32_t)L_441>>((int32_t)24)))));
		uint32_t L_443 = (L_440)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_442));
		UInt32U5BU5D_t2770800703* L_444 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_445 = V_7;
		int32_t L_446 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_445>>((int32_t)16))))));
		uint32_t L_447 = (L_444)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_446));
		UInt32U5BU5D_t2770800703* L_448 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_449 = V_6;
		int32_t L_450 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_449>>8)))));
		uint32_t L_451 = (L_448)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_450));
		UInt32U5BU5D_t2770800703* L_452 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_453 = V_5;
		int32_t L_454 = (((int32_t)((uint8_t)L_453)));
		uint32_t L_455 = (L_452)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_454));
		UInt32U5BU5D_t2770800703* L_456 = ___ekey2;
		int32_t L_457 = ((int32_t)24);
		uint32_t L_458 = (L_456)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_457));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_443^(int32_t)L_447))^(int32_t)L_451))^(int32_t)L_455))^(int32_t)L_458));
		UInt32U5BU5D_t2770800703* L_459 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_460 = V_5;
		uintptr_t L_461 = (((uintptr_t)((int32_t)((uint32_t)L_460>>((int32_t)24)))));
		uint32_t L_462 = (L_459)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_461));
		UInt32U5BU5D_t2770800703* L_463 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_464 = V_4;
		int32_t L_465 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_464>>((int32_t)16))))));
		uint32_t L_466 = (L_463)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_465));
		UInt32U5BU5D_t2770800703* L_467 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_468 = V_7;
		int32_t L_469 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_468>>8)))));
		uint32_t L_470 = (L_467)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_469));
		UInt32U5BU5D_t2770800703* L_471 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_472 = V_6;
		int32_t L_473 = (((int32_t)((uint8_t)L_472)));
		uint32_t L_474 = (L_471)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_473));
		UInt32U5BU5D_t2770800703* L_475 = ___ekey2;
		int32_t L_476 = ((int32_t)25);
		uint32_t L_477 = (L_475)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_476));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_462^(int32_t)L_466))^(int32_t)L_470))^(int32_t)L_474))^(int32_t)L_477));
		UInt32U5BU5D_t2770800703* L_478 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_479 = V_6;
		uintptr_t L_480 = (((uintptr_t)((int32_t)((uint32_t)L_479>>((int32_t)24)))));
		uint32_t L_481 = (L_478)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_480));
		UInt32U5BU5D_t2770800703* L_482 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_483 = V_5;
		int32_t L_484 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_483>>((int32_t)16))))));
		uint32_t L_485 = (L_482)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_484));
		UInt32U5BU5D_t2770800703* L_486 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_487 = V_4;
		int32_t L_488 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_487>>8)))));
		uint32_t L_489 = (L_486)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_488));
		UInt32U5BU5D_t2770800703* L_490 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_491 = V_7;
		int32_t L_492 = (((int32_t)((uint8_t)L_491)));
		uint32_t L_493 = (L_490)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_492));
		UInt32U5BU5D_t2770800703* L_494 = ___ekey2;
		int32_t L_495 = ((int32_t)26);
		uint32_t L_496 = (L_494)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_495));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_481^(int32_t)L_485))^(int32_t)L_489))^(int32_t)L_493))^(int32_t)L_496));
		UInt32U5BU5D_t2770800703* L_497 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_498 = V_7;
		uintptr_t L_499 = (((uintptr_t)((int32_t)((uint32_t)L_498>>((int32_t)24)))));
		uint32_t L_500 = (L_497)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_499));
		UInt32U5BU5D_t2770800703* L_501 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_502 = V_6;
		int32_t L_503 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_502>>((int32_t)16))))));
		uint32_t L_504 = (L_501)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_503));
		UInt32U5BU5D_t2770800703* L_505 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_506 = V_5;
		int32_t L_507 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_506>>8)))));
		uint32_t L_508 = (L_505)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_507));
		UInt32U5BU5D_t2770800703* L_509 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_510 = V_4;
		int32_t L_511 = (((int32_t)((uint8_t)L_510)));
		uint32_t L_512 = (L_509)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_511));
		UInt32U5BU5D_t2770800703* L_513 = ___ekey2;
		int32_t L_514 = ((int32_t)27);
		uint32_t L_515 = (L_513)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_514));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_500^(int32_t)L_504))^(int32_t)L_508))^(int32_t)L_512))^(int32_t)L_515));
		UInt32U5BU5D_t2770800703* L_516 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_517 = V_0;
		uintptr_t L_518 = (((uintptr_t)((int32_t)((uint32_t)L_517>>((int32_t)24)))));
		uint32_t L_519 = (L_516)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_518));
		UInt32U5BU5D_t2770800703* L_520 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_521 = V_3;
		int32_t L_522 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_521>>((int32_t)16))))));
		uint32_t L_523 = (L_520)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_522));
		UInt32U5BU5D_t2770800703* L_524 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_525 = V_2;
		int32_t L_526 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_525>>8)))));
		uint32_t L_527 = (L_524)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_526));
		UInt32U5BU5D_t2770800703* L_528 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_529 = V_1;
		int32_t L_530 = (((int32_t)((uint8_t)L_529)));
		uint32_t L_531 = (L_528)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_530));
		UInt32U5BU5D_t2770800703* L_532 = ___ekey2;
		int32_t L_533 = ((int32_t)28);
		uint32_t L_534 = (L_532)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_533));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_519^(int32_t)L_523))^(int32_t)L_527))^(int32_t)L_531))^(int32_t)L_534));
		UInt32U5BU5D_t2770800703* L_535 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_536 = V_1;
		uintptr_t L_537 = (((uintptr_t)((int32_t)((uint32_t)L_536>>((int32_t)24)))));
		uint32_t L_538 = (L_535)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_537));
		UInt32U5BU5D_t2770800703* L_539 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_540 = V_0;
		int32_t L_541 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_540>>((int32_t)16))))));
		uint32_t L_542 = (L_539)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_541));
		UInt32U5BU5D_t2770800703* L_543 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_544 = V_3;
		int32_t L_545 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_544>>8)))));
		uint32_t L_546 = (L_543)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_545));
		UInt32U5BU5D_t2770800703* L_547 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_548 = V_2;
		int32_t L_549 = (((int32_t)((uint8_t)L_548)));
		uint32_t L_550 = (L_547)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_549));
		UInt32U5BU5D_t2770800703* L_551 = ___ekey2;
		int32_t L_552 = ((int32_t)29);
		uint32_t L_553 = (L_551)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_552));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_538^(int32_t)L_542))^(int32_t)L_546))^(int32_t)L_550))^(int32_t)L_553));
		UInt32U5BU5D_t2770800703* L_554 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_555 = V_2;
		uintptr_t L_556 = (((uintptr_t)((int32_t)((uint32_t)L_555>>((int32_t)24)))));
		uint32_t L_557 = (L_554)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_556));
		UInt32U5BU5D_t2770800703* L_558 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_559 = V_1;
		int32_t L_560 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_559>>((int32_t)16))))));
		uint32_t L_561 = (L_558)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_560));
		UInt32U5BU5D_t2770800703* L_562 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_563 = V_0;
		int32_t L_564 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_563>>8)))));
		uint32_t L_565 = (L_562)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_564));
		UInt32U5BU5D_t2770800703* L_566 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_567 = V_3;
		int32_t L_568 = (((int32_t)((uint8_t)L_567)));
		uint32_t L_569 = (L_566)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_568));
		UInt32U5BU5D_t2770800703* L_570 = ___ekey2;
		int32_t L_571 = ((int32_t)30);
		uint32_t L_572 = (L_570)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_571));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_557^(int32_t)L_561))^(int32_t)L_565))^(int32_t)L_569))^(int32_t)L_572));
		UInt32U5BU5D_t2770800703* L_573 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_574 = V_3;
		uintptr_t L_575 = (((uintptr_t)((int32_t)((uint32_t)L_574>>((int32_t)24)))));
		uint32_t L_576 = (L_573)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_575));
		UInt32U5BU5D_t2770800703* L_577 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_578 = V_2;
		int32_t L_579 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_578>>((int32_t)16))))));
		uint32_t L_580 = (L_577)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_579));
		UInt32U5BU5D_t2770800703* L_581 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_582 = V_1;
		int32_t L_583 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_582>>8)))));
		uint32_t L_584 = (L_581)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_583));
		UInt32U5BU5D_t2770800703* L_585 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_586 = V_0;
		int32_t L_587 = (((int32_t)((uint8_t)L_586)));
		uint32_t L_588 = (L_585)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_587));
		UInt32U5BU5D_t2770800703* L_589 = ___ekey2;
		int32_t L_590 = ((int32_t)31);
		uint32_t L_591 = (L_589)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_590));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_576^(int32_t)L_580))^(int32_t)L_584))^(int32_t)L_588))^(int32_t)L_591));
		UInt32U5BU5D_t2770800703* L_592 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_593 = V_4;
		uintptr_t L_594 = (((uintptr_t)((int32_t)((uint32_t)L_593>>((int32_t)24)))));
		uint32_t L_595 = (L_592)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_594));
		UInt32U5BU5D_t2770800703* L_596 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_597 = V_7;
		int32_t L_598 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_597>>((int32_t)16))))));
		uint32_t L_599 = (L_596)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_598));
		UInt32U5BU5D_t2770800703* L_600 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_601 = V_6;
		int32_t L_602 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_601>>8)))));
		uint32_t L_603 = (L_600)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_602));
		UInt32U5BU5D_t2770800703* L_604 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_605 = V_5;
		int32_t L_606 = (((int32_t)((uint8_t)L_605)));
		uint32_t L_607 = (L_604)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_606));
		UInt32U5BU5D_t2770800703* L_608 = ___ekey2;
		int32_t L_609 = ((int32_t)32);
		uint32_t L_610 = (L_608)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_609));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_595^(int32_t)L_599))^(int32_t)L_603))^(int32_t)L_607))^(int32_t)L_610));
		UInt32U5BU5D_t2770800703* L_611 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_612 = V_5;
		uintptr_t L_613 = (((uintptr_t)((int32_t)((uint32_t)L_612>>((int32_t)24)))));
		uint32_t L_614 = (L_611)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_613));
		UInt32U5BU5D_t2770800703* L_615 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_616 = V_4;
		int32_t L_617 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_616>>((int32_t)16))))));
		uint32_t L_618 = (L_615)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_617));
		UInt32U5BU5D_t2770800703* L_619 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_620 = V_7;
		int32_t L_621 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_620>>8)))));
		uint32_t L_622 = (L_619)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_621));
		UInt32U5BU5D_t2770800703* L_623 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_624 = V_6;
		int32_t L_625 = (((int32_t)((uint8_t)L_624)));
		uint32_t L_626 = (L_623)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_625));
		UInt32U5BU5D_t2770800703* L_627 = ___ekey2;
		int32_t L_628 = ((int32_t)33);
		uint32_t L_629 = (L_627)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_628));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_614^(int32_t)L_618))^(int32_t)L_622))^(int32_t)L_626))^(int32_t)L_629));
		UInt32U5BU5D_t2770800703* L_630 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_631 = V_6;
		uintptr_t L_632 = (((uintptr_t)((int32_t)((uint32_t)L_631>>((int32_t)24)))));
		uint32_t L_633 = (L_630)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_632));
		UInt32U5BU5D_t2770800703* L_634 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_635 = V_5;
		int32_t L_636 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_635>>((int32_t)16))))));
		uint32_t L_637 = (L_634)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_636));
		UInt32U5BU5D_t2770800703* L_638 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_639 = V_4;
		int32_t L_640 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_639>>8)))));
		uint32_t L_641 = (L_638)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_640));
		UInt32U5BU5D_t2770800703* L_642 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_643 = V_7;
		int32_t L_644 = (((int32_t)((uint8_t)L_643)));
		uint32_t L_645 = (L_642)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_644));
		UInt32U5BU5D_t2770800703* L_646 = ___ekey2;
		int32_t L_647 = ((int32_t)34);
		uint32_t L_648 = (L_646)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_647));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_633^(int32_t)L_637))^(int32_t)L_641))^(int32_t)L_645))^(int32_t)L_648));
		UInt32U5BU5D_t2770800703* L_649 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_650 = V_7;
		uintptr_t L_651 = (((uintptr_t)((int32_t)((uint32_t)L_650>>((int32_t)24)))));
		uint32_t L_652 = (L_649)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_651));
		UInt32U5BU5D_t2770800703* L_653 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_654 = V_6;
		int32_t L_655 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_654>>((int32_t)16))))));
		uint32_t L_656 = (L_653)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_655));
		UInt32U5BU5D_t2770800703* L_657 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_658 = V_5;
		int32_t L_659 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_658>>8)))));
		uint32_t L_660 = (L_657)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_659));
		UInt32U5BU5D_t2770800703* L_661 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_662 = V_4;
		int32_t L_663 = (((int32_t)((uint8_t)L_662)));
		uint32_t L_664 = (L_661)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_663));
		UInt32U5BU5D_t2770800703* L_665 = ___ekey2;
		int32_t L_666 = ((int32_t)35);
		uint32_t L_667 = (L_665)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_666));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_652^(int32_t)L_656))^(int32_t)L_660))^(int32_t)L_664))^(int32_t)L_667));
		UInt32U5BU5D_t2770800703* L_668 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_669 = V_0;
		uintptr_t L_670 = (((uintptr_t)((int32_t)((uint32_t)L_669>>((int32_t)24)))));
		uint32_t L_671 = (L_668)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_670));
		UInt32U5BU5D_t2770800703* L_672 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_673 = V_3;
		int32_t L_674 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_673>>((int32_t)16))))));
		uint32_t L_675 = (L_672)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_674));
		UInt32U5BU5D_t2770800703* L_676 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_677 = V_2;
		int32_t L_678 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_677>>8)))));
		uint32_t L_679 = (L_676)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_678));
		UInt32U5BU5D_t2770800703* L_680 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_681 = V_1;
		int32_t L_682 = (((int32_t)((uint8_t)L_681)));
		uint32_t L_683 = (L_680)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_682));
		UInt32U5BU5D_t2770800703* L_684 = ___ekey2;
		int32_t L_685 = ((int32_t)36);
		uint32_t L_686 = (L_684)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_685));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_671^(int32_t)L_675))^(int32_t)L_679))^(int32_t)L_683))^(int32_t)L_686));
		UInt32U5BU5D_t2770800703* L_687 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_688 = V_1;
		uintptr_t L_689 = (((uintptr_t)((int32_t)((uint32_t)L_688>>((int32_t)24)))));
		uint32_t L_690 = (L_687)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_689));
		UInt32U5BU5D_t2770800703* L_691 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_692 = V_0;
		int32_t L_693 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_692>>((int32_t)16))))));
		uint32_t L_694 = (L_691)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_693));
		UInt32U5BU5D_t2770800703* L_695 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_696 = V_3;
		int32_t L_697 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_696>>8)))));
		uint32_t L_698 = (L_695)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_697));
		UInt32U5BU5D_t2770800703* L_699 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_700 = V_2;
		int32_t L_701 = (((int32_t)((uint8_t)L_700)));
		uint32_t L_702 = (L_699)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_701));
		UInt32U5BU5D_t2770800703* L_703 = ___ekey2;
		int32_t L_704 = ((int32_t)37);
		uint32_t L_705 = (L_703)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_704));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_690^(int32_t)L_694))^(int32_t)L_698))^(int32_t)L_702))^(int32_t)L_705));
		UInt32U5BU5D_t2770800703* L_706 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_707 = V_2;
		uintptr_t L_708 = (((uintptr_t)((int32_t)((uint32_t)L_707>>((int32_t)24)))));
		uint32_t L_709 = (L_706)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_708));
		UInt32U5BU5D_t2770800703* L_710 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_711 = V_1;
		int32_t L_712 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_711>>((int32_t)16))))));
		uint32_t L_713 = (L_710)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_712));
		UInt32U5BU5D_t2770800703* L_714 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_715 = V_0;
		int32_t L_716 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_715>>8)))));
		uint32_t L_717 = (L_714)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_716));
		UInt32U5BU5D_t2770800703* L_718 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_719 = V_3;
		int32_t L_720 = (((int32_t)((uint8_t)L_719)));
		uint32_t L_721 = (L_718)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_720));
		UInt32U5BU5D_t2770800703* L_722 = ___ekey2;
		int32_t L_723 = ((int32_t)38);
		uint32_t L_724 = (L_722)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_723));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_709^(int32_t)L_713))^(int32_t)L_717))^(int32_t)L_721))^(int32_t)L_724));
		UInt32U5BU5D_t2770800703* L_725 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_726 = V_3;
		uintptr_t L_727 = (((uintptr_t)((int32_t)((uint32_t)L_726>>((int32_t)24)))));
		uint32_t L_728 = (L_725)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_727));
		UInt32U5BU5D_t2770800703* L_729 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_730 = V_2;
		int32_t L_731 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_730>>((int32_t)16))))));
		uint32_t L_732 = (L_729)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_731));
		UInt32U5BU5D_t2770800703* L_733 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_734 = V_1;
		int32_t L_735 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_734>>8)))));
		uint32_t L_736 = (L_733)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_735));
		UInt32U5BU5D_t2770800703* L_737 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_738 = V_0;
		int32_t L_739 = (((int32_t)((uint8_t)L_738)));
		uint32_t L_740 = (L_737)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_739));
		UInt32U5BU5D_t2770800703* L_741 = ___ekey2;
		int32_t L_742 = ((int32_t)39);
		uint32_t L_743 = (L_741)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_742));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_728^(int32_t)L_732))^(int32_t)L_736))^(int32_t)L_740))^(int32_t)L_743));
		int32_t L_744 = __this->get_Nr_14();
		if ((((int32_t)L_744) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0b08;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_745 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_746 = V_4;
		uintptr_t L_747 = (((uintptr_t)((int32_t)((uint32_t)L_746>>((int32_t)24)))));
		uint32_t L_748 = (L_745)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_747));
		UInt32U5BU5D_t2770800703* L_749 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_750 = V_7;
		int32_t L_751 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_750>>((int32_t)16))))));
		uint32_t L_752 = (L_749)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_751));
		UInt32U5BU5D_t2770800703* L_753 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_754 = V_6;
		int32_t L_755 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_754>>8)))));
		uint32_t L_756 = (L_753)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_755));
		UInt32U5BU5D_t2770800703* L_757 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_758 = V_5;
		int32_t L_759 = (((int32_t)((uint8_t)L_758)));
		uint32_t L_760 = (L_757)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_759));
		UInt32U5BU5D_t2770800703* L_761 = ___ekey2;
		int32_t L_762 = ((int32_t)40);
		uint32_t L_763 = (L_761)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_762));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_748^(int32_t)L_752))^(int32_t)L_756))^(int32_t)L_760))^(int32_t)L_763));
		UInt32U5BU5D_t2770800703* L_764 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_765 = V_5;
		uintptr_t L_766 = (((uintptr_t)((int32_t)((uint32_t)L_765>>((int32_t)24)))));
		uint32_t L_767 = (L_764)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_766));
		UInt32U5BU5D_t2770800703* L_768 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_769 = V_4;
		int32_t L_770 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_769>>((int32_t)16))))));
		uint32_t L_771 = (L_768)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_770));
		UInt32U5BU5D_t2770800703* L_772 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_773 = V_7;
		int32_t L_774 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_773>>8)))));
		uint32_t L_775 = (L_772)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_774));
		UInt32U5BU5D_t2770800703* L_776 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_777 = V_6;
		int32_t L_778 = (((int32_t)((uint8_t)L_777)));
		uint32_t L_779 = (L_776)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_778));
		UInt32U5BU5D_t2770800703* L_780 = ___ekey2;
		int32_t L_781 = ((int32_t)41);
		uint32_t L_782 = (L_780)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_781));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_767^(int32_t)L_771))^(int32_t)L_775))^(int32_t)L_779))^(int32_t)L_782));
		UInt32U5BU5D_t2770800703* L_783 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_784 = V_6;
		uintptr_t L_785 = (((uintptr_t)((int32_t)((uint32_t)L_784>>((int32_t)24)))));
		uint32_t L_786 = (L_783)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_785));
		UInt32U5BU5D_t2770800703* L_787 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_788 = V_5;
		int32_t L_789 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_788>>((int32_t)16))))));
		uint32_t L_790 = (L_787)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_789));
		UInt32U5BU5D_t2770800703* L_791 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_792 = V_4;
		int32_t L_793 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_792>>8)))));
		uint32_t L_794 = (L_791)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_793));
		UInt32U5BU5D_t2770800703* L_795 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_796 = V_7;
		int32_t L_797 = (((int32_t)((uint8_t)L_796)));
		uint32_t L_798 = (L_795)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_797));
		UInt32U5BU5D_t2770800703* L_799 = ___ekey2;
		int32_t L_800 = ((int32_t)42);
		uint32_t L_801 = (L_799)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_800));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_786^(int32_t)L_790))^(int32_t)L_794))^(int32_t)L_798))^(int32_t)L_801));
		UInt32U5BU5D_t2770800703* L_802 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_803 = V_7;
		uintptr_t L_804 = (((uintptr_t)((int32_t)((uint32_t)L_803>>((int32_t)24)))));
		uint32_t L_805 = (L_802)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_804));
		UInt32U5BU5D_t2770800703* L_806 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_807 = V_6;
		int32_t L_808 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_807>>((int32_t)16))))));
		uint32_t L_809 = (L_806)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_808));
		UInt32U5BU5D_t2770800703* L_810 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_811 = V_5;
		int32_t L_812 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_811>>8)))));
		uint32_t L_813 = (L_810)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_812));
		UInt32U5BU5D_t2770800703* L_814 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_815 = V_4;
		int32_t L_816 = (((int32_t)((uint8_t)L_815)));
		uint32_t L_817 = (L_814)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_816));
		UInt32U5BU5D_t2770800703* L_818 = ___ekey2;
		int32_t L_819 = ((int32_t)43);
		uint32_t L_820 = (L_818)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_819));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_805^(int32_t)L_809))^(int32_t)L_813))^(int32_t)L_817))^(int32_t)L_820));
		UInt32U5BU5D_t2770800703* L_821 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_822 = V_0;
		uintptr_t L_823 = (((uintptr_t)((int32_t)((uint32_t)L_822>>((int32_t)24)))));
		uint32_t L_824 = (L_821)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_823));
		UInt32U5BU5D_t2770800703* L_825 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_826 = V_3;
		int32_t L_827 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_826>>((int32_t)16))))));
		uint32_t L_828 = (L_825)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_827));
		UInt32U5BU5D_t2770800703* L_829 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_830 = V_2;
		int32_t L_831 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_830>>8)))));
		uint32_t L_832 = (L_829)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_831));
		UInt32U5BU5D_t2770800703* L_833 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_834 = V_1;
		int32_t L_835 = (((int32_t)((uint8_t)L_834)));
		uint32_t L_836 = (L_833)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_835));
		UInt32U5BU5D_t2770800703* L_837 = ___ekey2;
		int32_t L_838 = ((int32_t)44);
		uint32_t L_839 = (L_837)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_838));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_824^(int32_t)L_828))^(int32_t)L_832))^(int32_t)L_836))^(int32_t)L_839));
		UInt32U5BU5D_t2770800703* L_840 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_841 = V_1;
		uintptr_t L_842 = (((uintptr_t)((int32_t)((uint32_t)L_841>>((int32_t)24)))));
		uint32_t L_843 = (L_840)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_842));
		UInt32U5BU5D_t2770800703* L_844 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_845 = V_0;
		int32_t L_846 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_845>>((int32_t)16))))));
		uint32_t L_847 = (L_844)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_846));
		UInt32U5BU5D_t2770800703* L_848 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_849 = V_3;
		int32_t L_850 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_849>>8)))));
		uint32_t L_851 = (L_848)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_850));
		UInt32U5BU5D_t2770800703* L_852 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_853 = V_2;
		int32_t L_854 = (((int32_t)((uint8_t)L_853)));
		uint32_t L_855 = (L_852)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_854));
		UInt32U5BU5D_t2770800703* L_856 = ___ekey2;
		int32_t L_857 = ((int32_t)45);
		uint32_t L_858 = (L_856)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_857));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_843^(int32_t)L_847))^(int32_t)L_851))^(int32_t)L_855))^(int32_t)L_858));
		UInt32U5BU5D_t2770800703* L_859 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_860 = V_2;
		uintptr_t L_861 = (((uintptr_t)((int32_t)((uint32_t)L_860>>((int32_t)24)))));
		uint32_t L_862 = (L_859)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_861));
		UInt32U5BU5D_t2770800703* L_863 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_864 = V_1;
		int32_t L_865 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_864>>((int32_t)16))))));
		uint32_t L_866 = (L_863)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_865));
		UInt32U5BU5D_t2770800703* L_867 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_868 = V_0;
		int32_t L_869 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_868>>8)))));
		uint32_t L_870 = (L_867)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_869));
		UInt32U5BU5D_t2770800703* L_871 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_872 = V_3;
		int32_t L_873 = (((int32_t)((uint8_t)L_872)));
		uint32_t L_874 = (L_871)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_873));
		UInt32U5BU5D_t2770800703* L_875 = ___ekey2;
		int32_t L_876 = ((int32_t)46);
		uint32_t L_877 = (L_875)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_876));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_862^(int32_t)L_866))^(int32_t)L_870))^(int32_t)L_874))^(int32_t)L_877));
		UInt32U5BU5D_t2770800703* L_878 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_879 = V_3;
		uintptr_t L_880 = (((uintptr_t)((int32_t)((uint32_t)L_879>>((int32_t)24)))));
		uint32_t L_881 = (L_878)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_880));
		UInt32U5BU5D_t2770800703* L_882 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_883 = V_2;
		int32_t L_884 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_883>>((int32_t)16))))));
		uint32_t L_885 = (L_882)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_884));
		UInt32U5BU5D_t2770800703* L_886 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_887 = V_1;
		int32_t L_888 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_887>>8)))));
		uint32_t L_889 = (L_886)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_888));
		UInt32U5BU5D_t2770800703* L_890 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_891 = V_0;
		int32_t L_892 = (((int32_t)((uint8_t)L_891)));
		uint32_t L_893 = (L_890)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_892));
		UInt32U5BU5D_t2770800703* L_894 = ___ekey2;
		int32_t L_895 = ((int32_t)47);
		uint32_t L_896 = (L_894)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_895));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_881^(int32_t)L_885))^(int32_t)L_889))^(int32_t)L_893))^(int32_t)L_896));
		V_8 = ((int32_t)48);
		int32_t L_897 = __this->get_Nr_14();
		if ((((int32_t)L_897) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0b08;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_898 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_899 = V_4;
		uintptr_t L_900 = (((uintptr_t)((int32_t)((uint32_t)L_899>>((int32_t)24)))));
		uint32_t L_901 = (L_898)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_900));
		UInt32U5BU5D_t2770800703* L_902 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_903 = V_7;
		int32_t L_904 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_903>>((int32_t)16))))));
		uint32_t L_905 = (L_902)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_904));
		UInt32U5BU5D_t2770800703* L_906 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_907 = V_6;
		int32_t L_908 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_907>>8)))));
		uint32_t L_909 = (L_906)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_908));
		UInt32U5BU5D_t2770800703* L_910 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_911 = V_5;
		int32_t L_912 = (((int32_t)((uint8_t)L_911)));
		uint32_t L_913 = (L_910)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_912));
		UInt32U5BU5D_t2770800703* L_914 = ___ekey2;
		int32_t L_915 = ((int32_t)48);
		uint32_t L_916 = (L_914)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_915));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_901^(int32_t)L_905))^(int32_t)L_909))^(int32_t)L_913))^(int32_t)L_916));
		UInt32U5BU5D_t2770800703* L_917 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_918 = V_5;
		uintptr_t L_919 = (((uintptr_t)((int32_t)((uint32_t)L_918>>((int32_t)24)))));
		uint32_t L_920 = (L_917)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_919));
		UInt32U5BU5D_t2770800703* L_921 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_922 = V_4;
		int32_t L_923 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_922>>((int32_t)16))))));
		uint32_t L_924 = (L_921)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_923));
		UInt32U5BU5D_t2770800703* L_925 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_926 = V_7;
		int32_t L_927 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_926>>8)))));
		uint32_t L_928 = (L_925)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_927));
		UInt32U5BU5D_t2770800703* L_929 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_930 = V_6;
		int32_t L_931 = (((int32_t)((uint8_t)L_930)));
		uint32_t L_932 = (L_929)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_931));
		UInt32U5BU5D_t2770800703* L_933 = ___ekey2;
		int32_t L_934 = ((int32_t)49);
		uint32_t L_935 = (L_933)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_934));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_920^(int32_t)L_924))^(int32_t)L_928))^(int32_t)L_932))^(int32_t)L_935));
		UInt32U5BU5D_t2770800703* L_936 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_937 = V_6;
		uintptr_t L_938 = (((uintptr_t)((int32_t)((uint32_t)L_937>>((int32_t)24)))));
		uint32_t L_939 = (L_936)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_938));
		UInt32U5BU5D_t2770800703* L_940 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_941 = V_5;
		int32_t L_942 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_941>>((int32_t)16))))));
		uint32_t L_943 = (L_940)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_942));
		UInt32U5BU5D_t2770800703* L_944 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_945 = V_4;
		int32_t L_946 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_945>>8)))));
		uint32_t L_947 = (L_944)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_946));
		UInt32U5BU5D_t2770800703* L_948 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_949 = V_7;
		int32_t L_950 = (((int32_t)((uint8_t)L_949)));
		uint32_t L_951 = (L_948)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_950));
		UInt32U5BU5D_t2770800703* L_952 = ___ekey2;
		int32_t L_953 = ((int32_t)50);
		uint32_t L_954 = (L_952)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_953));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_939^(int32_t)L_943))^(int32_t)L_947))^(int32_t)L_951))^(int32_t)L_954));
		UInt32U5BU5D_t2770800703* L_955 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_956 = V_7;
		uintptr_t L_957 = (((uintptr_t)((int32_t)((uint32_t)L_956>>((int32_t)24)))));
		uint32_t L_958 = (L_955)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_957));
		UInt32U5BU5D_t2770800703* L_959 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_960 = V_6;
		int32_t L_961 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_960>>((int32_t)16))))));
		uint32_t L_962 = (L_959)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_961));
		UInt32U5BU5D_t2770800703* L_963 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_964 = V_5;
		int32_t L_965 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_964>>8)))));
		uint32_t L_966 = (L_963)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_965));
		UInt32U5BU5D_t2770800703* L_967 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_968 = V_4;
		int32_t L_969 = (((int32_t)((uint8_t)L_968)));
		uint32_t L_970 = (L_967)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_969));
		UInt32U5BU5D_t2770800703* L_971 = ___ekey2;
		int32_t L_972 = ((int32_t)51);
		uint32_t L_973 = (L_971)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_972));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_958^(int32_t)L_962))^(int32_t)L_966))^(int32_t)L_970))^(int32_t)L_973));
		UInt32U5BU5D_t2770800703* L_974 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_975 = V_0;
		uintptr_t L_976 = (((uintptr_t)((int32_t)((uint32_t)L_975>>((int32_t)24)))));
		uint32_t L_977 = (L_974)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_976));
		UInt32U5BU5D_t2770800703* L_978 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_979 = V_3;
		int32_t L_980 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_979>>((int32_t)16))))));
		uint32_t L_981 = (L_978)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_980));
		UInt32U5BU5D_t2770800703* L_982 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_983 = V_2;
		int32_t L_984 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_983>>8)))));
		uint32_t L_985 = (L_982)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_984));
		UInt32U5BU5D_t2770800703* L_986 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_987 = V_1;
		int32_t L_988 = (((int32_t)((uint8_t)L_987)));
		uint32_t L_989 = (L_986)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_988));
		UInt32U5BU5D_t2770800703* L_990 = ___ekey2;
		int32_t L_991 = ((int32_t)52);
		uint32_t L_992 = (L_990)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_991));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_977^(int32_t)L_981))^(int32_t)L_985))^(int32_t)L_989))^(int32_t)L_992));
		UInt32U5BU5D_t2770800703* L_993 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_994 = V_1;
		uintptr_t L_995 = (((uintptr_t)((int32_t)((uint32_t)L_994>>((int32_t)24)))));
		uint32_t L_996 = (L_993)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_995));
		UInt32U5BU5D_t2770800703* L_997 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_998 = V_0;
		int32_t L_999 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_998>>((int32_t)16))))));
		uint32_t L_1000 = (L_997)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_999));
		UInt32U5BU5D_t2770800703* L_1001 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_1002 = V_3;
		int32_t L_1003 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1002>>8)))));
		uint32_t L_1004 = (L_1001)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1003));
		UInt32U5BU5D_t2770800703* L_1005 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_1006 = V_2;
		int32_t L_1007 = (((int32_t)((uint8_t)L_1006)));
		uint32_t L_1008 = (L_1005)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1007));
		UInt32U5BU5D_t2770800703* L_1009 = ___ekey2;
		int32_t L_1010 = ((int32_t)53);
		uint32_t L_1011 = (L_1009)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1010));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_996^(int32_t)L_1000))^(int32_t)L_1004))^(int32_t)L_1008))^(int32_t)L_1011));
		UInt32U5BU5D_t2770800703* L_1012 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_1013 = V_2;
		uintptr_t L_1014 = (((uintptr_t)((int32_t)((uint32_t)L_1013>>((int32_t)24)))));
		uint32_t L_1015 = (L_1012)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1014));
		UInt32U5BU5D_t2770800703* L_1016 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_1017 = V_1;
		int32_t L_1018 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1017>>((int32_t)16))))));
		uint32_t L_1019 = (L_1016)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1018));
		UInt32U5BU5D_t2770800703* L_1020 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_1021 = V_0;
		int32_t L_1022 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1021>>8)))));
		uint32_t L_1023 = (L_1020)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1022));
		UInt32U5BU5D_t2770800703* L_1024 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_1025 = V_3;
		int32_t L_1026 = (((int32_t)((uint8_t)L_1025)));
		uint32_t L_1027 = (L_1024)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1026));
		UInt32U5BU5D_t2770800703* L_1028 = ___ekey2;
		int32_t L_1029 = ((int32_t)54);
		uint32_t L_1030 = (L_1028)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1029));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1015^(int32_t)L_1019))^(int32_t)L_1023))^(int32_t)L_1027))^(int32_t)L_1030));
		UInt32U5BU5D_t2770800703* L_1031 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_1032 = V_3;
		uintptr_t L_1033 = (((uintptr_t)((int32_t)((uint32_t)L_1032>>((int32_t)24)))));
		uint32_t L_1034 = (L_1031)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1033));
		UInt32U5BU5D_t2770800703* L_1035 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_1036 = V_2;
		int32_t L_1037 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1036>>((int32_t)16))))));
		uint32_t L_1038 = (L_1035)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1037));
		UInt32U5BU5D_t2770800703* L_1039 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_1040 = V_1;
		int32_t L_1041 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1040>>8)))));
		uint32_t L_1042 = (L_1039)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1041));
		UInt32U5BU5D_t2770800703* L_1043 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_1044 = V_0;
		int32_t L_1045 = (((int32_t)((uint8_t)L_1044)));
		uint32_t L_1046 = (L_1043)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1045));
		UInt32U5BU5D_t2770800703* L_1047 = ___ekey2;
		int32_t L_1048 = ((int32_t)55);
		uint32_t L_1049 = (L_1047)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1048));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1034^(int32_t)L_1038))^(int32_t)L_1042))^(int32_t)L_1046))^(int32_t)L_1049));
		V_8 = ((int32_t)56);
	}

IL_0b08:
	{
		ByteU5BU5D_t4116647657* L_1050 = ___outdata1;
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_1051 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1052 = V_4;
		uintptr_t L_1053 = (((uintptr_t)((int32_t)((uint32_t)L_1052>>((int32_t)24)))));
		uint8_t L_1054 = (L_1051)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1053));
		UInt32U5BU5D_t2770800703* L_1055 = ___ekey2;
		int32_t L_1056 = V_8;
		int32_t L_1057 = L_1056;
		uint32_t L_1058 = (L_1055)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1057));
		(L_1050)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1054^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1058>>((int32_t)24))))))))))));
		ByteU5BU5D_t4116647657* L_1059 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1060 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1061 = V_7;
		int32_t L_1062 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1061>>((int32_t)16))))));
		uint8_t L_1063 = (L_1060)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1062));
		UInt32U5BU5D_t2770800703* L_1064 = ___ekey2;
		int32_t L_1065 = V_8;
		int32_t L_1066 = L_1065;
		uint32_t L_1067 = (L_1064)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1066));
		(L_1059)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1063^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1067>>((int32_t)16))))))))))));
		ByteU5BU5D_t4116647657* L_1068 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1069 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1070 = V_6;
		int32_t L_1071 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1070>>8)))));
		uint8_t L_1072 = (L_1069)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1071));
		UInt32U5BU5D_t2770800703* L_1073 = ___ekey2;
		int32_t L_1074 = V_8;
		int32_t L_1075 = L_1074;
		uint32_t L_1076 = (L_1073)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1075));
		(L_1068)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1072^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1076>>8)))))))))));
		ByteU5BU5D_t4116647657* L_1077 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1078 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1079 = V_5;
		int32_t L_1080 = (((int32_t)((uint8_t)L_1079)));
		uint8_t L_1081 = (L_1078)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1080));
		UInt32U5BU5D_t2770800703* L_1082 = ___ekey2;
		int32_t L_1083 = V_8;
		int32_t L_1084 = L_1083;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1084, (int32_t)1));
		int32_t L_1085 = L_1084;
		uint32_t L_1086 = (L_1082)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1085));
		(L_1077)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1081^(int32_t)(((int32_t)((uint8_t)L_1086)))))))));
		ByteU5BU5D_t4116647657* L_1087 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1088 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1089 = V_5;
		uintptr_t L_1090 = (((uintptr_t)((int32_t)((uint32_t)L_1089>>((int32_t)24)))));
		uint8_t L_1091 = (L_1088)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1090));
		UInt32U5BU5D_t2770800703* L_1092 = ___ekey2;
		int32_t L_1093 = V_8;
		int32_t L_1094 = L_1093;
		uint32_t L_1095 = (L_1092)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1094));
		(L_1087)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1091^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1095>>((int32_t)24))))))))))));
		ByteU5BU5D_t4116647657* L_1096 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1097 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1098 = V_4;
		int32_t L_1099 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1098>>((int32_t)16))))));
		uint8_t L_1100 = (L_1097)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1099));
		UInt32U5BU5D_t2770800703* L_1101 = ___ekey2;
		int32_t L_1102 = V_8;
		int32_t L_1103 = L_1102;
		uint32_t L_1104 = (L_1101)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1103));
		(L_1096)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1100^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1104>>((int32_t)16))))))))))));
		ByteU5BU5D_t4116647657* L_1105 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1106 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1107 = V_7;
		int32_t L_1108 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1107>>8)))));
		uint8_t L_1109 = (L_1106)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1108));
		UInt32U5BU5D_t2770800703* L_1110 = ___ekey2;
		int32_t L_1111 = V_8;
		int32_t L_1112 = L_1111;
		uint32_t L_1113 = (L_1110)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1112));
		(L_1105)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1109^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1113>>8)))))))))));
		ByteU5BU5D_t4116647657* L_1114 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1115 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1116 = V_6;
		int32_t L_1117 = (((int32_t)((uint8_t)L_1116)));
		uint8_t L_1118 = (L_1115)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1117));
		UInt32U5BU5D_t2770800703* L_1119 = ___ekey2;
		int32_t L_1120 = V_8;
		int32_t L_1121 = L_1120;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1121, (int32_t)1));
		int32_t L_1122 = L_1121;
		uint32_t L_1123 = (L_1119)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1122));
		(L_1114)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1118^(int32_t)(((int32_t)((uint8_t)L_1123)))))))));
		ByteU5BU5D_t4116647657* L_1124 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1125 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1126 = V_6;
		uintptr_t L_1127 = (((uintptr_t)((int32_t)((uint32_t)L_1126>>((int32_t)24)))));
		uint8_t L_1128 = (L_1125)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1127));
		UInt32U5BU5D_t2770800703* L_1129 = ___ekey2;
		int32_t L_1130 = V_8;
		int32_t L_1131 = L_1130;
		uint32_t L_1132 = (L_1129)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1131));
		(L_1124)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1128^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1132>>((int32_t)24))))))))))));
		ByteU5BU5D_t4116647657* L_1133 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1134 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1135 = V_5;
		int32_t L_1136 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1135>>((int32_t)16))))));
		uint8_t L_1137 = (L_1134)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1136));
		UInt32U5BU5D_t2770800703* L_1138 = ___ekey2;
		int32_t L_1139 = V_8;
		int32_t L_1140 = L_1139;
		uint32_t L_1141 = (L_1138)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1140));
		(L_1133)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1137^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1141>>((int32_t)16))))))))))));
		ByteU5BU5D_t4116647657* L_1142 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1143 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1144 = V_4;
		int32_t L_1145 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1144>>8)))));
		uint8_t L_1146 = (L_1143)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1145));
		UInt32U5BU5D_t2770800703* L_1147 = ___ekey2;
		int32_t L_1148 = V_8;
		int32_t L_1149 = L_1148;
		uint32_t L_1150 = (L_1147)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1149));
		(L_1142)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1146^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1150>>8)))))))))));
		ByteU5BU5D_t4116647657* L_1151 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1152 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1153 = V_7;
		int32_t L_1154 = (((int32_t)((uint8_t)L_1153)));
		uint8_t L_1155 = (L_1152)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1154));
		UInt32U5BU5D_t2770800703* L_1156 = ___ekey2;
		int32_t L_1157 = V_8;
		int32_t L_1158 = L_1157;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1158, (int32_t)1));
		int32_t L_1159 = L_1158;
		uint32_t L_1160 = (L_1156)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1159));
		(L_1151)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1155^(int32_t)(((int32_t)((uint8_t)L_1160)))))))));
		ByteU5BU5D_t4116647657* L_1161 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1162 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1163 = V_7;
		uintptr_t L_1164 = (((uintptr_t)((int32_t)((uint32_t)L_1163>>((int32_t)24)))));
		uint8_t L_1165 = (L_1162)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1164));
		UInt32U5BU5D_t2770800703* L_1166 = ___ekey2;
		int32_t L_1167 = V_8;
		int32_t L_1168 = L_1167;
		uint32_t L_1169 = (L_1166)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1168));
		(L_1161)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1165^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1169>>((int32_t)24))))))))))));
		ByteU5BU5D_t4116647657* L_1170 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1171 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1172 = V_6;
		int32_t L_1173 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1172>>((int32_t)16))))));
		uint8_t L_1174 = (L_1171)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1173));
		UInt32U5BU5D_t2770800703* L_1175 = ___ekey2;
		int32_t L_1176 = V_8;
		int32_t L_1177 = L_1176;
		uint32_t L_1178 = (L_1175)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1177));
		(L_1170)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1174^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1178>>((int32_t)16))))))))))));
		ByteU5BU5D_t4116647657* L_1179 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1180 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1181 = V_5;
		int32_t L_1182 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1181>>8)))));
		uint8_t L_1183 = (L_1180)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1182));
		UInt32U5BU5D_t2770800703* L_1184 = ___ekey2;
		int32_t L_1185 = V_8;
		int32_t L_1186 = L_1185;
		uint32_t L_1187 = (L_1184)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1186));
		(L_1179)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1183^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1187>>8)))))))))));
		ByteU5BU5D_t4116647657* L_1188 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1189 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1190 = V_4;
		int32_t L_1191 = (((int32_t)((uint8_t)L_1190)));
		uint8_t L_1192 = (L_1189)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1191));
		UInt32U5BU5D_t2770800703* L_1193 = ___ekey2;
		int32_t L_1194 = V_8;
		int32_t L_1195 = L_1194;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1195, (int32_t)1));
		int32_t L_1196 = L_1195;
		uint32_t L_1197 = (L_1193)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1196));
		(L_1188)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1192^(int32_t)(((int32_t)((uint8_t)L_1197)))))))));
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
// System.Void System.TimeZoneInfo::.ctor(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[],System.Boolean)
extern "C"  void TimeZoneInfo__ctor_m1956250117 (TimeZoneInfo_t161405854 * __this, String_t* ___id0, TimeSpan_t881159249  ___baseUtcOffset1, String_t* ___displayName2, String_t* ___standardDisplayName3, String_t* ___daylightDisplayName4, AdjustmentRuleU5BU5D_t1469475992* ___adjustmentRules5, bool ___disableDaylightSavingTime6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo__ctor_m1956250117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdjustmentRule_t74449909 * V_0 = NULL;
	AdjustmentRule_t74449909 * V_1 = NULL;
	AdjustmentRuleU5BU5D_t1469475992* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* G_B30_0 = NULL;
	TimeZoneInfo_t161405854 * G_B30_1 = NULL;
	String_t* G_B29_0 = NULL;
	TimeZoneInfo_t161405854 * G_B29_1 = NULL;
	String_t* G_B32_0 = NULL;
	TimeZoneInfo_t161405854 * G_B32_1 = NULL;
	String_t* G_B31_0 = NULL;
	TimeZoneInfo_t161405854 * G_B31_1 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3454449607, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var);
	}

IL_0017:
	{
		String_t* L_2 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_t132251570 * L_5 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_5, _stringLiteral1601163033, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var);
	}

IL_0032:
	{
		int64_t L_6 = TimeSpan_get_Ticks_m2137362016((&___baseUtcOffset1), /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_6%(int64_t)(((int64_t)((int64_t)((int32_t)600000000)))))))
		{
			goto IL_0050;
		}
	}
	{
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_7, _stringLiteral645215293, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7,TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var);
	}

IL_0050:
	{
		TimeSpan_t881159249  L_8 = ___baseUtcOffset1;
		TimeSpan_t881159249  L_9;
		memset(&L_9, 0, sizeof(L_9));
		TimeSpan__ctor_m3689759052((&L_9), ((int32_t)14), 0, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		bool L_10 = TimeSpan_op_GreaterThan_m734703194(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0078;
		}
	}
	{
		TimeSpan_t881159249  L_11 = ___baseUtcOffset1;
		TimeSpan_t881159249  L_12;
		memset(&L_12, 0, sizeof(L_12));
		TimeSpan__ctor_m3689759052((&L_12), ((int32_t)-14), 0, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		bool L_13 = TimeSpan_op_LessThan_m1594498345(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0083;
		}
	}

IL_0078:
	{
		ArgumentOutOfRangeException_t777629997 * L_14 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_14, _stringLiteral3372752593, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14,TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var);
	}

IL_0083:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_15 = ___adjustmentRules5;
		if (!L_15)
		{
			goto IL_0181;
		}
	}
	{
		AdjustmentRuleU5BU5D_t1469475992* L_16 = ___adjustmentRules5;
		if (!(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		V_0 = (AdjustmentRule_t74449909 *)NULL;
		AdjustmentRuleU5BU5D_t1469475992* L_17 = ___adjustmentRules5;
		V_2 = L_17;
		V_3 = 0;
		goto IL_0178;
	}

IL_009f:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_18 = V_2;
		int32_t L_19 = V_3;
		int32_t L_20 = L_19;
		AdjustmentRule_t74449909 * L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_1 = L_21;
		AdjustmentRule_t74449909 * L_22 = V_1;
		if (L_22)
		{
			goto IL_00b4;
		}
	}
	{
		InvalidTimeZoneException_t4066718130 * L_23 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
		InvalidTimeZoneException__ctor_m4131156752(L_23, _stringLiteral1373758191, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23,TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var);
	}

IL_00b4:
	{
		TimeSpan_t881159249  L_24 = ___baseUtcOffset1;
		AdjustmentRule_t74449909 * L_25 = V_1;
		TimeSpan_t881159249  L_26 = AdjustmentRule_get_DaylightDelta_m2159274191(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_27 = TimeSpan_op_Addition_m672714982(NULL /*static, unused*/, L_24, L_26, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_28;
		memset(&L_28, 0, sizeof(L_28));
		TimeSpan__ctor_m3689759052((&L_28), ((int32_t)-14), 0, 0, /*hidden argument*/NULL);
		bool L_29 = TimeSpan_op_LessThan_m1594498345(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00f2;
		}
	}
	{
		TimeSpan_t881159249  L_30 = ___baseUtcOffset1;
		AdjustmentRule_t74449909 * L_31 = V_1;
		TimeSpan_t881159249  L_32 = AdjustmentRule_get_DaylightDelta_m2159274191(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_33 = TimeSpan_op_Addition_m672714982(NULL /*static, unused*/, L_30, L_32, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_34;
		memset(&L_34, 0, sizeof(L_34));
		TimeSpan__ctor_m3689759052((&L_34), ((int32_t)14), 0, 0, /*hidden argument*/NULL);
		bool L_35 = TimeSpan_op_GreaterThan_m734703194(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00fd;
		}
	}

IL_00f2:
	{
		InvalidTimeZoneException_t4066718130 * L_36 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
		InvalidTimeZoneException__ctor_m4131156752(L_36, _stringLiteral3975560191, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36,TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var);
	}

IL_00fd:
	{
		AdjustmentRule_t74449909 * L_37 = V_0;
		if (!L_37)
		{
			goto IL_0124;
		}
	}
	{
		AdjustmentRule_t74449909 * L_38 = V_0;
		DateTime_t3738529785  L_39 = AdjustmentRule_get_DateStart_m2176962503(L_38, /*hidden argument*/NULL);
		AdjustmentRule_t74449909 * L_40 = V_1;
		DateTime_t3738529785  L_41 = AdjustmentRule_get_DateStart_m2176962503(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_42 = DateTime_op_GreaterThan_m3768590082(NULL /*static, unused*/, L_39, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0124;
		}
	}
	{
		InvalidTimeZoneException_t4066718130 * L_43 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
		InvalidTimeZoneException__ctor_m4131156752(L_43, _stringLiteral136749170, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43,TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var);
	}

IL_0124:
	{
		AdjustmentRule_t74449909 * L_44 = V_0;
		if (!L_44)
		{
			goto IL_014b;
		}
	}
	{
		AdjustmentRule_t74449909 * L_45 = V_0;
		DateTime_t3738529785  L_46 = AdjustmentRule_get_DateEnd_m3164615624(L_45, /*hidden argument*/NULL);
		AdjustmentRule_t74449909 * L_47 = V_1;
		DateTime_t3738529785  L_48 = AdjustmentRule_get_DateStart_m2176962503(L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_49 = DateTime_op_GreaterThan_m3768590082(NULL /*static, unused*/, L_46, L_48, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_014b;
		}
	}
	{
		InvalidTimeZoneException_t4066718130 * L_50 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
		InvalidTimeZoneException__ctor_m4131156752(L_50, _stringLiteral1453361438, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_50,TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var);
	}

IL_014b:
	{
		AdjustmentRule_t74449909 * L_51 = V_0;
		if (!L_51)
		{
			goto IL_0172;
		}
	}
	{
		AdjustmentRule_t74449909 * L_52 = V_0;
		DateTime_t3738529785  L_53 = AdjustmentRule_get_DateEnd_m3164615624(L_52, /*hidden argument*/NULL);
		AdjustmentRule_t74449909 * L_54 = V_1;
		DateTime_t3738529785  L_55 = AdjustmentRule_get_DateStart_m2176962503(L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_56 = DateTime_op_Equality_m1022058599(NULL /*static, unused*/, L_53, L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0172;
		}
	}
	{
		InvalidTimeZoneException_t4066718130 * L_57 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
		InvalidTimeZoneException__ctor_m4131156752(L_57, _stringLiteral2306550058, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_57,TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var);
	}

IL_0172:
	{
		AdjustmentRule_t74449909 * L_58 = V_1;
		V_0 = L_58;
		int32_t L_59 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_0178:
	{
		int32_t L_60 = V_3;
		AdjustmentRuleU5BU5D_t1469475992* L_61 = V_2;
		if ((((int32_t)L_60) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_61)->max_length)))))))
		{
			goto IL_009f;
		}
	}

IL_0181:
	{
		String_t* L_62 = ___id0;
		__this->set_id_3(L_62);
		TimeSpan_t881159249  L_63 = ___baseUtcOffset1;
		__this->set_baseUtcOffset_0(L_63);
		String_t* L_64 = ___displayName2;
		String_t* L_65 = L_64;
		G_B29_0 = L_65;
		G_B29_1 = __this;
		if (L_65)
		{
			G_B30_0 = L_65;
			G_B30_1 = __this;
			goto IL_0199;
		}
	}
	{
		String_t* L_66 = ___id0;
		G_B30_0 = L_66;
		G_B30_1 = G_B29_1;
	}

IL_0199:
	{
		G_B30_1->set_displayName_2(G_B30_0);
		String_t* L_67 = ___standardDisplayName3;
		String_t* L_68 = L_67;
		G_B31_0 = L_68;
		G_B31_1 = __this;
		if (L_68)
		{
			G_B32_0 = L_68;
			G_B32_1 = __this;
			goto IL_01a9;
		}
	}
	{
		String_t* L_69 = ___id0;
		G_B32_0 = L_69;
		G_B32_1 = G_B31_1;
	}

IL_01a9:
	{
		G_B32_1->set_standardDisplayName_5(G_B32_0);
		String_t* L_70 = ___daylightDisplayName4;
		__this->set_daylightDisplayName_1(L_70);
		bool L_71 = ___disableDaylightSavingTime6;
		__this->set_disableDaylightSavingTime_6(L_71);
		AdjustmentRuleU5BU5D_t1469475992* L_72 = ___adjustmentRules5;
		__this->set_adjustmentRules_9(L_72);
		return;
	}
}
// System.Void System.TimeZoneInfo::.cctor()
extern "C"  void TimeZoneInfo__cctor_m3311629113 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.TimeSpan System.TimeZoneInfo::get_BaseUtcOffset()
extern "C"  TimeSpan_t881159249  TimeZoneInfo_get_BaseUtcOffset_m808429276 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method)
{
	{
		TimeSpan_t881159249  L_0 = __this->get_baseUtcOffset_0();
		return L_0;
	}
}
// System.String System.TimeZoneInfo::get_DisplayName()
extern "C"  String_t* TimeZoneInfo_get_DisplayName_m3871974074 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_displayName_2();
		return L_0;
	}
}
// System.String System.TimeZoneInfo::get_Id()
extern "C"  String_t* TimeZoneInfo_get_Id_m3716673190 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_id_3();
		return L_0;
	}
}
// System.TimeZoneInfo System.TimeZoneInfo::get_Local()
extern "C"  TimeZoneInfo_t161405854 * TimeZoneInfo_get_Local_m3767312181 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_get_Local_m3767312181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_0 = ((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->get_local_4();
		if (L_0)
		{
			goto IL_0058;
		}
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_1 = TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268(NULL /*static, unused*/, _stringLiteral3126236545, _stringLiteral3497985806, /*hidden argument*/NULL);
		((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->set_local_4(L_1);
		goto IL_0058;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0023;
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Object)
		{
		}

IL_0024:
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
			String_t* L_2 = TimeZoneInfo_get_TimeZoneDirectory_m1493272576(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
			String_t* L_3 = Path_Combine_m3389272516(NULL /*static, unused*/, L_2, _stringLiteral2825121886, /*hidden argument*/NULL);
			TimeZoneInfo_t161405854 * L_4 = TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268(NULL /*static, unused*/, _stringLiteral3126236545, L_3, /*hidden argument*/NULL);
			((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->set_local_4(L_4);
			goto IL_0053;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0047;
			throw e;
		}

CATCH_0047:
		{ // begin catch(System.Object)
			{
				TimeZoneNotFoundException_t171073523 * L_5 = (TimeZoneNotFoundException_t171073523 *)il2cpp_codegen_object_new(TimeZoneNotFoundException_t171073523_il2cpp_TypeInfo_var);
				TimeZoneNotFoundException__ctor_m2966108609(L_5, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,TimeZoneInfo_get_Local_m3767312181_RuntimeMethod_var);
			}

IL_004e:
			{
				goto IL_0053;
			}
		} // end catch (depth: 2)

IL_0053:
		{
			goto IL_0058;
		}
	} // end catch (depth: 1)

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_6 = ((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->get_local_4();
		return L_6;
	}
}
// System.Boolean System.TimeZoneInfo::get_SupportsDaylightSavingTime()
extern "C"  bool TimeZoneInfo_get_SupportsDaylightSavingTime_m3644631779 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_disableDaylightSavingTime_6();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.TimeZoneInfo System.TimeZoneInfo::get_Utc()
extern "C"  TimeZoneInfo_t161405854 * TimeZoneInfo_get_Utc_m4037366733 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_get_Utc_m4037366733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_0 = ((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->get_utc_7();
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		TimeSpan_t881159249  L_1;
		memset(&L_1, 0, sizeof(L_1));
		TimeSpan__ctor_m1896986612((&L_1), (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_2 = TimeZoneInfo_CreateCustomTimeZone_m4187381152(NULL /*static, unused*/, _stringLiteral3410052326, L_1, _stringLiteral3410052326, _stringLiteral3410052326, /*hidden argument*/NULL);
		((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->set_utc_7(L_2);
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_3 = ((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->get_utc_7();
		return L_3;
	}
}
// System.String System.TimeZoneInfo::get_TimeZoneDirectory()
extern "C"  String_t* TimeZoneInfo_get_TimeZoneDirectory_m1493272576 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_get_TimeZoneDirectory_m1493272576_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		String_t* L_0 = ((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->get_timeZoneDirectory_8();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->set_timeZoneDirectory_8(_stringLiteral1599610208);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		String_t* L_1 = ((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->get_timeZoneDirectory_8();
		return L_1;
	}
}
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String)
extern "C"  TimeZoneInfo_t161405854 * TimeZoneInfo_CreateCustomTimeZone_m4187381152 (RuntimeObject * __this /* static, unused */, String_t* ___id0, TimeSpan_t881159249  ___baseUtcOffset1, String_t* ___displayName2, String_t* ___standardDisplayName3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_CreateCustomTimeZone_m4187381152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___id0;
		TimeSpan_t881159249  L_1 = ___baseUtcOffset1;
		String_t* L_2 = ___displayName2;
		String_t* L_3 = ___standardDisplayName3;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_4 = TimeZoneInfo_CreateCustomTimeZone_m1792093365(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (String_t*)NULL, (AdjustmentRuleU5BU5D_t1469475992*)(AdjustmentRuleU5BU5D_t1469475992*)NULL, (bool)1, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[])
extern "C"  TimeZoneInfo_t161405854 * TimeZoneInfo_CreateCustomTimeZone_m3151472709 (RuntimeObject * __this /* static, unused */, String_t* ___id0, TimeSpan_t881159249  ___baseUtcOffset1, String_t* ___displayName2, String_t* ___standardDisplayName3, String_t* ___daylightDisplayName4, AdjustmentRuleU5BU5D_t1469475992* ___adjustmentRules5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_CreateCustomTimeZone_m3151472709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___id0;
		TimeSpan_t881159249  L_1 = ___baseUtcOffset1;
		String_t* L_2 = ___displayName2;
		String_t* L_3 = ___standardDisplayName3;
		String_t* L_4 = ___daylightDisplayName4;
		AdjustmentRuleU5BU5D_t1469475992* L_5 = ___adjustmentRules5;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_6 = TimeZoneInfo_CreateCustomTimeZone_m1792093365(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (bool)0, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[],System.Boolean)
extern "C"  TimeZoneInfo_t161405854 * TimeZoneInfo_CreateCustomTimeZone_m1792093365 (RuntimeObject * __this /* static, unused */, String_t* ___id0, TimeSpan_t881159249  ___baseUtcOffset1, String_t* ___displayName2, String_t* ___standardDisplayName3, String_t* ___daylightDisplayName4, AdjustmentRuleU5BU5D_t1469475992* ___adjustmentRules5, bool ___disableDaylightSavingTime6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_CreateCustomTimeZone_m1792093365_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___id0;
		TimeSpan_t881159249  L_1 = ___baseUtcOffset1;
		String_t* L_2 = ___displayName2;
		String_t* L_3 = ___standardDisplayName3;
		String_t* L_4 = ___daylightDisplayName4;
		AdjustmentRuleU5BU5D_t1469475992* L_5 = ___adjustmentRules5;
		bool L_6 = ___disableDaylightSavingTime6;
		TimeZoneInfo_t161405854 * L_7 = (TimeZoneInfo_t161405854 *)il2cpp_codegen_object_new(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo__ctor_m1956250117(L_7, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Boolean System.TimeZoneInfo::Equals(System.TimeZoneInfo)
extern "C"  bool TimeZoneInfo_Equals_m832693802 (TimeZoneInfo_t161405854 * __this, TimeZoneInfo_t161405854 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_Equals_m832693802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		TimeZoneInfo_t161405854 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		TimeZoneInfo_t161405854 * L_1 = ___other0;
		String_t* L_2 = TimeZoneInfo_get_Id_m3716673190(L_1, /*hidden argument*/NULL);
		String_t* L_3 = TimeZoneInfo_get_Id_m3716673190(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		TimeZoneInfo_t161405854 * L_5 = ___other0;
		bool L_6 = TimeZoneInfo_HasSameRules_m697432081(__this, L_5, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B5_0 = 0;
	}

IL_0028:
	{
		return (bool)G_B5_0;
	}
}
// System.TimeZoneInfo System.TimeZoneInfo::FindSystemTimeZoneByFileName(System.String,System.String)
extern "C"  TimeZoneInfo_t161405854 * TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268 (RuntimeObject * __this /* static, unused */, String_t* ___id0, String_t* ___filepath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	FileStream_t4292183065 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	TimeZoneInfo_t161405854 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___filepath1;
		bool L_1 = File_Exists_m3943585060(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		TimeZoneNotFoundException_t171073523 * L_2 = (TimeZoneNotFoundException_t171073523 *)il2cpp_codegen_object_new(TimeZoneNotFoundException_t171073523_il2cpp_TypeInfo_var);
		TimeZoneNotFoundException__ctor_m2966108609(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268_RuntimeMethod_var);
	}

IL_0011:
	{
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16384)));
		String_t* L_3 = ___filepath1;
		FileStream_t4292183065 * L_4 = File_OpenRead_m2936789020(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		FileStream_t4292183065 * L_5 = V_2;
		ByteU5BU5D_t4116647657* L_6 = V_0;
		int32_t L_7 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(16 /* System.Int32 System.IO.FileStream::Read(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, ((int32_t)16384));
		V_1 = L_7;
		IL2CPP_LEAVE(0x43, FINALLY_0036);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		{
			FileStream_t4292183065 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_0042;
			}
		}

IL_003c:
		{
			FileStream_t4292183065 * L_9 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_9);
		}

IL_0042:
		{
			IL2CPP_END_FINALLY(54)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0043:
	{
		ByteU5BU5D_t4116647657* L_10 = V_0;
		int32_t L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		bool L_12 = TimeZoneInfo_ValidTZFile_m3505397244(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_005a;
		}
	}
	{
		InvalidTimeZoneException_t4066718130 * L_13 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
		InvalidTimeZoneException__ctor_m4131156752(L_13, _stringLiteral2277405654, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268_RuntimeMethod_var);
	}

IL_005a:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_14 = ___id0;
			ByteU5BU5D_t4116647657* L_15 = V_0;
			int32_t L_16 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
			TimeZoneInfo_t161405854 * L_17 = TimeZoneInfo_ParseTZBuffer_m3851257210(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/NULL);
			V_4 = L_17;
			goto IL_0080;
		}

IL_0069:
		{
			; // IL_0069: leave IL_0080
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006e;
		throw e;
	}

CATCH_006e:
	{ // begin catch(System.Exception)
		{
			V_3 = ((Exception_t *)__exception_local);
			Exception_t * L_18 = V_3;
			String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_18);
			InvalidTimeZoneException_t4066718130 * L_20 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
			InvalidTimeZoneException__ctor_m4131156752(L_20, L_19, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_20,TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268_RuntimeMethod_var);
		}

IL_007b:
		{
			goto IL_0080;
		}
	} // end catch (depth: 1)

IL_0080:
	{
		TimeZoneInfo_t161405854 * L_21 = V_4;
		return L_21;
	}
}
// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::GetAdjustmentRules()
extern "C"  AdjustmentRuleU5BU5D_t1469475992* TimeZoneInfo_GetAdjustmentRules_m496065111 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_GetAdjustmentRules_m496065111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_disableDaylightSavingTime_6();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		return ((AdjustmentRuleU5BU5D_t1469475992*)SZArrayNew(AdjustmentRuleU5BU5D_t1469475992_il2cpp_TypeInfo_var, (uint32_t)0));
	}

IL_0012:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_1 = __this->get_adjustmentRules_9();
		RuntimeObject * L_2 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((AdjustmentRuleU5BU5D_t1469475992*)Castclass((RuntimeObject*)L_2, AdjustmentRuleU5BU5D_t1469475992_il2cpp_TypeInfo_var));
	}
}
// System.Int32 System.TimeZoneInfo::GetHashCode()
extern "C"  int32_t TimeZoneInfo_GetHashCode_m3205587869 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	AdjustmentRule_t74449909 * V_1 = NULL;
	AdjustmentRuleU5BU5D_t1469475992* V_2 = NULL;
	int32_t V_3 = 0;
	{
		String_t* L_0 = TimeZoneInfo_get_Id_m3716673190(__this, /*hidden argument*/NULL);
		int32_t L_1 = String_GetHashCode_m1906374149(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AdjustmentRuleU5BU5D_t1469475992* L_2 = TimeZoneInfo_GetAdjustmentRules_m496065111(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		V_3 = 0;
		goto IL_002b;
	}

IL_001a:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		AdjustmentRule_t74449909 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		int32_t L_7 = V_0;
		AdjustmentRule_t74449909 * L_8 = V_1;
		int32_t L_9 = AdjustmentRule_GetHashCode_m3136432906(L_8, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_7^(int32_t)L_9));
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_11 = V_3;
		AdjustmentRuleU5BU5D_t1469475992* L_12 = V_2;
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Void System.TimeZoneInfo::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TimeZoneInfo_GetObjectData_m2434535635 (TimeZoneInfo_t161405854 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_GetObjectData_m2434535635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,TimeZoneInfo_GetObjectData_m2434535635_RuntimeMethod_var);
	}
}
// System.TimeSpan System.TimeZoneInfo::GetUtcOffset(System.DateTime)
extern "C"  TimeSpan_t881159249  TimeZoneInfo_GetUtcOffset_m3780875423 (TimeZoneInfo_t161405854 * __this, DateTime_t3738529785  ___dateTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_GetUtcOffset_m3780875423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdjustmentRule_t74449909 * V_0 = NULL;
	{
		DateTime_t3738529785  L_0 = ___dateTime0;
		bool L_1 = TimeZoneInfo_IsDaylightSavingTime_m2475480634(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		DateTime_t3738529785  L_2 = ___dateTime0;
		AdjustmentRule_t74449909 * L_3 = TimeZoneInfo_GetApplicableRule_m3152592286(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		TimeSpan_t881159249  L_4 = TimeZoneInfo_get_BaseUtcOffset_m808429276(__this, /*hidden argument*/NULL);
		AdjustmentRule_t74449909 * L_5 = V_0;
		TimeSpan_t881159249  L_6 = AdjustmentRule_get_DaylightDelta_m2159274191(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_7 = TimeSpan_op_Addition_m672714982(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0026:
	{
		TimeSpan_t881159249  L_8 = TimeZoneInfo_get_BaseUtcOffset_m808429276(__this, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean System.TimeZoneInfo::HasSameRules(System.TimeZoneInfo)
extern "C"  bool TimeZoneInfo_HasSameRules_m697432081 (TimeZoneInfo_t161405854 * __this, TimeZoneInfo_t161405854 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_HasSameRules_m697432081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		TimeZoneInfo_t161405854 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,TimeZoneInfo_HasSameRules_m697432081_RuntimeMethod_var);
	}

IL_0011:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_2 = __this->get_adjustmentRules_9();
		TimeZoneInfo_t161405854 * L_3 = ___other0;
		AdjustmentRuleU5BU5D_t1469475992* L_4 = L_3->get_adjustmentRules_9();
		if ((((int32_t)((((RuntimeObject*)(AdjustmentRuleU5BU5D_t1469475992*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)((((RuntimeObject*)(AdjustmentRuleU5BU5D_t1469475992*)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0))))
		{
			goto IL_002a;
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_5 = __this->get_adjustmentRules_9();
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		TimeSpan_t881159249  L_6 = TimeZoneInfo_get_BaseUtcOffset_m808429276(__this, /*hidden argument*/NULL);
		TimeZoneInfo_t161405854 * L_7 = ___other0;
		TimeSpan_t881159249  L_8 = TimeZoneInfo_get_BaseUtcOffset_m808429276(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		bool L_9 = TimeSpan_op_Inequality_m2467851530(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_004f:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_10 = __this->get_adjustmentRules_9();
		TimeZoneInfo_t161405854 * L_11 = ___other0;
		AdjustmentRuleU5BU5D_t1469475992* L_12 = L_11->get_adjustmentRules_9();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0066;
		}
	}
	{
		return (bool)0;
	}

IL_0066:
	{
		V_0 = 0;
		goto IL_008d;
	}

IL_006d:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_13 = __this->get_adjustmentRules_9();
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		AdjustmentRule_t74449909 * L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		TimeZoneInfo_t161405854 * L_17 = ___other0;
		AdjustmentRuleU5BU5D_t1469475992* L_18 = L_17->get_adjustmentRules_9();
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		AdjustmentRule_t74449909 * L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22 = AdjustmentRule_Equals_m4095462908(L_16, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0089;
		}
	}
	{
		return (bool)0;
	}

IL_0089:
	{
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_008d:
	{
		int32_t L_24 = V_0;
		AdjustmentRuleU5BU5D_t1469475992* L_25 = __this->get_adjustmentRules_9();
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_006d;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean System.TimeZoneInfo::IsDaylightSavingTime(System.DateTime)
extern "C"  bool TimeZoneInfo_IsDaylightSavingTime_m2475480634 (TimeZoneInfo_t161405854 * __this, DateTime_t3738529785  ___dateTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_IsDaylightSavingTime_m2475480634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdjustmentRule_t74449909 * V_0 = NULL;
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	DateTime_t3738529785  V_2;
	memset(&V_2, 0, sizeof(V_2));
	TransitionTime_t449921781  V_3;
	memset(&V_3, 0, sizeof(V_3));
	TransitionTime_t449921781  V_4;
	memset(&V_4, 0, sizeof(V_4));
	int32_t G_B18_0 = 0;
	TransitionTime_t449921781  G_B18_1;
	memset(&G_B18_1, 0, sizeof(G_B18_1));
	int32_t G_B17_0 = 0;
	TransitionTime_t449921781  G_B17_1;
	memset(&G_B17_1, 0, sizeof(G_B17_1));
	int32_t G_B19_0 = 0;
	int32_t G_B19_1 = 0;
	TransitionTime_t449921781  G_B19_2;
	memset(&G_B19_2, 0, sizeof(G_B19_2));
	int32_t G_B24_0 = 0;
	{
		int32_t L_0 = DateTime_get_Kind_m2154871796((&___dateTime0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		DateTime_t3738529785  L_1 = ___dateTime0;
		bool L_2 = TimeZoneInfo_IsInvalidTime_m1886861930(__this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, _stringLiteral1574560297, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,TimeZoneInfo_IsDaylightSavingTime_m2475480634_RuntimeMethod_var);
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_4 = TimeZoneInfo_get_Utc_m4037366733(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(TimeZoneInfo_t161405854 *)__this) == ((RuntimeObject*)(TimeZoneInfo_t161405854 *)L_4))))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0031:
	{
		bool L_5 = TimeZoneInfo_get_SupportsDaylightSavingTime_m3644631779(__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_003e:
	{
		int32_t L_6 = DateTime_get_Kind_m2154871796((&___dateTime0), /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_7 = DateTime_get_Kind_m2154871796((&___dateTime0), /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_006a;
		}
	}

IL_0057:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_8 = TimeZoneInfo_get_Local_m3767312181(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(TimeZoneInfo_t161405854 *)__this) == ((RuntimeObject*)(TimeZoneInfo_t161405854 *)L_8))))
		{
			goto IL_006a;
		}
	}
	{
		bool L_9 = DateTime_IsDaylightSavingTime_m2632700238((&___dateTime0), /*hidden argument*/NULL);
		return L_9;
	}

IL_006a:
	{
		int32_t L_10 = DateTime_get_Kind_m2154871796((&___dateTime0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0096;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_11 = TimeZoneInfo_get_Utc_m4037366733(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(TimeZoneInfo_t161405854 *)__this) == ((RuntimeObject*)(TimeZoneInfo_t161405854 *)L_11)))
		{
			goto IL_0096;
		}
	}
	{
		DateTime_t3738529785  L_12 = DateTime_ToUniversalTime_m1945318289((&___dateTime0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_13 = DateTime_SpecifyKind_m3332658812(NULL /*static, unused*/, L_12, 1, /*hidden argument*/NULL);
		bool L_14 = TimeZoneInfo_IsDaylightSavingTime_m2475480634(__this, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0096:
	{
		DateTime_t3738529785  L_15 = DateTime_get_Date_m46742767((&___dateTime0), /*hidden argument*/NULL);
		AdjustmentRule_t74449909 * L_16 = TimeZoneInfo_GetApplicableRule_m3152592286(__this, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		AdjustmentRule_t74449909 * L_17 = V_0;
		if (L_17)
		{
			goto IL_00ac;
		}
	}
	{
		return (bool)0;
	}

IL_00ac:
	{
		AdjustmentRule_t74449909 * L_18 = V_0;
		TransitionTime_t449921781  L_19 = AdjustmentRule_get_DaylightTransitionStart_m3488892433(L_18, /*hidden argument*/NULL);
		int32_t L_20 = DateTime_get_Year_m1184003812((&___dateTime0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_21 = TimeZoneInfo_TransitionPoint_m2194238407(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		AdjustmentRule_t74449909 * L_22 = V_0;
		TransitionTime_t449921781  L_23 = AdjustmentRule_get_DaylightTransitionEnd_m3747881060(L_22, /*hidden argument*/NULL);
		int32_t L_24 = DateTime_get_Year_m1184003812((&___dateTime0), /*hidden argument*/NULL);
		AdjustmentRule_t74449909 * L_25 = V_0;
		TransitionTime_t449921781  L_26 = AdjustmentRule_get_DaylightTransitionStart_m3488892433(L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		int32_t L_27 = TransitionTime_get_Month_m1950274531((&V_3), /*hidden argument*/NULL);
		AdjustmentRule_t74449909 * L_28 = V_0;
		TransitionTime_t449921781  L_29 = AdjustmentRule_get_DaylightTransitionEnd_m3747881060(L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		int32_t L_30 = TransitionTime_get_Month_m1950274531((&V_4), /*hidden argument*/NULL);
		G_B17_0 = L_24;
		G_B17_1 = L_23;
		if ((((int32_t)L_27) >= ((int32_t)L_30)))
		{
			G_B18_0 = L_24;
			G_B18_1 = L_23;
			goto IL_00f4;
		}
	}
	{
		G_B19_0 = 0;
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		goto IL_00f5;
	}

IL_00f4:
	{
		G_B19_0 = 1;
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
	}

IL_00f5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_31 = TimeZoneInfo_TransitionPoint_m2194238407(NULL /*static, unused*/, G_B19_2, ((int32_t)il2cpp_codegen_add((int32_t)G_B19_1, (int32_t)G_B19_0)), /*hidden argument*/NULL);
		V_2 = L_31;
		int32_t L_32 = DateTime_get_Kind_m2154871796((&___dateTime0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_012e;
		}
	}
	{
		DateTime_t3738529785  L_33 = V_1;
		TimeSpan_t881159249  L_34 = TimeZoneInfo_get_BaseUtcOffset_m808429276(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_35 = DateTime_op_Subtraction_m529926081(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		V_1 = L_35;
		DateTime_t3738529785  L_36 = V_2;
		TimeSpan_t881159249  L_37 = TimeZoneInfo_get_BaseUtcOffset_m808429276(__this, /*hidden argument*/NULL);
		AdjustmentRule_t74449909 * L_38 = V_0;
		TimeSpan_t881159249  L_39 = AdjustmentRule_get_DaylightDelta_m2159274191(L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_40 = TimeSpan_op_Addition_m672714982(NULL /*static, unused*/, L_37, L_39, /*hidden argument*/NULL);
		DateTime_t3738529785  L_41 = DateTime_op_Subtraction_m529926081(NULL /*static, unused*/, L_36, L_40, /*hidden argument*/NULL);
		V_2 = L_41;
	}

IL_012e:
	{
		DateTime_t3738529785  L_42 = ___dateTime0;
		DateTime_t3738529785  L_43 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_44 = DateTime_op_GreaterThanOrEqual_m674703316(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0143;
		}
	}
	{
		DateTime_t3738529785  L_45 = ___dateTime0;
		DateTime_t3738529785  L_46 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_47 = DateTime_op_LessThan_m2497205152(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		G_B24_0 = ((int32_t)(L_47));
		goto IL_0144;
	}

IL_0143:
	{
		G_B24_0 = 0;
	}

IL_0144:
	{
		return (bool)G_B24_0;
	}
}
// System.Boolean System.TimeZoneInfo::IsInvalidTime(System.DateTime)
extern "C"  bool TimeZoneInfo_IsInvalidTime_m1886861930 (TimeZoneInfo_t161405854 * __this, DateTime_t3738529785  ___dateTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_IsInvalidTime_m1886861930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdjustmentRule_t74449909 * V_0 = NULL;
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = DateTime_get_Kind_m2154871796((&___dateTime0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		int32_t L_1 = DateTime_get_Kind_m2154871796((&___dateTime0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_2 = TimeZoneInfo_get_Local_m3767312181(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(TimeZoneInfo_t161405854 *)__this) == ((RuntimeObject*)(TimeZoneInfo_t161405854 *)L_2)))
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		DateTime_t3738529785  L_3 = ___dateTime0;
		AdjustmentRule_t74449909 * L_4 = TimeZoneInfo_GetApplicableRule_m3152592286(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		AdjustmentRule_t74449909 * L_5 = V_0;
		TransitionTime_t449921781  L_6 = AdjustmentRule_get_DaylightTransitionStart_m3488892433(L_5, /*hidden argument*/NULL);
		int32_t L_7 = DateTime_get_Year_m1184003812((&___dateTime0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_8 = TimeZoneInfo_TransitionPoint_m2194238407(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		DateTime_t3738529785  L_9 = ___dateTime0;
		DateTime_t3738529785  L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_11 = DateTime_op_GreaterThanOrEqual_m674703316(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		DateTime_t3738529785  L_12 = ___dateTime0;
		DateTime_t3738529785  L_13 = V_1;
		AdjustmentRule_t74449909 * L_14 = V_0;
		TimeSpan_t881159249  L_15 = AdjustmentRule_get_DaylightDelta_m2159274191(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_16 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		bool L_17 = DateTime_op_LessThan_m2497205152(NULL /*static, unused*/, L_12, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0069;
		}
	}
	{
		return (bool)1;
	}

IL_0069:
	{
		return (bool)0;
	}
}
// System.Void System.TimeZoneInfo::OnDeserialization(System.Object)
extern "C"  void TimeZoneInfo_OnDeserialization_m1663302437 (TimeZoneInfo_t161405854 * __this, RuntimeObject * ___sender0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_OnDeserialization_m1663302437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,TimeZoneInfo_OnDeserialization_m1663302437_RuntimeMethod_var);
	}
}
// System.String System.TimeZoneInfo::ToString()
extern "C"  String_t* TimeZoneInfo_ToString_m2855824657 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = TimeZoneInfo_get_DisplayName_m3871974074(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.TimeZoneInfo/AdjustmentRule System.TimeZoneInfo::GetApplicableRule(System.DateTime)
extern "C"  AdjustmentRule_t74449909 * TimeZoneInfo_GetApplicableRule_m3152592286 (TimeZoneInfo_t161405854 * __this, DateTime_t3738529785  ___dateTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_GetApplicableRule_m3152592286_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AdjustmentRule_t74449909 * V_1 = NULL;
	AdjustmentRuleU5BU5D_t1469475992* V_2 = NULL;
	int32_t V_3 = 0;
	{
		DateTime_t3738529785  L_0 = ___dateTime0;
		V_0 = L_0;
		int32_t L_1 = DateTime_get_Kind_m2154871796((&___dateTime0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_2 = TimeZoneInfo_get_Local_m3767312181(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(TimeZoneInfo_t161405854 *)__this) == ((RuntimeObject*)(TimeZoneInfo_t161405854 *)L_2)))
		{
			goto IL_002d;
		}
	}
	{
		DateTime_t3738529785  L_3 = DateTime_ToUniversalTime_m1945318289((&V_0), /*hidden argument*/NULL);
		TimeSpan_t881159249  L_4 = TimeZoneInfo_get_BaseUtcOffset_m808429276(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_5 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_002d:
	{
		int32_t L_6 = DateTime_get_Kind_m2154871796((&___dateTime0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0052;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_7 = TimeZoneInfo_get_Utc_m4037366733(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(TimeZoneInfo_t161405854 *)__this) == ((RuntimeObject*)(TimeZoneInfo_t161405854 *)L_7)))
		{
			goto IL_0052;
		}
	}
	{
		DateTime_t3738529785  L_8 = V_0;
		TimeSpan_t881159249  L_9 = TimeZoneInfo_get_BaseUtcOffset_m808429276(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_10 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_0052:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_11 = __this->get_adjustmentRules_9();
		V_2 = L_11;
		V_3 = 0;
		goto IL_009f;
	}

IL_0060:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_12 = V_2;
		int32_t L_13 = V_3;
		int32_t L_14 = L_13;
		AdjustmentRule_t74449909 * L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
		AdjustmentRule_t74449909 * L_16 = V_1;
		DateTime_t3738529785  L_17 = AdjustmentRule_get_DateStart_m2176962503(L_16, /*hidden argument*/NULL);
		DateTime_t3738529785  L_18 = DateTime_get_Date_m46742767((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_19 = DateTime_op_GreaterThan_m3768590082(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		return (AdjustmentRule_t74449909 *)NULL;
	}

IL_007d:
	{
		AdjustmentRule_t74449909 * L_20 = V_1;
		DateTime_t3738529785  L_21 = AdjustmentRule_get_DateEnd_m3164615624(L_20, /*hidden argument*/NULL);
		DateTime_t3738529785  L_22 = DateTime_get_Date_m46742767((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_23 = DateTime_op_LessThan_m2497205152(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0099;
		}
	}
	{
		goto IL_009b;
	}

IL_0099:
	{
		AdjustmentRule_t74449909 * L_24 = V_1;
		return L_24;
	}

IL_009b:
	{
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_009f:
	{
		int32_t L_26 = V_3;
		AdjustmentRuleU5BU5D_t1469475992* L_27 = V_2;
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_27)->max_length)))))))
		{
			goto IL_0060;
		}
	}
	{
		return (AdjustmentRule_t74449909 *)NULL;
	}
}
// System.DateTime System.TimeZoneInfo::TransitionPoint(System.TimeZoneInfo/TransitionTime,System.Int32)
extern "C"  DateTime_t3738529785  TimeZoneInfo_TransitionPoint_m2194238407 (RuntimeObject * __this /* static, unused */, TransitionTime_t449921781  ___transition0, int32_t ___year1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_TransitionPoint_m2194238407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DateTime_t3738529785  V_2;
	memset(&V_2, 0, sizeof(V_2));
	DateTime_t3738529785  V_3;
	memset(&V_3, 0, sizeof(V_3));
	DateTime_t3738529785  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		bool L_0 = TransitionTime_get_IsFixedDateRule_m1557984015((&___transition0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = ___year1;
		int32_t L_2 = TransitionTime_get_Month_m1950274531((&___transition0), /*hidden argument*/NULL);
		int32_t L_3 = TransitionTime_get_Day_m1297598877((&___transition0), /*hidden argument*/NULL);
		DateTime_t3738529785  L_4;
		memset(&L_4, 0, sizeof(L_4));
		DateTime__ctor_m12900168((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		DateTime_t3738529785  L_5 = TransitionTime_get_TimeOfDay_m2066448705((&___transition0), /*hidden argument*/NULL);
		V_2 = L_5;
		TimeSpan_t881159249  L_6 = DateTime_get_TimeOfDay_m82064893((&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_7 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0035:
	{
		int32_t L_8 = ___year1;
		int32_t L_9 = TransitionTime_get_Month_m1950274531((&___transition0), /*hidden argument*/NULL);
		DateTime__ctor_m12900168((&V_3), L_8, L_9, 1, /*hidden argument*/NULL);
		int32_t L_10 = DateTime_get_DayOfWeek_m2326490739((&V_3), /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11 = TransitionTime_get_Week_m3334751603((&___transition0), /*hidden argument*/NULL);
		int32_t L_12 = TransitionTime_get_DayOfWeek_m3191031940((&___transition0), /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)), (int32_t)7)))), (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13))%(int32_t)7))));
		int32_t L_14 = V_1;
		int32_t L_15 = ___year1;
		int32_t L_16 = TransitionTime_get_Month_m1950274531((&___transition0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		int32_t L_17 = DateTime_DaysInMonth_m2587936260(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_14) <= ((int32_t)L_17)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)7));
	}

IL_007e:
	{
		int32_t L_19 = ___year1;
		int32_t L_20 = TransitionTime_get_Month_m1950274531((&___transition0), /*hidden argument*/NULL);
		int32_t L_21 = V_1;
		DateTime_t3738529785  L_22;
		memset(&L_22, 0, sizeof(L_22));
		DateTime__ctor_m12900168((&L_22), L_19, L_20, L_21, /*hidden argument*/NULL);
		DateTime_t3738529785  L_23 = TransitionTime_get_TimeOfDay_m2066448705((&___transition0), /*hidden argument*/NULL);
		V_4 = L_23;
		TimeSpan_t881159249  L_24 = DateTime_get_TimeOfDay_m82064893((&V_4), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_25 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
// System.Boolean System.TimeZoneInfo::ValidTZFile(System.Byte[],System.Int32)
extern "C"  bool TimeZoneInfo_ValidTZFile_m3505397244 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_ValidTZFile_m3505397244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_001c;
	}

IL_000d:
	{
		StringBuilder_t * L_1 = V_0;
		ByteU5BU5D_t4116647657* L_2 = ___buffer0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		StringBuilder_Append_m2383614642(L_1, (((int32_t)((uint16_t)L_5))), /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001c:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)4)))
		{
			goto IL_000d;
		}
	}
	{
		StringBuilder_t * L_8 = V_0;
		String_t* L_9 = StringBuilder_ToString_m3317489284(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_9, _stringLiteral3992013369, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_003a:
	{
		int32_t L_11 = ___length1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)16384))))
		{
			goto IL_0047;
		}
	}
	{
		return (bool)0;
	}

IL_0047:
	{
		return (bool)1;
	}
}
// System.Int32 System.TimeZoneInfo::SwapInt32(System.Int32)
extern "C"  int32_t TimeZoneInfo_SwapInt32_m4051795925 (RuntimeObject * __this /* static, unused */, int32_t ___i0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___i0;
		int32_t L_1 = ___i0;
		int32_t L_2 = ___i0;
		int32_t L_3 = ___i0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)255)))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1>>(int32_t)8))&(int32_t)((int32_t)65280)))))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)8))&(int32_t)((int32_t)16711680)))))|(int32_t)((int32_t)((int32_t)L_3<<(int32_t)((int32_t)24)))));
	}
}
// System.Int32 System.TimeZoneInfo::ReadBigEndianInt32(System.Byte[],System.Int32)
extern "C"  int32_t TimeZoneInfo_ReadBigEndianInt32_m3367804058 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___start1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_ReadBigEndianInt32_m3367804058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		int32_t L_1 = ___start1;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		int32_t L_2 = BitConverter_ToInt32_m1089563119(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (L_3)
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
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		int32_t L_6 = TimeZoneInfo_SwapInt32_m4051795925(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.TimeZoneInfo System.TimeZoneInfo::ParseTZBuffer(System.String,System.Byte[],System.Int32)
extern "C"  TimeZoneInfo_t161405854 * TimeZoneInfo_ParseTZBuffer_m3851257210 (RuntimeObject * __this /* static, unused */, String_t* ___id0, ByteU5BU5D_t4116647657* ___buffer1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_ParseTZBuffer_m3851257210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Dictionary_2_t736164020 * V_6 = NULL;
	Dictionary_2_t1396226614 * V_7 = NULL;
	List_1_t1770412147 * V_8 = NULL;
	TimeSpan_t881159249  V_9;
	memset(&V_9, 0, sizeof(V_9));
	TimeSpan_t881159249  V_10;
	memset(&V_10, 0, sizeof(V_10));
	String_t* V_11 = NULL;
	String_t* V_12 = NULL;
	bool V_13 = false;
	DateTime_t3738529785  V_14;
	memset(&V_14, 0, sizeof(V_14));
	List_1_t1546524651 * V_15 = NULL;
	int32_t V_16 = 0;
	KeyValuePair_2_t298337405  V_17;
	memset(&V_17, 0, sizeof(V_17));
	DateTime_t3738529785  V_18;
	memset(&V_18, 0, sizeof(V_18));
	TimeType_t2507513283  V_19;
	memset(&V_19, 0, sizeof(V_19));
	DateTime_t3738529785  V_20;
	memset(&V_20, 0, sizeof(V_20));
	DateTime_t3738529785  V_21;
	memset(&V_21, 0, sizeof(V_21));
	DateTime_t3738529785  V_22;
	memset(&V_22, 0, sizeof(V_22));
	TransitionTime_t449921781  V_23;
	memset(&V_23, 0, sizeof(V_23));
	TransitionTime_t449921781  V_24;
	memset(&V_24, 0, sizeof(V_24));
	TimeType_t2507513283  V_25;
	memset(&V_25, 0, sizeof(V_25));
	TimeType_t2507513283  V_26;
	memset(&V_26, 0, sizeof(V_26));
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer1;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		int32_t L_1 = TimeZoneInfo_ReadBigEndianInt32_m3367804058(NULL /*static, unused*/, L_0, ((int32_t)20), /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t4116647657* L_2 = ___buffer1;
		int32_t L_3 = TimeZoneInfo_ReadBigEndianInt32_m3367804058(NULL /*static, unused*/, L_2, ((int32_t)24), /*hidden argument*/NULL);
		V_1 = L_3;
		ByteU5BU5D_t4116647657* L_4 = ___buffer1;
		int32_t L_5 = TimeZoneInfo_ReadBigEndianInt32_m3367804058(NULL /*static, unused*/, L_4, ((int32_t)28), /*hidden argument*/NULL);
		V_2 = L_5;
		ByteU5BU5D_t4116647657* L_6 = ___buffer1;
		int32_t L_7 = TimeZoneInfo_ReadBigEndianInt32_m3367804058(NULL /*static, unused*/, L_6, ((int32_t)32), /*hidden argument*/NULL);
		V_3 = L_7;
		ByteU5BU5D_t4116647657* L_8 = ___buffer1;
		int32_t L_9 = TimeZoneInfo_ReadBigEndianInt32_m3367804058(NULL /*static, unused*/, L_8, ((int32_t)36), /*hidden argument*/NULL);
		V_4 = L_9;
		ByteU5BU5D_t4116647657* L_10 = ___buffer1;
		int32_t L_11 = TimeZoneInfo_ReadBigEndianInt32_m3367804058(NULL /*static, unused*/, L_10, ((int32_t)40), /*hidden argument*/NULL);
		V_5 = L_11;
		int32_t L_12 = ___length2;
		int32_t L_13 = V_3;
		int32_t L_14 = V_4;
		int32_t L_15 = V_5;
		int32_t L_16 = V_2;
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)44), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)5)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)6)))), (int32_t)L_15)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)8)))), (int32_t)L_17)), (int32_t)L_18)))))
		{
			goto IL_005a;
		}
	}
	{
		InvalidTimeZoneException_t4066718130 * L_19 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
		InvalidTimeZoneException__ctor_m6234683(L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19,TimeZoneInfo_ParseTZBuffer_m3851257210_RuntimeMethod_var);
	}

IL_005a:
	{
		ByteU5BU5D_t4116647657* L_20 = ___buffer1;
		int32_t L_21 = V_3;
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		int32_t L_24 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		Dictionary_2_t736164020 * L_25 = TimeZoneInfo_ParseAbbreviations_m1471889884(NULL /*static, unused*/, L_20, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)44), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_21)))), (int32_t)L_22)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)6, (int32_t)L_23)))), L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		ByteU5BU5D_t4116647657* L_26 = ___buffer1;
		int32_t L_27 = V_3;
		int32_t L_28 = V_3;
		int32_t L_29 = V_4;
		Dictionary_2_t736164020 * L_30 = V_6;
		Dictionary_2_t1396226614 * L_31 = TimeZoneInfo_ParseTimesTypes_m1754682716(NULL /*static, unused*/, L_26, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)44), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_27)))), (int32_t)L_28)), L_29, L_30, /*hidden argument*/NULL);
		V_7 = L_31;
		ByteU5BU5D_t4116647657* L_32 = ___buffer1;
		int32_t L_33 = V_3;
		Dictionary_2_t1396226614 * L_34 = V_7;
		List_1_t1770412147 * L_35 = TimeZoneInfo_ParseTransitions_m542357583(NULL /*static, unused*/, L_32, ((int32_t)44), L_33, L_34, /*hidden argument*/NULL);
		V_8 = L_35;
		Dictionary_2_t1396226614 * L_36 = V_7;
		int32_t L_37 = Dictionary_2_get_Count_m4064694223(L_36, /*hidden argument*/Dictionary_2_get_Count_m4064694223_RuntimeMethod_var);
		if (L_37)
		{
			goto IL_00a4;
		}
	}
	{
		InvalidTimeZoneException_t4066718130 * L_38 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
		InvalidTimeZoneException__ctor_m6234683(L_38, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38,TimeZoneInfo_ParseTZBuffer_m3851257210_RuntimeMethod_var);
	}

IL_00a4:
	{
		Dictionary_2_t1396226614 * L_39 = V_7;
		int32_t L_40 = Dictionary_2_get_Count_m4064694223(L_39, /*hidden argument*/Dictionary_2_get_Count_m4064694223_RuntimeMethod_var);
		if ((!(((uint32_t)L_40) == ((uint32_t)1))))
		{
			goto IL_00cd;
		}
	}
	{
		Dictionary_2_t1396226614 * L_41 = V_7;
		TimeType_t2507513283  L_42 = Dictionary_2_get_Item_m2315657164(L_41, 0, /*hidden argument*/Dictionary_2_get_Item_m2315657164_RuntimeMethod_var);
		V_26 = L_42;
		bool L_43 = (&V_26)->get_IsDst_1();
		if (!L_43)
		{
			goto IL_00cd;
		}
	}
	{
		InvalidTimeZoneException_t4066718130 * L_44 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
		InvalidTimeZoneException__ctor_m6234683(L_44, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44,TimeZoneInfo_ParseTZBuffer_m3851257210_RuntimeMethod_var);
	}

IL_00cd:
	{
		TimeSpan__ctor_m1896986612((&V_9), (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		TimeSpan__ctor_m1896986612((&V_10), (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		V_11 = (String_t*)NULL;
		V_12 = (String_t*)NULL;
		V_13 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_45 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MinValue_3();
		V_14 = L_45;
		List_1_t1546524651 * L_46 = (List_1_t1546524651 *)il2cpp_codegen_object_new(List_1_t1546524651_il2cpp_TypeInfo_var);
		List_1__ctor_m27745599(L_46, /*hidden argument*/List_1__ctor_m27745599_RuntimeMethod_var);
		V_15 = L_46;
		V_16 = 0;
		goto IL_031d;
	}

IL_00fe:
	{
		List_1_t1770412147 * L_47 = V_8;
		int32_t L_48 = V_16;
		KeyValuePair_2_t298337405  L_49 = List_1_get_Item_m2470931760(L_47, L_48, /*hidden argument*/List_1_get_Item_m2470931760_RuntimeMethod_var);
		V_17 = L_49;
		DateTime_t3738529785  L_50 = KeyValuePair_2_get_Key_m2071921741((&V_17), /*hidden argument*/KeyValuePair_2_get_Key_m2071921741_RuntimeMethod_var);
		V_18 = L_50;
		TimeType_t2507513283  L_51 = KeyValuePair_2_get_Value_m3123410994((&V_17), /*hidden argument*/KeyValuePair_2_get_Value_m3123410994_RuntimeMethod_var);
		V_19 = L_51;
		bool L_52 = (&V_19)->get_IsDst_1();
		if (L_52)
		{
			goto IL_02c1;
		}
	}
	{
		String_t* L_53 = V_11;
		String_t* L_54 = (&V_19)->get_Name_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_55 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_53, L_54, /*hidden argument*/NULL);
		if (L_55)
		{
			goto IL_014e;
		}
	}
	{
		double L_56 = TimeSpan_get_TotalSeconds_m4083325051((&V_9), /*hidden argument*/NULL);
		int32_t L_57 = (&V_19)->get_Offset_0();
		if ((((double)L_56) == ((double)(((double)((double)L_57))))))
		{
			goto IL_0174;
		}
	}

IL_014e:
	{
		String_t* L_58 = (&V_19)->get_Name_2();
		V_11 = L_58;
		V_12 = (String_t*)NULL;
		int32_t L_59 = (&V_19)->get_Offset_0();
		TimeSpan__ctor_m3689759052((&V_9), 0, 0, L_59, /*hidden argument*/NULL);
		List_1_t1546524651 * L_60 = (List_1_t1546524651 *)il2cpp_codegen_object_new(List_1_t1546524651_il2cpp_TypeInfo_var);
		List_1__ctor_m27745599(L_60, /*hidden argument*/List_1__ctor_m27745599_RuntimeMethod_var);
		V_15 = L_60;
		V_13 = (bool)0;
	}

IL_0174:
	{
		bool L_61 = V_13;
		if (!L_61)
		{
			goto IL_02b9;
		}
	}
	{
		DateTime_t3738529785  L_62 = V_14;
		TimeSpan_t881159249  L_63 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_64 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_62, L_63, /*hidden argument*/NULL);
		V_14 = L_64;
		DateTime_t3738529785  L_65 = V_18;
		TimeSpan_t881159249  L_66 = V_9;
		DateTime_t3738529785  L_67 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_65, L_66, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_68 = V_10;
		DateTime_t3738529785  L_69 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_67, L_68, /*hidden argument*/NULL);
		V_20 = L_69;
		DateTime_t3738529785  L_70 = DateTime_get_Date_m46742767((&V_20), /*hidden argument*/NULL);
		int32_t L_71 = DateTime_get_Year_m1184003812((&V_20), /*hidden argument*/NULL);
		DateTime_t3738529785  L_72;
		memset(&L_72, 0, sizeof(L_72));
		DateTime__ctor_m12900168((&L_72), L_71, 1, 1, /*hidden argument*/NULL);
		bool L_73 = DateTime_op_Equality_m1022058599(NULL /*static, unused*/, L_70, L_72, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_01dc;
		}
	}
	{
		int32_t L_74 = DateTime_get_Year_m1184003812((&V_20), /*hidden argument*/NULL);
		int32_t L_75 = DateTime_get_Year_m1184003812((&V_14), /*hidden argument*/NULL);
		if ((((int32_t)L_74) <= ((int32_t)L_75)))
		{
			goto IL_01dc;
		}
	}
	{
		DateTime_t3738529785  L_76 = V_20;
		TimeSpan_t881159249  L_77;
		memset(&L_77, 0, sizeof(L_77));
		TimeSpan__ctor_m3689759052((&L_77), ((int32_t)24), 0, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_78 = DateTime_op_Subtraction_m529926081(NULL /*static, unused*/, L_76, L_77, /*hidden argument*/NULL);
		V_20 = L_78;
	}

IL_01dc:
	{
		int32_t L_79 = DateTime_get_Month_m1566006993((&V_14), /*hidden argument*/NULL);
		if ((((int32_t)L_79) >= ((int32_t)7)))
		{
			goto IL_01fe;
		}
	}
	{
		int32_t L_80 = DateTime_get_Year_m1184003812((&V_14), /*hidden argument*/NULL);
		DateTime__ctor_m12900168((&V_21), L_80, 1, 1, /*hidden argument*/NULL);
		goto IL_020e;
	}

IL_01fe:
	{
		int32_t L_81 = DateTime_get_Year_m1184003812((&V_14), /*hidden argument*/NULL);
		DateTime__ctor_m12900168((&V_21), L_81, 7, 1, /*hidden argument*/NULL);
	}

IL_020e:
	{
		int32_t L_82 = DateTime_get_Month_m1566006993((&V_20), /*hidden argument*/NULL);
		if ((((int32_t)L_82) < ((int32_t)7)))
		{
			goto IL_0232;
		}
	}
	{
		int32_t L_83 = DateTime_get_Year_m1184003812((&V_20), /*hidden argument*/NULL);
		DateTime__ctor_m12900168((&V_22), L_83, ((int32_t)12), ((int32_t)31), /*hidden argument*/NULL);
		goto IL_0243;
	}

IL_0232:
	{
		int32_t L_84 = DateTime_get_Year_m1184003812((&V_20), /*hidden argument*/NULL);
		DateTime__ctor_m12900168((&V_22), L_84, 6, ((int32_t)30), /*hidden argument*/NULL);
	}

IL_0243:
	{
		DateTime_t3738529785  L_85;
		memset(&L_85, 0, sizeof(L_85));
		DateTime__ctor_m12900168((&L_85), 1, 1, 1, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_86 = DateTime_get_TimeOfDay_m82064893((&V_14), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_87 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_85, L_86, /*hidden argument*/NULL);
		int32_t L_88 = DateTime_get_Month_m1566006993((&V_14), /*hidden argument*/NULL);
		int32_t L_89 = DateTime_get_Day_m1623500273((&V_14), /*hidden argument*/NULL);
		TransitionTime_t449921781  L_90 = TransitionTime_CreateFixedDateRule_m488639024(NULL /*static, unused*/, L_87, L_88, L_89, /*hidden argument*/NULL);
		V_23 = L_90;
		DateTime_t3738529785  L_91;
		memset(&L_91, 0, sizeof(L_91));
		DateTime__ctor_m12900168((&L_91), 1, 1, 1, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_92 = DateTime_get_TimeOfDay_m82064893((&V_20), /*hidden argument*/NULL);
		DateTime_t3738529785  L_93 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_91, L_92, /*hidden argument*/NULL);
		int32_t L_94 = DateTime_get_Month_m1566006993((&V_20), /*hidden argument*/NULL);
		int32_t L_95 = DateTime_get_Day_m1623500273((&V_20), /*hidden argument*/NULL);
		TransitionTime_t449921781  L_96 = TransitionTime_CreateFixedDateRule_m488639024(NULL /*static, unused*/, L_93, L_94, L_95, /*hidden argument*/NULL);
		V_24 = L_96;
		TransitionTime_t449921781  L_97 = V_23;
		TransitionTime_t449921781  L_98 = V_24;
		bool L_99 = TransitionTime_op_Inequality_m1903374519(NULL /*static, unused*/, L_97, L_98, /*hidden argument*/NULL);
		if (!L_99)
		{
			goto IL_02b9;
		}
	}
	{
		List_1_t1546524651 * L_100 = V_15;
		DateTime_t3738529785  L_101 = V_21;
		DateTime_t3738529785  L_102 = V_22;
		TimeSpan_t881159249  L_103 = V_10;
		TransitionTime_t449921781  L_104 = V_23;
		TransitionTime_t449921781  L_105 = V_24;
		AdjustmentRule_t74449909 * L_106 = AdjustmentRule_CreateAdjustmentRule_m1020400594(NULL /*static, unused*/, L_101, L_102, L_103, L_104, L_105, /*hidden argument*/NULL);
		List_1_Add_m1698810603(L_100, L_106, /*hidden argument*/List_1_Add_m1698810603_RuntimeMethod_var);
	}

IL_02b9:
	{
		V_13 = (bool)0;
		goto IL_0317;
	}

IL_02c1:
	{
		String_t* L_107 = V_12;
		String_t* L_108 = (&V_19)->get_Name_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_109 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_107, L_108, /*hidden argument*/NULL);
		if (L_109)
		{
			goto IL_02f0;
		}
	}
	{
		double L_110 = TimeSpan_get_TotalSeconds_m4083325051((&V_10), /*hidden argument*/NULL);
		int32_t L_111 = (&V_19)->get_Offset_0();
		double L_112 = TimeSpan_get_TotalSeconds_m4083325051((&V_9), /*hidden argument*/NULL);
		if ((((double)L_110) == ((double)((double)il2cpp_codegen_subtract((double)(((double)((double)L_111))), (double)L_112)))))
		{
			goto IL_0310;
		}
	}

IL_02f0:
	{
		String_t* L_113 = (&V_19)->get_Name_2();
		V_12 = L_113;
		int32_t L_114 = (&V_19)->get_Offset_0();
		TimeSpan_t881159249  L_115;
		memset(&L_115, 0, sizeof(L_115));
		TimeSpan__ctor_m3689759052((&L_115), 0, 0, L_114, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_116 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_117 = TimeSpan_op_Subtraction_m3592306516(NULL /*static, unused*/, L_115, L_116, /*hidden argument*/NULL);
		V_10 = L_117;
	}

IL_0310:
	{
		DateTime_t3738529785  L_118 = V_18;
		V_14 = L_118;
		V_13 = (bool)1;
	}

IL_0317:
	{
		int32_t L_119 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)1));
	}

IL_031d:
	{
		int32_t L_120 = V_16;
		List_1_t1770412147 * L_121 = V_8;
		int32_t L_122 = List_1_get_Count_m947837680(L_121, /*hidden argument*/List_1_get_Count_m947837680_RuntimeMethod_var);
		if ((((int32_t)L_120) < ((int32_t)L_122)))
		{
			goto IL_00fe;
		}
	}
	{
		List_1_t1546524651 * L_123 = V_15;
		int32_t L_124 = List_1_get_Count_m2451877167(L_123, /*hidden argument*/List_1_get_Count_m2451877167_RuntimeMethod_var);
		if (L_124)
		{
			goto IL_036d;
		}
	}
	{
		Dictionary_2_t1396226614 * L_125 = V_7;
		TimeType_t2507513283  L_126 = Dictionary_2_get_Item_m2315657164(L_125, 0, /*hidden argument*/Dictionary_2_get_Item_m2315657164_RuntimeMethod_var);
		V_25 = L_126;
		String_t* L_127 = V_11;
		if (L_127)
		{
			goto IL_0361;
		}
	}
	{
		String_t* L_128 = (&V_25)->get_Name_2();
		V_11 = L_128;
		int32_t L_129 = (&V_25)->get_Offset_0();
		TimeSpan__ctor_m3689759052((&V_9), 0, 0, L_129, /*hidden argument*/NULL);
	}

IL_0361:
	{
		String_t* L_130 = ___id0;
		TimeSpan_t881159249  L_131 = V_9;
		String_t* L_132 = ___id0;
		String_t* L_133 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_134 = TimeZoneInfo_CreateCustomTimeZone_m4187381152(NULL /*static, unused*/, L_130, L_131, L_132, L_133, /*hidden argument*/NULL);
		return L_134;
	}

IL_036d:
	{
		String_t* L_135 = ___id0;
		TimeSpan_t881159249  L_136 = V_9;
		String_t* L_137 = ___id0;
		String_t* L_138 = V_11;
		String_t* L_139 = V_12;
		List_1_t1546524651 * L_140 = V_15;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		List_1_t1546524651 * L_141 = TimeZoneInfo_ValidateRules_m1341992406(NULL /*static, unused*/, L_140, /*hidden argument*/NULL);
		AdjustmentRuleU5BU5D_t1469475992* L_142 = List_1_ToArray_m3286616822(L_141, /*hidden argument*/List_1_ToArray_m3286616822_RuntimeMethod_var);
		TimeZoneInfo_t161405854 * L_143 = TimeZoneInfo_CreateCustomTimeZone_m3151472709(NULL /*static, unused*/, L_135, L_136, L_137, L_138, L_139, L_142, /*hidden argument*/NULL);
		return L_143;
	}
}
// System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule> System.TimeZoneInfo::ValidateRules(System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>)
extern "C"  List_1_t1546524651 * TimeZoneInfo_ValidateRules_m1341992406 (RuntimeObject * __this /* static, unused */, List_1_t1546524651 * ___adjustmentRules0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_ValidateRules_m1341992406_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdjustmentRule_t74449909 * V_0 = NULL;
	AdjustmentRule_t74449909 * V_1 = NULL;
	AdjustmentRuleU5BU5D_t1469475992* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = (AdjustmentRule_t74449909 *)NULL;
		List_1_t1546524651 * L_0 = ___adjustmentRules0;
		AdjustmentRuleU5BU5D_t1469475992* L_1 = List_1_ToArray_m3286616822(L_0, /*hidden argument*/List_1_ToArray_m3286616822_RuntimeMethod_var);
		V_2 = L_1;
		V_3 = 0;
		goto IL_003e;
	}

IL_0010:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_2 = V_2;
		int32_t L_3 = V_3;
		int32_t L_4 = L_3;
		AdjustmentRule_t74449909 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		AdjustmentRule_t74449909 * L_6 = V_0;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		AdjustmentRule_t74449909 * L_7 = V_0;
		DateTime_t3738529785  L_8 = AdjustmentRule_get_DateEnd_m3164615624(L_7, /*hidden argument*/NULL);
		AdjustmentRule_t74449909 * L_9 = V_1;
		DateTime_t3738529785  L_10 = AdjustmentRule_get_DateStart_m2176962503(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_11 = DateTime_op_GreaterThan_m3768590082(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0038;
		}
	}
	{
		List_1_t1546524651 * L_12 = ___adjustmentRules0;
		AdjustmentRule_t74449909 * L_13 = V_1;
		List_1_Remove_m1862724733(L_12, L_13, /*hidden argument*/List_1_Remove_m1862724733_RuntimeMethod_var);
	}

IL_0038:
	{
		AdjustmentRule_t74449909 * L_14 = V_1;
		V_0 = L_14;
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_16 = V_3;
		AdjustmentRuleU5BU5D_t1469475992* L_17 = V_2;
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		List_1_t1546524651 * L_18 = ___adjustmentRules0;
		return L_18;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.TimeZoneInfo::ParseAbbreviations(System.Byte[],System.Int32,System.Int32)
extern "C"  Dictionary_2_t736164020 * TimeZoneInfo_ParseAbbreviations_m1471889884 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_ParseAbbreviations_m1471889884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t736164020 * V_0 = NULL;
	int32_t V_1 = 0;
	StringBuilder_t * V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	int32_t V_5 = 0;
	{
		Dictionary_2_t736164020 * L_0 = (Dictionary_2_t736164020 *)il2cpp_codegen_object_new(Dictionary_2_t736164020_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4261191612(L_0, /*hidden argument*/Dictionary_2__ctor_m4261191612_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_1, /*hidden argument*/NULL);
		V_2 = L_1;
		V_3 = 0;
		goto IL_0083;
	}

IL_0015:
	{
		ByteU5BU5D_t4116647657* L_2 = ___buffer0;
		int32_t L_3 = ___index1;
		int32_t L_4 = V_3;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
		uint8_t L_6 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_4 = (((int32_t)((uint16_t)L_6)));
		Il2CppChar L_7 = V_4;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		StringBuilder_t * L_8 = V_2;
		Il2CppChar L_9 = V_4;
		StringBuilder_Append_m2383614642(L_8, L_9, /*hidden argument*/NULL);
		goto IL_007f;
	}

IL_0032:
	{
		Dictionary_2_t736164020 * L_10 = V_0;
		int32_t L_11 = V_1;
		StringBuilder_t * L_12 = V_2;
		String_t* L_13 = StringBuilder_ToString_m3317489284(L_12, /*hidden argument*/NULL);
		Dictionary_2_Add_m1718909353(L_10, L_11, L_13, /*hidden argument*/Dictionary_2_Add_m1718909353_RuntimeMethod_var);
		V_5 = 1;
		goto IL_0068;
	}

IL_0047:
	{
		Dictionary_2_t736164020 * L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = V_5;
		StringBuilder_t * L_17 = V_2;
		int32_t L_18 = V_5;
		StringBuilder_t * L_19 = V_2;
		int32_t L_20 = StringBuilder_get_Length_m3238060835(L_19, /*hidden argument*/NULL);
		int32_t L_21 = V_5;
		String_t* L_22 = StringBuilder_ToString_m774364392(L_17, L_18, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_21)), /*hidden argument*/NULL);
		Dictionary_2_Add_m1718909353(L_14, ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)), L_22, /*hidden argument*/Dictionary_2_Add_m1718909353_RuntimeMethod_var);
		int32_t L_23 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0068:
	{
		int32_t L_24 = V_5;
		StringBuilder_t * L_25 = V_2;
		int32_t L_26 = StringBuilder_get_Length_m3238060835(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_27 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		StringBuilder_t * L_28 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_28, /*hidden argument*/NULL);
		V_2 = L_28;
	}

IL_007f:
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0083:
	{
		int32_t L_30 = V_3;
		int32_t L_31 = ___count2;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0015;
		}
	}
	{
		Dictionary_2_t736164020 * L_32 = V_0;
		return L_32;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType> System.TimeZoneInfo::ParseTimesTypes(System.Byte[],System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.String>)
extern "C"  Dictionary_2_t1396226614 * TimeZoneInfo_ParseTimesTypes_m1754682716 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___index1, int32_t ___count2, Dictionary_2_t736164020 * ___abbreviations3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_ParseTimesTypes_m1754682716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1396226614 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	{
		int32_t L_0 = ___count2;
		Dictionary_2_t1396226614 * L_1 = (Dictionary_2_t1396226614 *)il2cpp_codegen_object_new(Dictionary_2_t1396226614_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m224509051(L_1, L_0, /*hidden argument*/Dictionary_2__ctor_m224509051_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_004f;
	}

IL_000e:
	{
		ByteU5BU5D_t4116647657* L_2 = ___buffer0;
		int32_t L_3 = ___index1;
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		int32_t L_5 = TimeZoneInfo_ReadBigEndianInt32_m3367804058(NULL /*static, unused*/, L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)6, (int32_t)L_4)))), /*hidden argument*/NULL);
		V_2 = L_5;
		ByteU5BU5D_t4116647657* L_6 = ___buffer0;
		int32_t L_7 = ___index1;
		int32_t L_8 = V_1;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)6, (int32_t)L_8)))), (int32_t)4));
		uint8_t L_10 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		ByteU5BU5D_t4116647657* L_11 = ___buffer0;
		int32_t L_12 = ___index1;
		int32_t L_13 = V_1;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)6, (int32_t)L_13)))), (int32_t)5));
		uint8_t L_15 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		Dictionary_2_t1396226614 * L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		uint8_t L_19 = V_3;
		Dictionary_2_t736164020 * L_20 = ___abbreviations3;
		uint8_t L_21 = V_4;
		String_t* L_22 = Dictionary_2_get_Item_m823070101(L_20, L_21, /*hidden argument*/Dictionary_2_get_Item_m823070101_RuntimeMethod_var);
		TimeType_t2507513283  L_23;
		memset(&L_23, 0, sizeof(L_23));
		TimeType__ctor_m1663688892((&L_23), L_18, (bool)((((int32_t)((((int32_t)L_19) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), L_22, /*hidden argument*/NULL);
		Dictionary_2_Add_m670166897(L_16, L_17, L_23, /*hidden argument*/Dictionary_2_Add_m670166897_RuntimeMethod_var);
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_004f:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = ___count2;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_000e;
		}
	}
	{
		Dictionary_2_t1396226614 * L_27 = V_0;
		return L_27;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>> System.TimeZoneInfo::ParseTransitions(System.Byte[],System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>)
extern "C"  List_1_t1770412147 * TimeZoneInfo_ParseTransitions_m542357583 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___index1, int32_t ___count2, Dictionary_2_t1396226614 * ___time_types3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_ParseTransitions_m542357583_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1770412147 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DateTime_t3738529785  V_3;
	memset(&V_3, 0, sizeof(V_3));
	uint8_t V_4 = 0x0;
	{
		int32_t L_0 = ___count2;
		List_1_t1770412147 * L_1 = (List_1_t1770412147 *)il2cpp_codegen_object_new(List_1_t1770412147_il2cpp_TypeInfo_var);
		List_1__ctor_m2598981433(L_1, L_0, /*hidden argument*/List_1__ctor_m2598981433_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0045;
	}

IL_000e:
	{
		ByteU5BU5D_t4116647657* L_2 = ___buffer0;
		int32_t L_3 = ___index1;
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		int32_t L_5 = TimeZoneInfo_ReadBigEndianInt32_m3367804058(NULL /*static, unused*/, L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_4)))), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		DateTime_t3738529785  L_7 = TimeZoneInfo_DateTimeFromUnixTime_m2151402451(NULL /*static, unused*/, (((int64_t)((int64_t)L_6))), /*hidden argument*/NULL);
		V_3 = L_7;
		ByteU5BU5D_t4116647657* L_8 = ___buffer0;
		int32_t L_9 = ___index1;
		int32_t L_10 = ___count2;
		int32_t L_11 = V_1;
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_10)))), (int32_t)L_11));
		uint8_t L_13 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		List_1_t1770412147 * L_14 = V_0;
		DateTime_t3738529785  L_15 = V_3;
		Dictionary_2_t1396226614 * L_16 = ___time_types3;
		uint8_t L_17 = V_4;
		TimeType_t2507513283  L_18 = Dictionary_2_get_Item_m2315657164(L_16, L_17, /*hidden argument*/Dictionary_2_get_Item_m2315657164_RuntimeMethod_var);
		KeyValuePair_2_t298337405  L_19;
		memset(&L_19, 0, sizeof(L_19));
		KeyValuePair_2__ctor_m2324111314((&L_19), L_15, L_18, /*hidden argument*/KeyValuePair_2__ctor_m2324111314_RuntimeMethod_var);
		List_1_Add_m1397479321(L_14, L_19, /*hidden argument*/List_1_Add_m1397479321_RuntimeMethod_var);
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0045:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = ___count2;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_000e;
		}
	}
	{
		List_1_t1770412147 * L_23 = V_0;
		return L_23;
	}
}
// System.DateTime System.TimeZoneInfo::DateTimeFromUnixTime(System.Int64)
extern "C"  DateTime_t3738529785  TimeZoneInfo_DateTimeFromUnixTime_m2151402451 (RuntimeObject * __this /* static, unused */, int64_t ___unix_time0, const RuntimeMethod* method)
{
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		DateTime__ctor_m12900168((&V_0), ((int32_t)1970), 1, 1, /*hidden argument*/NULL);
		int64_t L_0 = ___unix_time0;
		DateTime_t3738529785  L_1 = DateTime_AddSeconds_m332574389((&V_0), (((double)((double)L_0))), /*hidden argument*/NULL);
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
// System.Void System.TimeZoneInfo/AdjustmentRule::.ctor(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C"  void AdjustmentRule__ctor_m495727949 (AdjustmentRule_t74449909 * __this, DateTime_t3738529785  ___dateStart0, DateTime_t3738529785  ___dateEnd1, TimeSpan_t881159249  ___daylightDelta2, TransitionTime_t449921781  ___daylightTransitionStart3, TransitionTime_t449921781  ___daylightTransitionEnd4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdjustmentRule__ctor_m495727949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = DateTime_get_Kind_m2154871796((&___dateStart0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = DateTime_get_Kind_m2154871796((&___dateEnd1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}

IL_001e:
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral1528915702, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,AdjustmentRule__ctor_m495727949_RuntimeMethod_var);
	}

IL_0029:
	{
		TransitionTime_t449921781  L_3 = ___daylightTransitionStart3;
		TransitionTime_t449921781  L_4 = ___daylightTransitionEnd4;
		bool L_5 = TransitionTime_op_Equality_m844747352(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_6, _stringLiteral995612621, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6,AdjustmentRule__ctor_m495727949_RuntimeMethod_var);
	}

IL_0042:
	{
		int64_t L_7 = DateTime_get_Ticks_m1550640881((&___dateStart0), /*hidden argument*/NULL);
		if (((int64_t)((int64_t)L_7%(int64_t)((int64_t)864000000000LL))))
		{
			goto IL_006e;
		}
	}
	{
		int64_t L_8 = DateTime_get_Ticks_m1550640881((&___dateEnd1), /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_8%(int64_t)((int64_t)864000000000LL))))
		{
			goto IL_0079;
		}
	}

IL_006e:
	{
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_9, _stringLiteral244543716, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9,AdjustmentRule__ctor_m495727949_RuntimeMethod_var);
	}

IL_0079:
	{
		DateTime_t3738529785  L_10 = ___dateEnd1;
		DateTime_t3738529785  L_11 = ___dateStart0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_12 = DateTime_op_LessThan_m2497205152(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0090;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_13 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_13, _stringLiteral263903928, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,AdjustmentRule__ctor_m495727949_RuntimeMethod_var);
	}

IL_0090:
	{
		TimeSpan_t881159249  L_14 = ___daylightDelta2;
		TimeSpan_t881159249  L_15;
		memset(&L_15, 0, sizeof(L_15));
		TimeSpan__ctor_m3689759052((&L_15), ((int32_t)14), 0, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		bool L_16 = TimeSpan_op_GreaterThan_m734703194(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00b8;
		}
	}
	{
		TimeSpan_t881159249  L_17 = ___daylightDelta2;
		TimeSpan_t881159249  L_18;
		memset(&L_18, 0, sizeof(L_18));
		TimeSpan__ctor_m3689759052((&L_18), ((int32_t)-14), 0, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		bool L_19 = TimeSpan_op_LessThan_m1594498345(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00c3;
		}
	}

IL_00b8:
	{
		ArgumentOutOfRangeException_t777629997 * L_20 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_20, _stringLiteral1844453138, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20,AdjustmentRule__ctor_m495727949_RuntimeMethod_var);
	}

IL_00c3:
	{
		int64_t L_21 = TimeSpan_get_Ticks_m2137362016((&___daylightDelta2), /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_21%(int64_t)(((int64_t)((int64_t)((int32_t)10000000)))))))
		{
			goto IL_00e1;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_22 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_22, _stringLiteral3638045652, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22,AdjustmentRule__ctor_m495727949_RuntimeMethod_var);
	}

IL_00e1:
	{
		DateTime_t3738529785  L_23 = ___dateStart0;
		__this->set_dateStart_1(L_23);
		DateTime_t3738529785  L_24 = ___dateEnd1;
		__this->set_dateEnd_0(L_24);
		TimeSpan_t881159249  L_25 = ___daylightDelta2;
		__this->set_daylightDelta_2(L_25);
		TransitionTime_t449921781  L_26 = ___daylightTransitionStart3;
		__this->set_daylightTransitionStart_4(L_26);
		TransitionTime_t449921781  L_27 = ___daylightTransitionEnd4;
		__this->set_daylightTransitionEnd_3(L_27);
		return;
	}
}
// System.DateTime System.TimeZoneInfo/AdjustmentRule::get_DateEnd()
extern "C"  DateTime_t3738529785  AdjustmentRule_get_DateEnd_m3164615624 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_dateEnd_0();
		return L_0;
	}
}
// System.DateTime System.TimeZoneInfo/AdjustmentRule::get_DateStart()
extern "C"  DateTime_t3738529785  AdjustmentRule_get_DateStart_m2176962503 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_dateStart_1();
		return L_0;
	}
}
// System.TimeSpan System.TimeZoneInfo/AdjustmentRule::get_DaylightDelta()
extern "C"  TimeSpan_t881159249  AdjustmentRule_get_DaylightDelta_m2159274191 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method)
{
	{
		TimeSpan_t881159249  L_0 = __this->get_daylightDelta_2();
		return L_0;
	}
}
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::get_DaylightTransitionEnd()
extern "C"  TransitionTime_t449921781  AdjustmentRule_get_DaylightTransitionEnd_m3747881060 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method)
{
	{
		TransitionTime_t449921781  L_0 = __this->get_daylightTransitionEnd_3();
		return L_0;
	}
}
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::get_DaylightTransitionStart()
extern "C"  TransitionTime_t449921781  AdjustmentRule_get_DaylightTransitionStart_m3488892433 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method)
{
	{
		TransitionTime_t449921781  L_0 = __this->get_daylightTransitionStart_4();
		return L_0;
	}
}
// System.TimeZoneInfo/AdjustmentRule System.TimeZoneInfo/AdjustmentRule::CreateAdjustmentRule(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C"  AdjustmentRule_t74449909 * AdjustmentRule_CreateAdjustmentRule_m1020400594 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___dateStart0, DateTime_t3738529785  ___dateEnd1, TimeSpan_t881159249  ___daylightDelta2, TransitionTime_t449921781  ___daylightTransitionStart3, TransitionTime_t449921781  ___daylightTransitionEnd4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdjustmentRule_CreateAdjustmentRule_m1020400594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t3738529785  L_0 = ___dateStart0;
		DateTime_t3738529785  L_1 = ___dateEnd1;
		TimeSpan_t881159249  L_2 = ___daylightDelta2;
		TransitionTime_t449921781  L_3 = ___daylightTransitionStart3;
		TransitionTime_t449921781  L_4 = ___daylightTransitionEnd4;
		AdjustmentRule_t74449909 * L_5 = (AdjustmentRule_t74449909 *)il2cpp_codegen_object_new(AdjustmentRule_t74449909_il2cpp_TypeInfo_var);
		AdjustmentRule__ctor_m495727949(L_5, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.TimeZoneInfo/AdjustmentRule::Equals(System.TimeZoneInfo/AdjustmentRule)
extern "C"  bool AdjustmentRule_Equals_m4095462908 (AdjustmentRule_t74449909 * __this, AdjustmentRule_t74449909 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdjustmentRule_Equals_m4095462908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B6_0 = 0;
	{
		DateTime_t3738529785  L_0 = __this->get_dateStart_1();
		AdjustmentRule_t74449909 * L_1 = ___other0;
		DateTime_t3738529785  L_2 = L_1->get_dateStart_1();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_3 = DateTime_op_Equality_m1022058599(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_006b;
		}
	}
	{
		DateTime_t3738529785  L_4 = __this->get_dateEnd_0();
		AdjustmentRule_t74449909 * L_5 = ___other0;
		DateTime_t3738529785  L_6 = L_5->get_dateEnd_0();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_7 = DateTime_op_Equality_m1022058599(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		TimeSpan_t881159249  L_8 = __this->get_daylightDelta_2();
		AdjustmentRule_t74449909 * L_9 = ___other0;
		TimeSpan_t881159249  L_10 = L_9->get_daylightDelta_2();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		bool L_11 = TimeSpan_op_Equality_m1999885032(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		TransitionTime_t449921781  L_12 = __this->get_daylightTransitionStart_4();
		AdjustmentRule_t74449909 * L_13 = ___other0;
		TransitionTime_t449921781  L_14 = L_13->get_daylightTransitionStart_4();
		bool L_15 = TransitionTime_op_Equality_m844747352(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_006b;
		}
	}
	{
		TransitionTime_t449921781  L_16 = __this->get_daylightTransitionEnd_3();
		AdjustmentRule_t74449909 * L_17 = ___other0;
		TransitionTime_t449921781  L_18 = L_17->get_daylightTransitionEnd_3();
		bool L_19 = TransitionTime_op_Equality_m844747352(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_19));
		goto IL_006c;
	}

IL_006b:
	{
		G_B6_0 = 0;
	}

IL_006c:
	{
		return (bool)G_B6_0;
	}
}
// System.Int32 System.TimeZoneInfo/AdjustmentRule::GetHashCode()
extern "C"  int32_t AdjustmentRule_GetHashCode_m3136432906 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785 * L_0 = __this->get_address_of_dateStart_1();
		int32_t L_1 = DateTime_GetHashCode_m2261847002(L_0, /*hidden argument*/NULL);
		DateTime_t3738529785 * L_2 = __this->get_address_of_dateEnd_0();
		int32_t L_3 = DateTime_GetHashCode_m2261847002(L_2, /*hidden argument*/NULL);
		TimeSpan_t881159249 * L_4 = __this->get_address_of_daylightDelta_2();
		int32_t L_5 = TimeSpan_GetHashCode_m1939414618(L_4, /*hidden argument*/NULL);
		TransitionTime_t449921781 * L_6 = __this->get_address_of_daylightTransitionStart_4();
		int32_t L_7 = TransitionTime_GetHashCode_m2153693963(L_6, /*hidden argument*/NULL);
		TransitionTime_t449921781 * L_8 = __this->get_address_of_daylightTransitionEnd_3();
		int32_t L_9 = TransitionTime_GetHashCode_m2153693963(L_8, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)L_5))^(int32_t)L_7))^(int32_t)L_9));
	}
}
// System.Void System.TimeZoneInfo/AdjustmentRule::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void AdjustmentRule_GetObjectData_m2214958557 (AdjustmentRule_t74449909 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdjustmentRule_GetObjectData_m2214958557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,AdjustmentRule_GetObjectData_m2214958557_RuntimeMethod_var);
	}
}
// System.Void System.TimeZoneInfo/AdjustmentRule::OnDeserialization(System.Object)
extern "C"  void AdjustmentRule_OnDeserialization_m2703381884 (AdjustmentRule_t74449909 * __this, RuntimeObject * ___sender0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdjustmentRule_OnDeserialization_m2703381884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,AdjustmentRule_OnDeserialization_m2703381884_RuntimeMethod_var);
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
// Conversion methods for marshalling of: System.TimeZoneInfo/TimeType
extern "C" void TimeType_t2507513283_marshal_pinvoke(const TimeType_t2507513283& unmarshaled, TimeType_t2507513283_marshaled_pinvoke& marshaled)
{
	marshaled.___Offset_0 = unmarshaled.get_Offset_0();
	marshaled.___IsDst_1 = static_cast<int32_t>(unmarshaled.get_IsDst_1());
	marshaled.___Name_2 = il2cpp_codegen_marshal_string(unmarshaled.get_Name_2());
}
extern "C" void TimeType_t2507513283_marshal_pinvoke_back(const TimeType_t2507513283_marshaled_pinvoke& marshaled, TimeType_t2507513283& unmarshaled)
{
	int32_t unmarshaled_Offset_temp_0 = 0;
	unmarshaled_Offset_temp_0 = marshaled.___Offset_0;
	unmarshaled.set_Offset_0(unmarshaled_Offset_temp_0);
	bool unmarshaled_IsDst_temp_1 = false;
	unmarshaled_IsDst_temp_1 = static_cast<bool>(marshaled.___IsDst_1);
	unmarshaled.set_IsDst_1(unmarshaled_IsDst_temp_1);
	unmarshaled.set_Name_2(il2cpp_codegen_marshal_string_result(marshaled.___Name_2));
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/TimeType
extern "C" void TimeType_t2507513283_marshal_pinvoke_cleanup(TimeType_t2507513283_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Name_2);
	marshaled.___Name_2 = NULL;
}
// Conversion methods for marshalling of: System.TimeZoneInfo/TimeType
extern "C" void TimeType_t2507513283_marshal_com(const TimeType_t2507513283& unmarshaled, TimeType_t2507513283_marshaled_com& marshaled)
{
	marshaled.___Offset_0 = unmarshaled.get_Offset_0();
	marshaled.___IsDst_1 = static_cast<int32_t>(unmarshaled.get_IsDst_1());
	marshaled.___Name_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Name_2());
}
extern "C" void TimeType_t2507513283_marshal_com_back(const TimeType_t2507513283_marshaled_com& marshaled, TimeType_t2507513283& unmarshaled)
{
	int32_t unmarshaled_Offset_temp_0 = 0;
	unmarshaled_Offset_temp_0 = marshaled.___Offset_0;
	unmarshaled.set_Offset_0(unmarshaled_Offset_temp_0);
	bool unmarshaled_IsDst_temp_1 = false;
	unmarshaled_IsDst_temp_1 = static_cast<bool>(marshaled.___IsDst_1);
	unmarshaled.set_IsDst_1(unmarshaled_IsDst_temp_1);
	unmarshaled.set_Name_2(il2cpp_codegen_marshal_bstring_result(marshaled.___Name_2));
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/TimeType
extern "C" void TimeType_t2507513283_marshal_com_cleanup(TimeType_t2507513283_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Name_2);
	marshaled.___Name_2 = NULL;
}
// System.Void System.TimeZoneInfo/TimeType::.ctor(System.Int32,System.Boolean,System.String)
extern "C"  void TimeType__ctor_m1663688892 (TimeType_t2507513283 * __this, int32_t ___offset0, bool ___is_dst1, String_t* ___abbrev2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___offset0;
		__this->set_Offset_0(L_0);
		bool L_1 = ___is_dst1;
		__this->set_IsDst_1(L_1);
		String_t* L_2 = ___abbrev2;
		__this->set_Name_2(L_2);
		return;
	}
}
extern "C"  void TimeType__ctor_m1663688892_AdjustorThunk (RuntimeObject * __this, int32_t ___offset0, bool ___is_dst1, String_t* ___abbrev2, const RuntimeMethod* method)
{
	TimeType_t2507513283 * _thisAdjusted = reinterpret_cast<TimeType_t2507513283 *>(__this + 1);
	TimeType__ctor_m1663688892(_thisAdjusted, ___offset0, ___is_dst1, ___abbrev2, method);
}
// System.String System.TimeZoneInfo/TimeType::ToString()
extern "C"  String_t* TimeType_ToString_m3568850299 (TimeType_t2507513283 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeType_ToString_m3568850299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6));
		ArrayElementTypeCheck (L_0, _stringLiteral2457238620);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2457238620);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		int32_t L_2 = __this->get_Offset_0();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		ArrayElementTypeCheck (L_5, _stringLiteral4248262063);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral4248262063);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		bool L_7 = __this->get_IsDst_1();
		bool L_8 = L_7;
		RuntimeObject * L_9 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_8);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_6;
		ArrayElementTypeCheck (L_10, _stringLiteral2992454296);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral2992454296);
		ObjectU5BU5D_t2843939325* L_11 = L_10;
		String_t* L_12 = __this->get_Name_2();
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2971454694(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* TimeType_ToString_m3568850299_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TimeType_t2507513283 * _thisAdjusted = reinterpret_cast<TimeType_t2507513283 *>(__this + 1);
	return TimeType_ToString_m3568850299(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.TimeZoneInfo/TransitionTime
extern "C" void TransitionTime_t449921781_marshal_pinvoke(const TransitionTime_t449921781& unmarshaled, TransitionTime_t449921781_marshaled_pinvoke& marshaled)
{
	Exception_t* ___timeOfDay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'timeOfDay' of type 'TransitionTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___timeOfDay_0Exception,NULL);
}
extern "C" void TransitionTime_t449921781_marshal_pinvoke_back(const TransitionTime_t449921781_marshaled_pinvoke& marshaled, TransitionTime_t449921781& unmarshaled)
{
	Exception_t* ___timeOfDay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'timeOfDay' of type 'TransitionTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___timeOfDay_0Exception,NULL);
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/TransitionTime
extern "C" void TransitionTime_t449921781_marshal_pinvoke_cleanup(TransitionTime_t449921781_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.TimeZoneInfo/TransitionTime
extern "C" void TransitionTime_t449921781_marshal_com(const TransitionTime_t449921781& unmarshaled, TransitionTime_t449921781_marshaled_com& marshaled)
{
	Exception_t* ___timeOfDay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'timeOfDay' of type 'TransitionTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___timeOfDay_0Exception,NULL);
}
extern "C" void TransitionTime_t449921781_marshal_com_back(const TransitionTime_t449921781_marshaled_com& marshaled, TransitionTime_t449921781& unmarshaled)
{
	Exception_t* ___timeOfDay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'timeOfDay' of type 'TransitionTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___timeOfDay_0Exception,NULL);
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/TransitionTime
extern "C" void TransitionTime_t449921781_marshal_com_cleanup(TransitionTime_t449921781_marshaled_com& marshaled)
{
}
// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.DateTime,System.Int32,System.Int32)
extern "C"  void TransitionTime__ctor_m1012552555 (TransitionTime_t449921781 * __this, DateTime_t3738529785  ___timeOfDay0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionTime__ctor_m1012552555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t3738529785  L_0 = ___timeOfDay0;
		int32_t L_1 = ___month1;
		TransitionTime__ctor_m1241469383(__this, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___day2;
		if ((((int32_t)L_2) < ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = ___day2;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)31))))
		{
			goto IL_0022;
		}
	}

IL_0017:
	{
		ArgumentOutOfRangeException_t777629997 * L_4 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_4, _stringLiteral1894924580, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4,TransitionTime__ctor_m1012552555_RuntimeMethod_var);
	}

IL_0022:
	{
		int32_t L_5 = ___day2;
		__this->set_day_2(L_5);
		__this->set_isFixedDateRule_5((bool)1);
		return;
	}
}
extern "C"  void TransitionTime__ctor_m1012552555_AdjustorThunk (RuntimeObject * __this, DateTime_t3738529785  ___timeOfDay0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	TransitionTime__ctor_m1012552555(_thisAdjusted, ___timeOfDay0, ___month1, ___day2, method);
}
// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.DateTime,System.Int32)
extern "C"  void TransitionTime__ctor_m1241469383 (TransitionTime_t449921781 * __this, DateTime_t3738529785  ___timeOfDay0, int32_t ___month1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionTime__ctor_m1241469383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = DateTime_get_Year_m1184003812((&___timeOfDay0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = DateTime_get_Month_m1566006993((&___timeOfDay0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = DateTime_get_Day_m1623500273((&___timeOfDay0), /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}

IL_0027:
	{
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, _stringLiteral1771851981, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,TransitionTime__ctor_m1241469383_RuntimeMethod_var);
	}

IL_0032:
	{
		int32_t L_4 = DateTime_get_Kind_m2154871796((&___timeOfDay0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_t132251570 * L_5 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_5, _stringLiteral2376781826, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,TransitionTime__ctor_m1241469383_RuntimeMethod_var);
	}

IL_0049:
	{
		int64_t L_6 = DateTime_get_Ticks_m1550640881((&___timeOfDay0), /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_6%(int64_t)(((int64_t)((int64_t)((int32_t)10000)))))))
		{
			goto IL_0067;
		}
	}
	{
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_7, _stringLiteral576230762, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7,TransitionTime__ctor_m1241469383_RuntimeMethod_var);
	}

IL_0067:
	{
		int32_t L_8 = ___month1;
		if ((((int32_t)L_8) < ((int32_t)1)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_9 = ___month1;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0081;
		}
	}

IL_0076:
	{
		ArgumentOutOfRangeException_t777629997 * L_10 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_10, _stringLiteral3427887931, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10,TransitionTime__ctor_m1241469383_RuntimeMethod_var);
	}

IL_0081:
	{
		DateTime_t3738529785  L_11 = ___timeOfDay0;
		__this->set_timeOfDay_0(L_11);
		int32_t L_12 = ___month1;
		__this->set_month_1(L_12);
		__this->set_week_3((-1));
		__this->set_dayOfWeek_4((-1));
		__this->set_day_2((-1));
		__this->set_isFixedDateRule_5((bool)0);
		return;
	}
}
extern "C"  void TransitionTime__ctor_m1241469383_AdjustorThunk (RuntimeObject * __this, DateTime_t3738529785  ___timeOfDay0, int32_t ___month1, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	TransitionTime__ctor_m1241469383(_thisAdjusted, ___timeOfDay0, ___month1, method);
}
// System.DateTime System.TimeZoneInfo/TransitionTime::get_TimeOfDay()
extern "C"  DateTime_t3738529785  TransitionTime_get_TimeOfDay_m2066448705 (TransitionTime_t449921781 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_timeOfDay_0();
		return L_0;
	}
}
extern "C"  DateTime_t3738529785  TransitionTime_get_TimeOfDay_m2066448705_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	return TransitionTime_get_TimeOfDay_m2066448705(_thisAdjusted, method);
}
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Month()
extern "C"  int32_t TransitionTime_get_Month_m1950274531 (TransitionTime_t449921781 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_month_1();
		return L_0;
	}
}
extern "C"  int32_t TransitionTime_get_Month_m1950274531_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	return TransitionTime_get_Month_m1950274531(_thisAdjusted, method);
}
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Day()
extern "C"  int32_t TransitionTime_get_Day_m1297598877 (TransitionTime_t449921781 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_day_2();
		return L_0;
	}
}
extern "C"  int32_t TransitionTime_get_Day_m1297598877_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	return TransitionTime_get_Day_m1297598877(_thisAdjusted, method);
}
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Week()
extern "C"  int32_t TransitionTime_get_Week_m3334751603 (TransitionTime_t449921781 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_week_3();
		return L_0;
	}
}
extern "C"  int32_t TransitionTime_get_Week_m3334751603_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	return TransitionTime_get_Week_m3334751603(_thisAdjusted, method);
}
// System.DayOfWeek System.TimeZoneInfo/TransitionTime::get_DayOfWeek()
extern "C"  int32_t TransitionTime_get_DayOfWeek_m3191031940 (TransitionTime_t449921781 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_dayOfWeek_4();
		return L_0;
	}
}
extern "C"  int32_t TransitionTime_get_DayOfWeek_m3191031940_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	return TransitionTime_get_DayOfWeek_m3191031940(_thisAdjusted, method);
}
// System.Boolean System.TimeZoneInfo/TransitionTime::get_IsFixedDateRule()
extern "C"  bool TransitionTime_get_IsFixedDateRule_m1557984015 (TransitionTime_t449921781 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isFixedDateRule_5();
		return L_0;
	}
}
extern "C"  bool TransitionTime_get_IsFixedDateRule_m1557984015_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	return TransitionTime_get_IsFixedDateRule_m1557984015(_thisAdjusted, method);
}
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateFixedDateRule(System.DateTime,System.Int32,System.Int32)
extern "C"  TransitionTime_t449921781  TransitionTime_CreateFixedDateRule_m488639024 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___timeOfDay0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = ___timeOfDay0;
		int32_t L_1 = ___month1;
		int32_t L_2 = ___day2;
		TransitionTime_t449921781  L_3;
		memset(&L_3, 0, sizeof(L_3));
		TransitionTime__ctor_m1012552555((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.TimeZoneInfo/TransitionTime::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TransitionTime_GetObjectData_m565919319 (TransitionTime_t449921781 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionTime_GetObjectData_m565919319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,TransitionTime_GetObjectData_m565919319_RuntimeMethod_var);
	}
}
extern "C"  void TransitionTime_GetObjectData_m565919319_AdjustorThunk (RuntimeObject * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	TransitionTime_GetObjectData_m565919319(_thisAdjusted, ___info0, ___context1, method);
}
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.Object)
extern "C"  bool TransitionTime_Equals_m2918964558 (TransitionTime_t449921781 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionTime_Equals_m2918964558_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TransitionTime_t449921781_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		bool L_2 = TransitionTime_op_Equality_m844747352(NULL /*static, unused*/, (*(TransitionTime_t449921781 *)__this), ((*(TransitionTime_t449921781 *)((TransitionTime_t449921781 *)UnBox(L_1, TransitionTime_t449921781_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_001d:
	{
		return (bool)0;
	}
}
extern "C"  bool TransitionTime_Equals_m2918964558_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	return TransitionTime_Equals_m2918964558(_thisAdjusted, ___other0, method);
}
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.TimeZoneInfo/TransitionTime)
extern "C"  bool TransitionTime_Equals_m2330892423 (TransitionTime_t449921781 * __this, TransitionTime_t449921781  ___other0, const RuntimeMethod* method)
{
	{
		TransitionTime_t449921781  L_0 = ___other0;
		bool L_1 = TransitionTime_op_Equality_m844747352(NULL /*static, unused*/, (*(TransitionTime_t449921781 *)__this), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  bool TransitionTime_Equals_m2330892423_AdjustorThunk (RuntimeObject * __this, TransitionTime_t449921781  ___other0, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	return TransitionTime_Equals_m2330892423(_thisAdjusted, ___other0, method);
}
// System.Int32 System.TimeZoneInfo/TransitionTime::GetHashCode()
extern "C"  int32_t TransitionTime_GetHashCode_m2153693963 (TransitionTime_t449921781 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_day_2();
		int32_t L_1 = __this->get_dayOfWeek_4();
		int32_t L_2 = __this->get_month_1();
		DateTime_t3738529785 * L_3 = __this->get_address_of_timeOfDay_0();
		int64_t L_4 = DateTime_get_Ticks_m1550640881(L_3, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_week_3();
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0^(int32_t)L_1))^(int32_t)L_2))^(int32_t)(((int32_t)((int32_t)L_4)))))^(int32_t)L_5));
	}
}
extern "C"  int32_t TransitionTime_GetHashCode_m2153693963_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	return TransitionTime_GetHashCode_m2153693963(_thisAdjusted, method);
}
// System.Void System.TimeZoneInfo/TransitionTime::OnDeserialization(System.Object)
extern "C"  void TransitionTime_OnDeserialization_m482900757 (TransitionTime_t449921781 * __this, RuntimeObject * ___sender0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionTime_OnDeserialization_m482900757_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,TransitionTime_OnDeserialization_m482900757_RuntimeMethod_var);
	}
}
extern "C"  void TransitionTime_OnDeserialization_m482900757_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___sender0, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	TransitionTime_OnDeserialization_m482900757(_thisAdjusted, ___sender0, method);
}
// System.Boolean System.TimeZoneInfo/TransitionTime::op_Equality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C"  bool TransitionTime_op_Equality_m844747352 (RuntimeObject * __this /* static, unused */, TransitionTime_t449921781  ___t10, TransitionTime_t449921781  ___t21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionTime_op_Equality_m844747352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = (&___t10)->get_day_2();
		int32_t L_1 = (&___t21)->get_day_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_2 = (&___t10)->get_dayOfWeek_4();
		int32_t L_3 = (&___t21)->get_dayOfWeek_4();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0076;
		}
	}
	{
		bool L_4 = (&___t10)->get_isFixedDateRule_5();
		bool L_5 = (&___t21)->get_isFixedDateRule_5();
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_6 = (&___t10)->get_month_1();
		int32_t L_7 = (&___t21)->get_month_1();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0076;
		}
	}
	{
		DateTime_t3738529785  L_8 = (&___t10)->get_timeOfDay_0();
		DateTime_t3738529785  L_9 = (&___t21)->get_timeOfDay_0();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_10 = DateTime_op_Equality_m1022058599(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_11 = (&___t10)->get_week_3();
		int32_t L_12 = (&___t21)->get_week_3();
		G_B7_0 = ((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		goto IL_0077;
	}

IL_0076:
	{
		G_B7_0 = 0;
	}

IL_0077:
	{
		return (bool)G_B7_0;
	}
}
// System.Boolean System.TimeZoneInfo/TransitionTime::op_Inequality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C"  bool TransitionTime_op_Inequality_m1903374519 (RuntimeObject * __this /* static, unused */, TransitionTime_t449921781  ___t10, TransitionTime_t449921781  ___t21, const RuntimeMethod* method)
{
	{
		TransitionTime_t449921781  L_0 = ___t10;
		TransitionTime_t449921781  L_1 = ___t21;
		bool L_2 = TransitionTime_op_Equality_m844747352(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
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
// System.Void System.TimeZoneNotFoundException::.ctor()
extern "C"  void TimeZoneNotFoundException__ctor_m2966108609 (TimeZoneNotFoundException_t171073523 * __this, const RuntimeMethod* method)
{
	{
		Exception__ctor_m213470898(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TimeZoneNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TimeZoneNotFoundException__ctor_m3351866141 (TimeZoneNotFoundException_t171073523 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___sc1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___sc1;
		Exception__ctor_m2499432361(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
