#include "insproc.h" /*Библиотека инструкций*/

int main(int argc, char *argv[]) {
    rinit();
    inc(&ax);
    inc(&cx);
  
    printr();
    printe();

    return 0;
}
/*
Вывод: 
Registers restored

Purpose registers
Acc register    AX      0x1
Base register   BX      0x0
Counter reg     CX      0x1
Data register   DX      0x0

CPU flags
Pointer Flag    PF      0x7ff7884aabc0
Zero Flag       ZF      0x7ff7884aabc0
Segment Flag    SF      0x7ff7884aabc0

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

/* Тест пройден */
