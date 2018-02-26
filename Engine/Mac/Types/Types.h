#pragma once

#include <cstdio>

struct Types;
struct MacTypes : public Types {
    typedef size_t usize;
};
typedef MacTypes Types;