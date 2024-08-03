#pragma once

/* Framework */
#include <stdio.h>
#include <stdlib.h>



/*Переопределение типов данных*/
typedef unsigned short ushort_t;
typedef unsigned char  bool_t;
typedef unsigned char  byte_t;

/*Макро определения причин выхода*/
#define BUFFER_PROBLEM  -4
#define ALLOC_PROBLEM	-3
#define FILE_PROBLEM	-2
#define SYNTAX_PROBLEM	-1

/*
 * Максимальный размер
 */
#define MAX 65535

/* Регистры общего назначения
 * состоят из старших (High) 8 бит и Младших (Low) 8 бит. 
 * [AX] = [AH|AL]
 */
ushort_t ax; /*Accumulative register*/
ushort_t bx; /*Based register*/
ushort_t cx; /*Count register*/
ushort_t dx; /*Data register */

/* Регистры сегментов
 * 
 */
ushort_t cs; /*CODE Segment */
ushort_t ds; /*DATA Segment */
ushort_t es; /*EXTRA Segment*/
ushort_t ss; /*STACK Segment*/

/*	Указатели
 */
ushort_t ip; /*Instruction Pointer*/
ushort_t sp; /*Stack Pointer*/
ushort_t bp; /*Base Pointer */

/*
 * Флаги процессора
 */
ushort_t zf; /**/
ushort_t pf; /*Pointer flag*/
ushort_t sf; /*Segment flag*/