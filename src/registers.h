#pragma once

/* Framework */
#include <stdio.h>
#include <stdlib.h>



/*Переопределения типов*/
typedef unsigned short ushort_t;
typedef unsigned char  bool_t;
typedef unsigned char  byte_t;

#define BUFFER_PROBLEM  -4
#define ALLOC_PROBLEM	-3
#define FILE_PROBLEM	-2
#define SYNTAX_PROBLEM	-1

/*
 * Королевские размеры
 */
#define MAX 65535

/*	Регистры Общего назначения
 * Состоят из старших (High) 8 бит и младших (Low) 8 бит.
 * [AX] = [AH|AL]. Размер регистра = 2 байта (16 бит)
 * Поэтому 16-разрядные регистры.
 */
ushort_t ax; /*Accumulative register*/
ushort_t bx; /*Based register*/
ushort_t cx; /*Count register*/
ushort_t dx; /*Data register */

/*	Сегментные регистры
 * предназначены для того, чтобы указать на сегменты, 
 * к которым программа имеет доступ в конкретный момент времени.
 */
ushort_t cs; /*CODE Segment */
ushort_t ds; /*DATA Segment */
ushort_t es; /*EXTRA Segment*/
ushort_t ss; /*STACK Segment*/

/*	Указатели
 * регисты, применяемые для хранения 
 * адреса памяти в архитектуре процессора
 */
ushort_t ip; /*Instruction Pointer*/
ushort_t sp; /*Stack Pointer*/
ushort_t bp; /*Base Pointer */

/*
 * Флаги
 */
ushort_t zf; /**/
ushort_t pf; /*Pointer flag*/
ushort_t sf; /*Segment flag*/