#include "insproc.h"
#include <string.h>


/* Instruction open
 * Открывает файл и записывает все инструкции в стэк
 */
void iopen(char source[]) {
	printf("Opening %s... ", source);

	FILE* file = fopen(source, "r");

	if (file == NULL) {
		printf("CANCELLED\n");
		perror("file error");
		fclose(file);
		exit(FILE_PROBLEM);
	}

	printf("OK\n");
	fseek(file, SEEK_SET, SEEK_END);
	long fsize = ftell(file);
	rewind(file);

	char* buffer = (char*)calloc(
		fsize,
		sizeof(byte_t)
	);
	
	if (!buffer) {
		perror("allocation error");
		exit(ALLOC_PROBLEM);
	}

	size_t bytesRead = fread(buffer, 1, fsize, file);
	if (bytesRead != fsize) {
		perror("buffer error");
		free(buffer);
		exit(BUFFER_PROBLEM);
	}

	fclose(file);

	const long llen = fsize / sizeof(char);

	iflines = calloc(llen, sizeof(byte_t));

	char* line = strtok(buffer, "\n");
	
	int i = 0;
	while (line != NULL && i < llen) {
		iflines[i++] = line;
		line = strtok(NULL, "\n");
	}

	free(buffer);

	for (int j = 0; j < i; ++j) {
		printf("%s\n", iflines[j]);
	}
}

/* Instruction Free
 * Освобождает список инструкций
 */
void ifree(void) {
	for(int i = 0; i < sizeof(iflines); i++){
		free(iflines[i]);
	}

	free(iflines);
}
/* Initialize method
 * Восстанавливает или сбрасывает значения всех регистров
 */
void init(void) {
	printf("Registers restored\n");
	ax = 0x0;
	bx = 0x0;
	cx = 0x0;
	dx = 0x0;

	sp = 0x0;
	ip = 0x0;
	bp = 0x0;

	cs = 0x0;
	ss = 0x0;
	es = 0x0;
	ds = 0x0;

	zf = 0x0;
	pf = 0x0;
	
}

/*
 * Is Instruction operand
 * Проверяет, является ли член операндом
 */
bool_t isinop(char op){
	printf("Operand check\n");
	switch (op)
	{
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		return 1;
	default:
		return 0;
	}
}


/* Stack initialize
 * Инициализирует список команд
 */
static void sinit() {
	stack = (char**)malloc(MAX);
}
/* Registers initialize
 * Инициализирует список регистров
 */
static void rinit() {

}
/* Instruction to stack
 * Копирует инструкцию из глобального списка в стэк
 */
void itos(char* (i[])) {

}


/* Instruction to Register-list
 * копирует регистр в список регистров
 */
void itor(char* (r[])) {

}


/* Instruction Execute
 * Запускает цикл обработки всех инструкций из списка
 */
static void iexec() {
	
	printf("Executing instructions\n");
	while (1) {
		/*Фабрика какашек*/
		
	}
}