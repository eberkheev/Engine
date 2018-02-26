#pragma once

struct Types;
struct WindowsTypes : public Types
{
	typedef unsigned long long size_t;
};
typedef WindowsTypes Types;