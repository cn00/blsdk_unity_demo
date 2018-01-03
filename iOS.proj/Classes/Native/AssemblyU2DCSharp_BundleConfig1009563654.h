#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// BundleConfig/DirCfg[]
struct DirCfgU5BU5D_t1589599465;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<EABRoot,System.String>
struct Dictionary_2_t2229327828;
// System.Collections.Generic.Dictionary`2<ESceneRoot,System.String>
struct Dictionary_2_t1251316621;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BundleConfig
struct  BundleConfig_t1009563654  : public ScriptableObject_t1975622470
{
public:
	// BundleConfig/DirCfg[] BundleConfig::mDirs
	DirCfgU5BU5D_t1589599465* ___mDirs_2;

public:
	inline static int32_t get_offset_of_mDirs_2() { return static_cast<int32_t>(offsetof(BundleConfig_t1009563654, ___mDirs_2)); }
	inline DirCfgU5BU5D_t1589599465* get_mDirs_2() const { return ___mDirs_2; }
	inline DirCfgU5BU5D_t1589599465** get_address_of_mDirs_2() { return &___mDirs_2; }
	inline void set_mDirs_2(DirCfgU5BU5D_t1589599465* value)
	{
		___mDirs_2 = value;
		Il2CppCodeGenWriteBarrier(&___mDirs_2, value);
	}
};

struct BundleConfig_t1009563654_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<EABRoot,System.String> BundleConfig::ABResRoots
	Dictionary_2_t2229327828 * ___ABResRoots_4;
	// System.Collections.Generic.Dictionary`2<ESceneRoot,System.String> BundleConfig::ABSceneRoots
	Dictionary_2_t1251316621 * ___ABSceneRoots_5;

public:
	inline static int32_t get_offset_of_ABResRoots_4() { return static_cast<int32_t>(offsetof(BundleConfig_t1009563654_StaticFields, ___ABResRoots_4)); }
	inline Dictionary_2_t2229327828 * get_ABResRoots_4() const { return ___ABResRoots_4; }
	inline Dictionary_2_t2229327828 ** get_address_of_ABResRoots_4() { return &___ABResRoots_4; }
	inline void set_ABResRoots_4(Dictionary_2_t2229327828 * value)
	{
		___ABResRoots_4 = value;
		Il2CppCodeGenWriteBarrier(&___ABResRoots_4, value);
	}

	inline static int32_t get_offset_of_ABSceneRoots_5() { return static_cast<int32_t>(offsetof(BundleConfig_t1009563654_StaticFields, ___ABSceneRoots_5)); }
	inline Dictionary_2_t1251316621 * get_ABSceneRoots_5() const { return ___ABSceneRoots_5; }
	inline Dictionary_2_t1251316621 ** get_address_of_ABSceneRoots_5() { return &___ABSceneRoots_5; }
	inline void set_ABSceneRoots_5(Dictionary_2_t1251316621 * value)
	{
		___ABSceneRoots_5 = value;
		Il2CppCodeGenWriteBarrier(&___ABSceneRoots_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
