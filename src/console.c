#include "console.h"


/* Print Ending
 * ¬ыводит сообщение о завершении выполнени€
 * команды
 */
void printe(void) {
	printf("System halted. -2\n");
	exit(-2);
}

/* Print Registers
 * ¬ыводит таблицу регистров
 */
void printr(void) {
	printf("\nPurpose registers\n");
	printf("Acc register\tAX\t0x%zx\n", ax);
	printf("Base register\tBX\t0x%zx\n", bx);
	printf("Counter reg\tCX\t0x%zx\n", cx);
	printf("Data register\tDX\t0x%zx\n", dx);
	printf("\nCPU flags\n");
	printf("Pointer Flag\tPF\t0x%zx\n");
	printf("Zero Flag\tZF\t0x%zx\n");
	printf("Segment Flag\tSF\t0x%zx\n");
	printf("\nPointer registers\n");
	printf("Section Pointer\tSP\t0x%zx\n", sp);
	printf("Base Pointer\tBP\t0x%zx\n", bp);
	printf("Instruction at\tIP\t0x%zx\n", ip);
	printf("\nSegment registers\n");
	printf("Code Segment\tCS\t0x%zx\n", cs);
	printf("Stack Segment\tSS\t0x%zx\n", ss);
	printf("Data Segment\tDS\t0x%zx\n", ds);
	printf("Extra Segment\tES\t0x%zx\n", es);
}