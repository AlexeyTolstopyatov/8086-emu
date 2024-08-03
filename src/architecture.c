#include "architecture.h"

void hlt(void) {
	printe();
	exit(-2);
}

void inc(ushort_t* reg) {
	*reg += 1;
}

void dec(ushort_t* reg) {
	*reg -= 1;
}

void mov(ushort_t* a, ushort_t b) {
	*a = b;
}

void add(ushort_t a){
	ax += a;
}

void sub(ushort_t a) {
	ax -= a;
}

void mul(ushort_t a) {
	ax *= a;
}

void or(ushort_t* a, ushort_t b) {
	*a = (*a || b);
}

void xor(ushort_t* a, ushort_t b) {
	*a = (*a != b);
}

void pop() {

}

void push() {

}