﻿#include "il2cpp-config.h"

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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_BLSdkManager1387786699.h"
#include "mscorlib_System_Void1841601450.h"
#include "AssemblyU2DCSharp_MonoSingleton_1_gen1138452419.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_BundleConfig1009563654.h"
#include "AssemblyU2DCSharp_BundleConfig_DirCfg1402160952.h"
#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"
#include "AssemblyU2DCSharp_EABRoot2557847040.h"
#include "AssemblyU2DCSharp_ESceneRoot513180667.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g2229327828.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g1251316621.h"
#include "mscorlib_System_Boolean3825574718.h"

// BLSdkManager
struct BLSdkManager_t1387786699;
// MonoSingleton`1<BLSdkManager>
struct MonoSingleton_1_t1138452419;
// MonoSingleton`1<System.Object>
struct MonoSingleton_1_t2440115015;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Object
struct Il2CppObject;
// BundleConfig
struct BundleConfig_t1009563654;
// UnityEngine.ScriptableObject
struct ScriptableObject_t1975622470;
// BundleConfig/DirCfg
struct DirCfg_t1402160952;
// System.Collections.Generic.Dictionary`2<EABRoot,System.String>
struct Dictionary_2_t2229327828;
// System.Collections.Generic.Dictionary`2<EABRoot,System.Object>
struct Dictionary_2_t2889556890;
// System.Collections.Generic.Dictionary`2<ESceneRoot,System.String>
struct Dictionary_2_t1251316621;
// System.Collections.Generic.Dictionary`2<ESceneRoot,System.Object>
struct Dictionary_2_t1911545683;
extern const MethodInfo* MonoSingleton_1__ctor_m67305565_MethodInfo_var;
extern const uint32_t BLSdkManager__ctor_m2829677652_MetadataUsageId;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1246302594;
extern Il2CppCodeGenString* _stringLiteral2440073412;
extern const uint32_t BLSdkManager_initSDK_m1673278282_MetadataUsageId;
extern Il2CppClass* DirCfgU5BU5D_t1589599465_il2cpp_TypeInfo_var;
extern const uint32_t BundleConfig__ctor_m1367671489_MetadataUsageId;
extern Il2CppClass* Dictionary_2_t2229327828_il2cpp_TypeInfo_var;
extern Il2CppClass* BundleConfig_t1009563654_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t1251316621_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m592694258_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Add_m4261180970_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2717960531_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Add_m3568382971_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1318344231;
extern Il2CppCodeGenString* _stringLiteral3204161548;
extern Il2CppCodeGenString* _stringLiteral1527921004;
extern Il2CppCodeGenString* _stringLiteral1594932300;
extern Il2CppCodeGenString* _stringLiteral2309168760;
extern Il2CppCodeGenString* _stringLiteral3430668515;
extern const uint32_t BundleConfig__cctor_m1524249664_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral371857150;
extern const uint32_t DirCfg__ctor_m1059223539_MetadataUsageId;

// System.Object[]
struct ObjectU5BU5D_t3614634134  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Il2CppObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// BundleConfig/DirCfg[]
struct DirCfgU5BU5D_t1589599465  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) DirCfg_t1402160952 * m_Items[1];

public:
	inline DirCfg_t1402160952 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DirCfg_t1402160952 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DirCfg_t1402160952 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline DirCfg_t1402160952 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DirCfg_t1402160952 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DirCfg_t1402160952 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void MonoSingleton`1<System.Object>::.ctor()
extern "C"  void MonoSingleton_1__ctor_m437210476_gshared (MonoSingleton_1_t2440115015 * __this, const MethodInfo* method);
// System.Void System.Collections.Generic.Dictionary`2<EABRoot,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m260734337_gshared (Dictionary_2_t2889556890 * __this, const MethodInfo* method);
// System.Void System.Collections.Generic.Dictionary`2<EABRoot,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2321890361_gshared (Dictionary_2_t2889556890 * __this, int32_t p0, Il2CppObject * p1, const MethodInfo* method);
// System.Void System.Collections.Generic.Dictionary`2<ESceneRoot,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m867520798_gshared (Dictionary_2_t1911545683 * __this, const MethodInfo* method);
// System.Void System.Collections.Generic.Dictionary`2<ESceneRoot,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m1884940182_gshared (Dictionary_2_t1911545683 * __this, int32_t p0, Il2CppObject * p1, const MethodInfo* method);

// System.Void MonoSingleton`1<BLSdkManager>::.ctor()
#define MonoSingleton_1__ctor_m67305565(__this, method) ((  void (*) (MonoSingleton_1_t1138452419 *, const MethodInfo*))MonoSingleton_1__ctor_m437210476_gshared)(__this, method)
// System.Void BLSdkManager::initSDK()
extern "C"  void BLSdkManager_initSDK_m1673278282 (BLSdkManager_t1387786699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
extern "C"  void Debug_LogFormat_m3816524933 (Il2CppObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t3614634134* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BLSdkManager::BilibiliSdkInit()
extern "C"  String_t* BLSdkManager_BilibiliSdkInit_m4113727045 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C"  void ScriptableObject__ctor_m2671490429 (ScriptableObject_t1975622470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<EABRoot,System.String>::.ctor()
#define Dictionary_2__ctor_m592694258(__this, method) ((  void (*) (Dictionary_2_t2229327828 *, const MethodInfo*))Dictionary_2__ctor_m260734337_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<EABRoot,System.String>::Add(!0,!1)
#define Dictionary_2_Add_m4261180970(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2229327828 *, int32_t, String_t*, const MethodInfo*))Dictionary_2_Add_m2321890361_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.Dictionary`2<ESceneRoot,System.String>::.ctor()
#define Dictionary_2__ctor_m2717960531(__this, method) ((  void (*) (Dictionary_2_t1251316621 *, const MethodInfo*))Dictionary_2__ctor_m867520798_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<ESceneRoot,System.String>::Add(!0,!1)
#define Dictionary_2_Add_m3568382971(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1251316621 *, int32_t, String_t*, const MethodInfo*))Dictionary_2_Add_m1884940182_gshared)(__this, p0, p1, method)
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BLSdkManager::.ctor()
extern "C"  void BLSdkManager__ctor_m2829677652 (BLSdkManager_t1387786699 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BLSdkManager__ctor_m2829677652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoSingleton_1__ctor_m67305565(__this, /*hidden argument*/MonoSingleton_1__ctor_m67305565_MethodInfo_var);
		return;
	}
}
extern "C" char* DEFAULT_CALL BilibiliSdkInit();
// System.String BLSdkManager::BilibiliSdkInit()
extern "C"  String_t* BLSdkManager_BilibiliSdkInit_m4113727045 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(BilibiliSdkInit)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void BLSdkManager::Start()
extern "C"  void BLSdkManager_Start_m2737228312 (BLSdkManager_t1387786699 * __this, const MethodInfo* method)
{
	{
		// initSDK();
		// initSDK();
		BLSdkManager_initSDK_m1673278282(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BLSdkManager::initSDK()
extern "C"  void BLSdkManager_initSDK_m1673278282 (BLSdkManager_t1387786699 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BLSdkManager_initSDK_m1673278282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// Debug.LogFormat ("init SDK csharp begin");
		// Debug.LogFormat ("init SDK csharp begin");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3816524933(NULL /*static, unused*/, _stringLiteral1246302594, ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		// var s = BilibiliSdkInit();
		String_t* L_0 = BLSdkManager_BilibiliSdkInit_m4113727045(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		// Debug.LogFormat ("init SDK csharp end {0}", s);
		ObjectU5BU5D_t3614634134* L_1 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_2 = V_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_2);
		// Debug.LogFormat ("init SDK csharp end {0}", s);
		Debug_LogFormat_m3816524933(NULL /*static, unused*/, _stringLiteral2440073412, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BundleConfig::.ctor()
extern "C"  void BundleConfig__ctor_m1367671489 (BundleConfig_t1009563654 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BundleConfig__ctor_m1367671489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DirCfg[] mDirs = new DirCfg[0];
		__this->set_mDirs_2(((DirCfgU5BU5D_t1589599465*)SZArrayNew(DirCfgU5BU5D_t1589599465_il2cpp_TypeInfo_var, (uint32_t)0)));
		ScriptableObject__ctor_m2671490429(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BundleConfig::.cctor()
extern "C"  void BundleConfig__cctor_m1524249664 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BundleConfig__cctor_m1524249664_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2229327828 * V_0 = NULL;
	Dictionary_2_t1251316621 * V_1 = NULL;
	{
		// public static Dictionary<EABRoot, string> ABResRoots = new Dictionary<EABRoot, string> {
		Dictionary_2_t2229327828 * L_0 = (Dictionary_2_t2229327828 *)il2cpp_codegen_object_new(Dictionary_2_t2229327828_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m592694258(L_0, /*hidden argument*/Dictionary_2__ctor_m592694258_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t2229327828 * L_1 = V_0;
		NullCheck(L_1);
		Dictionary_2_Add_m4261180970(L_1, 0, _stringLiteral1318344231, /*hidden argument*/Dictionary_2_Add_m4261180970_MethodInfo_var);
		Dictionary_2_t2229327828 * L_2 = V_0;
		NullCheck(L_2);
		Dictionary_2_Add_m4261180970(L_2, 2, _stringLiteral3204161548, /*hidden argument*/Dictionary_2_Add_m4261180970_MethodInfo_var);
		Dictionary_2_t2229327828 * L_3 = V_0;
		NullCheck(L_3);
		Dictionary_2_Add_m4261180970(L_3, 6, _stringLiteral1527921004, /*hidden argument*/Dictionary_2_Add_m4261180970_MethodInfo_var);
		Dictionary_2_t2229327828 * L_4 = V_0;
		NullCheck(L_4);
		Dictionary_2_Add_m4261180970(L_4, 3, _stringLiteral1594932300, /*hidden argument*/Dictionary_2_Add_m4261180970_MethodInfo_var);
		Dictionary_2_t2229327828 * L_5 = V_0;
		NullCheck(L_5);
		Dictionary_2_Add_m4261180970(L_5, 5, _stringLiteral2309168760, /*hidden argument*/Dictionary_2_Add_m4261180970_MethodInfo_var);
		Dictionary_2_t2229327828 * L_6 = V_0;
		NullCheck(L_6);
		Dictionary_2_Add_m4261180970(L_6, 7, _stringLiteral3430668515, /*hidden argument*/Dictionary_2_Add_m4261180970_MethodInfo_var);
		Dictionary_2_t2229327828 * L_7 = V_0;
		((BundleConfig_t1009563654_StaticFields*)BundleConfig_t1009563654_il2cpp_TypeInfo_var->static_fields)->set_ABResRoots_4(L_7);
		// public static Dictionary<ESceneRoot, string> ABSceneRoots = new Dictionary<ESceneRoot, string> {
		Dictionary_2_t1251316621 * L_8 = (Dictionary_2_t1251316621 *)il2cpp_codegen_object_new(Dictionary_2_t1251316621_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2717960531(L_8, /*hidden argument*/Dictionary_2__ctor_m2717960531_MethodInfo_var);
		V_1 = L_8;
		Dictionary_2_t1251316621 * L_9 = V_1;
		NullCheck(L_9);
		Dictionary_2_Add_m3568382971(L_9, 0, _stringLiteral1594932300, /*hidden argument*/Dictionary_2_Add_m3568382971_MethodInfo_var);
		Dictionary_2_t1251316621 * L_10 = V_1;
		((BundleConfig_t1009563654_StaticFields*)BundleConfig_t1009563654_il2cpp_TypeInfo_var->static_fields)->set_ABSceneRoots_5(L_10);
		return;
	}
}
// System.Void BundleConfig/DirCfg::.ctor()
extern "C"  void DirCfg__ctor_m1059223539 (DirCfg_t1402160952 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DirCfg__ctor_m1059223539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string dir = "";
		__this->set_dir_0(_stringLiteral371857150);
		// public bool include = false;
		__this->set_include_1((bool)0);
		// public bool preDownload = false;
		__this->set_preDownload_2((bool)0);
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
