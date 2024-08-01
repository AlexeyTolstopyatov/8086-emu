#include "insproc.h"

int main(int argc, char *argv[]) {
    init();
    mov(&ax, 0xAA);
    mov(&bx, 0xBB);
    xor(&ax, &bx);

    printr();
    printe();
    return 0;
}

/*
Вывод:
PS D:\Projects\с\x86emu\x64\Debug> ./x86emu
Registers restored

Purpose registers
Acc register    AX      0x1
Base register   BX      0xbb
Counter reg     CX      0x0
Data register   DX      0x0

CPU flags
Pointer Flag    PF      0x7ff6615dabc0
Zero Flag       ZF      0x7ff6615dabc0
Segment Flag    SF      0x7ff6615dabc0

Pointer registers
Section Pointer SP      0x0
Base Pointer    BP      0x0
Instruction at  IP      0x0

Segment registers
Code Segment    CS      0x0
Stack Segment   SS      0x0
Data Segment    DS      0x0
Extra Segment   ES      0x0
System halted. -2
*/
