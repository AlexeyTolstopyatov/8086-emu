#pragma once

#include "console.h"

void hlt(void);
void add(ushort_t a);
void sub(ushort_t a);
void mul(ushort_t a);
void inc(ushort_t* reg);
void dec(ushort_t* reg);
void mov(ushort_t* a, ushort_t b);
void xor(ushort_t* a, ushort_t b);
void pop();
void push();