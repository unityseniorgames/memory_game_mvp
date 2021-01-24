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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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

// GameControl
struct GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248;
// LevelLoader
struct LevelLoader_t528DC9F40D2C5040043E386207C89B1400AE0343;
// MainToken
struct MainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Random
struct Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7;

IL2CPP_EXTERN_C RuntimeClass* GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralA1141EB96836ED960AE0BE11B9889597388B5DF0;
IL2CPP_EXTERN_C String_t* _stringLiteralC3A509F25A4199D8034F77188686E8D2CBFD3DCB;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_m9FF2D738368C8C59E83F21E2F67C8801B66795FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE_m3024DE4D553C59D91988DDB30E79E7B35BB365F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t GameControl_Awake_m7DCD4282485D4BFA123E5E7DE9933F241E7C44DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameControl_CheckLocked_m9E9DD60D5F156C24297E2E895F84301819BC7F57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameControl_CheckMatch_mF5F330FA7A16141047944389F9724A5C03256C92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameControl_Start_m9812137EC9462727989C9257365F63228B9857FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameControl__cctor_m645F7F4FA4B092441EAA3ACE4792C06A1534A535_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameControl__ctor_m6DCEE981B44B5B587E589B227A098AE27ED86C78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LevelLoader_OnMouseDown_mD73CA248EC1EBEC1E0C344B0344117EDC8AB3769_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainToken_Awake_m2C82F89CE06F12F7B29365966969A48051D7C9F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainToken_OnMouseDown_mA4BB0AA36E8AB8F7965E877B9DAFC7077A2496F1_MetadataUsageId;

struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Random
struct  Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___SeedArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Sprite
struct  Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// GameControl
struct  GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject GameControl::token
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___token_4;
	// System.Collections.Generic.List`1<System.Int32> GameControl::faceindexes
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___faceindexes_5;
	// System.Int32 GameControl::shuffleNum
	int32_t ___shuffleNum_7;
	// System.Int32[] GameControl::visibleFaces
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___visibleFaces_8;
	// System.Collections.Generic.List`1<System.Int32> GameControl::lockedindexes
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___lockedindexes_9;

public:
	inline static int32_t get_offset_of_token_4() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___token_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_token_4() const { return ___token_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_token_4() { return &___token_4; }
	inline void set_token_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___token_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___token_4), (void*)value);
	}

	inline static int32_t get_offset_of_faceindexes_5() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___faceindexes_5)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_faceindexes_5() const { return ___faceindexes_5; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_faceindexes_5() { return &___faceindexes_5; }
	inline void set_faceindexes_5(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___faceindexes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___faceindexes_5), (void*)value);
	}

	inline static int32_t get_offset_of_shuffleNum_7() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___shuffleNum_7)); }
	inline int32_t get_shuffleNum_7() const { return ___shuffleNum_7; }
	inline int32_t* get_address_of_shuffleNum_7() { return &___shuffleNum_7; }
	inline void set_shuffleNum_7(int32_t value)
	{
		___shuffleNum_7 = value;
	}

	inline static int32_t get_offset_of_visibleFaces_8() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___visibleFaces_8)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_visibleFaces_8() const { return ___visibleFaces_8; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_visibleFaces_8() { return &___visibleFaces_8; }
	inline void set_visibleFaces_8(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___visibleFaces_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibleFaces_8), (void*)value);
	}

	inline static int32_t get_offset_of_lockedindexes_9() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___lockedindexes_9)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_lockedindexes_9() const { return ___lockedindexes_9; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_lockedindexes_9() { return &___lockedindexes_9; }
	inline void set_lockedindexes_9(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___lockedindexes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lockedindexes_9), (void*)value);
	}
};

struct GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_StaticFields
{
public:
	// System.Random GameControl::rnd
	Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * ___rnd_6;

public:
	inline static int32_t get_offset_of_rnd_6() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_StaticFields, ___rnd_6)); }
	inline Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * get_rnd_6() const { return ___rnd_6; }
	inline Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F ** get_address_of_rnd_6() { return &___rnd_6; }
	inline void set_rnd_6(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * value)
	{
		___rnd_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rnd_6), (void*)value);
	}
};


// LevelLoader
struct  LevelLoader_t528DC9F40D2C5040043E386207C89B1400AE0343  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// MainToken
struct  MainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject MainToken::gameControl
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameControl_4;
	// UnityEngine.SpriteRenderer MainToken::spriteRenderer
	SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * ___spriteRenderer_5;
	// UnityEngine.Sprite[] MainToken::faces
	SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* ___faces_6;
	// UnityEngine.Sprite MainToken::back
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___back_7;
	// System.Int32 MainToken::faceIndex
	int32_t ___faceIndex_8;
	// System.Boolean MainToken::matched
	bool ___matched_9;
	// System.Boolean MainToken::locked
	bool ___locked_10;

public:
	inline static int32_t get_offset_of_gameControl_4() { return static_cast<int32_t>(offsetof(MainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE, ___gameControl_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_gameControl_4() const { return ___gameControl_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_gameControl_4() { return &___gameControl_4; }
	inline void set_gameControl_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___gameControl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameControl_4), (void*)value);
	}

	inline static int32_t get_offset_of_spriteRenderer_5() { return static_cast<int32_t>(offsetof(MainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE, ___spriteRenderer_5)); }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * get_spriteRenderer_5() const { return ___spriteRenderer_5; }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F ** get_address_of_spriteRenderer_5() { return &___spriteRenderer_5; }
	inline void set_spriteRenderer_5(SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * value)
	{
		___spriteRenderer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_5), (void*)value);
	}

	inline static int32_t get_offset_of_faces_6() { return static_cast<int32_t>(offsetof(MainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE, ___faces_6)); }
	inline SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* get_faces_6() const { return ___faces_6; }
	inline SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7** get_address_of_faces_6() { return &___faces_6; }
	inline void set_faces_6(SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* value)
	{
		___faces_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___faces_6), (void*)value);
	}

	inline static int32_t get_offset_of_back_7() { return static_cast<int32_t>(offsetof(MainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE, ___back_7)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_back_7() const { return ___back_7; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_back_7() { return &___back_7; }
	inline void set_back_7(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___back_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___back_7), (void*)value);
	}

	inline static int32_t get_offset_of_faceIndex_8() { return static_cast<int32_t>(offsetof(MainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE, ___faceIndex_8)); }
	inline int32_t get_faceIndex_8() const { return ___faceIndex_8; }
	inline int32_t* get_address_of_faceIndex_8() { return &___faceIndex_8; }
	inline void set_faceIndex_8(int32_t value)
	{
		___faceIndex_8 = value;
	}

	inline static int32_t get_offset_of_matched_9() { return static_cast<int32_t>(offsetof(MainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE, ___matched_9)); }
	inline bool get_matched_9() const { return ___matched_9; }
	inline bool* get_address_of_matched_9() { return &___matched_9; }
	inline void set_matched_9(bool value)
	{
		___matched_9 = value;
	}

	inline static int32_t get_offset_of_locked_10() { return static_cast<int32_t>(offsetof(MainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE, ___locked_10)); }
	inline bool get_locked_10() const { return ___locked_10; }
	inline bool* get_address_of_locked_10() { return &___locked_10; }
	inline void set_locked_10(bool value)
	{
		___locked_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
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
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * m_Items[1];

public:
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared (RuntimeObject * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<MainToken>()
inline MainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE * GameObject_GetComponent_TisMainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE_m3024DE4D553C59D91988DDB30E79E7B35BB365F1 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_gshared_inline)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0)
inline bool List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
inline bool List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6_gshared)(__this, ___item0, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD (String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mCD4B6E9DFD27A19F52FA441CD8CAEB687A9DD2F2 (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GameControl>()
inline GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * GameObject_GetComponent_TisGameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_m9FF2D738368C8C59E83F21E2F67C8801B66795FE (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Boolean GameControl::CheckLocked(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameControl_CheckLocked_m9E9DD60D5F156C24297E2E895F84301819BC7F57 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * SpriteRenderer_get_sprite_m08636289E3194AF5DF47954C8F01FE7F50E85900 (SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean GameControl::TwoCardsUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameControl_TwoCardsUp_mADA700A825BC00B803C93DF9C64C5D0E6D4ADB3F (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611 (SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * __this, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___value0, const RuntimeMethod* method);
// System.Void GameControl::AddVisibleFace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_AddVisibleFace_m99465F267C91DC53448EE70B42C8EBE6EE7FDC8D (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean GameControl::CheckMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameControl_CheckMatch_mF5F330FA7A16141047944389F9724A5C03256C92 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method);
// System.Void GameControl::RemoveVisibleFace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_RemoveVisibleFace_m0E6809969B355662F630AA5EF6981556E0770190 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// System.Void GameControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_Start_m9812137EC9462727989C9257365F63228B9857FC (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameControl_Start_m9812137EC9462727989C9257365F63228B9857FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	{
		// int originalLength = faceindexes.Count;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = __this->get_faceindexes_5();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_inline(L_0, /*hidden argument*/List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_RuntimeMethod_var);
		V_0 = L_1;
		// float yPosition = 2.3f;
		V_1 = (2.3f);
		// float xPosition = -2.2f;
		V_2 = (-2.2f);
		// for (int i =0; i<7; i++)
		V_3 = 0;
		goto IL_00be;
	}

IL_0020:
	{
		// shuffleNum = rnd.Next(0,(faceindexes.Count));
		IL2CPP_RUNTIME_CLASS_INIT(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_il2cpp_TypeInfo_var);
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_2 = ((GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_StaticFields*)il2cpp_codegen_static_fields_for(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_il2cpp_TypeInfo_var))->get_rnd_6();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_3 = __this->get_faceindexes_5();
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_inline(L_3, /*hidden argument*/List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_5 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, 0, L_4);
		__this->set_shuffleNum_7(L_5);
		// var temp = Instantiate(token, new Vector3(
		//     xPosition, yPosition, 0),
		//     Quaternion.identity);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_token_4();
		float L_7 = V_2;
		float L_8 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_9), L_7, L_8, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_6, L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		V_4 = L_11;
		// temp.GetComponent<MainToken>().faceIndex = faceindexes[shuffleNum];
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = V_4;
		NullCheck(L_12);
		MainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE * L_13 = GameObject_GetComponent_TisMainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE_m3024DE4D553C59D91988DDB30E79E7B35BB365F1(L_12, /*hidden argument*/GameObject_GetComponent_TisMainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE_m3024DE4D553C59D91988DDB30E79E7B35BB365F1_RuntimeMethod_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_14 = __this->get_faceindexes_5();
		int32_t L_15 = __this->get_shuffleNum_7();
		NullCheck(L_14);
		int32_t L_16 = List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_RuntimeMethod_var);
		NullCheck(L_13);
		L_13->set_faceIndex_8(L_16);
		// faceindexes.Remove(faceindexes[shuffleNum]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_17 = __this->get_faceindexes_5();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_18 = __this->get_faceindexes_5();
		int32_t L_19 = __this->get_shuffleNum_7();
		NullCheck(L_18);
		int32_t L_20 = List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_RuntimeMethod_var);
		NullCheck(L_17);
		List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889(L_17, L_20, /*hidden argument*/List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889_RuntimeMethod_var);
		// xPosition = xPosition + 4;
		float L_21 = V_2;
		V_2 = ((float)il2cpp_codegen_add((float)L_21, (float)(4.0f)));
		// if (i == (originalLength/2 - 2))
		int32_t L_22 = V_3;
		int32_t L_23 = V_0;
		V_5 = (bool)((((int32_t)L_22) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_23/(int32_t)2)), (int32_t)2))))? 1 : 0);
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b9;
		}
	}
	{
		// yPosition = -2.3f;
		V_1 = (-2.3f);
		// xPosition = -6.2f;
		V_2 = (-6.2f);
	}

IL_00b9:
	{
		// for (int i =0; i<7; i++)
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_00be:
	{
		// for (int i =0; i<7; i++)
		int32_t L_26 = V_3;
		V_6 = (bool)((((int32_t)L_26) < ((int32_t)7))? 1 : 0);
		bool L_27 = V_6;
		if (L_27)
		{
			goto IL_0020;
		}
	}
	{
		// token.GetComponent<MainToken>().faceIndex = faceindexes[0];
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_token_4();
		NullCheck(L_28);
		MainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE * L_29 = GameObject_GetComponent_TisMainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE_m3024DE4D553C59D91988DDB30E79E7B35BB365F1(L_28, /*hidden argument*/GameObject_GetComponent_TisMainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE_m3024DE4D553C59D91988DDB30E79E7B35BB365F1_RuntimeMethod_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_30 = __this->get_faceindexes_5();
		NullCheck(L_30);
		int32_t L_31 = List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_inline(L_30, 0, /*hidden argument*/List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_RuntimeMethod_var);
		NullCheck(L_29);
		L_29->set_faceIndex_8(L_31);
		// }
		return;
	}
}
// System.Boolean GameControl::TwoCardsUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameControl_TwoCardsUp_mADA700A825BC00B803C93DF9C64C5D0E6D4ADB3F (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// bool cardsUp = false;
		V_0 = (bool)0;
		// if(visibleFaces[0] >= 0 && visibleFaces[1] >= 0)
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = __this->get_visibleFaces_8();
		NullCheck(L_0);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = __this->get_visibleFaces_8();
		NullCheck(L_3);
		int32_t L_4 = 1;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		G_B3_0 = ((((int32_t)((((int32_t)L_5) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		// cardsUp = true;
		V_0 = (bool)1;
	}

IL_0027:
	{
		// return cardsUp;
		bool L_7 = V_0;
		V_2 = L_7;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Void GameControl::AddVisibleFace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_AddVisibleFace_m99465F267C91DC53448EE70B42C8EBE6EE7FDC8D (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(visibleFaces[0] == -1)
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = __this->get_visibleFaces_8();
		NullCheck(L_0);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// visibleFaces[0] = index;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = __this->get_visibleFaces_8();
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_5);
		goto IL_0038;
	}

IL_001d:
	{
		// else if (visibleFaces[1] == -2)
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_6 = __this->get_visibleFaces_8();
		NullCheck(L_6);
		int32_t L_7 = 1;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		// visibleFaces[1] = index;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_10 = __this->get_visibleFaces_8();
		int32_t L_11 = ___index0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_11);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void GameControl::RemoveVisibleFace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_RemoveVisibleFace_m0E6809969B355662F630AA5EF6981556E0770190 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(visibleFaces[0] == index)
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = __this->get_visibleFaces_8();
		NullCheck(L_0);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		int32_t L_3 = ___index0;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		// visibleFaces[0] = -1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = __this->get_visibleFaces_8();
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		goto IL_0038;
	}

IL_001d:
	{
		// else if (visibleFaces[1] == index)
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_6 = __this->get_visibleFaces_8();
		NullCheck(L_6);
		int32_t L_7 = 1;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = ___index0;
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0038;
		}
	}
	{
		// visibleFaces[1] = -2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_11 = __this->get_visibleFaces_8();
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)-2));
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Boolean GameControl::CheckMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameControl_CheckMatch_mF5F330FA7A16141047944389F9724A5C03256C92 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameControl_CheckMatch_mF5F330FA7A16141047944389F9724A5C03256C92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// bool success = false;
		V_0 = (bool)0;
		// if (visibleFaces[0] == visibleFaces[1])
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = __this->get_visibleFaces_8();
		NullCheck(L_0);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = __this->get_visibleFaces_8();
		NullCheck(L_3);
		int32_t L_4 = 1;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// lockedindexes.Add(visibleFaces[0]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_7 = __this->get_lockedindexes_9();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_8 = __this->get_visibleFaces_8();
		NullCheck(L_8);
		int32_t L_9 = 0;
		int32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_7);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_7, L_10, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// visibleFaces[0] = -1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_11 = __this->get_visibleFaces_8();
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		// visibleFaces[1] = -2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_12 = __this->get_visibleFaces_8();
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)-2));
		// success = true;
		V_0 = (bool)1;
	}

IL_0044:
	{
		// return success;
		bool L_13 = V_0;
		V_2 = L_13;
		goto IL_0048;
	}

IL_0048:
	{
		// }
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Boolean GameControl::CheckLocked(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameControl_CheckLocked_m9E9DD60D5F156C24297E2E895F84301819BC7F57 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameControl_CheckLocked_m9E9DD60D5F156C24297E2E895F84301819BC7F57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// bool locked = false;
		V_0 = (bool)0;
		// if (lockedindexes.Contains(index))
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = __this->get_lockedindexes_9();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6(L_0, L_1, /*hidden argument*/List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// locked = true;
		V_0 = (bool)1;
	}

IL_0017:
	{
		// return locked;
		bool L_4 = V_0;
		V_2 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		bool L_5 = V_2;
		return L_5;
	}
}
// System.Void GameControl::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_Awake_m7DCD4282485D4BFA123E5E7DE9933F241E7C44DD (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameControl_Awake_m7DCD4282485D4BFA123E5E7DE9933F241E7C44DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// token = GameObject.Find("Token");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralA1141EB96836ED960AE0BE11B9889597388B5DF0, /*hidden argument*/NULL);
		__this->set_token_4(L_0);
		// }
		return;
	}
}
// System.Void GameControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl__ctor_m6DCEE981B44B5B587E589B227A098AE27ED86C78 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameControl__ctor_m6DCEE981B44B5B587E589B227A098AE27ED86C78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<int> faceindexes = new List<int> {0,1,2,3,0,1,2,3};
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_0, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = L_0;
		NullCheck(L_1);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_1, 0, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_2 = L_1;
		NullCheck(L_2);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_2, 1, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_3, 2, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_4 = L_3;
		NullCheck(L_4);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_4, 3, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_5 = L_4;
		NullCheck(L_5);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_5, 0, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_6 = L_5;
		NullCheck(L_6);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_6, 1, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_7 = L_6;
		NullCheck(L_7);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_7, 2, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_8 = L_7;
		NullCheck(L_8);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_8, 3, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		__this->set_faceindexes_5(L_8);
		// public int shuffleNum = 0;
		__this->set_shuffleNum_7(0);
		// int[] visibleFaces = {-1, -2};
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_9 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)-2));
		__this->set_visibleFaces_8(L_11);
		// List<int> lockedindexes = new List<int>();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_12 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_12, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		__this->set_lockedindexes_9(L_12);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameControl::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl__cctor_m645F7F4FA4B092441EAA3ACE4792C06A1534A535 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameControl__cctor_m645F7F4FA4B092441EAA3ACE4792C06A1534A535_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static System.Random rnd = new System.Random();
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_0 = (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F *)il2cpp_codegen_object_new(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var);
		Random__ctor_mCD4B6E9DFD27A19F52FA441CD8CAEB687A9DD2F2(L_0, /*hidden argument*/NULL);
		((GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_StaticFields*)il2cpp_codegen_static_fields_for(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_il2cpp_TypeInfo_var))->set_rnd_6(L_0);
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
// System.Void LevelLoader::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_OnMouseDown_mD73CA248EC1EBEC1E0C344B0344117EDC8AB3769 (LevelLoader_t528DC9F40D2C5040043E386207C89B1400AE0343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelLoader_OnMouseDown_mD73CA248EC1EBEC1E0C344B0344117EDC8AB3769_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LevelLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader__ctor_m10E11F78BB48A1C25F2771939AE8D982E699318D (LevelLoader_t528DC9F40D2C5040043E386207C89B1400AE0343 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void MainToken::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainToken_OnMouseDown_mA4BB0AA36E8AB8F7965E877B9DAFC7077A2496F1 (MainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainToken_OnMouseDown_mA4BB0AA36E8AB8F7965E877B9DAFC7077A2496F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// locked = gameControl.GetComponent<GameControl>().CheckLocked(faceIndex);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_gameControl_4();
		NullCheck(L_0);
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_1 = GameObject_GetComponent_TisGameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_m9FF2D738368C8C59E83F21E2F67C8801B66795FE(L_0, /*hidden argument*/GameObject_GetComponent_TisGameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_m9FF2D738368C8C59E83F21E2F67C8801B66795FE_RuntimeMethod_var);
		int32_t L_2 = __this->get_faceIndex_8();
		NullCheck(L_1);
		bool L_3 = GameControl_CheckLocked_m9E9DD60D5F156C24297E2E895F84301819BC7F57(L_1, L_2, /*hidden argument*/NULL);
		__this->set_locked_10(L_3);
		// if ((matched == false) && (locked == false))
		bool L_4 = __this->get_matched_9();
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		bool L_5 = __this->get_locked_10();
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 0;
	}

IL_0031:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_00e2;
		}
	}
	{
		// if (spriteRenderer.sprite == back)
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_7 = __this->get_spriteRenderer_5();
		NullCheck(L_7);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_8 = SpriteRenderer_get_sprite_m08636289E3194AF5DF47954C8F01FE7F50E85900(L_7, /*hidden argument*/NULL);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_9 = __this->get_back_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_00b6;
		}
	}
	{
		// if(gameControl.GetComponent<GameControl>().TwoCardsUp() == false)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get_gameControl_4();
		NullCheck(L_12);
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_13 = GameObject_GetComponent_TisGameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_m9FF2D738368C8C59E83F21E2F67C8801B66795FE(L_12, /*hidden argument*/GameObject_GetComponent_TisGameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_m9FF2D738368C8C59E83F21E2F67C8801B66795FE_RuntimeMethod_var);
		NullCheck(L_13);
		bool L_14 = GameControl_TwoCardsUp_mADA700A825BC00B803C93DF9C64C5D0E6D4ADB3F(L_13, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_00b3;
		}
	}
	{
		// spriteRenderer.sprite = faces[faceIndex];
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_16 = __this->get_spriteRenderer_5();
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_17 = __this->get_faces_6();
		int32_t L_18 = __this->get_faceIndex_8();
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611(L_16, L_20, /*hidden argument*/NULL);
		// gameControl.GetComponent<GameControl>().AddVisibleFace(faceIndex);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = __this->get_gameControl_4();
		NullCheck(L_21);
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_22 = GameObject_GetComponent_TisGameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_m9FF2D738368C8C59E83F21E2F67C8801B66795FE(L_21, /*hidden argument*/GameObject_GetComponent_TisGameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_m9FF2D738368C8C59E83F21E2F67C8801B66795FE_RuntimeMethod_var);
		int32_t L_23 = __this->get_faceIndex_8();
		NullCheck(L_22);
		GameControl_AddVisibleFace_m99465F267C91DC53448EE70B42C8EBE6EE7FDC8D(L_22, L_23, /*hidden argument*/NULL);
		// matched = gameControl.GetComponent<GameControl>().CheckMatch();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = __this->get_gameControl_4();
		NullCheck(L_24);
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_25 = GameObject_GetComponent_TisGameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_m9FF2D738368C8C59E83F21E2F67C8801B66795FE(L_24, /*hidden argument*/GameObject_GetComponent_TisGameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_m9FF2D738368C8C59E83F21E2F67C8801B66795FE_RuntimeMethod_var);
		NullCheck(L_25);
		bool L_26 = GameControl_CheckMatch_mF5F330FA7A16141047944389F9724A5C03256C92(L_25, /*hidden argument*/NULL);
		__this->set_matched_9(L_26);
	}

IL_00b3:
	{
		goto IL_00e1;
	}

IL_00b6:
	{
		// spriteRenderer.sprite = back;
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_27 = __this->get_spriteRenderer_5();
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_28 = __this->get_back_7();
		NullCheck(L_27);
		SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611(L_27, L_28, /*hidden argument*/NULL);
		// gameControl.GetComponent<GameControl>().RemoveVisibleFace(faceIndex);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = __this->get_gameControl_4();
		NullCheck(L_29);
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_30 = GameObject_GetComponent_TisGameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_m9FF2D738368C8C59E83F21E2F67C8801B66795FE(L_29, /*hidden argument*/GameObject_GetComponent_TisGameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_m9FF2D738368C8C59E83F21E2F67C8801B66795FE_RuntimeMethod_var);
		int32_t L_31 = __this->get_faceIndex_8();
		NullCheck(L_30);
		GameControl_RemoveVisibleFace_m0E6809969B355662F630AA5EF6981556E0770190(L_30, L_31, /*hidden argument*/NULL);
	}

IL_00e1:
	{
	}

IL_00e2:
	{
		// }
		return;
	}
}
// System.Void MainToken::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainToken_Awake_m2C82F89CE06F12F7B29365966969A48051D7C9F7 (MainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainToken_Awake_m2C82F89CE06F12F7B29365966969A48051D7C9F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameControl = GameObject.Find("GameControl");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralC3A509F25A4199D8034F77188686E8D2CBFD3DCB, /*hidden argument*/NULL);
		__this->set_gameControl_4(L_0);
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_1 = Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693_RuntimeMethod_var);
		__this->set_spriteRenderer_5(L_1);
		// }
		return;
	}
}
// System.Void MainToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainToken__ctor_mD6491DC414F685823EA6F7ED4A39661A510853A4 (MainToken_t9B9BBDD80AE0629087EB44D4FE0C35BF9BD2E9CE * __this, const RuntimeMethod* method)
{
	{
		// public bool matched = false;
		__this->set_matched_9((bool)0);
		// public bool locked = false;
		__this->set_locked_10((bool)0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
