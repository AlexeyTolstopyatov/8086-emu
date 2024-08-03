#pragma once
#include "architecture.h"



/* *** "Instruction Processing header" ***
 * ������������ ������� ��� ��������� ���������� ����������
 */
#define __NEXT_WORD 0xFF

char** iflines;
char** stack; /*���� ������*/
char** regs;  /*�������� (����� 2 ��� ���...)*/

#define ERROR_KEYWORD "Error at ";

bool_t isinop(char op);
ushort_t igetm(ushort_t address);
void iopen(char source[]);
void ifree(void);
void init(void);
void alloc(ushort_t address);
static void rinit(void);
static void sinit(void);

