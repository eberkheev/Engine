#pragma once

struct Types;
struct nothrow_t { explicit nothrow_t() = default; };

void* operator new  (Types::usize count);
void* operator new[](Types::usize count);
void* operator new  (Types::usize count, const nothrow_t& tag);
void* operator new[](Types::usize count, const nothrow_t& tag);

void operator delete  (void* ptr);
void operator delete[](void* ptr);
void operator delete  (void* ptr, const nothrow_t& tag);
void operator delete[](void* ptr, const nothrow_t& tag);
void operator delete  (void* ptr, Types::usize sz);
void operator delete[](void* ptr, Types::usize sz);