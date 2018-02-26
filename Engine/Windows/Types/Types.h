#pragma once

struct Types;
struct WindowsTypes : public Types
{
#ifdef _WIN64
    typedef unsigned __int64	usize;
    typedef __int64				size;
#else
    typedef unsigned long usize;
    typedef long size;
#endif
};
typedef WindowsTypes Types;