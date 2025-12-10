// CommonDefines.h
#pragma once

// 基础类型定义
typedef unsigned char  uint8;
typedef unsigned short uint16;
typedef unsigned int   uint32;
typedef unsigned long long uint64;
typedef signed char    int8;
typedef signed short   int16;
typedef signed int     int32;
typedef signed long long int64;
typedef float          float32;
typedef double         float64;

// 平台检测
#if defined(_WIN32) || defined(_WIN64)
#define PLATFORM_WINDOWS
#ifdef _WIN64
#define PLATFORM_64BIT
#else
#define PLATFORM_32BIT
#endif
#elif defined(__APPLE__)
#define PLATFORM_MAC
#elif defined(__linux__)
#define PLATFORM_LINUX
#endif

// 导出导入宏
#ifdef PLATFORM_WINDOWS
#ifdef BUILD_DLL
#define API_EXPORT __declspec(dllexport)
#else
#define API_EXPORT __declspec(dllimport)
#endif
#define API_CALL __stdcall
#else
#define API_EXPORT
#define API_CALL
#endif

// 禁用警告
#ifdef PLATFORM_WINDOWS
#define DISABLE_WARNING_PUSH __pragma(warning(push))
#define DISABLE_WARNING_POP __pragma(warning(pop))
#define DISABLE_WARNING(w) __pragma(warning(disable: w))
#else
#define DISABLE_WARNING_PUSH
#define DISABLE_WARNING_POP
#define DISABLE_WARNING(w)
#endif

// 常用宏
#define SAFE_DELETE(p) { if(p) { delete (p); (p) = nullptr; } }
#define SAFE_DELETE_ARRAY(p) { if(p) { delete[] (p); (p) = nullptr; } }
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))
#define UNUSED(x) (void)(x)
#define DISABLE_COPY(Class) \
    Class(const Class&) = delete; \
    Class& operator=(const Class&) = delete

// 断言宏
#ifdef _DEBUG
#include <cassert>
#define ASSERT(expr) assert(expr)
#define VERIFY(expr) assert(expr)
#else
#define ASSERT(expr) ((void)0)
#define VERIFY(expr) (expr)
#endif

// 内联宏
#ifdef _MSC_VER
#define FORCE_INLINE __forceinline
#elif defined(__GNUC__)
#define FORCE_INLINE inline __attribute__((always_inline))
#else
#define FORCE_INLINE inline
#endif

// 命名空间
#define BEGIN_NAMESPACE(ns) namespace ns {
#define END_NAMESPACE(ns) }

// 版本定义
#define MAKE_VERSION(major, minor, patch) ((major << 16) | (minor << 8) | patch)
#define VERSION_MAJOR(version) ((version >> 16) & 0xFF)
#define VERSION_MINOR(version) ((version >> 8) & 0xFF)
#define VERSION_PATCH(version) (version & 0xFF)
