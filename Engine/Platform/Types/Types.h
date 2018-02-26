#pragma once

template<class T32, class T64, int size>
struct Pointer {};

template<class T32, class T64>
struct Pointer<T32, T64, 8>
{
	typedef T64 ptr;
};

template<class T32, class T64>
struct Pointer<T32, T64, 4>
{
	typedef T32 ptr;
};

struct Types
{
	typedef unsigned char uint8;
	typedef unsigned short uint16;
	typedef unsigned int uint32;
	typedef unsigned long uint64;

	typedef signed char int8;
	typedef signed short int16;
	typedef signed int int32;
	typedef signed long int64;

	typedef wchar_t	wchar;

	typedef Pointer<int32, int64, sizeof(void*)>::ptr ptr;
	typedef Pointer<uint32, uint64, sizeof(void*)>::ptr uptr;

	typedef uptr usize;
	typedef ptr size;
};