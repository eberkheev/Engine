
#ifndef ENGINE_SHARED_TYPES_H
#define ENGINE_SHARED_TYPES_H

template<typename T32BITS, typename T64BITS, int PointerSize>
struct SelectIntPointerType;

template<typename T32BITS, typename T64BITS>
struct SelectIntPointerType<T32BITS, T64BITS, 8>
{
	typedef T64BITS TIntPointer;
};

template<typename T32BITS, typename T64BITS>
struct SelectIntPointerType<T32BITS, T64BITS, 4>
{
	typedef T32BITS TIntPointer;
};

struct SharedTypes
{
	typedef unsigned char uint8;
	typedef unsigned short uint16;
	typedef unsigned int uint32;
	typedef unsigned long uint64;

	typedef signed char int8;
	typedef signed short int16;
	typedef signed int int32;
	typedef signed long int64;

	typedef char ANSICHAR;
	typedef wchar_t	WIDECHAR;
	typedef uint8 char8_t;
	typedef uint16 char16_t;
	typedef uint32 char32_t;
	typedef WIDECHAR TCHAR;

	typedef SelectIntPointerType<uint32, uint64, sizeof(void*)>::TIntPointer UPTRINT;
	typedef SelectIntPointerType<int32, int64, sizeof(void*)>::TIntPointer PTRINT;
	typedef UPTRINT SIZE_T;
	typedef PTRINT SSIZE_T;

	typedef int32 TYPE_OF_NULL;
	typedef decltype(nullptr) TYPE_OF_NULLPTR;
};

#endif //ENGINE_SHARED_TYPES_H
