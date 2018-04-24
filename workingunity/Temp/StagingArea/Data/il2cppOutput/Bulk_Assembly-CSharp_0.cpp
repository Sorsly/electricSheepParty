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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Enemy
struct Enemy_t1765729589;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// turret
struct turret_t1434794911;
// Friendly
struct Friendly_t1432090475;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.AI.NavMeshPath
struct NavMeshPath_t2698325962;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t1276799816;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// NetworkInter
struct NetworkInter_t3294555791;
// System.Collections.Generic.List`1<Friendly>
struct List_1_t2904165217;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Text.StringBuilder
struct StringBuilder_t;
// NetworkInter/toCCCP
struct toCCCP_t412537279;
// System.Collections.Generic.List`1<UnityEngine.Vector3[]>
struct List_1_t3190825503;
// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshPathStatus>
struct List_1_t834715711;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1311147538;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t1569362707;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// NetworkInter/<checkIn>c__Iterator0
struct U3CcheckInU3Ec__Iterator0_t3621524179;
// NetworkInter/<getDomain>c__Iterator1
struct U3CgetDomainU3Ec__Iterator1_t4067793791;
// NetworkInter/<Upload>c__Iterator2
struct U3CUploadU3Ec__Iterator2_t3919425892;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557;
// NetworkInter/CCCPInfo
struct CCCPInfo_t355751851;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// NetworkInter/dbaseresp
struct dbaseresp_t1660734409;
// System.Text.Encoding
struct Encoding_t1523322056;
// Obstacle
struct Obstacle_t162511623;
// statushandler
struct statushandler_t2871395155;
// UnityEngine.TextMesh
struct TextMesh_t1536577757;
// UnitSelectionComponent
struct UnitSelectionComponent_t1709564938;
// Friendly[]
struct FriendlyU5BU5D_t2327600778;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Texture
struct Texture_t3661962703;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.AI.NavMeshPathStatus[]
struct NavMeshPathStatusU5BU5D_t1822004340;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.UInt64[]
struct UInt64U5BU5D_t1659327989;
// UnityEngine.Vector3[][]
struct Vector3U5BU5DU5BU5D_t546443028;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Reflection.Assembly
struct Assembly_t;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// UnityEngine.Collider
struct Collider_t1773347010;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// Enemy[]
struct EnemyU5BU5D_t2006687320;
// System.Collections.Generic.Dictionary`2<Friendly,UnityEngine.TextMesh>
struct Dictionary_2_t2367645494;
// System.Collections.Generic.Dictionary`2<Enemy,UnityEngine.TextMesh>
struct Dictionary_2_t2046732036;

extern RuntimeClass* NavMeshPath_t2698325962_il2cpp_TypeInfo_var;
extern const uint32_t Friendly_Awake_m1464199399_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1613539661;
extern const uint32_t Friendly_Update_m370831634_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t Friendly_intersectPath_m3955614036_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1937369867;
extern String_t* _stringLiteral2363346365;
extern const uint32_t Friendly_SelectedEnemy_m3127503251_MetadataUsageId;
extern const uint32_t Friendly_GetPointUnderCursor_m4228255677_MetadataUsageId;
extern RuntimeClass* List_1_t2904165217_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3304068135_RuntimeMethod_var;
extern String_t* _stringLiteral1305937687;
extern String_t* _stringLiteral1756431291;
extern const uint32_t NetworkInter_Start_m2044139042_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral415913809;
extern const uint32_t NetworkInter_ByteArrayToString_m291155978_MetadataUsageId;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2902247123_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m372896529_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3716447473_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m974345490_RuntimeMethod_var;
extern const uint32_t NetworkInter_DoLast_m1143668936_MetadataUsageId;
extern RuntimeClass* toCCCP_t412537279_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3190825503_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t834715711_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1311147538_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1569362707_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonConvert_t3077351166_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3724216918_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1031536295_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1628857705_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m690471914_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3213809058_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m4254215720_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1433713276_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3327748905_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m697420525_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1544293466_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1147512830_RuntimeMethod_var;
extern String_t* _stringLiteral3455956949;
extern const uint32_t NetworkInter_genJSON_m557539847_MetadataUsageId;
extern RuntimeClass* U3CcheckInU3Ec__Iterator0_t3621524179_il2cpp_TypeInfo_var;
extern const uint32_t NetworkInter_checkIn_m3538085350_MetadataUsageId;
extern RuntimeClass* U3CgetDomainU3Ec__Iterator1_t4067793791_il2cpp_TypeInfo_var;
extern const uint32_t NetworkInter_getDomain_m3421936055_MetadataUsageId;
extern RuntimeClass* U3CUploadU3Ec__Iterator2_t3919425892_il2cpp_TypeInfo_var;
extern const uint32_t NetworkInter_Upload_m2558292387_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JsonUtility_FromJson_TisCCCPInfo_t355751851_m3090238981_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisFriendly_t1432090475_m3961570963_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_Tisturret_t1434794911_m1115786247_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3533371377_RuntimeMethod_var;
extern String_t* _stringLiteral3099255805;
extern String_t* _stringLiteral3571335518;
extern String_t* _stringLiteral1970045457;
extern String_t* _stringLiteral3667691625;
extern String_t* _stringLiteral184651706;
extern const uint32_t U3CcheckInU3Ec__Iterator0_MoveNext_m1904351418_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CcheckInU3Ec__Iterator0_Reset_m2558140530_RuntimeMethod_var;
extern const uint32_t U3CcheckInU3Ec__Iterator0_Reset_m2558140530_MetadataUsageId;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t U3CcheckInU3Ec__Iterator0_U3CU3E__Finally0_m2255862810_MetadataUsageId;
extern const RuntimeMethod* JsonUtility_FromJson_Tisdbaseresp_t1660734409_m384217465_RuntimeMethod_var;
extern String_t* _stringLiteral2506556841;
extern String_t* _stringLiteral2086468573;
extern const uint32_t U3CgetDomainU3Ec__Iterator1_MoveNext_m1419056153_MetadataUsageId;
extern const RuntimeMethod* U3CgetDomainU3Ec__Iterator1_Reset_m2206674425_RuntimeMethod_var;
extern const uint32_t U3CgetDomainU3Ec__Iterator1_Reset_m2206674425_MetadataUsageId;
extern const uint32_t U3CgetDomainU3Ec__Iterator1_U3CU3E__Finally0_m1825419415_MetadataUsageId;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral252986058;
extern const uint32_t U3CUploadU3Ec__Iterator2_MoveNext_m3311091645_MetadataUsageId;
extern const RuntimeMethod* U3CUploadU3Ec__Iterator2_Reset_m4163558267_RuntimeMethod_var;
extern const uint32_t U3CUploadU3Ec__Iterator2_Reset_m4163558267_MetadataUsageId;
extern const uint32_t U3CUploadU3Ec__Iterator2_U3CU3E__Finally0_m3159395052_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisTextMesh_t1536577757_m4126089779_RuntimeMethod_var;
extern String_t* _stringLiteral427266081;
extern String_t* _stringLiteral760903947;
extern const uint32_t statushandler_Start_m3426580730_MetadataUsageId;
extern const uint32_t statushandler_Update_m3585428033_MetadataUsageId;
extern const uint32_t turret_getDesired_m3020965670_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t turret_Update_m2145007065_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_FindObjectsOfType_TisFriendly_t1432090475_m1621701754_RuntimeMethod_var;
extern String_t* _stringLiteral3978561872;
extern String_t* _stringLiteral3787235533;
extern const uint32_t UnitSelectionComponent_Update_m2886411989_MetadataUsageId;
extern const uint32_t UnitSelectionComponent_IsWithinSelectionBounds_m51108003_MetadataUsageId;
extern const uint32_t UnitSelectionComponent_OnGUI_m4013989072_MetadataUsageId;
extern RuntimeClass* Utils_t1444179947_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern const uint32_t Utils_get_WhiteTexture_m3457094338_MetadataUsageId;
extern const uint32_t Utils_GetScreenRect_m1664496423_MetadataUsageId;
extern const uint32_t Utils_GetViewportBounds_m4169378815_MetadataUsageId;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern const uint32_t Utils_DrawScreenRect_m2086374356_MetadataUsageId;
struct Vector3_t3722313464 ;
struct DownloadHandler_t2937767557_marshaled_com;
struct UploadHandler_t2993558019_marshaled_com;

struct ByteU5BU5D_t4116647657;
struct EnemyU5BU5D_t2006687320;
struct Vector3U5BU5D_t1718750761;
struct Int32U5BU5D_t385246372;
struct FriendlyU5BU5D_t2327600778;


#ifndef U3CMODULEU3E_T692745548_H
#define U3CMODULEU3E_T692745548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745548 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745548_H
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
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef LIST_1_T834715711_H
#define LIST_1_T834715711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshPathStatus>
struct  List_1_t834715711  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NavMeshPathStatusU5BU5D_t1822004340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t834715711, ____items_1)); }
	inline NavMeshPathStatusU5BU5D_t1822004340* get__items_1() const { return ____items_1; }
	inline NavMeshPathStatusU5BU5D_t1822004340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NavMeshPathStatusU5BU5D_t1822004340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t834715711, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t834715711, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t834715711_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	NavMeshPathStatusU5BU5D_t1822004340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t834715711_StaticFields, ___EmptyArray_4)); }
	inline NavMeshPathStatusU5BU5D_t1822004340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline NavMeshPathStatusU5BU5D_t1822004340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(NavMeshPathStatusU5BU5D_t1822004340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T834715711_H
#ifndef LIST_1_T1569362707_H
#define LIST_1_T1569362707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Boolean>
struct  List_1_t1569362707  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_t2897418192* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1569362707, ____items_1)); }
	inline BooleanU5BU5D_t2897418192* get__items_1() const { return ____items_1; }
	inline BooleanU5BU5D_t2897418192** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BooleanU5BU5D_t2897418192* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1569362707, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1569362707, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1569362707_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	BooleanU5BU5D_t2897418192* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1569362707_StaticFields, ___EmptyArray_4)); }
	inline BooleanU5BU5D_t2897418192* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline BooleanU5BU5D_t2897418192** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(BooleanU5BU5D_t2897418192* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1569362707_H
#ifndef LIST_1_T1311147538_H
#define LIST_1_T1311147538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.UInt64>
struct  List_1_t1311147538  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt64U5BU5D_t1659327989* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1311147538, ____items_1)); }
	inline UInt64U5BU5D_t1659327989* get__items_1() const { return ____items_1; }
	inline UInt64U5BU5D_t1659327989** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt64U5BU5D_t1659327989* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1311147538, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1311147538, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1311147538_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	UInt64U5BU5D_t1659327989* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1311147538_StaticFields, ___EmptyArray_4)); }
	inline UInt64U5BU5D_t1659327989* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline UInt64U5BU5D_t1659327989** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(UInt64U5BU5D_t1659327989* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1311147538_H
#ifndef LIST_1_T3190825503_H
#define LIST_1_T3190825503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3[]>
struct  List_1_t3190825503  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5DU5BU5D_t546443028* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3190825503, ____items_1)); }
	inline Vector3U5BU5DU5BU5D_t546443028* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5DU5BU5D_t546443028** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5DU5BU5D_t546443028* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3190825503, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3190825503, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3190825503_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector3U5BU5DU5BU5D_t546443028* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3190825503_StaticFields, ___EmptyArray_4)); }
	inline Vector3U5BU5DU5BU5D_t546443028* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector3U5BU5DU5BU5D_t546443028** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector3U5BU5DU5BU5D_t546443028* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3190825503_H
#ifndef LIST_1_T2904165217_H
#define LIST_1_T2904165217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Friendly>
struct  List_1_t2904165217  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FriendlyU5BU5D_t2327600778* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2904165217, ____items_1)); }
	inline FriendlyU5BU5D_t2327600778* get__items_1() const { return ____items_1; }
	inline FriendlyU5BU5D_t2327600778** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FriendlyU5BU5D_t2327600778* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2904165217, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2904165217, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2904165217_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	FriendlyU5BU5D_t2327600778* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2904165217_StaticFields, ___EmptyArray_4)); }
	inline FriendlyU5BU5D_t2327600778* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline FriendlyU5BU5D_t2327600778** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(FriendlyU5BU5D_t2327600778* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2904165217_H
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
#ifndef TOCCCP_T412537279_H
#define TOCCCP_T412537279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkInter/toCCCP
struct  toCCCP_t412537279  : public RuntimeObject
{
public:
	// System.Boolean NetworkInter/toCCCP::ready
	bool ___ready_0;
	// System.Boolean NetworkInter/toCCCP::alldead
	bool ___alldead_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector3[]> NetworkInter/toCCCP::paths
	List_1_t3190825503 * ___paths_2;
	// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshPathStatus> NetworkInter/toCCCP::status
	List_1_t834715711 * ___status_3;
	// System.Collections.Generic.List`1<System.Int32> NetworkInter/toCCCP::ids
	List_1_t128053199 * ___ids_4;
	// System.Collections.Generic.List`1<System.Boolean> NetworkInter/toCCCP::fires
	List_1_t1569362707 * ___fires_5;
	// System.Collections.Generic.List`1<System.UInt64> NetworkInter/toCCCP::Dturretposs
	List_1_t1311147538 * ___Dturretposs_6;

public:
	inline static int32_t get_offset_of_ready_0() { return static_cast<int32_t>(offsetof(toCCCP_t412537279, ___ready_0)); }
	inline bool get_ready_0() const { return ___ready_0; }
	inline bool* get_address_of_ready_0() { return &___ready_0; }
	inline void set_ready_0(bool value)
	{
		___ready_0 = value;
	}

	inline static int32_t get_offset_of_alldead_1() { return static_cast<int32_t>(offsetof(toCCCP_t412537279, ___alldead_1)); }
	inline bool get_alldead_1() const { return ___alldead_1; }
	inline bool* get_address_of_alldead_1() { return &___alldead_1; }
	inline void set_alldead_1(bool value)
	{
		___alldead_1 = value;
	}

	inline static int32_t get_offset_of_paths_2() { return static_cast<int32_t>(offsetof(toCCCP_t412537279, ___paths_2)); }
	inline List_1_t3190825503 * get_paths_2() const { return ___paths_2; }
	inline List_1_t3190825503 ** get_address_of_paths_2() { return &___paths_2; }
	inline void set_paths_2(List_1_t3190825503 * value)
	{
		___paths_2 = value;
		Il2CppCodeGenWriteBarrier((&___paths_2), value);
	}

	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(toCCCP_t412537279, ___status_3)); }
	inline List_1_t834715711 * get_status_3() const { return ___status_3; }
	inline List_1_t834715711 ** get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(List_1_t834715711 * value)
	{
		___status_3 = value;
		Il2CppCodeGenWriteBarrier((&___status_3), value);
	}

	inline static int32_t get_offset_of_ids_4() { return static_cast<int32_t>(offsetof(toCCCP_t412537279, ___ids_4)); }
	inline List_1_t128053199 * get_ids_4() const { return ___ids_4; }
	inline List_1_t128053199 ** get_address_of_ids_4() { return &___ids_4; }
	inline void set_ids_4(List_1_t128053199 * value)
	{
		___ids_4 = value;
		Il2CppCodeGenWriteBarrier((&___ids_4), value);
	}

	inline static int32_t get_offset_of_fires_5() { return static_cast<int32_t>(offsetof(toCCCP_t412537279, ___fires_5)); }
	inline List_1_t1569362707 * get_fires_5() const { return ___fires_5; }
	inline List_1_t1569362707 ** get_address_of_fires_5() { return &___fires_5; }
	inline void set_fires_5(List_1_t1569362707 * value)
	{
		___fires_5 = value;
		Il2CppCodeGenWriteBarrier((&___fires_5), value);
	}

	inline static int32_t get_offset_of_Dturretposs_6() { return static_cast<int32_t>(offsetof(toCCCP_t412537279, ___Dturretposs_6)); }
	inline List_1_t1311147538 * get_Dturretposs_6() const { return ___Dturretposs_6; }
	inline List_1_t1311147538 ** get_address_of_Dturretposs_6() { return &___Dturretposs_6; }
	inline void set_Dturretposs_6(List_1_t1311147538 * value)
	{
		___Dturretposs_6 = value;
		Il2CppCodeGenWriteBarrier((&___Dturretposs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOCCCP_T412537279_H
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
#ifndef UTILS_T1444179947_H
#define UTILS_T1444179947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils
struct  Utils_t1444179947  : public RuntimeObject
{
public:

public:
};

struct Utils_t1444179947_StaticFields
{
public:
	// UnityEngine.Texture2D Utils::_whiteTexture
	Texture2D_t3840446185 * ____whiteTexture_0;

public:
	inline static int32_t get_offset_of__whiteTexture_0() { return static_cast<int32_t>(offsetof(Utils_t1444179947_StaticFields, ____whiteTexture_0)); }
	inline Texture2D_t3840446185 * get__whiteTexture_0() const { return ____whiteTexture_0; }
	inline Texture2D_t3840446185 ** get_address_of__whiteTexture_0() { return &____whiteTexture_0; }
	inline void set__whiteTexture_0(Texture2D_t3840446185 * value)
	{
		____whiteTexture_0 = value;
		Il2CppCodeGenWriteBarrier((&____whiteTexture_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILS_T1444179947_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
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
#ifndef DBASERESP_T1660734409_H
#define DBASERESP_T1660734409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkInter/dbaseresp
struct  dbaseresp_t1660734409  : public RuntimeObject
{
public:
	// System.String NetworkInter/dbaseresp::dname
	String_t* ___dname_0;

public:
	inline static int32_t get_offset_of_dname_0() { return static_cast<int32_t>(offsetof(dbaseresp_t1660734409, ___dname_0)); }
	inline String_t* get_dname_0() const { return ___dname_0; }
	inline String_t** get_address_of_dname_0() { return &___dname_0; }
	inline void set_dname_0(String_t* value)
	{
		___dname_0 = value;
		Il2CppCodeGenWriteBarrier((&___dname_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBASERESP_T1660734409_H
#ifndef U3CGETDOMAINU3EC__ITERATOR1_T4067793791_H
#define U3CGETDOMAINU3EC__ITERATOR1_T4067793791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkInter/<getDomain>c__Iterator1
struct  U3CgetDomainU3Ec__Iterator1_t4067793791  : public RuntimeObject
{
public:
	// UnityEngine.Networking.UnityWebRequest NetworkInter/<getDomain>c__Iterator1::<www>__1
	UnityWebRequest_t463507806 * ___U3CwwwU3E__1_0;
	// NetworkInter NetworkInter/<getDomain>c__Iterator1::$this
	NetworkInter_t3294555791 * ___U24this_1;
	// System.Object NetworkInter/<getDomain>c__Iterator1::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean NetworkInter/<getDomain>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 NetworkInter/<getDomain>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CwwwU3E__1_0() { return static_cast<int32_t>(offsetof(U3CgetDomainU3Ec__Iterator1_t4067793791, ___U3CwwwU3E__1_0)); }
	inline UnityWebRequest_t463507806 * get_U3CwwwU3E__1_0() const { return ___U3CwwwU3E__1_0; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwwwU3E__1_0() { return &___U3CwwwU3E__1_0; }
	inline void set_U3CwwwU3E__1_0(UnityWebRequest_t463507806 * value)
	{
		___U3CwwwU3E__1_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E__1_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CgetDomainU3Ec__Iterator1_t4067793791, ___U24this_1)); }
	inline NetworkInter_t3294555791 * get_U24this_1() const { return ___U24this_1; }
	inline NetworkInter_t3294555791 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(NetworkInter_t3294555791 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CgetDomainU3Ec__Iterator1_t4067793791, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CgetDomainU3Ec__Iterator1_t4067793791, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CgetDomainU3Ec__Iterator1_t4067793791, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETDOMAINU3EC__ITERATOR1_T4067793791_H
#ifndef U3CCHECKINU3EC__ITERATOR0_T3621524179_H
#define U3CCHECKINU3EC__ITERATOR0_T3621524179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkInter/<checkIn>c__Iterator0
struct  U3CcheckInU3Ec__Iterator0_t3621524179  : public RuntimeObject
{
public:
	// UnityEngine.Networking.UnityWebRequest NetworkInter/<checkIn>c__Iterator0::<www>__1
	UnityWebRequest_t463507806 * ___U3CwwwU3E__1_0;
	// Friendly NetworkInter/<checkIn>c__Iterator0::<newFriendly>__2
	Friendly_t1432090475 * ___U3CnewFriendlyU3E__2_1;
	// turret NetworkInter/<checkIn>c__Iterator0::<newTurret>__2
	turret_t1434794911 * ___U3CnewTurretU3E__2_2;
	// NetworkInter NetworkInter/<checkIn>c__Iterator0::$this
	NetworkInter_t3294555791 * ___U24this_3;
	// System.Object NetworkInter/<checkIn>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean NetworkInter/<checkIn>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 NetworkInter/<checkIn>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CwwwU3E__1_0() { return static_cast<int32_t>(offsetof(U3CcheckInU3Ec__Iterator0_t3621524179, ___U3CwwwU3E__1_0)); }
	inline UnityWebRequest_t463507806 * get_U3CwwwU3E__1_0() const { return ___U3CwwwU3E__1_0; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwwwU3E__1_0() { return &___U3CwwwU3E__1_0; }
	inline void set_U3CwwwU3E__1_0(UnityWebRequest_t463507806 * value)
	{
		___U3CwwwU3E__1_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E__1_0), value);
	}

	inline static int32_t get_offset_of_U3CnewFriendlyU3E__2_1() { return static_cast<int32_t>(offsetof(U3CcheckInU3Ec__Iterator0_t3621524179, ___U3CnewFriendlyU3E__2_1)); }
	inline Friendly_t1432090475 * get_U3CnewFriendlyU3E__2_1() const { return ___U3CnewFriendlyU3E__2_1; }
	inline Friendly_t1432090475 ** get_address_of_U3CnewFriendlyU3E__2_1() { return &___U3CnewFriendlyU3E__2_1; }
	inline void set_U3CnewFriendlyU3E__2_1(Friendly_t1432090475 * value)
	{
		___U3CnewFriendlyU3E__2_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnewFriendlyU3E__2_1), value);
	}

	inline static int32_t get_offset_of_U3CnewTurretU3E__2_2() { return static_cast<int32_t>(offsetof(U3CcheckInU3Ec__Iterator0_t3621524179, ___U3CnewTurretU3E__2_2)); }
	inline turret_t1434794911 * get_U3CnewTurretU3E__2_2() const { return ___U3CnewTurretU3E__2_2; }
	inline turret_t1434794911 ** get_address_of_U3CnewTurretU3E__2_2() { return &___U3CnewTurretU3E__2_2; }
	inline void set_U3CnewTurretU3E__2_2(turret_t1434794911 * value)
	{
		___U3CnewTurretU3E__2_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnewTurretU3E__2_2), value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CcheckInU3Ec__Iterator0_t3621524179, ___U24this_3)); }
	inline NetworkInter_t3294555791 * get_U24this_3() const { return ___U24this_3; }
	inline NetworkInter_t3294555791 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(NetworkInter_t3294555791 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CcheckInU3Ec__Iterator0_t3621524179, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CcheckInU3Ec__Iterator0_t3621524179, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CcheckInU3Ec__Iterator0_t3621524179, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCHECKINU3EC__ITERATOR0_T3621524179_H
#ifndef CCCPINFO_T355751851_H
#define CCCPINFO_T355751851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkInter/CCCPInfo
struct  CCCPInfo_t355751851  : public RuntimeObject
{
public:
	// System.Int32[] NetworkInter/CCCPInfo::AssignedBots
	Int32U5BU5D_t385246372* ___AssignedBots_0;
	// System.String NetworkInter/CCCPInfo::Gamestaus
	String_t* ___Gamestaus_1;
	// System.Int32 NetworkInter/CCCPInfo::Numbots
	int32_t ___Numbots_2;

public:
	inline static int32_t get_offset_of_AssignedBots_0() { return static_cast<int32_t>(offsetof(CCCPInfo_t355751851, ___AssignedBots_0)); }
	inline Int32U5BU5D_t385246372* get_AssignedBots_0() const { return ___AssignedBots_0; }
	inline Int32U5BU5D_t385246372** get_address_of_AssignedBots_0() { return &___AssignedBots_0; }
	inline void set_AssignedBots_0(Int32U5BU5D_t385246372* value)
	{
		___AssignedBots_0 = value;
		Il2CppCodeGenWriteBarrier((&___AssignedBots_0), value);
	}

	inline static int32_t get_offset_of_Gamestaus_1() { return static_cast<int32_t>(offsetof(CCCPInfo_t355751851, ___Gamestaus_1)); }
	inline String_t* get_Gamestaus_1() const { return ___Gamestaus_1; }
	inline String_t** get_address_of_Gamestaus_1() { return &___Gamestaus_1; }
	inline void set_Gamestaus_1(String_t* value)
	{
		___Gamestaus_1 = value;
		Il2CppCodeGenWriteBarrier((&___Gamestaus_1), value);
	}

	inline static int32_t get_offset_of_Numbots_2() { return static_cast<int32_t>(offsetof(CCCPInfo_t355751851, ___Numbots_2)); }
	inline int32_t get_Numbots_2() const { return ___Numbots_2; }
	inline int32_t* get_address_of_Numbots_2() { return &___Numbots_2; }
	inline void set_Numbots_2(int32_t value)
	{
		___Numbots_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CCCPINFO_T355751851_H
#ifndef U3CUPLOADU3EC__ITERATOR2_T3919425892_H
#define U3CUPLOADU3EC__ITERATOR2_T3919425892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkInter/<Upload>c__Iterator2
struct  U3CUploadU3Ec__Iterator2_t3919425892  : public RuntimeObject
{
public:
	// System.String NetworkInter/<Upload>c__Iterator2::<msg>__0
	String_t* ___U3CmsgU3E__0_0;
	// System.Byte[] NetworkInter/<Upload>c__Iterator2::<myData>__0
	ByteU5BU5D_t4116647657* ___U3CmyDataU3E__0_1;
	// UnityEngine.Networking.UnityWebRequest NetworkInter/<Upload>c__Iterator2::<www>__1
	UnityWebRequest_t463507806 * ___U3CwwwU3E__1_2;
	// NetworkInter NetworkInter/<Upload>c__Iterator2::$this
	NetworkInter_t3294555791 * ___U24this_3;
	// System.Object NetworkInter/<Upload>c__Iterator2::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean NetworkInter/<Upload>c__Iterator2::$disposing
	bool ___U24disposing_5;
	// System.Int32 NetworkInter/<Upload>c__Iterator2::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CmsgU3E__0_0() { return static_cast<int32_t>(offsetof(U3CUploadU3Ec__Iterator2_t3919425892, ___U3CmsgU3E__0_0)); }
	inline String_t* get_U3CmsgU3E__0_0() const { return ___U3CmsgU3E__0_0; }
	inline String_t** get_address_of_U3CmsgU3E__0_0() { return &___U3CmsgU3E__0_0; }
	inline void set_U3CmsgU3E__0_0(String_t* value)
	{
		___U3CmsgU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmsgU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CmyDataU3E__0_1() { return static_cast<int32_t>(offsetof(U3CUploadU3Ec__Iterator2_t3919425892, ___U3CmyDataU3E__0_1)); }
	inline ByteU5BU5D_t4116647657* get_U3CmyDataU3E__0_1() const { return ___U3CmyDataU3E__0_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CmyDataU3E__0_1() { return &___U3CmyDataU3E__0_1; }
	inline void set_U3CmyDataU3E__0_1(ByteU5BU5D_t4116647657* value)
	{
		___U3CmyDataU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmyDataU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E__1_2() { return static_cast<int32_t>(offsetof(U3CUploadU3Ec__Iterator2_t3919425892, ___U3CwwwU3E__1_2)); }
	inline UnityWebRequest_t463507806 * get_U3CwwwU3E__1_2() const { return ___U3CwwwU3E__1_2; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwwwU3E__1_2() { return &___U3CwwwU3E__1_2; }
	inline void set_U3CwwwU3E__1_2(UnityWebRequest_t463507806 * value)
	{
		___U3CwwwU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E__1_2), value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CUploadU3Ec__Iterator2_t3919425892, ___U24this_3)); }
	inline NetworkInter_t3294555791 * get_U24this_3() const { return ___U24this_3; }
	inline NetworkInter_t3294555791 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(NetworkInter_t3294555791 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CUploadU3Ec__Iterator2_t3919425892, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CUploadU3Ec__Iterator2_t3919425892, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CUploadU3Ec__Iterator2_t3919425892, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUPLOADU3EC__ITERATOR2_T3919425892_H
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
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
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
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
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
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
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
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
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
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
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
#ifndef ENUMERATOR_T498441798_H
#define ENUMERATOR_T498441798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Friendly>
struct  Enumerator_t498441798 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2904165217 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Friendly_t1432090475 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t498441798, ___l_0)); }
	inline List_1_t2904165217 * get_l_0() const { return ___l_0; }
	inline List_1_t2904165217 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2904165217 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t498441798, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t498441798, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t498441798, ___current_3)); }
	inline Friendly_t1432090475 * get_current_3() const { return ___current_3; }
	inline Friendly_t1432090475 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Friendly_t1432090475 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T498441798_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef UPLOADHANDLER_T2993558019_H
#define UPLOADHANDLER_T2993558019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t2993558019  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t2993558019, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // UPLOADHANDLER_T2993558019_H
#ifndef RAYCASTHIT_T1056001966_H
#define RAYCASTHIT_T1056001966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1056001966 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2156229523  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t1773347010 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_UV_4)); }
	inline Vector2_t2156229523  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2156229523 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2156229523  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Collider_5)); }
	inline Collider_t1773347010 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t1773347010 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1056001966_marshaled_pinvoke
{
	Vector3_t3722313464  ___m_Point_0;
	Vector3_t3722313464  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2156229523  ___m_UV_4;
	Collider_t1773347010 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1056001966_marshaled_com
{
	Vector3_t3722313464  ___m_Point_0;
	Vector3_t3722313464  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2156229523  ___m_UV_4;
	Collider_t1773347010 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T1056001966_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef NAVMESHPATHSTATUS_T3657608265_H
#define NAVMESHPATHSTATUS_T3657608265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshPathStatus
struct  NavMeshPathStatus_t3657608265 
{
public:
	// System.Int32 UnityEngine.AI.NavMeshPathStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NavMeshPathStatus_t3657608265, ___value___1)); }
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
#endif // NAVMESHPATHSTATUS_T3657608265_H
#ifndef NAVMESHPATH_T2698325962_H
#define NAVMESHPATH_T2698325962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshPath
struct  NavMeshPath_t2698325962  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AI.NavMeshPath::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::m_corners
	Vector3U5BU5D_t1718750761* ___m_corners_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(NavMeshPath_t2698325962, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_corners_1() { return static_cast<int32_t>(offsetof(NavMeshPath_t2698325962, ___m_corners_1)); }
	inline Vector3U5BU5D_t1718750761* get_m_corners_1() const { return ___m_corners_1; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_corners_1() { return &___m_corners_1; }
	inline void set_m_corners_1(Vector3U5BU5D_t1718750761* value)
	{
		___m_corners_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_corners_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_t2698325962_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Vector3_t3722313464 * ___m_corners_1;
};
// Native definition for COM marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_t2698325962_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Vector3_t3722313464 * ___m_corners_1;
};
#endif // NAVMESHPATH_T2698325962_H
#ifndef DOWNLOADHANDLER_T2937767557_H
#define DOWNLOADHANDLER_T2937767557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t2937767557  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t2937767557, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // DOWNLOADHANDLER_T2937767557_H
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef UNITYWEBREQUEST_T463507806_H
#define UNITYWEBREQUEST_T463507806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t463507806  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t2937767557 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t2993558019 * ___m_UploadHandler_2;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t2937767557 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t2937767557 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t2937767557 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DownloadHandler_1), value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_UploadHandler_2)); }
	inline UploadHandler_t2993558019 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t2993558019 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t2993558019 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UploadHandler_2), value);
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_3)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_3() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_3() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_3; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_3(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_4)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_4() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_4() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_4; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_4(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t2937767557_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t2993558019_marshaled_pinvoke ___m_UploadHandler_2;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_3;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t2937767557_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t2993558019_marshaled_com* ___m_UploadHandler_2;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_3;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_4;
};
#endif // UNITYWEBREQUEST_T463507806_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TEXTMESH_T1536577757_H
#define TEXTMESH_T1536577757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextMesh
struct  TextMesh_t1536577757  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTMESH_T1536577757_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef NAVMESHAGENT_T1276799816_H
#define NAVMESHAGENT_T1276799816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshAgent
struct  NavMeshAgent_t1276799816  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHAGENT_T1276799816_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef NETWORKINTER_T3294555791_H
#define NETWORKINTER_T3294555791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkInter
struct  NetworkInter_t3294555791  : public MonoBehaviour_t3962482529
{
public:
	// System.Byte[] NetworkInter::results
	ByteU5BU5D_t4116647657* ___results_2;
	// System.Collections.Generic.List`1<Friendly> NetworkInter::friends
	List_1_t2904165217 * ___friends_3;
	// Friendly NetworkInter::friendTemp
	Friendly_t1432090475 * ___friendTemp_4;
	// turret NetworkInter::turretTemp
	turret_t1434794911 * ___turretTemp_5;
	// Enemy[] NetworkInter::enemies
	EnemyU5BU5D_t2006687320* ___enemies_6;
	// System.String NetworkInter::dbase
	String_t* ___dbase_7;
	// System.String NetworkInter::IP
	String_t* ___IP_8;
	// System.Int32 NetworkInter::numbots
	int32_t ___numbots_9;
	// NetworkInter/CCCPInfo NetworkInter::info
	CCCPInfo_t355751851 * ___info_10;
	// statushandler NetworkInter::stats
	statushandler_t2871395155 * ___stats_11;

public:
	inline static int32_t get_offset_of_results_2() { return static_cast<int32_t>(offsetof(NetworkInter_t3294555791, ___results_2)); }
	inline ByteU5BU5D_t4116647657* get_results_2() const { return ___results_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_results_2() { return &___results_2; }
	inline void set_results_2(ByteU5BU5D_t4116647657* value)
	{
		___results_2 = value;
		Il2CppCodeGenWriteBarrier((&___results_2), value);
	}

	inline static int32_t get_offset_of_friends_3() { return static_cast<int32_t>(offsetof(NetworkInter_t3294555791, ___friends_3)); }
	inline List_1_t2904165217 * get_friends_3() const { return ___friends_3; }
	inline List_1_t2904165217 ** get_address_of_friends_3() { return &___friends_3; }
	inline void set_friends_3(List_1_t2904165217 * value)
	{
		___friends_3 = value;
		Il2CppCodeGenWriteBarrier((&___friends_3), value);
	}

	inline static int32_t get_offset_of_friendTemp_4() { return static_cast<int32_t>(offsetof(NetworkInter_t3294555791, ___friendTemp_4)); }
	inline Friendly_t1432090475 * get_friendTemp_4() const { return ___friendTemp_4; }
	inline Friendly_t1432090475 ** get_address_of_friendTemp_4() { return &___friendTemp_4; }
	inline void set_friendTemp_4(Friendly_t1432090475 * value)
	{
		___friendTemp_4 = value;
		Il2CppCodeGenWriteBarrier((&___friendTemp_4), value);
	}

	inline static int32_t get_offset_of_turretTemp_5() { return static_cast<int32_t>(offsetof(NetworkInter_t3294555791, ___turretTemp_5)); }
	inline turret_t1434794911 * get_turretTemp_5() const { return ___turretTemp_5; }
	inline turret_t1434794911 ** get_address_of_turretTemp_5() { return &___turretTemp_5; }
	inline void set_turretTemp_5(turret_t1434794911 * value)
	{
		___turretTemp_5 = value;
		Il2CppCodeGenWriteBarrier((&___turretTemp_5), value);
	}

	inline static int32_t get_offset_of_enemies_6() { return static_cast<int32_t>(offsetof(NetworkInter_t3294555791, ___enemies_6)); }
	inline EnemyU5BU5D_t2006687320* get_enemies_6() const { return ___enemies_6; }
	inline EnemyU5BU5D_t2006687320** get_address_of_enemies_6() { return &___enemies_6; }
	inline void set_enemies_6(EnemyU5BU5D_t2006687320* value)
	{
		___enemies_6 = value;
		Il2CppCodeGenWriteBarrier((&___enemies_6), value);
	}

	inline static int32_t get_offset_of_dbase_7() { return static_cast<int32_t>(offsetof(NetworkInter_t3294555791, ___dbase_7)); }
	inline String_t* get_dbase_7() const { return ___dbase_7; }
	inline String_t** get_address_of_dbase_7() { return &___dbase_7; }
	inline void set_dbase_7(String_t* value)
	{
		___dbase_7 = value;
		Il2CppCodeGenWriteBarrier((&___dbase_7), value);
	}

	inline static int32_t get_offset_of_IP_8() { return static_cast<int32_t>(offsetof(NetworkInter_t3294555791, ___IP_8)); }
	inline String_t* get_IP_8() const { return ___IP_8; }
	inline String_t** get_address_of_IP_8() { return &___IP_8; }
	inline void set_IP_8(String_t* value)
	{
		___IP_8 = value;
		Il2CppCodeGenWriteBarrier((&___IP_8), value);
	}

	inline static int32_t get_offset_of_numbots_9() { return static_cast<int32_t>(offsetof(NetworkInter_t3294555791, ___numbots_9)); }
	inline int32_t get_numbots_9() const { return ___numbots_9; }
	inline int32_t* get_address_of_numbots_9() { return &___numbots_9; }
	inline void set_numbots_9(int32_t value)
	{
		___numbots_9 = value;
	}

	inline static int32_t get_offset_of_info_10() { return static_cast<int32_t>(offsetof(NetworkInter_t3294555791, ___info_10)); }
	inline CCCPInfo_t355751851 * get_info_10() const { return ___info_10; }
	inline CCCPInfo_t355751851 ** get_address_of_info_10() { return &___info_10; }
	inline void set_info_10(CCCPInfo_t355751851 * value)
	{
		___info_10 = value;
		Il2CppCodeGenWriteBarrier((&___info_10), value);
	}

	inline static int32_t get_offset_of_stats_11() { return static_cast<int32_t>(offsetof(NetworkInter_t3294555791, ___stats_11)); }
	inline statushandler_t2871395155 * get_stats_11() const { return ___stats_11; }
	inline statushandler_t2871395155 ** get_address_of_stats_11() { return &___stats_11; }
	inline void set_stats_11(statushandler_t2871395155 * value)
	{
		___stats_11 = value;
		Il2CppCodeGenWriteBarrier((&___stats_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINTER_T3294555791_H
#ifndef TURRET_T1434794911_H
#define TURRET_T1434794911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// turret
struct  turret_t1434794911  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject turret::chassis
	GameObject_t1113636619 * ___chassis_2;
	// UnityEngine.GameObject turret::target
	GameObject_t1113636619 * ___target_3;

public:
	inline static int32_t get_offset_of_chassis_2() { return static_cast<int32_t>(offsetof(turret_t1434794911, ___chassis_2)); }
	inline GameObject_t1113636619 * get_chassis_2() const { return ___chassis_2; }
	inline GameObject_t1113636619 ** get_address_of_chassis_2() { return &___chassis_2; }
	inline void set_chassis_2(GameObject_t1113636619 * value)
	{
		___chassis_2 = value;
		Il2CppCodeGenWriteBarrier((&___chassis_2), value);
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(turret_t1434794911, ___target_3)); }
	inline GameObject_t1113636619 * get_target_3() const { return ___target_3; }
	inline GameObject_t1113636619 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(GameObject_t1113636619 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier((&___target_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TURRET_T1434794911_H
#ifndef UNITSELECTIONCOMPONENT_T1709564938_H
#define UNITSELECTIONCOMPONENT_T1709564938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitSelectionComponent
struct  UnitSelectionComponent_t1709564938  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean UnitSelectionComponent::isSelecting
	bool ___isSelecting_2;
	// UnityEngine.Vector3 UnitSelectionComponent::mousePosition1
	Vector3_t3722313464  ___mousePosition1_3;
	// UnityEngine.GameObject UnitSelectionComponent::selectionCirclePrefab
	GameObject_t1113636619 * ___selectionCirclePrefab_4;

public:
	inline static int32_t get_offset_of_isSelecting_2() { return static_cast<int32_t>(offsetof(UnitSelectionComponent_t1709564938, ___isSelecting_2)); }
	inline bool get_isSelecting_2() const { return ___isSelecting_2; }
	inline bool* get_address_of_isSelecting_2() { return &___isSelecting_2; }
	inline void set_isSelecting_2(bool value)
	{
		___isSelecting_2 = value;
	}

	inline static int32_t get_offset_of_mousePosition1_3() { return static_cast<int32_t>(offsetof(UnitSelectionComponent_t1709564938, ___mousePosition1_3)); }
	inline Vector3_t3722313464  get_mousePosition1_3() const { return ___mousePosition1_3; }
	inline Vector3_t3722313464 * get_address_of_mousePosition1_3() { return &___mousePosition1_3; }
	inline void set_mousePosition1_3(Vector3_t3722313464  value)
	{
		___mousePosition1_3 = value;
	}

	inline static int32_t get_offset_of_selectionCirclePrefab_4() { return static_cast<int32_t>(offsetof(UnitSelectionComponent_t1709564938, ___selectionCirclePrefab_4)); }
	inline GameObject_t1113636619 * get_selectionCirclePrefab_4() const { return ___selectionCirclePrefab_4; }
	inline GameObject_t1113636619 ** get_address_of_selectionCirclePrefab_4() { return &___selectionCirclePrefab_4; }
	inline void set_selectionCirclePrefab_4(GameObject_t1113636619 * value)
	{
		___selectionCirclePrefab_4 = value;
		Il2CppCodeGenWriteBarrier((&___selectionCirclePrefab_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITSELECTIONCOMPONENT_T1709564938_H
#ifndef OBSTACLE_T162511623_H
#define OBSTACLE_T162511623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Obstacle
struct  Obstacle_t162511623  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSTACLE_T162511623_H
#ifndef FRIENDLY_T1432090475_H
#define FRIENDLY_T1432090475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Friendly
struct  Friendly_t1432090475  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Friendly::selectionCircle
	GameObject_t1113636619 * ___selectionCircle_2;
	// System.Boolean Friendly::isSelected
	bool ___isSelected_3;
	// System.Boolean Friendly::fire
	bool ___fire_4;
	// System.Int32 Friendly::idnum
	int32_t ___idnum_5;
	// System.UInt64 Friendly::turretpos
	uint64_t ___turretpos_6;
	// System.UInt64 Friendly::desiredturretpos
	uint64_t ___desiredturretpos_7;
	// System.UInt64 Friendly::health
	uint64_t ___health_8;
	// UnityEngine.Camera Friendly::cam
	Camera_t4157153871 * ___cam_9;
	// UnityEngine.LayerMask Friendly::groundLayer
	LayerMask_t3493934918  ___groundLayer_10;
	// UnityEngine.AI.NavMeshAgent Friendly::playerAgent
	NavMeshAgent_t1276799816 * ___playerAgent_11;
	// UnityEngine.AI.NavMeshPath Friendly::path
	NavMeshPath_t2698325962 * ___path_12;
	// turret Friendly::turr
	turret_t1434794911 * ___turr_13;
	// UnityEngine.GameObject Friendly::hovertext
	GameObject_t1113636619 * ___hovertext_14;

public:
	inline static int32_t get_offset_of_selectionCircle_2() { return static_cast<int32_t>(offsetof(Friendly_t1432090475, ___selectionCircle_2)); }
	inline GameObject_t1113636619 * get_selectionCircle_2() const { return ___selectionCircle_2; }
	inline GameObject_t1113636619 ** get_address_of_selectionCircle_2() { return &___selectionCircle_2; }
	inline void set_selectionCircle_2(GameObject_t1113636619 * value)
	{
		___selectionCircle_2 = value;
		Il2CppCodeGenWriteBarrier((&___selectionCircle_2), value);
	}

	inline static int32_t get_offset_of_isSelected_3() { return static_cast<int32_t>(offsetof(Friendly_t1432090475, ___isSelected_3)); }
	inline bool get_isSelected_3() const { return ___isSelected_3; }
	inline bool* get_address_of_isSelected_3() { return &___isSelected_3; }
	inline void set_isSelected_3(bool value)
	{
		___isSelected_3 = value;
	}

	inline static int32_t get_offset_of_fire_4() { return static_cast<int32_t>(offsetof(Friendly_t1432090475, ___fire_4)); }
	inline bool get_fire_4() const { return ___fire_4; }
	inline bool* get_address_of_fire_4() { return &___fire_4; }
	inline void set_fire_4(bool value)
	{
		___fire_4 = value;
	}

	inline static int32_t get_offset_of_idnum_5() { return static_cast<int32_t>(offsetof(Friendly_t1432090475, ___idnum_5)); }
	inline int32_t get_idnum_5() const { return ___idnum_5; }
	inline int32_t* get_address_of_idnum_5() { return &___idnum_5; }
	inline void set_idnum_5(int32_t value)
	{
		___idnum_5 = value;
	}

	inline static int32_t get_offset_of_turretpos_6() { return static_cast<int32_t>(offsetof(Friendly_t1432090475, ___turretpos_6)); }
	inline uint64_t get_turretpos_6() const { return ___turretpos_6; }
	inline uint64_t* get_address_of_turretpos_6() { return &___turretpos_6; }
	inline void set_turretpos_6(uint64_t value)
	{
		___turretpos_6 = value;
	}

	inline static int32_t get_offset_of_desiredturretpos_7() { return static_cast<int32_t>(offsetof(Friendly_t1432090475, ___desiredturretpos_7)); }
	inline uint64_t get_desiredturretpos_7() const { return ___desiredturretpos_7; }
	inline uint64_t* get_address_of_desiredturretpos_7() { return &___desiredturretpos_7; }
	inline void set_desiredturretpos_7(uint64_t value)
	{
		___desiredturretpos_7 = value;
	}

	inline static int32_t get_offset_of_health_8() { return static_cast<int32_t>(offsetof(Friendly_t1432090475, ___health_8)); }
	inline uint64_t get_health_8() const { return ___health_8; }
	inline uint64_t* get_address_of_health_8() { return &___health_8; }
	inline void set_health_8(uint64_t value)
	{
		___health_8 = value;
	}

	inline static int32_t get_offset_of_cam_9() { return static_cast<int32_t>(offsetof(Friendly_t1432090475, ___cam_9)); }
	inline Camera_t4157153871 * get_cam_9() const { return ___cam_9; }
	inline Camera_t4157153871 ** get_address_of_cam_9() { return &___cam_9; }
	inline void set_cam_9(Camera_t4157153871 * value)
	{
		___cam_9 = value;
		Il2CppCodeGenWriteBarrier((&___cam_9), value);
	}

	inline static int32_t get_offset_of_groundLayer_10() { return static_cast<int32_t>(offsetof(Friendly_t1432090475, ___groundLayer_10)); }
	inline LayerMask_t3493934918  get_groundLayer_10() const { return ___groundLayer_10; }
	inline LayerMask_t3493934918 * get_address_of_groundLayer_10() { return &___groundLayer_10; }
	inline void set_groundLayer_10(LayerMask_t3493934918  value)
	{
		___groundLayer_10 = value;
	}

	inline static int32_t get_offset_of_playerAgent_11() { return static_cast<int32_t>(offsetof(Friendly_t1432090475, ___playerAgent_11)); }
	inline NavMeshAgent_t1276799816 * get_playerAgent_11() const { return ___playerAgent_11; }
	inline NavMeshAgent_t1276799816 ** get_address_of_playerAgent_11() { return &___playerAgent_11; }
	inline void set_playerAgent_11(NavMeshAgent_t1276799816 * value)
	{
		___playerAgent_11 = value;
		Il2CppCodeGenWriteBarrier((&___playerAgent_11), value);
	}

	inline static int32_t get_offset_of_path_12() { return static_cast<int32_t>(offsetof(Friendly_t1432090475, ___path_12)); }
	inline NavMeshPath_t2698325962 * get_path_12() const { return ___path_12; }
	inline NavMeshPath_t2698325962 ** get_address_of_path_12() { return &___path_12; }
	inline void set_path_12(NavMeshPath_t2698325962 * value)
	{
		___path_12 = value;
		Il2CppCodeGenWriteBarrier((&___path_12), value);
	}

	inline static int32_t get_offset_of_turr_13() { return static_cast<int32_t>(offsetof(Friendly_t1432090475, ___turr_13)); }
	inline turret_t1434794911 * get_turr_13() const { return ___turr_13; }
	inline turret_t1434794911 ** get_address_of_turr_13() { return &___turr_13; }
	inline void set_turr_13(turret_t1434794911 * value)
	{
		___turr_13 = value;
		Il2CppCodeGenWriteBarrier((&___turr_13), value);
	}

	inline static int32_t get_offset_of_hovertext_14() { return static_cast<int32_t>(offsetof(Friendly_t1432090475, ___hovertext_14)); }
	inline GameObject_t1113636619 * get_hovertext_14() const { return ___hovertext_14; }
	inline GameObject_t1113636619 ** get_address_of_hovertext_14() { return &___hovertext_14; }
	inline void set_hovertext_14(GameObject_t1113636619 * value)
	{
		___hovertext_14 = value;
		Il2CppCodeGenWriteBarrier((&___hovertext_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRIENDLY_T1432090475_H
#ifndef STATUSHANDLER_T2871395155_H
#define STATUSHANDLER_T2871395155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// statushandler
struct  statushandler_t2871395155  : public MonoBehaviour_t3962482529
{
public:
	// Friendly[] statushandler::friends
	FriendlyU5BU5D_t2327600778* ___friends_2;
	// Enemy[] statushandler::enemies
	EnemyU5BU5D_t2006687320* ___enemies_3;
	// UnityEngine.GameObject statushandler::defaulttext
	GameObject_t1113636619 * ___defaulttext_4;
	// System.Int32 statushandler::offsetX
	int32_t ___offsetX_5;
	// System.Int32 statushandler::offsetY
	int32_t ___offsetY_6;
	// System.Int32 statushandler::offsetZ
	int32_t ___offsetZ_7;
	// System.Collections.Generic.Dictionary`2<Friendly,UnityEngine.TextMesh> statushandler::friendlytexts
	Dictionary_2_t2367645494 * ___friendlytexts_8;
	// System.Collections.Generic.Dictionary`2<Enemy,UnityEngine.TextMesh> statushandler::enemytexts
	Dictionary_2_t2046732036 * ___enemytexts_9;

public:
	inline static int32_t get_offset_of_friends_2() { return static_cast<int32_t>(offsetof(statushandler_t2871395155, ___friends_2)); }
	inline FriendlyU5BU5D_t2327600778* get_friends_2() const { return ___friends_2; }
	inline FriendlyU5BU5D_t2327600778** get_address_of_friends_2() { return &___friends_2; }
	inline void set_friends_2(FriendlyU5BU5D_t2327600778* value)
	{
		___friends_2 = value;
		Il2CppCodeGenWriteBarrier((&___friends_2), value);
	}

	inline static int32_t get_offset_of_enemies_3() { return static_cast<int32_t>(offsetof(statushandler_t2871395155, ___enemies_3)); }
	inline EnemyU5BU5D_t2006687320* get_enemies_3() const { return ___enemies_3; }
	inline EnemyU5BU5D_t2006687320** get_address_of_enemies_3() { return &___enemies_3; }
	inline void set_enemies_3(EnemyU5BU5D_t2006687320* value)
	{
		___enemies_3 = value;
		Il2CppCodeGenWriteBarrier((&___enemies_3), value);
	}

	inline static int32_t get_offset_of_defaulttext_4() { return static_cast<int32_t>(offsetof(statushandler_t2871395155, ___defaulttext_4)); }
	inline GameObject_t1113636619 * get_defaulttext_4() const { return ___defaulttext_4; }
	inline GameObject_t1113636619 ** get_address_of_defaulttext_4() { return &___defaulttext_4; }
	inline void set_defaulttext_4(GameObject_t1113636619 * value)
	{
		___defaulttext_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaulttext_4), value);
	}

	inline static int32_t get_offset_of_offsetX_5() { return static_cast<int32_t>(offsetof(statushandler_t2871395155, ___offsetX_5)); }
	inline int32_t get_offsetX_5() const { return ___offsetX_5; }
	inline int32_t* get_address_of_offsetX_5() { return &___offsetX_5; }
	inline void set_offsetX_5(int32_t value)
	{
		___offsetX_5 = value;
	}

	inline static int32_t get_offset_of_offsetY_6() { return static_cast<int32_t>(offsetof(statushandler_t2871395155, ___offsetY_6)); }
	inline int32_t get_offsetY_6() const { return ___offsetY_6; }
	inline int32_t* get_address_of_offsetY_6() { return &___offsetY_6; }
	inline void set_offsetY_6(int32_t value)
	{
		___offsetY_6 = value;
	}

	inline static int32_t get_offset_of_offsetZ_7() { return static_cast<int32_t>(offsetof(statushandler_t2871395155, ___offsetZ_7)); }
	inline int32_t get_offsetZ_7() const { return ___offsetZ_7; }
	inline int32_t* get_address_of_offsetZ_7() { return &___offsetZ_7; }
	inline void set_offsetZ_7(int32_t value)
	{
		___offsetZ_7 = value;
	}

	inline static int32_t get_offset_of_friendlytexts_8() { return static_cast<int32_t>(offsetof(statushandler_t2871395155, ___friendlytexts_8)); }
	inline Dictionary_2_t2367645494 * get_friendlytexts_8() const { return ___friendlytexts_8; }
	inline Dictionary_2_t2367645494 ** get_address_of_friendlytexts_8() { return &___friendlytexts_8; }
	inline void set_friendlytexts_8(Dictionary_2_t2367645494 * value)
	{
		___friendlytexts_8 = value;
		Il2CppCodeGenWriteBarrier((&___friendlytexts_8), value);
	}

	inline static int32_t get_offset_of_enemytexts_9() { return static_cast<int32_t>(offsetof(statushandler_t2871395155, ___enemytexts_9)); }
	inline Dictionary_2_t2046732036 * get_enemytexts_9() const { return ___enemytexts_9; }
	inline Dictionary_2_t2046732036 ** get_address_of_enemytexts_9() { return &___enemytexts_9; }
	inline void set_enemytexts_9(Dictionary_2_t2046732036 * value)
	{
		___enemytexts_9 = value;
		Il2CppCodeGenWriteBarrier((&___enemytexts_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUSHANDLER_T2871395155_H
#ifndef ENEMY_T1765729589_H
#define ENEMY_T1765729589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy
struct  Enemy_t1765729589  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 Enemy::idnum
	int32_t ___idnum_2;
	// System.UInt64 Enemy::turretpos
	uint64_t ___turretpos_3;
	// System.UInt64 Enemy::health
	uint64_t ___health_4;
	// turret Enemy::turr
	turret_t1434794911 * ___turr_5;
	// System.UInt64 Enemy::desiredturretpos
	uint64_t ___desiredturretpos_6;
	// UnityEngine.GameObject Enemy::hovertext
	GameObject_t1113636619 * ___hovertext_7;

public:
	inline static int32_t get_offset_of_idnum_2() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___idnum_2)); }
	inline int32_t get_idnum_2() const { return ___idnum_2; }
	inline int32_t* get_address_of_idnum_2() { return &___idnum_2; }
	inline void set_idnum_2(int32_t value)
	{
		___idnum_2 = value;
	}

	inline static int32_t get_offset_of_turretpos_3() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___turretpos_3)); }
	inline uint64_t get_turretpos_3() const { return ___turretpos_3; }
	inline uint64_t* get_address_of_turretpos_3() { return &___turretpos_3; }
	inline void set_turretpos_3(uint64_t value)
	{
		___turretpos_3 = value;
	}

	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___health_4)); }
	inline uint64_t get_health_4() const { return ___health_4; }
	inline uint64_t* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(uint64_t value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_turr_5() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___turr_5)); }
	inline turret_t1434794911 * get_turr_5() const { return ___turr_5; }
	inline turret_t1434794911 ** get_address_of_turr_5() { return &___turr_5; }
	inline void set_turr_5(turret_t1434794911 * value)
	{
		___turr_5 = value;
		Il2CppCodeGenWriteBarrier((&___turr_5), value);
	}

	inline static int32_t get_offset_of_desiredturretpos_6() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___desiredturretpos_6)); }
	inline uint64_t get_desiredturretpos_6() const { return ___desiredturretpos_6; }
	inline uint64_t* get_address_of_desiredturretpos_6() { return &___desiredturretpos_6; }
	inline void set_desiredturretpos_6(uint64_t value)
	{
		___desiredturretpos_6 = value;
	}

	inline static int32_t get_offset_of_hovertext_7() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___hovertext_7)); }
	inline GameObject_t1113636619 * get_hovertext_7() const { return ___hovertext_7; }
	inline GameObject_t1113636619 ** get_address_of_hovertext_7() { return &___hovertext_7; }
	inline void set_hovertext_7(GameObject_t1113636619 * value)
	{
		___hovertext_7 = value;
		Il2CppCodeGenWriteBarrier((&___hovertext_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMY_T1765729589_H
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
// Enemy[]
struct EnemyU5BU5D_t2006687320  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Enemy_t1765729589 * m_Items[1];

public:
	inline Enemy_t1765729589 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Enemy_t1765729589 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Enemy_t1765729589 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Enemy_t1765729589 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Enemy_t1765729589 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Enemy_t1765729589 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
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
// Friendly[]
struct FriendlyU5BU5D_t2327600778  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Friendly_t1432090475 * m_Items[1];

public:
	inline Friendly_t1432090475 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Friendly_t1432090475 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Friendly_t1432090475 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Friendly_t1432090475 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Friendly_t1432090475 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Friendly_t1432090475 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AI.NavMeshPathStatus>::.ctor()
extern "C"  void List_1__ctor_m1031536295_gshared (List_1_t834715711 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C"  void List_1__ctor_m1628857705_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor()
extern "C"  void List_1__ctor_m690471914_gshared (List_1_t1311147538 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
extern "C"  void List_1__ctor_m3213809058_gshared (List_1_t1569362707 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AI.NavMeshPathStatus>::Add(!0)
extern "C"  void List_1_Add_m3327748905_gshared (List_1_t834715711 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C"  void List_1_Add_m697420525_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(!0)
extern "C"  void List_1_Add_m1544293466_gshared (List_1_t1569362707 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.UInt64>::Add(!0)
extern "C"  void List_1_Add_m1147512830_gshared (List_1_t1311147538 * __this, uint64_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
extern "C"  RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m1405553448_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C"  void Vector3__ctor_m1719387948 (Vector3_t3722313464 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
extern "C"  void Transform_set_eulerAngles_m135219616 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 turret::getDesired()
extern "C"  uint64_t turret_getDesired_m3020965670 (turret_t1434794911 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshPath::.ctor()
extern "C"  void NavMeshPath__ctor_m4063112187 (NavMeshPath_t2698325962 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m2081676745 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Friendly::GetPointUnderCursor()
extern "C"  Vector3_t3722313464  Friendly_GetPointUnderCursor_m4228255677 (Friendly_t1432090475 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AI.NavMeshAgent::CalculatePath(UnityEngine.Vector3,UnityEngine.AI.NavMeshPath)
extern "C"  bool NavMeshAgent_CalculatePath_m1590655433 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464  p0, NavMeshPath_t2698325962 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Friendly::SelectedEnemy()
extern "C"  bool Friendly_SelectedEnemy_m3127503251 (Friendly_t1432090475 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Friendly::intersectPath(System.Single)
extern "C"  Vector3_t3722313464  Friendly_intersectPath_m3955614036 (Friendly_t1432090475 * __this, float ___enemDist0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(System.String)
extern "C"  bool Input_GetKey_m3868879071 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C"  Ray_t3785851493  Camera_ScreenPointToRay_m3764635188 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C"  bool Physics_Raycast_m447436869 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  p0, RaycastHit_t1056001966 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C"  Transform_t3600365921 * RaycastHit_get_transform_m942054759 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C"  int32_t GameObject_get_layer_m4158800245 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C"  Vector3_t3722313464  RaycastHit_get_point_m2236647085 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Friendly>::.ctor()
#define List_1__ctor_m3304068135(__this, method) ((  void (*) (List_1_t2904165217 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Collections.IEnumerator NetworkInter::getDomain()
extern "C"  RuntimeObject* NetworkInter_getDomain_m3421936055 (NetworkInter_t3294555791 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator NetworkInter::Upload()
extern "C"  RuntimeObject* NetworkInter_Upload_m2558292387 (NetworkInter_t3294555791 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C"  void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
extern "C"  StringBuilder_t * StringBuilder_AppendFormat_m3016532472 (StringBuilder_t * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Friendly>::GetEnumerator()
#define List_1_GetEnumerator_m2902247123(__this, method) ((  Enumerator_t498441798  (*) (List_1_t2904165217 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Friendly>::get_Current()
#define Enumerator_get_Current_m372896529(__this, method) ((  Friendly_t1432090475 * (*) (Enumerator_t498441798 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.UInt64 System.BitConverter::ToUInt64(System.Byte[],System.Int32)
extern "C"  uint64_t BitConverter_ToUInt64_m1220063212 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Friendly>::MoveNext()
#define Enumerator_MoveNext_m3716447473(__this, method) ((  bool (*) (Enumerator_t498441798 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Friendly>::Dispose()
#define Enumerator_Dispose_m974345490(__this, method) ((  void (*) (Enumerator_t498441798 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void NetworkInter/toCCCP::.ctor()
extern "C"  void toCCCP__ctor_m3423810070 (toCCCP_t412537279 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3[]>::.ctor()
#define List_1__ctor_m3724216918(__this, method) ((  void (*) (List_1_t3190825503 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.AI.NavMeshPathStatus>::.ctor()
#define List_1__ctor_m1031536295(__this, method) ((  void (*) (List_1_t834715711 *, const RuntimeMethod*))List_1__ctor_m1031536295_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
#define List_1__ctor_m1628857705(__this, method) ((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1628857705_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor()
#define List_1__ctor_m690471914(__this, method) ((  void (*) (List_1_t1311147538 *, const RuntimeMethod*))List_1__ctor_m690471914_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
#define List_1__ctor_m3213809058(__this, method) ((  void (*) (List_1_t1569362707 *, const RuntimeMethod*))List_1__ctor_m3213809058_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Friendly>::get_Count()
#define List_1_get_Count_m4254215720(__this, method) ((  int32_t (*) (List_1_t2904165217 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// UnityEngine.AI.NavMeshPath Friendly::pathS()
extern "C"  NavMeshPath_t2698325962 * Friendly_pathS_m1129300489 (Friendly_t1432090475 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::get_corners()
extern "C"  Vector3U5BU5D_t1718750761* NavMeshPath_get_corners_m49832174 (NavMeshPath_t2698325962 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3[]>::Add(!0)
#define List_1_Add_m1433713276(__this, p0, method) ((  void (*) (List_1_t3190825503 *, Vector3U5BU5D_t1718750761*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// UnityEngine.AI.NavMeshPathStatus UnityEngine.AI.NavMeshPath::get_status()
extern "C"  int32_t NavMeshPath_get_status_m3174476227 (NavMeshPath_t2698325962 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.AI.NavMeshPathStatus>::Add(!0)
#define List_1_Add_m3327748905(__this, p0, method) ((  void (*) (List_1_t834715711 *, int32_t, const RuntimeMethod*))List_1_Add_m3327748905_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
#define List_1_Add_m697420525(__this, p0, method) ((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m697420525_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(!0)
#define List_1_Add_m1544293466(__this, p0, method) ((  void (*) (List_1_t1569362707 *, bool, const RuntimeMethod*))List_1_Add_m1544293466_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Add(!0)
#define List_1_Add_m1147512830(__this, p0, method) ((  void (*) (List_1_t1311147538 *, uint64_t, const RuntimeMethod*))List_1_Add_m1147512830_gshared)(__this, p0, method)
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
extern "C"  String_t* JsonConvert_SerializeObject_m952512489 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkInter/<checkIn>c__Iterator0::.ctor()
extern "C"  void U3CcheckInU3Ec__Iterator0__ctor_m160399899 (U3CcheckInU3Ec__Iterator0_t3621524179 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkInter/<getDomain>c__Iterator1::.ctor()
extern "C"  void U3CgetDomainU3Ec__Iterator1__ctor_m3949225102 (U3CgetDomainU3Ec__Iterator1_t4067793791 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkInter/<Upload>c__Iterator2::.ctor()
extern "C"  void U3CUploadU3Ec__Iterator2__ctor_m2843383515 (U3CUploadU3Ec__Iterator2_t3919425892 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
extern "C"  UnityWebRequest_t463507806 * UnityWebRequest_Get_m996521828 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Networking.UnityWebRequest::Send()
extern "C"  AsyncOperation_t1445031843 * UnityWebRequest_Send_m637654012 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
extern "C"  bool UnityWebRequest_get_isNetworkError_m1231611882 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
extern "C"  String_t* UnityWebRequest_get_error_m1613086199 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
extern "C"  DownloadHandler_t2937767557 * UnityWebRequest_get_downloadHandler_m534911913 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
extern "C"  String_t* DownloadHandler_get_text_m2427232382 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.JsonUtility::FromJson<NetworkInter/CCCPInfo>(System.String)
#define JsonUtility_FromJson_TisCCCPInfo_t355751851_m3090238981(__this /* static, unused */, p0, method) ((  CCCPInfo_t355751851 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m1405553448_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.Object::Instantiate<Friendly>(!!0)
#define Object_Instantiate_TisFriendly_t1432090475_m3961570963(__this /* static, unused */, p0, method) ((  Friendly_t1432090475 * (*) (RuntimeObject * /* static, unused */, Friendly_t1432090475 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.Object::Instantiate<turret>(!!0)
#define Object_Instantiate_Tisturret_t1434794911_m1115786247(__this /* static, unused */, p0, method) ((  turret_t1434794911 * (*) (RuntimeObject * /* static, unused */, turret_t1434794911 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Collections.Generic.List`1<Friendly>::Add(!0)
#define List_1_Add_m3533371377(__this, p0, method) ((  void (*) (List_1_t2904165217 *, Friendly_t1432090475 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void NetworkInter/<checkIn>c__Iterator0::<>__Finally0()
extern "C"  void U3CcheckInU3Ec__Iterator0_U3CU3E__Finally0_m2255862810 (U3CcheckInU3Ec__Iterator0_t3621524179 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,System.String)
extern "C"  UnityWebRequest_t463507806 * UnityWebRequest_Post_m4211532029 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.JsonUtility::FromJson<NetworkInter/dbaseresp>(System.String)
#define JsonUtility_FromJson_Tisdbaseresp_t1660734409_m384217465(__this /* static, unused */, p0, method) ((  dbaseresp_t1660734409 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m1405553448_gshared)(__this /* static, unused */, p0, method)
// System.Collections.IEnumerator NetworkInter::checkIn()
extern "C"  RuntimeObject* NetworkInter_checkIn_m3538085350 (NetworkInter_t3294555791 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkInter/<getDomain>c__Iterator1::<>__Finally0()
extern "C"  void U3CgetDomainU3Ec__Iterator1_U3CU3E__Finally0_m1825419415 (U3CgetDomainU3Ec__Iterator1_t4067793791 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NetworkInter::genJSON()
extern "C"  String_t* NetworkInter_genJSON_m557539847 (NetworkInter_t3294555791 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C"  Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.Byte[])
extern "C"  UnityWebRequest_t463507806 * UnityWebRequest_Put_m3541626144 (RuntimeObject * __this /* static, unused */, String_t* p0, ByteU5BU5D_t4116647657* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
extern "C"  ByteU5BU5D_t4116647657* DownloadHandler_get_data_m1669096410 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkInter/<Upload>c__Iterator2::<>__Finally0()
extern "C"  void U3CUploadU3Ec__Iterator2_U3CU3E__Finally0_m3159395052 (U3CUploadU3Ec__Iterator2_t3919425892 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkInter::DoLast()
extern "C"  void NetworkInter_DoLast_m1143668936 (NetworkInter_t3294555791 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1113636619_m4070250708(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.TextMesh>()
#define GameObject_GetComponent_TisTextMesh_t1536577757_m4126089779(__this, method) ((  TextMesh_t1536577757 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.TextMesh::set_text(System.String)
extern "C"  void TextMesh_set_text_m446189179 (TextMesh_t1536577757 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString()
extern "C"  String_t* UInt64_ToString_m1529093114 (uint64_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C"  int32_t Mathf_FloorToInt_m1870542928 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_MoveTowards_m2786395547 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Object::FindObjectsOfType<Friendly>()
#define Object_FindObjectsOfType_TisFriendly_t1432090475_m1621701754(__this /* static, unused */, method) ((  FriendlyU5BU5D_t2327600778* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared)(__this /* static, unused */, method)
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern "C"  GameObject_t1113636619 * GameObject_get_gameObject_m3693461266 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C"  bool Input_GetMouseButtonUp_m2924350851 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnitSelectionComponent::IsWithinSelectionBounds(UnityEngine.GameObject)
extern "C"  bool UnitSelectionComponent_IsWithinSelectionBounds_m51108003 (UnitSelectionComponent_t1709564938 * __this, GameObject_t1113636619 * ___gameObject0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
extern "C"  StringBuilder_t * StringBuilder_AppendLine_m1438862993 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C"  void Transform_SetParent_m273471670 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds Utils::GetViewportBounds(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Bounds_t2266837910  Utils_GetViewportBounds_m4169378815 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * ___camera0, Vector3_t3722313464  ___screenPosition11, Vector3_t3722313464  ___screenPosition22, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_WorldToViewportPoint_m1538355680 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
extern "C"  bool Bounds_Contains_m1110518741 (Bounds_t2266837910 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Utils::GetScreenRect(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Rect_t2360479859  Utils_GetScreenRect_m1664496423 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___screenPosition10, Vector3_t3722313464  ___screenPosition21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils::DrawScreenRect(UnityEngine.Rect,UnityEngine.Color)
extern "C"  void Utils_DrawScreenRect_m2086374356 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  ___rect0, Color_t2555686324  ___color1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils::DrawScreenRectBorder(UnityEngine.Rect,System.Single,UnityEngine.Color)
extern "C"  void Utils_DrawScreenRectBorder_m3346770794 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  ___rect0, float ___thickness1, Color_t2555686324  ___color2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C"  void Texture2D__ctor_m373113269 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C"  void Texture2D_SetPixel_m2984741184 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, Color_t2555686324  p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C"  void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_Min_m1803158933 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_Max_m3304052994 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Rect::MinMaxRect(System.Single,System.Single,System.Single,System.Single)
extern "C"  Rect_t2360479859  Rect_MinMaxRect_m1878824187 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_ScreenToViewportPoint_m3569032523 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C"  float Camera_get_nearClipPlane_m837839537 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C"  float Camera_get_farClipPlane_m538536689 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Bounds_SetMinMax_m2201062677 (Bounds_t2266837910 * __this, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
extern "C"  void GUI_set_color_m1028198571 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Utils::get_WhiteTexture()
extern "C"  Texture2D_t3840446185 * Utils_get_WhiteTexture_m3457094338 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
extern "C"  void GUI_DrawTexture_m3124770796 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, Texture_t3661962703 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMin()
extern "C"  float Rect_get_xMin_m581135837 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMin()
extern "C"  float Rect_get_yMin_m2601414109 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
extern "C"  float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
extern "C"  float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMax()
extern "C"  float Rect_get_xMax_m3018144503 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMax()
extern "C"  float Rect_get_yMax_m743455479 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void Enemy::.ctor()
extern "C"  void Enemy__ctor_m2535212804 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Enemy::Start()
extern "C"  void Enemy_Start_m3612231678 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Enemy::Update()
extern "C"  void Enemy_Update_m3583063749 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	{
		turret_t1434794911 * L_0 = __this->get_turr_5();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		uint64_t L_2 = __this->get_turretpos_3();
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m1719387948((&L_3), (90.0f), (((float)((float)(((double)((uint64_t)L_2)))))), /*hidden argument*/NULL);
		Transform_set_eulerAngles_m135219616(L_1, L_3, /*hidden argument*/NULL);
		turret_t1434794911 * L_4 = __this->get_turr_5();
		uint64_t L_5 = turret_getDesired_m3020965670(L_4, /*hidden argument*/NULL);
		__this->set_desiredturretpos_6(L_5);
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
// System.Void Friendly::.ctor()
extern "C"  void Friendly__ctor_m2308144918 (Friendly_t1432090475 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Friendly::Awake()
extern "C"  void Friendly_Awake_m1464199399 (Friendly_t1432090475 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Friendly_Awake_m1464199399_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_cam_9(L_0);
		NavMeshPath_t2698325962 * L_1 = (NavMeshPath_t2698325962 *)il2cpp_codegen_object_new(NavMeshPath_t2698325962_il2cpp_TypeInfo_var);
		NavMeshPath__ctor_m4063112187(L_1, /*hidden argument*/NULL);
		__this->set_path_12(L_1);
		return;
	}
}
// System.Void Friendly::Start()
extern "C"  void Friendly_Start_m4110352578 (Friendly_t1432090475 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Friendly::Update()
extern "C"  void Friendly_Update_m370831634 (Friendly_t1432090475 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Friendly_Update_m370831634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		turret_t1434794911 * L_0 = __this->get_turr_13();
		uint64_t L_1 = turret_getDesired_m3020965670(L_0, /*hidden argument*/NULL);
		__this->set_desiredturretpos_7(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		bool L_3 = __this->get_isSelected_3();
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		NavMeshAgent_t1276799816 * L_4 = __this->get_playerAgent_11();
		Vector3_t3722313464  L_5 = Friendly_GetPointUnderCursor_m4228255677(__this, /*hidden argument*/NULL);
		NavMeshPath_t2698325962 * L_6 = __this->get_path_12();
		NavMeshAgent_CalculatePath_m1590655433(L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_003f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_007d;
		}
	}
	{
		bool L_8 = __this->get_isSelected_3();
		if (!L_8)
		{
			goto IL_007d;
		}
	}
	{
		bool L_9 = Friendly_SelectedEnemy_m3127503251(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_007d;
		}
	}
	{
		NavMeshAgent_t1276799816 * L_10 = __this->get_playerAgent_11();
		Vector3_t3722313464  L_11 = Friendly_intersectPath_m3955614036(__this, (5.0f), /*hidden argument*/NULL);
		NavMeshPath_t2698325962 * L_12 = __this->get_path_12();
		NavMeshAgent_CalculatePath_m1590655433(L_10, L_11, L_12, /*hidden argument*/NULL);
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_13 = Input_GetKey_m3868879071(NULL /*static, unused*/, _stringLiteral1613539661, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0098;
		}
	}
	{
		__this->set_fire_4((bool)1);
		goto IL_009f;
	}

IL_0098:
	{
		__this->set_fire_4((bool)0);
	}

IL_009f:
	{
		return;
	}
}
// UnityEngine.Vector3 Friendly::intersectPath(System.Single)
extern "C"  Vector3_t3722313464  Friendly_intersectPath_m3955614036 (Friendly_t1432090475 * __this, float ___enemDist0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Friendly_intersectPath_m3955614036_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t3722313464  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector3_t3722313464  V_11;
	memset(&V_11, 0, sizeof(V_11));
	{
		turret_t1434794911 * L_0 = __this->get_turr_13();
		GameObject_t1113636619 * L_1 = L_0->get_target_3();
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = (&V_1)->get_y_2();
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = (&V_2)->get_y_2();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_4, (float)L_7));
		turret_t1434794911 * L_8 = __this->get_turr_13();
		GameObject_t1113636619 * L_9 = L_8->get_target_3();
		Transform_t3600365921 * L_10 = GameObject_get_transform_m1369836730(L_9, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		float L_12 = (&V_4)->get_x_1();
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		float L_15 = (&V_5)->get_x_1();
		V_3 = ((float)il2cpp_codegen_subtract((float)L_12, (float)L_15));
		float L_16 = V_0;
		float L_17 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_18 = atanf(((float)((float)L_16/(float)L_17)));
		V_6 = L_18;
		float L_19 = V_0;
		float L_20 = V_0;
		float L_21 = V_3;
		float L_22 = V_3;
		float L_23 = sqrtf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_20)), (float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)))));
		V_7 = L_23;
		float L_24 = V_6;
		float L_25 = cosf(L_24);
		float L_26 = V_7;
		float L_27 = ___enemDist0;
		turret_t1434794911 * L_28 = __this->get_turr_13();
		GameObject_t1113636619 * L_29 = L_28->get_target_3();
		Transform_t3600365921 * L_30 = GameObject_get_transform_m1369836730(L_29, /*hidden argument*/NULL);
		Vector3_t3722313464  L_31 = Transform_get_position_m36019626(L_30, /*hidden argument*/NULL);
		V_9 = L_31;
		float L_32 = (&V_9)->get_x_1();
		(&V_8)->set_x_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_25, (float)((float)il2cpp_codegen_subtract((float)L_26, (float)L_27)))), (float)L_32)));
		float L_33 = V_6;
		float L_34 = sinf(L_33);
		float L_35 = V_7;
		float L_36 = ___enemDist0;
		turret_t1434794911 * L_37 = __this->get_turr_13();
		GameObject_t1113636619 * L_38 = L_37->get_target_3();
		Transform_t3600365921 * L_39 = GameObject_get_transform_m1369836730(L_38, /*hidden argument*/NULL);
		Vector3_t3722313464  L_40 = Transform_get_position_m36019626(L_39, /*hidden argument*/NULL);
		V_10 = L_40;
		float L_41 = (&V_10)->get_y_2();
		(&V_8)->set_z_3(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_34, (float)((float)il2cpp_codegen_subtract((float)L_35, (float)L_36)))), (float)L_41)));
		Transform_t3600365921 * L_42 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_43 = Transform_get_position_m36019626(L_42, /*hidden argument*/NULL);
		V_11 = L_43;
		float L_44 = (&V_11)->get_y_2();
		(&V_8)->set_y_2(L_44);
		Vector3_t3722313464  L_45 = V_8;
		return L_45;
	}
}
// UnityEngine.AI.NavMeshPath Friendly::pathS()
extern "C"  NavMeshPath_t2698325962 * Friendly_pathS_m1129300489 (Friendly_t1432090475 * __this, const RuntimeMethod* method)
{
	{
		NavMeshPath_t2698325962 * L_0 = __this->get_path_12();
		return L_0;
	}
}
// System.Boolean Friendly::SelectedEnemy()
extern "C"  bool Friendly_SelectedEnemy_m3127503251 (Friendly_t1432090475 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Friendly_SelectedEnemy_m3127503251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t1056001966  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastHit_t1056001966 ));
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t3785851493  L_2 = Camera_ScreenPointToRay_m3764635188(L_0, L_1, /*hidden argument*/NULL);
		bool L_3 = Physics_Raycast_m447436869(NULL /*static, unused*/, L_2, (&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		Transform_t3600365921 * L_5 = RaycastHit_get_transform_m942054759((&V_0), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
		int32_t L_7 = GameObject_get_layer_m4158800245(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1937369867, /*hidden argument*/NULL);
		turret_t1434794911 * L_8 = __this->get_turr_13();
		Transform_t3600365921 * L_9 = RaycastHit_get_transform_m942054759((&V_0), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
		L_8->set_target_3(L_10);
		return (bool)1;
	}

IL_0060:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2363346365, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// UnityEngine.Vector3 Friendly::GetPointUnderCursor()
extern "C"  Vector3_t3722313464  Friendly_GetPointUnderCursor_m4228255677 (Friendly_t1432090475 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Friendly_GetPointUnderCursor_m4228255677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t3785851493  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RaycastHit_t1056001966  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Camera_t4157153871 * L_0 = __this->get_cam_9();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t3785851493  L_2 = Camera_ScreenPointToRay_m3764635188(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		il2cpp_codegen_initobj((&V_1), sizeof(RaycastHit_t1056001966 ));
		Ray_t3785851493  L_3 = V_0;
		Physics_Raycast_m447436869(NULL /*static, unused*/, L_3, (&V_1), /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = RaycastHit_get_point_m2236647085((&V_1), /*hidden argument*/NULL);
		return L_4;
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
// System.Void NetworkInter::.ctor()
extern "C"  void NetworkInter__ctor_m2148511928 (NetworkInter_t3294555791 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NetworkInter::Start()
extern "C"  void NetworkInter_Start_m2044139042 (NetworkInter_t3294555791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkInter_Start_m2044139042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2904165217 * L_0 = (List_1_t2904165217 *)il2cpp_codegen_object_new(List_1_t2904165217_il2cpp_TypeInfo_var);
		List_1__ctor_m3304068135(L_0, /*hidden argument*/List_1__ctor_m3304068135_RuntimeMethod_var);
		__this->set_friends_3(L_0);
		__this->set_IP_8(_stringLiteral1305937687);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1756431291, /*hidden argument*/NULL);
		RuntimeObject* L_1 = NetworkInter_getDomain_m3421936055(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NetworkInter::Update()
extern "C"  void NetworkInter_Update_m3942159416 (NetworkInter_t3294555791 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = NetworkInter_Upload_m2558292387(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String NetworkInter::ByteArrayToString(System.Byte[])
extern "C"  String_t* NetworkInter_ByteArrayToString_m291155978 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___ba0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkInter_ByteArrayToString_m291155978_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___ba0;
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_1, ((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t4116647657* L_2 = ___ba0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_002e;
	}

IL_0014:
	{
		ByteU5BU5D_t4116647657* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		StringBuilder_t * L_7 = V_0;
		uint8_t L_8 = V_1;
		uint8_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_9);
		StringBuilder_AppendFormat_m3016532472(L_7, _stringLiteral415913809, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_12 = V_3;
		ByteU5BU5D_t4116647657* L_13 = V_2;
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_0014;
		}
	}
	{
		StringBuilder_t * L_14 = V_0;
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		return L_15;
	}
}
// System.Void NetworkInter::DoLast()
extern "C"  void NetworkInter_DoLast_m1143668936 (NetworkInter_t3294555791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkInter_DoLast_m1143668936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	Friendly_t1432090475 * V_5 = NULL;
	Enumerator_t498441798  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Enemy_t1765729589 * V_10 = NULL;
	EnemyU5BU5D_t2006687320* V_11 = NULL;
	int32_t V_12 = 0;
	Vector3_t3722313464  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Vector3_t3722313464  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_results_2();
		if (!(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))))
		{
			goto IL_02a3;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_results_2();
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		__this->set_numbots_9(L_3);
		List_1_t2904165217 * L_4 = __this->get_friends_3();
		Enumerator_t498441798  L_5 = List_1_GetEnumerator_m2902247123(L_4, /*hidden argument*/List_1_GetEnumerator_m2902247123_RuntimeMethod_var);
		V_6 = L_5;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			goto IL_014e;
		}

IL_002d:
		{
			Friendly_t1432090475 * L_6 = Enumerator_get_Current_m372896529((&V_6), /*hidden argument*/Enumerator_get_Current_m372896529_RuntimeMethod_var);
			V_5 = L_6;
			ByteU5BU5D_t4116647657* L_7 = __this->get_results_2();
			Friendly_t1432090475 * L_8 = V_5;
			int32_t L_9 = L_8->get_idnum_5();
			IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
			uint64_t L_10 = BitConverter_ToUInt64_m1220063212(NULL /*static, unused*/, L_7, ((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)8)))), /*hidden argument*/NULL);
			V_0 = L_10;
			ByteU5BU5D_t4116647657* L_11 = __this->get_results_2();
			int32_t L_12 = __this->get_numbots_9();
			Friendly_t1432090475 * L_13 = V_5;
			int32_t L_14 = L_13->get_idnum_5();
			uint64_t L_15 = BitConverter_ToUInt64_m1220063212(NULL /*static, unused*/, L_11, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)8)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)8)))), /*hidden argument*/NULL);
			V_1 = L_15;
			ByteU5BU5D_t4116647657* L_16 = __this->get_results_2();
			int32_t L_17 = __this->get_numbots_9();
			Friendly_t1432090475 * L_18 = V_5;
			int32_t L_19 = L_18->get_idnum_5();
			uint64_t L_20 = BitConverter_ToUInt64_m1220063212(NULL /*static, unused*/, L_16, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_17)), (int32_t)8)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)8)))), /*hidden argument*/NULL);
			V_4 = L_20;
			ByteU5BU5D_t4116647657* L_21 = __this->get_results_2();
			int32_t L_22 = __this->get_numbots_9();
			Friendly_t1432090475 * L_23 = V_5;
			int32_t L_24 = L_23->get_idnum_5();
			uint64_t L_25 = BitConverter_ToUInt64_m1220063212(NULL /*static, unused*/, L_21, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)3, (int32_t)L_22)), (int32_t)8)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)8)))), /*hidden argument*/NULL);
			V_2 = L_25;
			ByteU5BU5D_t4116647657* L_26 = __this->get_results_2();
			int32_t L_27 = __this->get_numbots_9();
			Friendly_t1432090475 * L_28 = V_5;
			int32_t L_29 = L_28->get_idnum_5();
			uint64_t L_30 = BitConverter_ToUInt64_m1220063212(NULL /*static, unused*/, L_26, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_27)), (int32_t)8)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)8)))), /*hidden argument*/NULL);
			V_3 = L_30;
			uint64_t L_31 = V_0;
			Friendly_t1432090475 * L_32 = V_5;
			Transform_t3600365921 * L_33 = Component_get_transform_m3162698980(L_32, /*hidden argument*/NULL);
			Vector3_t3722313464  L_34 = Transform_get_position_m36019626(L_33, /*hidden argument*/NULL);
			V_8 = L_34;
			float L_35 = (&V_8)->get_y_2();
			uint64_t L_36 = V_1;
			Vector3__ctor_m3353183577((&V_7), (((float)((float)(((double)((uint64_t)((int64_t)((uint64_t)(int64_t)L_31/(uint64_t)(int64_t)(((int64_t)((int64_t)2))))))))))), L_35, (((float)((float)(((double)((uint64_t)((int64_t)((uint64_t)(int64_t)L_36/(uint64_t)(int64_t)(((int64_t)((int64_t)2))))))))))), /*hidden argument*/NULL);
			Friendly_t1432090475 * L_37 = V_5;
			Transform_t3600365921 * L_38 = Component_get_transform_m3162698980(L_37, /*hidden argument*/NULL);
			Vector3_t3722313464  L_39 = V_7;
			Transform_set_position_m3387557959(L_38, L_39, /*hidden argument*/NULL);
			uint64_t L_40 = V_2;
			Vector3__ctor_m1719387948((&V_9), (0.0f), (((float)((float)(((double)((uint64_t)L_40)))))), /*hidden argument*/NULL);
			Friendly_t1432090475 * L_41 = V_5;
			Transform_t3600365921 * L_42 = Component_get_transform_m3162698980(L_41, /*hidden argument*/NULL);
			Vector3_t3722313464  L_43 = V_9;
			Transform_set_eulerAngles_m135219616(L_42, L_43, /*hidden argument*/NULL);
			Friendly_t1432090475 * L_44 = V_5;
			uint64_t L_45 = V_3;
			L_44->set_health_8(L_45);
			Friendly_t1432090475 * L_46 = V_5;
			turret_t1434794911 * L_47 = L_46->get_turr_13();
			Transform_t3600365921 * L_48 = Component_get_transform_m3162698980(L_47, /*hidden argument*/NULL);
			uint64_t L_49 = V_4;
			Vector3_t3722313464  L_50;
			memset(&L_50, 0, sizeof(L_50));
			Vector3__ctor_m1719387948((&L_50), (90.0f), (((float)((float)(((double)((uint64_t)L_49)))))), /*hidden argument*/NULL);
			Transform_set_eulerAngles_m135219616(L_48, L_50, /*hidden argument*/NULL);
		}

IL_014e:
		{
			bool L_51 = Enumerator_MoveNext_m3716447473((&V_6), /*hidden argument*/Enumerator_MoveNext_m3716447473_RuntimeMethod_var);
			if (L_51)
			{
				goto IL_002d;
			}
		}

IL_015a:
		{
			IL2CPP_LEAVE(0x16D, FINALLY_015f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_015f;
	}

FINALLY_015f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m974345490((&V_6), /*hidden argument*/Enumerator_Dispose_m974345490_RuntimeMethod_var);
		IL2CPP_END_FINALLY(351)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(351)
	{
		IL2CPP_JUMP_TBL(0x16D, IL_016d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_016d:
	{
		EnemyU5BU5D_t2006687320* L_52 = __this->get_enemies_6();
		V_11 = L_52;
		V_12 = 0;
		goto IL_0298;
	}

IL_017d:
	{
		EnemyU5BU5D_t2006687320* L_53 = V_11;
		int32_t L_54 = V_12;
		int32_t L_55 = L_54;
		Enemy_t1765729589 * L_56 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		V_10 = L_56;
		ByteU5BU5D_t4116647657* L_57 = __this->get_results_2();
		Enemy_t1765729589 * L_58 = V_10;
		int32_t L_59 = L_58->get_idnum_2();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		uint64_t L_60 = BitConverter_ToUInt64_m1220063212(NULL /*static, unused*/, L_57, ((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_59, (int32_t)8)))), /*hidden argument*/NULL);
		V_0 = L_60;
		ByteU5BU5D_t4116647657* L_61 = __this->get_results_2();
		int32_t L_62 = __this->get_numbots_9();
		Enemy_t1765729589 * L_63 = V_10;
		int32_t L_64 = L_63->get_idnum_2();
		uint64_t L_65 = BitConverter_ToUInt64_m1220063212(NULL /*static, unused*/, L_61, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_62, (int32_t)8)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_64, (int32_t)8)))), /*hidden argument*/NULL);
		V_1 = L_65;
		ByteU5BU5D_t4116647657* L_66 = __this->get_results_2();
		int32_t L_67 = __this->get_numbots_9();
		Enemy_t1765729589 * L_68 = V_10;
		int32_t L_69 = L_68->get_idnum_2();
		uint64_t L_70 = BitConverter_ToUInt64_m1220063212(NULL /*static, unused*/, L_66, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_67)), (int32_t)8)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_69, (int32_t)8)))), /*hidden argument*/NULL);
		V_4 = L_70;
		ByteU5BU5D_t4116647657* L_71 = __this->get_results_2();
		int32_t L_72 = __this->get_numbots_9();
		Enemy_t1765729589 * L_73 = V_10;
		int32_t L_74 = L_73->get_idnum_2();
		uint64_t L_75 = BitConverter_ToUInt64_m1220063212(NULL /*static, unused*/, L_71, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)3, (int32_t)L_72)), (int32_t)8)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_74, (int32_t)8)))), /*hidden argument*/NULL);
		V_2 = L_75;
		ByteU5BU5D_t4116647657* L_76 = __this->get_results_2();
		int32_t L_77 = __this->get_numbots_9();
		Enemy_t1765729589 * L_78 = V_10;
		int32_t L_79 = L_78->get_idnum_2();
		uint64_t L_80 = BitConverter_ToUInt64_m1220063212(NULL /*static, unused*/, L_76, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_77)), (int32_t)8)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_79, (int32_t)8)))), /*hidden argument*/NULL);
		V_3 = L_80;
		Enemy_t1765729589 * L_81 = V_10;
		Transform_t3600365921 * L_82 = Component_get_transform_m3162698980(L_81, /*hidden argument*/NULL);
		uint64_t L_83 = V_0;
		Enemy_t1765729589 * L_84 = V_10;
		Transform_t3600365921 * L_85 = Component_get_transform_m3162698980(L_84, /*hidden argument*/NULL);
		Vector3_t3722313464  L_86 = Transform_get_position_m36019626(L_85, /*hidden argument*/NULL);
		V_13 = L_86;
		float L_87 = (&V_13)->get_y_2();
		uint64_t L_88 = V_1;
		Vector3_t3722313464  L_89;
		memset(&L_89, 0, sizeof(L_89));
		Vector3__ctor_m3353183577((&L_89), (((float)((float)(((double)((uint64_t)L_83)))))), L_87, (((float)((float)(((double)((uint64_t)L_88)))))), /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_82, L_89, /*hidden argument*/NULL);
		uint64_t L_90 = V_2;
		Vector3__ctor_m1719387948((&V_14), (0.0f), (((float)((float)(((double)((uint64_t)L_90)))))), /*hidden argument*/NULL);
		Enemy_t1765729589 * L_91 = V_10;
		Transform_t3600365921 * L_92 = Component_get_transform_m3162698980(L_91, /*hidden argument*/NULL);
		Vector3_t3722313464  L_93 = V_14;
		Transform_set_eulerAngles_m135219616(L_92, L_93, /*hidden argument*/NULL);
		Enemy_t1765729589 * L_94 = V_10;
		uint64_t L_95 = V_3;
		L_94->set_health_4(L_95);
		Enemy_t1765729589 * L_96 = V_10;
		turret_t1434794911 * L_97 = L_96->get_turr_5();
		Transform_t3600365921 * L_98 = Component_get_transform_m3162698980(L_97, /*hidden argument*/NULL);
		uint64_t L_99 = V_4;
		Vector3_t3722313464  L_100;
		memset(&L_100, 0, sizeof(L_100));
		Vector3__ctor_m1719387948((&L_100), (90.0f), (((float)((float)(((double)((uint64_t)L_99)))))), /*hidden argument*/NULL);
		Transform_set_eulerAngles_m135219616(L_98, L_100, /*hidden argument*/NULL);
		int32_t L_101 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1));
	}

IL_0298:
	{
		int32_t L_102 = V_12;
		EnemyU5BU5D_t2006687320* L_103 = V_11;
		if ((((int32_t)L_102) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_103)->max_length)))))))
		{
			goto IL_017d;
		}
	}

IL_02a3:
	{
		return;
	}
}
// System.String NetworkInter::genJSON()
extern "C"  String_t* NetworkInter_genJSON_m557539847 (NetworkInter_t3294555791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkInter_genJSON_m557539847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	toCCCP_t412537279 * V_0 = NULL;
	NavMeshPath_t2698325962 * V_1 = NULL;
	String_t* V_2 = NULL;
	Friendly_t1432090475 * V_3 = NULL;
	Enumerator_t498441798  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		toCCCP_t412537279 * L_0 = (toCCCP_t412537279 *)il2cpp_codegen_object_new(toCCCP_t412537279_il2cpp_TypeInfo_var);
		toCCCP__ctor_m3423810070(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		toCCCP_t412537279 * L_1 = V_0;
		L_1->set_ready_0((bool)1);
		toCCCP_t412537279 * L_2 = V_0;
		L_2->set_alldead_1((bool)0);
		toCCCP_t412537279 * L_3 = V_0;
		List_1_t3190825503 * L_4 = (List_1_t3190825503 *)il2cpp_codegen_object_new(List_1_t3190825503_il2cpp_TypeInfo_var);
		List_1__ctor_m3724216918(L_4, /*hidden argument*/List_1__ctor_m3724216918_RuntimeMethod_var);
		L_3->set_paths_2(L_4);
		toCCCP_t412537279 * L_5 = V_0;
		List_1_t834715711 * L_6 = (List_1_t834715711 *)il2cpp_codegen_object_new(List_1_t834715711_il2cpp_TypeInfo_var);
		List_1__ctor_m1031536295(L_6, /*hidden argument*/List_1__ctor_m1031536295_RuntimeMethod_var);
		L_5->set_status_3(L_6);
		toCCCP_t412537279 * L_7 = V_0;
		List_1_t128053199 * L_8 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1628857705(L_8, /*hidden argument*/List_1__ctor_m1628857705_RuntimeMethod_var);
		L_7->set_ids_4(L_8);
		toCCCP_t412537279 * L_9 = V_0;
		List_1_t1311147538 * L_10 = (List_1_t1311147538 *)il2cpp_codegen_object_new(List_1_t1311147538_il2cpp_TypeInfo_var);
		List_1__ctor_m690471914(L_10, /*hidden argument*/List_1__ctor_m690471914_RuntimeMethod_var);
		L_9->set_Dturretposs_6(L_10);
		toCCCP_t412537279 * L_11 = V_0;
		List_1_t1569362707 * L_12 = (List_1_t1569362707 *)il2cpp_codegen_object_new(List_1_t1569362707_il2cpp_TypeInfo_var);
		List_1__ctor_m3213809058(L_12, /*hidden argument*/List_1__ctor_m3213809058_RuntimeMethod_var);
		L_11->set_fires_5(L_12);
		NavMeshPath_t2698325962 * L_13 = (NavMeshPath_t2698325962 *)il2cpp_codegen_object_new(NavMeshPath_t2698325962_il2cpp_TypeInfo_var);
		NavMeshPath__ctor_m4063112187(L_13, /*hidden argument*/NULL);
		V_1 = L_13;
		List_1_t2904165217 * L_14 = __this->get_friends_3();
		int32_t L_15 = List_1_get_Count_m4254215720(L_14, /*hidden argument*/List_1_get_Count_m4254215720_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_0102;
		}
	}
	{
		List_1_t2904165217 * L_16 = __this->get_friends_3();
		Enumerator_t498441798  L_17 = List_1_GetEnumerator_m2902247123(L_16, /*hidden argument*/List_1_GetEnumerator_m2902247123_RuntimeMethod_var);
		V_4 = L_17;
	}

IL_006e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d7;
		}

IL_0073:
		{
			Friendly_t1432090475 * L_18 = Enumerator_get_Current_m372896529((&V_4), /*hidden argument*/Enumerator_get_Current_m372896529_RuntimeMethod_var);
			V_3 = L_18;
			Friendly_t1432090475 * L_19 = V_3;
			NavMeshPath_t2698325962 * L_20 = Friendly_pathS_m1129300489(L_19, /*hidden argument*/NULL);
			V_1 = L_20;
			toCCCP_t412537279 * L_21 = V_0;
			List_1_t3190825503 * L_22 = L_21->get_paths_2();
			NavMeshPath_t2698325962 * L_23 = V_1;
			Vector3U5BU5D_t1718750761* L_24 = NavMeshPath_get_corners_m49832174(L_23, /*hidden argument*/NULL);
			List_1_Add_m1433713276(L_22, L_24, /*hidden argument*/List_1_Add_m1433713276_RuntimeMethod_var);
			toCCCP_t412537279 * L_25 = V_0;
			List_1_t834715711 * L_26 = L_25->get_status_3();
			NavMeshPath_t2698325962 * L_27 = V_1;
			int32_t L_28 = NavMeshPath_get_status_m3174476227(L_27, /*hidden argument*/NULL);
			List_1_Add_m3327748905(L_26, L_28, /*hidden argument*/List_1_Add_m3327748905_RuntimeMethod_var);
			toCCCP_t412537279 * L_29 = V_0;
			List_1_t128053199 * L_30 = L_29->get_ids_4();
			Friendly_t1432090475 * L_31 = V_3;
			int32_t L_32 = L_31->get_idnum_5();
			List_1_Add_m697420525(L_30, L_32, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
			toCCCP_t412537279 * L_33 = V_0;
			List_1_t1569362707 * L_34 = L_33->get_fires_5();
			Friendly_t1432090475 * L_35 = V_3;
			bool L_36 = L_35->get_fire_4();
			List_1_Add_m1544293466(L_34, L_36, /*hidden argument*/List_1_Add_m1544293466_RuntimeMethod_var);
			toCCCP_t412537279 * L_37 = V_0;
			List_1_t1311147538 * L_38 = L_37->get_Dturretposs_6();
			Friendly_t1432090475 * L_39 = V_3;
			uint64_t L_40 = L_39->get_desiredturretpos_7();
			List_1_Add_m1147512830(L_38, L_40, /*hidden argument*/List_1_Add_m1147512830_RuntimeMethod_var);
		}

IL_00d7:
		{
			bool L_41 = Enumerator_MoveNext_m3716447473((&V_4), /*hidden argument*/Enumerator_MoveNext_m3716447473_RuntimeMethod_var);
			if (L_41)
			{
				goto IL_0073;
			}
		}

IL_00e3:
		{
			IL2CPP_LEAVE(0xF6, FINALLY_00e8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e8;
	}

FINALLY_00e8:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m974345490((&V_4), /*hidden argument*/Enumerator_Dispose_m974345490_RuntimeMethod_var);
		IL2CPP_END_FINALLY(232)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(232)
	{
		IL2CPP_JUMP_TBL(0xF6, IL_00f6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f6:
	{
		toCCCP_t412537279 * L_42 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t3077351166_il2cpp_TypeInfo_var);
		String_t* L_43 = JsonConvert_SerializeObject_m952512489(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		V_2 = L_43;
		goto IL_0108;
	}

IL_0102:
	{
		V_2 = _stringLiteral3455956949;
	}

IL_0108:
	{
		String_t* L_44 = V_2;
		return L_44;
	}
}
// System.Collections.IEnumerator NetworkInter::checkIn()
extern "C"  RuntimeObject* NetworkInter_checkIn_m3538085350 (NetworkInter_t3294555791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkInter_checkIn_m3538085350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CcheckInU3Ec__Iterator0_t3621524179 * V_0 = NULL;
	{
		U3CcheckInU3Ec__Iterator0_t3621524179 * L_0 = (U3CcheckInU3Ec__Iterator0_t3621524179 *)il2cpp_codegen_object_new(U3CcheckInU3Ec__Iterator0_t3621524179_il2cpp_TypeInfo_var);
		U3CcheckInU3Ec__Iterator0__ctor_m160399899(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CcheckInU3Ec__Iterator0_t3621524179 * L_1 = V_0;
		L_1->set_U24this_3(__this);
		U3CcheckInU3Ec__Iterator0_t3621524179 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator NetworkInter::getDomain()
extern "C"  RuntimeObject* NetworkInter_getDomain_m3421936055 (NetworkInter_t3294555791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkInter_getDomain_m3421936055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CgetDomainU3Ec__Iterator1_t4067793791 * V_0 = NULL;
	{
		U3CgetDomainU3Ec__Iterator1_t4067793791 * L_0 = (U3CgetDomainU3Ec__Iterator1_t4067793791 *)il2cpp_codegen_object_new(U3CgetDomainU3Ec__Iterator1_t4067793791_il2cpp_TypeInfo_var);
		U3CgetDomainU3Ec__Iterator1__ctor_m3949225102(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CgetDomainU3Ec__Iterator1_t4067793791 * L_1 = V_0;
		L_1->set_U24this_1(__this);
		U3CgetDomainU3Ec__Iterator1_t4067793791 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator NetworkInter::Upload()
extern "C"  RuntimeObject* NetworkInter_Upload_m2558292387 (NetworkInter_t3294555791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkInter_Upload_m2558292387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUploadU3Ec__Iterator2_t3919425892 * V_0 = NULL;
	{
		U3CUploadU3Ec__Iterator2_t3919425892 * L_0 = (U3CUploadU3Ec__Iterator2_t3919425892 *)il2cpp_codegen_object_new(U3CUploadU3Ec__Iterator2_t3919425892_il2cpp_TypeInfo_var);
		U3CUploadU3Ec__Iterator2__ctor_m2843383515(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CUploadU3Ec__Iterator2_t3919425892 * L_1 = V_0;
		L_1->set_U24this_3(__this);
		U3CUploadU3Ec__Iterator2_t3919425892 * L_2 = V_0;
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
// System.Void NetworkInter/<checkIn>c__Iterator0::.ctor()
extern "C"  void U3CcheckInU3Ec__Iterator0__ctor_m160399899 (U3CcheckInU3Ec__Iterator0_t3621524179 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean NetworkInter/<checkIn>c__Iterator0::MoveNext()
extern "C"  bool U3CcheckInU3Ec__Iterator0_MoveNext_m1904351418 (U3CcheckInU3Ec__Iterator0_t3621524179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CcheckInU3Ec__Iterator0_MoveNext_m1904351418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	Int32U5BU5D_t385246372* V_3 = NULL;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_004b;
			}
		}
	}
	{
		goto IL_01c6;
	}

IL_0023:
	{
		NetworkInter_t3294555791 * L_2 = __this->get_U24this_3();
		String_t* L_3 = L_2->get_IP_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3099255805, L_3, _stringLiteral3571335518, /*hidden argument*/NULL);
		UnityWebRequest_t463507806 * L_5 = UnityWebRequest_Get_m996521828(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E__1_0(L_5);
		V_0 = ((int32_t)-3);
	}

IL_004b:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_6 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))
			{
				case 0:
				{
					goto IL_0088;
				}
			}
		}

IL_0057:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1970045457, /*hidden argument*/NULL);
			UnityWebRequest_t463507806 * L_7 = __this->get_U3CwwwU3E__1_0();
			AsyncOperation_t1445031843 * L_8 = UnityWebRequest_Send_m637654012(L_7, /*hidden argument*/NULL);
			__this->set_U24current_4(L_8);
			bool L_9 = __this->get_U24disposing_5();
			if (L_9)
			{
				goto IL_0081;
			}
		}

IL_007a:
		{
			__this->set_U24PC_6(1);
		}

IL_0081:
		{
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x1C8, FINALLY_01b4);
		}

IL_0088:
		{
			UnityWebRequest_t463507806 * L_10 = __this->get_U3CwwwU3E__1_0();
			bool L_11 = UnityWebRequest_get_isNetworkError_m1231611882(L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_00b7;
			}
		}

IL_0098:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3667691625, /*hidden argument*/NULL);
			UnityWebRequest_t463507806 * L_12 = __this->get_U3CwwwU3E__1_0();
			String_t* L_13 = UnityWebRequest_get_error_m1613086199(L_12, /*hidden argument*/NULL);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
			goto IL_01af;
		}

IL_00b7:
		{
			NetworkInter_t3294555791 * L_14 = __this->get_U24this_3();
			UnityWebRequest_t463507806 * L_15 = __this->get_U3CwwwU3E__1_0();
			DownloadHandler_t2937767557 * L_16 = UnityWebRequest_get_downloadHandler_m534911913(L_15, /*hidden argument*/NULL);
			String_t* L_17 = DownloadHandler_get_text_m2427232382(L_16, /*hidden argument*/NULL);
			CCCPInfo_t355751851 * L_18 = JsonUtility_FromJson_TisCCCPInfo_t355751851_m3090238981(NULL /*static, unused*/, L_17, /*hidden argument*/JsonUtility_FromJson_TisCCCPInfo_t355751851_m3090238981_RuntimeMethod_var);
			L_14->set_info_10(L_18);
			NetworkInter_t3294555791 * L_19 = __this->get_U24this_3();
			CCCPInfo_t355751851 * L_20 = L_19->get_info_10();
			Int32U5BU5D_t385246372* L_21 = L_20->get_AssignedBots_0();
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_21, /*hidden argument*/NULL);
			NetworkInter_t3294555791 * L_22 = __this->get_U24this_3();
			CCCPInfo_t355751851 * L_23 = L_22->get_info_10();
			Int32U5BU5D_t385246372* L_24 = L_23->get_AssignedBots_0();
			V_3 = L_24;
			V_4 = 0;
			goto IL_01a5;
		}

IL_0105:
		{
			Int32U5BU5D_t385246372* L_25 = V_3;
			int32_t L_26 = V_4;
			int32_t L_27 = L_26;
			int32_t L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
			V_2 = L_28;
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral184651706, /*hidden argument*/NULL);
			NetworkInter_t3294555791 * L_29 = __this->get_U24this_3();
			Friendly_t1432090475 * L_30 = L_29->get_friendTemp_4();
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Friendly_t1432090475 * L_31 = Object_Instantiate_TisFriendly_t1432090475_m3961570963(NULL /*static, unused*/, L_30, /*hidden argument*/Object_Instantiate_TisFriendly_t1432090475_m3961570963_RuntimeMethod_var);
			__this->set_U3CnewFriendlyU3E__2_1(L_31);
			NetworkInter_t3294555791 * L_32 = __this->get_U24this_3();
			turret_t1434794911 * L_33 = L_32->get_turretTemp_5();
			turret_t1434794911 * L_34 = Object_Instantiate_Tisturret_t1434794911_m1115786247(NULL /*static, unused*/, L_33, /*hidden argument*/Object_Instantiate_Tisturret_t1434794911_m1115786247_RuntimeMethod_var);
			__this->set_U3CnewTurretU3E__2_2(L_34);
			Friendly_t1432090475 * L_35 = __this->get_U3CnewFriendlyU3E__2_1();
			int32_t L_36 = V_2;
			L_35->set_idnum_5(L_36);
			Friendly_t1432090475 * L_37 = __this->get_U3CnewFriendlyU3E__2_1();
			turret_t1434794911 * L_38 = __this->get_U3CnewTurretU3E__2_2();
			L_37->set_turr_13(L_38);
			turret_t1434794911 * L_39 = __this->get_U3CnewTurretU3E__2_2();
			Friendly_t1432090475 * L_40 = __this->get_U3CnewFriendlyU3E__2_1();
			GameObject_t1113636619 * L_41 = Component_get_gameObject_m442555142(L_40, /*hidden argument*/NULL);
			L_39->set_chassis_2(L_41);
			turret_t1434794911 * L_42 = __this->get_U3CnewTurretU3E__2_2();
			turret_t1434794911 * L_43 = __this->get_U3CnewTurretU3E__2_2();
			GameObject_t1113636619 * L_44 = Component_get_gameObject_m442555142(L_43, /*hidden argument*/NULL);
			L_42->set_target_3(L_44);
			NetworkInter_t3294555791 * L_45 = __this->get_U24this_3();
			List_1_t2904165217 * L_46 = L_45->get_friends_3();
			Friendly_t1432090475 * L_47 = __this->get_U3CnewFriendlyU3E__2_1();
			List_1_Add_m3533371377(L_46, L_47, /*hidden argument*/List_1_Add_m3533371377_RuntimeMethod_var);
			int32_t L_48 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
		}

IL_01a5:
		{
			int32_t L_49 = V_4;
			Int32U5BU5D_t385246372* L_50 = V_3;
			if ((((int32_t)L_49) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_50)->max_length)))))))
			{
				goto IL_0105;
			}
		}

IL_01af:
		{
			IL2CPP_LEAVE(0x1BF, FINALLY_01b4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01b4;
	}

FINALLY_01b4:
	{ // begin finally (depth: 1)
		{
			bool L_51 = V_1;
			if (!L_51)
			{
				goto IL_01b8;
			}
		}

IL_01b7:
		{
			IL2CPP_END_FINALLY(436)
		}

IL_01b8:
		{
			U3CcheckInU3Ec__Iterator0_U3CU3E__Finally0_m2255862810(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(436)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(436)
	{
		IL2CPP_JUMP_TBL(0x1C8, IL_01c8)
		IL2CPP_JUMP_TBL(0x1BF, IL_01bf)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01bf:
	{
		__this->set_U24PC_6((-1));
	}

IL_01c6:
	{
		return (bool)0;
	}

IL_01c8:
	{
		return (bool)1;
	}
}
// System.Object NetworkInter/<checkIn>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CcheckInU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m959254216 (U3CcheckInU3Ec__Iterator0_t3621524179 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object NetworkInter/<checkIn>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CcheckInU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m880013046 (U3CcheckInU3Ec__Iterator0_t3621524179 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void NetworkInter/<checkIn>c__Iterator0::Dispose()
extern "C"  void U3CcheckInU3Ec__Iterator0_Dispose_m1824822760 (U3CcheckInU3Ec__Iterator0_t3621524179 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0034;
			}
			case 1:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x34, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		U3CcheckInU3Ec__Iterator0_U3CU3E__Finally0_m2255862810(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0034:
	{
		return;
	}
}
// System.Void NetworkInter/<checkIn>c__Iterator0::Reset()
extern "C"  void U3CcheckInU3Ec__Iterator0_Reset_m2558140530 (U3CcheckInU3Ec__Iterator0_t3621524179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CcheckInU3Ec__Iterator0_Reset_m2558140530_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CcheckInU3Ec__Iterator0_Reset_m2558140530_RuntimeMethod_var);
	}
}
// System.Void NetworkInter/<checkIn>c__Iterator0::<>__Finally0()
extern "C"  void U3CcheckInU3Ec__Iterator0_U3CU3E__Finally0_m2255862810 (U3CcheckInU3Ec__Iterator0_t3621524179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CcheckInU3Ec__Iterator0_U3CU3E__Finally0_m2255862810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityWebRequest_t463507806 * L_0 = __this->get_U3CwwwU3E__1_0();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityWebRequest_t463507806 * L_1 = __this->get_U3CwwwU3E__1_0();
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_1);
	}

IL_0016:
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
// System.Void NetworkInter/<getDomain>c__Iterator1::.ctor()
extern "C"  void U3CgetDomainU3Ec__Iterator1__ctor_m3949225102 (U3CgetDomainU3Ec__Iterator1_t4067793791 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean NetworkInter/<getDomain>c__Iterator1::MoveNext()
extern "C"  bool U3CgetDomainU3Ec__Iterator1_MoveNext_m1419056153 (U3CgetDomainU3Ec__Iterator1_t4067793791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CgetDomainU3Ec__Iterator1_MoveNext_m1419056153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_005b;
			}
		}
	}
	{
		goto IL_013f;
	}

IL_0023:
	{
		NetworkInter_t3294555791 * L_2 = __this->get_U24this_1();
		String_t* L_3 = L_2->get_dbase_7();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NetworkInter_t3294555791 * L_4 = __this->get_U24this_1();
		String_t* L_5 = L_4->get_dbase_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3099255805, L_5, /*hidden argument*/NULL);
		UnityWebRequest_t463507806 * L_7 = UnityWebRequest_Post_m4211532029(NULL /*static, unused*/, L_6, _stringLiteral2506556841, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E__1_0(L_7);
		V_0 = ((int32_t)-3);
	}

IL_005b:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_8 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)))
			{
				case 0:
				{
					goto IL_0098;
				}
			}
		}

IL_0067:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2086468573, /*hidden argument*/NULL);
			UnityWebRequest_t463507806 * L_9 = __this->get_U3CwwwU3E__1_0();
			AsyncOperation_t1445031843 * L_10 = UnityWebRequest_Send_m637654012(L_9, /*hidden argument*/NULL);
			__this->set_U24current_2(L_10);
			bool L_11 = __this->get_U24disposing_3();
			if (L_11)
			{
				goto IL_0091;
			}
		}

IL_008a:
		{
			__this->set_U24PC_4(1);
		}

IL_0091:
		{
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x141, FINALLY_012d);
		}

IL_0098:
		{
			UnityWebRequest_t463507806 * L_12 = __this->get_U3CwwwU3E__1_0();
			bool L_13 = UnityWebRequest_get_isNetworkError_m1231611882(L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_00c7;
			}
		}

IL_00a8:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3667691625, /*hidden argument*/NULL);
			UnityWebRequest_t463507806 * L_14 = __this->get_U3CwwwU3E__1_0();
			String_t* L_15 = UnityWebRequest_get_error_m1613086199(L_14, /*hidden argument*/NULL);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
			goto IL_0128;
		}

IL_00c7:
		{
			UnityWebRequest_t463507806 * L_16 = __this->get_U3CwwwU3E__1_0();
			DownloadHandler_t2937767557 * L_17 = UnityWebRequest_get_downloadHandler_m534911913(L_16, /*hidden argument*/NULL);
			String_t* L_18 = DownloadHandler_get_text_m2427232382(L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			NetworkInter_t3294555791 * L_19 = __this->get_U24this_1();
			UnityWebRequest_t463507806 * L_20 = __this->get_U3CwwwU3E__1_0();
			DownloadHandler_t2937767557 * L_21 = UnityWebRequest_get_downloadHandler_m534911913(L_20, /*hidden argument*/NULL);
			String_t* L_22 = DownloadHandler_get_text_m2427232382(L_21, /*hidden argument*/NULL);
			dbaseresp_t1660734409 * L_23 = JsonUtility_FromJson_Tisdbaseresp_t1660734409_m384217465(NULL /*static, unused*/, L_22, /*hidden argument*/JsonUtility_FromJson_Tisdbaseresp_t1660734409_m384217465_RuntimeMethod_var);
			String_t* L_24 = L_23->get_dname_0();
			L_19->set_IP_8(L_24);
			NetworkInter_t3294555791 * L_25 = __this->get_U24this_1();
			String_t* L_26 = L_25->get_IP_8();
			Debug_Log_m4051431634(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
			NetworkInter_t3294555791 * L_27 = __this->get_U24this_1();
			NetworkInter_t3294555791 * L_28 = __this->get_U24this_1();
			RuntimeObject* L_29 = NetworkInter_checkIn_m3538085350(L_28, /*hidden argument*/NULL);
			MonoBehaviour_StartCoroutine_m3411253000(L_27, L_29, /*hidden argument*/NULL);
		}

IL_0128:
		{
			IL2CPP_LEAVE(0x138, FINALLY_012d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012d;
	}

FINALLY_012d:
	{ // begin finally (depth: 1)
		{
			bool L_30 = V_1;
			if (!L_30)
			{
				goto IL_0131;
			}
		}

IL_0130:
		{
			IL2CPP_END_FINALLY(301)
		}

IL_0131:
		{
			U3CgetDomainU3Ec__Iterator1_U3CU3E__Finally0_m1825419415(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(301)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(301)
	{
		IL2CPP_JUMP_TBL(0x141, IL_0141)
		IL2CPP_JUMP_TBL(0x138, IL_0138)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0138:
	{
		__this->set_U24PC_4((-1));
	}

IL_013f:
	{
		return (bool)0;
	}

IL_0141:
	{
		return (bool)1;
	}
}
// System.Object NetworkInter/<getDomain>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CgetDomainU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m809248280 (U3CgetDomainU3Ec__Iterator1_t4067793791 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object NetworkInter/<getDomain>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CgetDomainU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m748173467 (U3CgetDomainU3Ec__Iterator1_t4067793791 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void NetworkInter/<getDomain>c__Iterator1::Dispose()
extern "C"  void U3CgetDomainU3Ec__Iterator1_Dispose_m2960030849 (U3CgetDomainU3Ec__Iterator1_t4067793791 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0034;
			}
			case 1:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x34, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		U3CgetDomainU3Ec__Iterator1_U3CU3E__Finally0_m1825419415(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0034:
	{
		return;
	}
}
// System.Void NetworkInter/<getDomain>c__Iterator1::Reset()
extern "C"  void U3CgetDomainU3Ec__Iterator1_Reset_m2206674425 (U3CgetDomainU3Ec__Iterator1_t4067793791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CgetDomainU3Ec__Iterator1_Reset_m2206674425_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CgetDomainU3Ec__Iterator1_Reset_m2206674425_RuntimeMethod_var);
	}
}
// System.Void NetworkInter/<getDomain>c__Iterator1::<>__Finally0()
extern "C"  void U3CgetDomainU3Ec__Iterator1_U3CU3E__Finally0_m1825419415 (U3CgetDomainU3Ec__Iterator1_t4067793791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CgetDomainU3Ec__Iterator1_U3CU3E__Finally0_m1825419415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityWebRequest_t463507806 * L_0 = __this->get_U3CwwwU3E__1_0();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityWebRequest_t463507806 * L_1 = __this->get_U3CwwwU3E__1_0();
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_1);
	}

IL_0016:
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
// System.Void NetworkInter/<Upload>c__Iterator2::.ctor()
extern "C"  void U3CUploadU3Ec__Iterator2__ctor_m2843383515 (U3CUploadU3Ec__Iterator2_t3919425892 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean NetworkInter/<Upload>c__Iterator2::MoveNext()
extern "C"  bool U3CUploadU3Ec__Iterator2_MoveNext_m3311091645 (U3CUploadU3Ec__Iterator2_t3919425892 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUploadU3Ec__Iterator2_MoveNext_m3311091645_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_0073;
			}
		}
	}
	{
		goto IL_0112;
	}

IL_0023:
	{
		NetworkInter_t3294555791 * L_2 = __this->get_U24this_3();
		String_t* L_3 = NetworkInter_genJSON_m557539847(L_2, /*hidden argument*/NULL);
		__this->set_U3CmsgU3E__0_0(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_4 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = __this->get_U3CmsgU3E__0_0();
		ByteU5BU5D_t4116647657* L_6 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		__this->set_U3CmyDataU3E__0_1(L_6);
		NetworkInter_t3294555791 * L_7 = __this->get_U24this_3();
		String_t* L_8 = L_7->get_IP_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3099255805, L_8, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_10 = __this->get_U3CmyDataU3E__0_1();
		UnityWebRequest_t463507806 * L_11 = UnityWebRequest_Put_m3541626144(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E__1_2(L_11);
		V_0 = ((int32_t)-3);
	}

IL_0073:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_12 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)))
			{
				case 0:
				{
					goto IL_00a6;
				}
			}
		}

IL_007f:
		{
			UnityWebRequest_t463507806 * L_13 = __this->get_U3CwwwU3E__1_2();
			AsyncOperation_t1445031843 * L_14 = UnityWebRequest_Send_m637654012(L_13, /*hidden argument*/NULL);
			__this->set_U24current_4(L_14);
			bool L_15 = __this->get_U24disposing_5();
			if (L_15)
			{
				goto IL_009f;
			}
		}

IL_0098:
		{
			__this->set_U24PC_6(1);
		}

IL_009f:
		{
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x114, FINALLY_00f5);
		}

IL_00a6:
		{
			UnityWebRequest_t463507806 * L_16 = __this->get_U3CwwwU3E__1_2();
			bool L_17 = UnityWebRequest_get_isNetworkError_m1231611882(L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_00d5;
			}
		}

IL_00b6:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral252986058, /*hidden argument*/NULL);
			UnityWebRequest_t463507806 * L_18 = __this->get_U3CwwwU3E__1_2();
			String_t* L_19 = UnityWebRequest_get_error_m1613086199(L_18, /*hidden argument*/NULL);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
			goto IL_00f0;
		}

IL_00d5:
		{
			NetworkInter_t3294555791 * L_20 = __this->get_U24this_3();
			UnityWebRequest_t463507806 * L_21 = __this->get_U3CwwwU3E__1_2();
			DownloadHandler_t2937767557 * L_22 = UnityWebRequest_get_downloadHandler_m534911913(L_21, /*hidden argument*/NULL);
			ByteU5BU5D_t4116647657* L_23 = DownloadHandler_get_data_m1669096410(L_22, /*hidden argument*/NULL);
			L_20->set_results_2(L_23);
		}

IL_00f0:
		{
			IL2CPP_LEAVE(0x100, FINALLY_00f5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f5;
	}

FINALLY_00f5:
	{ // begin finally (depth: 1)
		{
			bool L_24 = V_1;
			if (!L_24)
			{
				goto IL_00f9;
			}
		}

IL_00f8:
		{
			IL2CPP_END_FINALLY(245)
		}

IL_00f9:
		{
			U3CUploadU3Ec__Iterator2_U3CU3E__Finally0_m3159395052(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(245)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(245)
	{
		IL2CPP_JUMP_TBL(0x114, IL_0114)
		IL2CPP_JUMP_TBL(0x100, IL_0100)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0100:
	{
		NetworkInter_t3294555791 * L_25 = __this->get_U24this_3();
		NetworkInter_DoLast_m1143668936(L_25, /*hidden argument*/NULL);
		__this->set_U24PC_6((-1));
	}

IL_0112:
	{
		return (bool)0;
	}

IL_0114:
	{
		return (bool)1;
	}
}
// System.Object NetworkInter/<Upload>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CUploadU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m37226100 (U3CUploadU3Ec__Iterator2_t3919425892 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object NetworkInter/<Upload>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CUploadU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m708134300 (U3CUploadU3Ec__Iterator2_t3919425892 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void NetworkInter/<Upload>c__Iterator2::Dispose()
extern "C"  void U3CUploadU3Ec__Iterator2_Dispose_m2562679582 (U3CUploadU3Ec__Iterator2_t3919425892 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0034;
			}
			case 1:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x34, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		U3CUploadU3Ec__Iterator2_U3CU3E__Finally0_m3159395052(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0034:
	{
		return;
	}
}
// System.Void NetworkInter/<Upload>c__Iterator2::Reset()
extern "C"  void U3CUploadU3Ec__Iterator2_Reset_m4163558267 (U3CUploadU3Ec__Iterator2_t3919425892 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUploadU3Ec__Iterator2_Reset_m4163558267_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CUploadU3Ec__Iterator2_Reset_m4163558267_RuntimeMethod_var);
	}
}
// System.Void NetworkInter/<Upload>c__Iterator2::<>__Finally0()
extern "C"  void U3CUploadU3Ec__Iterator2_U3CU3E__Finally0_m3159395052 (U3CUploadU3Ec__Iterator2_t3919425892 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUploadU3Ec__Iterator2_U3CU3E__Finally0_m3159395052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityWebRequest_t463507806 * L_0 = __this->get_U3CwwwU3E__1_2();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityWebRequest_t463507806 * L_1 = __this->get_U3CwwwU3E__1_2();
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_1);
	}

IL_0016:
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
// System.Void NetworkInter/CCCPInfo::.ctor()
extern "C"  void CCCPInfo__ctor_m1298633424 (CCCPInfo_t355751851 * __this, const RuntimeMethod* method)
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
// System.Void NetworkInter/dbaseresp::.ctor()
extern "C"  void dbaseresp__ctor_m4069547406 (dbaseresp_t1660734409 * __this, const RuntimeMethod* method)
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
// System.Void NetworkInter/toCCCP::.ctor()
extern "C"  void toCCCP__ctor_m3423810070 (toCCCP_t412537279 * __this, const RuntimeMethod* method)
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
// System.Void Obstacle::.ctor()
extern "C"  void Obstacle__ctor_m1962423779 (Obstacle_t162511623 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Obstacle::Start()
extern "C"  void Obstacle_Start_m770163199 (Obstacle_t162511623 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Obstacle::Update()
extern "C"  void Obstacle_Update_m961478357 (Obstacle_t162511623 * __this, const RuntimeMethod* method)
{
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
// System.Void statushandler::.ctor()
extern "C"  void statushandler__ctor_m2003091026 (statushandler_t2871395155 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void statushandler::Start()
extern "C"  void statushandler_Start_m3426580730 (statushandler_t2871395155 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (statushandler_Start_m3426580730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Friendly_t1432090475 * V_0 = NULL;
	FriendlyU5BU5D_t2327600778* V_1 = NULL;
	int32_t V_2 = 0;
	TextMesh_t1536577757 * V_3 = NULL;
	Enemy_t1765729589 * V_4 = NULL;
	EnemyU5BU5D_t2006687320* V_5 = NULL;
	int32_t V_6 = 0;
	TextMesh_t1536577757 * V_7 = NULL;
	{
		FriendlyU5BU5D_t2327600778* L_0 = __this->get_friends_2();
		V_1 = L_0;
		V_2 = 0;
		goto IL_003e;
	}

IL_000e:
	{
		FriendlyU5BU5D_t2327600778* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		Friendly_t1432090475 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		Friendly_t1432090475 * L_5 = V_0;
		GameObject_t1113636619 * L_6 = __this->get_defaulttext_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_7 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		L_5->set_hovertext_14(L_7);
		Friendly_t1432090475 * L_8 = V_0;
		GameObject_t1113636619 * L_9 = L_8->get_hovertext_14();
		TextMesh_t1536577757 * L_10 = GameObject_GetComponent_TisTextMesh_t1536577757_m4126089779(L_9, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t1536577757_m4126089779_RuntimeMethod_var);
		V_3 = L_10;
		TextMesh_t1536577757 * L_11 = V_3;
		TextMesh_set_text_m446189179(L_11, _stringLiteral427266081, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_13 = V_2;
		FriendlyU5BU5D_t2327600778* L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		EnemyU5BU5D_t2006687320* L_15 = __this->get_enemies_3();
		V_5 = L_15;
		V_6 = 0;
		goto IL_0090;
	}

IL_0057:
	{
		EnemyU5BU5D_t2006687320* L_16 = V_5;
		int32_t L_17 = V_6;
		int32_t L_18 = L_17;
		Enemy_t1765729589 * L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = L_19;
		Enemy_t1765729589 * L_20 = V_4;
		GameObject_t1113636619 * L_21 = __this->get_defaulttext_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_22 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_21, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		L_20->set_hovertext_7(L_22);
		Enemy_t1765729589 * L_23 = V_4;
		GameObject_t1113636619 * L_24 = L_23->get_hovertext_7();
		TextMesh_t1536577757 * L_25 = GameObject_GetComponent_TisTextMesh_t1536577757_m4126089779(L_24, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t1536577757_m4126089779_RuntimeMethod_var);
		V_7 = L_25;
		TextMesh_t1536577757 * L_26 = V_7;
		TextMesh_set_text_m446189179(L_26, _stringLiteral760903947, /*hidden argument*/NULL);
		int32_t L_27 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0090:
	{
		int32_t L_28 = V_6;
		EnemyU5BU5D_t2006687320* L_29 = V_5;
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0057;
		}
	}
	{
		return;
	}
}
// System.Void statushandler::Update()
extern "C"  void statushandler_Update_m3585428033 (statushandler_t2871395155 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (statushandler_Update_m3585428033_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Friendly_t1432090475 * V_0 = NULL;
	FriendlyU5BU5D_t2327600778* V_1 = NULL;
	int32_t V_2 = 0;
	TextMesh_t1536577757 * V_3 = NULL;
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Enemy_t1765729589 * V_7 = NULL;
	EnemyU5BU5D_t2006687320* V_8 = NULL;
	int32_t V_9 = 0;
	TextMesh_t1536577757 * V_10 = NULL;
	Vector3_t3722313464  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector3_t3722313464  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Vector3_t3722313464  V_13;
	memset(&V_13, 0, sizeof(V_13));
	{
		FriendlyU5BU5D_t2327600778* L_0 = __this->get_friends_2();
		V_1 = L_0;
		V_2 = 0;
		goto IL_009d;
	}

IL_000e:
	{
		FriendlyU5BU5D_t2327600778* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		Friendly_t1432090475 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		Friendly_t1432090475 * L_5 = V_0;
		GameObject_t1113636619 * L_6 = L_5->get_hovertext_14();
		TextMesh_t1536577757 * L_7 = GameObject_GetComponent_TisTextMesh_t1536577757_m4126089779(L_6, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t1536577757_m4126089779_RuntimeMethod_var);
		V_3 = L_7;
		TextMesh_t1536577757 * L_8 = V_3;
		Friendly_t1432090475 * L_9 = V_0;
		uint64_t* L_10 = L_9->get_address_of_health_8();
		String_t* L_11 = UInt64_ToString_m1529093114(L_10, /*hidden argument*/NULL);
		TextMesh_set_text_m446189179(L_8, L_11, /*hidden argument*/NULL);
		TextMesh_t1536577757 * L_12 = V_3;
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(L_12, /*hidden argument*/NULL);
		Friendly_t1432090475 * L_14 = V_0;
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(L_14, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = Transform_get_position_m36019626(L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		float L_17 = (&V_4)->get_x_1();
		int32_t L_18 = __this->get_offsetX_5();
		Friendly_t1432090475 * L_19 = V_0;
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(L_19, /*hidden argument*/NULL);
		Vector3_t3722313464  L_21 = Transform_get_position_m36019626(L_20, /*hidden argument*/NULL);
		V_5 = L_21;
		float L_22 = (&V_5)->get_y_2();
		int32_t L_23 = __this->get_offsetY_6();
		Friendly_t1432090475 * L_24 = V_0;
		Transform_t3600365921 * L_25 = Component_get_transform_m3162698980(L_24, /*hidden argument*/NULL);
		Vector3_t3722313464  L_26 = Transform_get_position_m36019626(L_25, /*hidden argument*/NULL);
		V_6 = L_26;
		float L_27 = (&V_6)->get_z_3();
		int32_t L_28 = __this->get_offsetZ_7();
		Vector3_t3722313464  L_29;
		memset(&L_29, 0, sizeof(L_29));
		Vector3__ctor_m3353183577((&L_29), ((float)il2cpp_codegen_add((float)L_17, (float)(((float)((float)L_18))))), ((float)il2cpp_codegen_add((float)L_22, (float)(((float)((float)L_23))))), ((float)il2cpp_codegen_add((float)L_27, (float)(((float)((float)L_28))))), /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_13, L_29, /*hidden argument*/NULL);
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_009d:
	{
		int32_t L_31 = V_2;
		FriendlyU5BU5D_t2327600778* L_32 = V_1;
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		EnemyU5BU5D_t2006687320* L_33 = __this->get_enemies_3();
		V_8 = L_33;
		V_9 = 0;
		goto IL_0152;
	}

IL_00b6:
	{
		EnemyU5BU5D_t2006687320* L_34 = V_8;
		int32_t L_35 = V_9;
		int32_t L_36 = L_35;
		Enemy_t1765729589 * L_37 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		V_7 = L_37;
		Enemy_t1765729589 * L_38 = V_7;
		GameObject_t1113636619 * L_39 = L_38->get_hovertext_7();
		TextMesh_t1536577757 * L_40 = GameObject_GetComponent_TisTextMesh_t1536577757_m4126089779(L_39, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t1536577757_m4126089779_RuntimeMethod_var);
		V_10 = L_40;
		TextMesh_t1536577757 * L_41 = V_10;
		Enemy_t1765729589 * L_42 = V_7;
		uint64_t* L_43 = L_42->get_address_of_health_4();
		String_t* L_44 = UInt64_ToString_m1529093114(L_43, /*hidden argument*/NULL);
		TextMesh_set_text_m446189179(L_41, L_44, /*hidden argument*/NULL);
		TextMesh_t1536577757 * L_45 = V_10;
		Transform_t3600365921 * L_46 = Component_get_transform_m3162698980(L_45, /*hidden argument*/NULL);
		Enemy_t1765729589 * L_47 = V_7;
		Transform_t3600365921 * L_48 = Component_get_transform_m3162698980(L_47, /*hidden argument*/NULL);
		Vector3_t3722313464  L_49 = Transform_get_position_m36019626(L_48, /*hidden argument*/NULL);
		V_11 = L_49;
		float L_50 = (&V_11)->get_x_1();
		int32_t L_51 = __this->get_offsetX_5();
		Enemy_t1765729589 * L_52 = V_7;
		Transform_t3600365921 * L_53 = Component_get_transform_m3162698980(L_52, /*hidden argument*/NULL);
		Vector3_t3722313464  L_54 = Transform_get_position_m36019626(L_53, /*hidden argument*/NULL);
		V_12 = L_54;
		float L_55 = (&V_12)->get_y_2();
		int32_t L_56 = __this->get_offsetY_6();
		Enemy_t1765729589 * L_57 = V_7;
		Transform_t3600365921 * L_58 = Component_get_transform_m3162698980(L_57, /*hidden argument*/NULL);
		Vector3_t3722313464  L_59 = Transform_get_position_m36019626(L_58, /*hidden argument*/NULL);
		V_13 = L_59;
		float L_60 = (&V_13)->get_z_3();
		int32_t L_61 = __this->get_offsetZ_7();
		Vector3_t3722313464  L_62;
		memset(&L_62, 0, sizeof(L_62));
		Vector3__ctor_m3353183577((&L_62), ((float)il2cpp_codegen_add((float)L_50, (float)(((float)((float)L_51))))), ((float)il2cpp_codegen_add((float)L_55, (float)(((float)((float)L_56))))), ((float)il2cpp_codegen_add((float)L_60, (float)(((float)((float)L_61))))), /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_46, L_62, /*hidden argument*/NULL);
		int32_t L_63 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
	}

IL_0152:
	{
		int32_t L_64 = V_9;
		EnemyU5BU5D_t2006687320* L_65 = V_8;
		if ((((int32_t)L_64) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_65)->max_length)))))))
		{
			goto IL_00b6;
		}
	}
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
// System.Void turret::.ctor()
extern "C"  void turret__ctor_m3576572215 (turret_t1434794911 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void turret::Start()
extern "C"  void turret_Start_m3254173657 (turret_t1434794911 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.UInt64 turret::getDesired()
extern "C"  uint64_t turret_getDesired_m3020965670 (turret_t1434794911 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (turret_getDesired_m3020965670_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	{
		GameObject_t1113636619 * L_0 = __this->get_target_3();
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_x_1();
		GameObject_t1113636619 * L_4 = __this->get_chassis_2();
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = (&V_2)->get_x_1();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_3, (float)L_7));
		GameObject_t1113636619 * L_8 = __this->get_target_3();
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11 = (&V_4)->get_z_3();
		GameObject_t1113636619 * L_12 = __this->get_chassis_2();
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		float L_15 = (&V_5)->get_z_3();
		V_3 = ((float)il2cpp_codegen_subtract((float)L_11, (float)L_15));
		float L_16 = V_0;
		if ((!(((float)L_16) == ((float)(0.0f)))))
		{
			goto IL_0077;
		}
	}
	{
		V_0 = (1.0E-05f);
	}

IL_0077:
	{
		float L_17 = V_0;
		if ((!(((float)L_17) > ((float)(0.0f)))))
		{
			goto IL_009c;
		}
	}
	{
		float L_18 = V_3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_009c;
		}
	}
	{
		float L_19 = V_3;
		float L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_21 = atanf(((float)((float)L_19/(float)L_20)));
		V_6 = L_21;
		goto IL_00fc;
	}

IL_009c:
	{
		float L_22 = V_0;
		if ((!(((float)L_22) > ((float)(0.0f)))))
		{
			goto IL_00c7;
		}
	}
	{
		float L_23 = V_3;
		if ((!(((float)L_23) < ((float)(0.0f)))))
		{
			goto IL_00c7;
		}
	}
	{
		float L_24 = V_3;
		float L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_26 = atanf(((float)((float)L_24/(float)L_25)));
		V_6 = ((float)il2cpp_codegen_add((float)L_26, (float)(6.28318548f)));
		goto IL_00fc;
	}

IL_00c7:
	{
		float L_27 = V_0;
		if ((!(((float)L_27) < ((float)(0.0f)))))
		{
			goto IL_00f2;
		}
	}
	{
		float L_28 = V_3;
		if ((!(((float)L_28) > ((float)(0.0f)))))
		{
			goto IL_00f2;
		}
	}
	{
		float L_29 = V_3;
		float L_30 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_31 = atanf(((float)((float)L_29/(float)L_30)));
		V_6 = ((float)il2cpp_codegen_add((float)(3.14159274f), (float)L_31));
		goto IL_00fc;
	}

IL_00f2:
	{
		float L_32 = V_3;
		float L_33 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_34 = atanf(((float)((float)L_32/(float)L_33)));
		V_6 = L_34;
	}

IL_00fc:
	{
		float L_35 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_36 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, ((float)((float)((float)il2cpp_codegen_multiply((float)L_35, (float)(180.0f)))/(float)(3.14159274f))), /*hidden argument*/NULL);
		V_6 = (((float)((float)L_36)));
		float L_37 = V_6;
		return (((int64_t)((uint64_t)L_37)));
	}
}
// System.Void turret::Update()
extern "C"  void turret_Update_m2145007065 (turret_t1434794911 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (turret_Update_m2145007065_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_chassis_2();
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_MoveTowards_m2786395547(NULL /*static, unused*/, L_2, L_5, (10.0f), /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_0, L_6, /*hidden argument*/NULL);
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
// System.Void UnitSelectionComponent::.ctor()
extern "C"  void UnitSelectionComponent__ctor_m973213709 (UnitSelectionComponent_t1709564938 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitSelectionComponent::Update()
extern "C"  void UnitSelectionComponent_Update_m2886411989 (UnitSelectionComponent_t1709564938 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitSelectionComponent_Update_m2886411989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Friendly_t1432090475 * V_0 = NULL;
	FriendlyU5BU5D_t2327600778* V_1 = NULL;
	int32_t V_2 = 0;
	List_1_t2904165217 * V_3 = NULL;
	Friendly_t1432090475 * V_4 = NULL;
	FriendlyU5BU5D_t2327600778* V_5 = NULL;
	int32_t V_6 = 0;
	StringBuilder_t * V_7 = NULL;
	Friendly_t1432090475 * V_8 = NULL;
	Enumerator_t498441798  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Friendly_t1432090475 * V_10 = NULL;
	FriendlyU5BU5D_t2327600778* V_11 = NULL;
	int32_t V_12 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0063;
		}
	}
	{
		__this->set_isSelecting_2((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mousePosition1_3(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		FriendlyU5BU5D_t2327600778* L_2 = Object_FindObjectsOfType_TisFriendly_t1432090475_m1621701754(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisFriendly_t1432090475_m1621701754_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		goto IL_005a;
	}

IL_002a:
	{
		FriendlyU5BU5D_t2327600778* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		Friendly_t1432090475 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		Friendly_t1432090475 * L_7 = V_0;
		GameObject_t1113636619 * L_8 = L_7->get_selectionCircle_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		Friendly_t1432090475 * L_10 = V_0;
		GameObject_t1113636619 * L_11 = L_10->get_selectionCircle_2();
		GameObject_t1113636619 * L_12 = GameObject_get_gameObject_m3693461266(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		Friendly_t1432090475 * L_13 = V_0;
		L_13->set_selectionCircle_2((GameObject_t1113636619 *)NULL);
	}

IL_0056:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_005a:
	{
		int32_t L_15 = V_2;
		FriendlyU5BU5D_t2327600778* L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_002a;
		}
	}

IL_0063:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_17 = Input_GetMouseButtonUp_m2924350851(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0154;
		}
	}
	{
		List_1_t2904165217 * L_18 = (List_1_t2904165217 *)il2cpp_codegen_object_new(List_1_t2904165217_il2cpp_TypeInfo_var);
		List_1__ctor_m3304068135(L_18, /*hidden argument*/List_1__ctor_m3304068135_RuntimeMethod_var);
		V_3 = L_18;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		FriendlyU5BU5D_t2327600778* L_19 = Object_FindObjectsOfType_TisFriendly_t1432090475_m1621701754(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisFriendly_t1432090475_m1621701754_RuntimeMethod_var);
		V_5 = L_19;
		V_6 = 0;
		goto IL_00bf;
	}

IL_0083:
	{
		FriendlyU5BU5D_t2327600778* L_20 = V_5;
		int32_t L_21 = V_6;
		int32_t L_22 = L_21;
		Friendly_t1432090475 * L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_4 = L_23;
		Friendly_t1432090475 * L_24 = V_4;
		GameObject_t1113636619 * L_25 = Component_get_gameObject_m442555142(L_24, /*hidden argument*/NULL);
		bool L_26 = UnitSelectionComponent_IsWithinSelectionBounds_m51108003(__this, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00b1;
		}
	}
	{
		List_1_t2904165217 * L_27 = V_3;
		Friendly_t1432090475 * L_28 = V_4;
		List_1_Add_m3533371377(L_27, L_28, /*hidden argument*/List_1_Add_m3533371377_RuntimeMethod_var);
		Friendly_t1432090475 * L_29 = V_4;
		L_29->set_isSelected_3((bool)1);
		goto IL_00b9;
	}

IL_00b1:
	{
		Friendly_t1432090475 * L_30 = V_4;
		L_30->set_isSelected_3((bool)0);
	}

IL_00b9:
	{
		int32_t L_31 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00bf:
	{
		int32_t L_32 = V_6;
		FriendlyU5BU5D_t2327600778* L_33 = V_5;
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_33)->max_length)))))))
		{
			goto IL_0083;
		}
	}
	{
		StringBuilder_t * L_34 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_34, /*hidden argument*/NULL);
		V_7 = L_34;
		StringBuilder_t * L_35 = V_7;
		List_1_t2904165217 * L_36 = V_3;
		int32_t L_37 = List_1_get_Count_m4254215720(L_36, /*hidden argument*/List_1_get_Count_m4254215720_RuntimeMethod_var);
		int32_t L_38 = L_37;
		RuntimeObject * L_39 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_38);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_40 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3978561872, L_39, /*hidden argument*/NULL);
		StringBuilder_AppendLine_m1438862993(L_35, L_40, /*hidden argument*/NULL);
		List_1_t2904165217 * L_41 = V_3;
		Enumerator_t498441798  L_42 = List_1_GetEnumerator_m2902247123(L_41, /*hidden argument*/List_1_GetEnumerator_m2902247123_RuntimeMethod_var);
		V_9 = L_42;
	}

IL_00f6:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0122;
		}

IL_00fb:
		{
			Friendly_t1432090475 * L_43 = Enumerator_get_Current_m372896529((&V_9), /*hidden argument*/Enumerator_get_Current_m372896529_RuntimeMethod_var);
			V_8 = L_43;
			StringBuilder_t * L_44 = V_7;
			Friendly_t1432090475 * L_45 = V_8;
			GameObject_t1113636619 * L_46 = Component_get_gameObject_m442555142(L_45, /*hidden argument*/NULL);
			String_t* L_47 = Object_get_name_m4211327027(L_46, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_48 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3787235533, L_47, /*hidden argument*/NULL);
			StringBuilder_AppendLine_m1438862993(L_44, L_48, /*hidden argument*/NULL);
		}

IL_0122:
		{
			bool L_49 = Enumerator_MoveNext_m3716447473((&V_9), /*hidden argument*/Enumerator_MoveNext_m3716447473_RuntimeMethod_var);
			if (L_49)
			{
				goto IL_00fb;
			}
		}

IL_012e:
		{
			IL2CPP_LEAVE(0x141, FINALLY_0133);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0133;
	}

FINALLY_0133:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m974345490((&V_9), /*hidden argument*/Enumerator_Dispose_m974345490_RuntimeMethod_var);
		IL2CPP_END_FINALLY(307)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(307)
	{
		IL2CPP_JUMP_TBL(0x141, IL_0141)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0141:
	{
		StringBuilder_t * L_50 = V_7;
		String_t* L_51 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_50);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		__this->set_isSelecting_2((bool)0);
	}

IL_0154:
	{
		bool L_52 = __this->get_isSelecting_2();
		if (!L_52)
		{
			goto IL_022a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		FriendlyU5BU5D_t2327600778* L_53 = Object_FindObjectsOfType_TisFriendly_t1432090475_m1621701754(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisFriendly_t1432090475_m1621701754_RuntimeMethod_var);
		V_11 = L_53;
		V_12 = 0;
		goto IL_021f;
	}

IL_016e:
	{
		FriendlyU5BU5D_t2327600778* L_54 = V_11;
		int32_t L_55 = V_12;
		int32_t L_56 = L_55;
		Friendly_t1432090475 * L_57 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_10 = L_57;
		Friendly_t1432090475 * L_58 = V_10;
		GameObject_t1113636619 * L_59 = Component_get_gameObject_m442555142(L_58, /*hidden argument*/NULL);
		bool L_60 = UnitSelectionComponent_IsWithinSelectionBounds_m51108003(__this, L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_01ee;
		}
	}
	{
		Friendly_t1432090475 * L_61 = V_10;
		GameObject_t1113636619 * L_62 = L_61->get_selectionCircle_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_63 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_62, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_01e9;
		}
	}
	{
		Friendly_t1432090475 * L_64 = V_10;
		GameObject_t1113636619 * L_65 = __this->get_selectionCirclePrefab_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_66 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_65, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		L_64->set_selectionCircle_2(L_66);
		Friendly_t1432090475 * L_67 = V_10;
		GameObject_t1113636619 * L_68 = L_67->get_selectionCircle_2();
		Transform_t3600365921 * L_69 = GameObject_get_transform_m1369836730(L_68, /*hidden argument*/NULL);
		Friendly_t1432090475 * L_70 = V_10;
		Transform_t3600365921 * L_71 = Component_get_transform_m3162698980(L_70, /*hidden argument*/NULL);
		Transform_SetParent_m273471670(L_69, L_71, (bool)0, /*hidden argument*/NULL);
		Friendly_t1432090475 * L_72 = V_10;
		GameObject_t1113636619 * L_73 = L_72->get_selectionCircle_2();
		Transform_t3600365921 * L_74 = GameObject_get_transform_m1369836730(L_73, /*hidden argument*/NULL);
		Vector3_t3722313464  L_75;
		memset(&L_75, 0, sizeof(L_75));
		Vector3__ctor_m3353183577((&L_75), (90.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_eulerAngles_m135219616(L_74, L_75, /*hidden argument*/NULL);
	}

IL_01e9:
	{
		goto IL_0219;
	}

IL_01ee:
	{
		Friendly_t1432090475 * L_76 = V_10;
		GameObject_t1113636619 * L_77 = L_76->get_selectionCircle_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_78 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_77, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_78)
		{
			goto IL_0219;
		}
	}
	{
		Friendly_t1432090475 * L_79 = V_10;
		GameObject_t1113636619 * L_80 = L_79->get_selectionCircle_2();
		GameObject_t1113636619 * L_81 = GameObject_get_gameObject_m3693461266(L_80, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_81, /*hidden argument*/NULL);
		Friendly_t1432090475 * L_82 = V_10;
		L_82->set_selectionCircle_2((GameObject_t1113636619 *)NULL);
	}

IL_0219:
	{
		int32_t L_83 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
	}

IL_021f:
	{
		int32_t L_84 = V_12;
		FriendlyU5BU5D_t2327600778* L_85 = V_11;
		if ((((int32_t)L_84) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_85)->max_length)))))))
		{
			goto IL_016e;
		}
	}

IL_022a:
	{
		return;
	}
}
// System.Boolean UnitSelectionComponent::IsWithinSelectionBounds(UnityEngine.GameObject)
extern "C"  bool UnitSelectionComponent_IsWithinSelectionBounds_m51108003 (UnitSelectionComponent_t1709564938 * __this, GameObject_t1113636619 * ___gameObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitSelectionComponent_IsWithinSelectionBounds_m51108003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t4157153871 * V_0 = NULL;
	Bounds_t2266837910  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		bool L_0 = __this->get_isSelecting_2();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		Camera_t4157153871 * L_1 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		Camera_t4157153871 * L_2 = V_0;
		Vector3_t3722313464  L_3 = __this->get_mousePosition1_3();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		Bounds_t2266837910  L_5 = Utils_GetViewportBounds_m4169378815(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Camera_t4157153871 * L_6 = V_0;
		GameObject_t1113636619 * L_7 = ___gameObject0;
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Camera_WorldToViewportPoint_m1538355680(L_6, L_9, /*hidden argument*/NULL);
		bool L_11 = Bounds_Contains_m1110518741((&V_1), L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Void UnitSelectionComponent::OnGUI()
extern "C"  void UnitSelectionComponent_OnGUI_m4013989072 (UnitSelectionComponent_t1709564938 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitSelectionComponent_OnGUI_m4013989072_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_isSelecting_2();
		if (!L_0)
		{
			goto IL_005a;
		}
	}
	{
		Vector3_t3722313464  L_1 = __this->get_mousePosition1_3();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_3 = Utils_GetScreenRect_m1664496423(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Rect_t2360479859  L_4 = V_0;
		Color_t2555686324  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Color__ctor_m2943235014((&L_5), (0.8f), (0.8f), (0.95f), (0.25f), /*hidden argument*/NULL);
		Utils_DrawScreenRect_m2086374356(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Rect_t2360479859  L_6 = V_0;
		Color_t2555686324  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Color__ctor_m286683560((&L_7), (0.8f), (0.8f), (0.95f), /*hidden argument*/NULL);
		Utils_DrawScreenRectBorder_m3346770794(NULL /*static, unused*/, L_6, (2.0f), L_7, /*hidden argument*/NULL);
	}

IL_005a:
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
// UnityEngine.Texture2D Utils::get_WhiteTexture()
extern "C"  Texture2D_t3840446185 * Utils_get_WhiteTexture_m3457094338 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_get_WhiteTexture_m3457094338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_t3840446185 * L_0 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get__whiteTexture_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		Texture2D_t3840446185 * L_2 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_2, 1, 1, /*hidden argument*/NULL);
		((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->set__whiteTexture_0(L_2);
		Texture2D_t3840446185 * L_3 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get__whiteTexture_0();
		Color_t2555686324  L_4 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_SetPixel_m2984741184(L_3, 0, 0, L_4, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_5 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get__whiteTexture_0();
		Texture2D_Apply_m2271746283(L_5, /*hidden argument*/NULL);
	}

IL_0037:
	{
		Texture2D_t3840446185 * L_6 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get__whiteTexture_0();
		return L_6;
	}
}
// UnityEngine.Rect Utils::GetScreenRect(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Rect_t2360479859  Utils_GetScreenRect_m1664496423 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___screenPosition10, Vector3_t3722313464  ___screenPosition21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_GetScreenRect_m1664496423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (&___screenPosition10)->get_y_2();
		(&___screenPosition10)->set_y_2(((float)il2cpp_codegen_subtract((float)(((float)((float)L_0))), (float)L_1)));
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (&___screenPosition21)->get_y_2();
		(&___screenPosition21)->set_y_2(((float)il2cpp_codegen_subtract((float)(((float)((float)L_2))), (float)L_3)));
		Vector3_t3722313464  L_4 = ___screenPosition10;
		Vector3_t3722313464  L_5 = ___screenPosition21;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_Min_m1803158933(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Vector3_t3722313464  L_7 = ___screenPosition10;
		Vector3_t3722313464  L_8 = ___screenPosition21;
		Vector3_t3722313464  L_9 = Vector3_Max_m3304052994(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = (&V_0)->get_x_1();
		float L_11 = (&V_0)->get_y_2();
		float L_12 = (&V_1)->get_x_1();
		float L_13 = (&V_1)->get_y_2();
		Rect_t2360479859  L_14 = Rect_MinMaxRect_m1878824187(NULL /*static, unused*/, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// UnityEngine.Bounds Utils::GetViewportBounds(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Bounds_t2266837910  Utils_GetViewportBounds_m4169378815 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * ___camera0, Vector3_t3722313464  ___screenPosition11, Vector3_t3722313464  ___screenPosition22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_GetViewportBounds_m4169378815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Bounds_t2266837910  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Camera_t4157153871 * L_0 = ___camera0;
		Vector3_t3722313464  L_1 = ___screenPosition11;
		Vector3_t3722313464  L_2 = Camera_ScreenToViewportPoint_m3569032523(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Camera_t4157153871 * L_3 = ___camera0;
		Vector3_t3722313464  L_4 = ___screenPosition22;
		Vector3_t3722313464  L_5 = Camera_ScreenToViewportPoint_m3569032523(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector3_t3722313464  L_6 = V_0;
		Vector3_t3722313464  L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_Min_m1803158933(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		Vector3_t3722313464  L_9 = V_0;
		Vector3_t3722313464  L_10 = V_1;
		Vector3_t3722313464  L_11 = Vector3_Max_m3304052994(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		Camera_t4157153871 * L_12 = ___camera0;
		float L_13 = Camera_get_nearClipPlane_m837839537(L_12, /*hidden argument*/NULL);
		(&V_2)->set_z_3(L_13);
		Camera_t4157153871 * L_14 = ___camera0;
		float L_15 = Camera_get_farClipPlane_m538536689(L_14, /*hidden argument*/NULL);
		(&V_3)->set_z_3(L_15);
		il2cpp_codegen_initobj((&V_4), sizeof(Bounds_t2266837910 ));
		Vector3_t3722313464  L_16 = V_2;
		Vector3_t3722313464  L_17 = V_3;
		Bounds_SetMinMax_m2201062677((&V_4), L_16, L_17, /*hidden argument*/NULL);
		Bounds_t2266837910  L_18 = V_4;
		return L_18;
	}
}
// System.Void Utils::DrawScreenRect(UnityEngine.Rect,UnityEngine.Color)
extern "C"  void Utils_DrawScreenRect_m2086374356 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  ___rect0, Color_t2555686324  ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_DrawScreenRect_m2086374356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_t2555686324  L_0 = ___color1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_set_color_m1028198571(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Rect_t2360479859  L_1 = ___rect0;
		Texture2D_t3840446185 * L_2 = Utils_get_WhiteTexture_m3457094338(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUI_DrawTexture_m3124770796(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		Color_t2555686324  L_3 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUI_set_color_m1028198571(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Utils::DrawScreenRectBorder(UnityEngine.Rect,System.Single,UnityEngine.Color)
extern "C"  void Utils_DrawScreenRectBorder_m3346770794 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  ___rect0, float ___thickness1, Color_t2555686324  ___color2, const RuntimeMethod* method)
{
	{
		float L_0 = Rect_get_xMin_m581135837((&___rect0), /*hidden argument*/NULL);
		float L_1 = Rect_get_yMin_m2601414109((&___rect0), /*hidden argument*/NULL);
		float L_2 = Rect_get_width_m3421484486((&___rect0), /*hidden argument*/NULL);
		float L_3 = ___thickness1;
		Rect_t2360479859  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Rect__ctor_m2614021312((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		Color_t2555686324  L_5 = ___color2;
		Utils_DrawScreenRect_m2086374356(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		float L_6 = Rect_get_xMin_m581135837((&___rect0), /*hidden argument*/NULL);
		float L_7 = Rect_get_yMin_m2601414109((&___rect0), /*hidden argument*/NULL);
		float L_8 = ___thickness1;
		float L_9 = Rect_get_height_m1358425599((&___rect0), /*hidden argument*/NULL);
		Rect_t2360479859  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Rect__ctor_m2614021312((&L_10), L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		Color_t2555686324  L_11 = ___color2;
		Utils_DrawScreenRect_m2086374356(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		float L_12 = Rect_get_xMax_m3018144503((&___rect0), /*hidden argument*/NULL);
		float L_13 = ___thickness1;
		float L_14 = Rect_get_yMin_m2601414109((&___rect0), /*hidden argument*/NULL);
		float L_15 = ___thickness1;
		float L_16 = Rect_get_height_m1358425599((&___rect0), /*hidden argument*/NULL);
		Rect_t2360479859  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Rect__ctor_m2614021312((&L_17), ((float)il2cpp_codegen_subtract((float)L_12, (float)L_13)), L_14, L_15, L_16, /*hidden argument*/NULL);
		Color_t2555686324  L_18 = ___color2;
		Utils_DrawScreenRect_m2086374356(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		float L_19 = Rect_get_xMin_m581135837((&___rect0), /*hidden argument*/NULL);
		float L_20 = Rect_get_yMax_m743455479((&___rect0), /*hidden argument*/NULL);
		float L_21 = ___thickness1;
		float L_22 = Rect_get_width_m3421484486((&___rect0), /*hidden argument*/NULL);
		float L_23 = ___thickness1;
		Rect_t2360479859  L_24;
		memset(&L_24, 0, sizeof(L_24));
		Rect__ctor_m2614021312((&L_24), L_19, ((float)il2cpp_codegen_subtract((float)L_20, (float)L_21)), L_22, L_23, /*hidden argument*/NULL);
		Color_t2555686324  L_25 = ___color2;
		Utils_DrawScreenRect_m2086374356(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
