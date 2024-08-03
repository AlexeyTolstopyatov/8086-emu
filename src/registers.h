#pragma once

/* Framework */
#include <stdio.h>
#include <stdlib.h>



/*��������������� �����*/
typedef unsigned short ushort_t;
typedef unsigned char  bool_t;
typedef unsigned char  byte_t;

#define BUFFER_PROBLEM  -4
#define ALLOC_PROBLEM	-3
#define FILE_PROBLEM	-2
#define SYNTAX_PROBLEM	-1

/*
 * ����������� �������
 */
#define MAX 65535

/*	�������� ������ ����������
 * ������� �� ������� (High) 8 ��� � ������� (Low) 8 ���.
 * [AX] = [AH|AL]. ������ �������� = 2 ����� (16 ���)
 * ������� 16-��������� ��������.
 */
ushort_t ax; /*Accumulative register*/
ushort_t bx; /*Based register*/
ushort_t cx; /*Count register*/
ushort_t dx; /*Data register */

/*	���������� ��������
 * ������������� ��� ����, ����� ������� �� ��������, 
 * � ������� ��������� ����� ������ � ���������� ������ �������.
 */
ushort_t cs; /*CODE Segment */
ushort_t ds; /*DATA Segment */
ushort_t es; /*EXTRA Segment*/
ushort_t ss; /*STACK Segment*/

/*	���������
 * �������, ����������� ��� �������� 
 * ������ ������ � ����������� ����������
 */
ushort_t ip; /*Instruction Pointer*/
ushort_t sp; /*Stack Pointer*/
ushort_t bp; /*Base Pointer */

/*
 * �����
 */
ushort_t zf; /**/
ushort_t pf; /*Pointer flag*/
ushort_t sf; /*Segment flag*/