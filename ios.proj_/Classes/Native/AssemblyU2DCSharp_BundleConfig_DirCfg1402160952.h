#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BundleConfig/DirCfg
struct  DirCfg_t1402160952  : public Il2CppObject
{
public:
	// System.String BundleConfig/DirCfg::dir
	String_t* ___dir_0;
	// System.Boolean BundleConfig/DirCfg::include
	bool ___include_1;
	// System.Boolean BundleConfig/DirCfg::preDownload
	bool ___preDownload_2;

public:
	inline static int32_t get_offset_of_dir_0() { return static_cast<int32_t>(offsetof(DirCfg_t1402160952, ___dir_0)); }
	inline String_t* get_dir_0() const { return ___dir_0; }
	inline String_t** get_address_of_dir_0() { return &___dir_0; }
	inline void set_dir_0(String_t* value)
	{
		___dir_0 = value;
		Il2CppCodeGenWriteBarrier(&___dir_0, value);
	}

	inline static int32_t get_offset_of_include_1() { return static_cast<int32_t>(offsetof(DirCfg_t1402160952, ___include_1)); }
	inline bool get_include_1() const { return ___include_1; }
	inline bool* get_address_of_include_1() { return &___include_1; }
	inline void set_include_1(bool value)
	{
		___include_1 = value;
	}

	inline static int32_t get_offset_of_preDownload_2() { return static_cast<int32_t>(offsetof(DirCfg_t1402160952, ___preDownload_2)); }
	inline bool get_preDownload_2() const { return ___preDownload_2; }
	inline bool* get_address_of_preDownload_2() { return &___preDownload_2; }
	inline void set_preDownload_2(bool value)
	{
		___preDownload_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
