/*
 * Библиотеки подключаемые к проекту
 *      #include <time.h>  -- С
 *      #include <ctime.h> -- C++
 * 
 * Отключение проверок безопасности
 *      #define _CRT_SECURE_NO_WARNINGS для MSVC++
 * 
 * Файлы, используемые в проекте
 *      Исходные файлы      *.c
 *      Файлы заголовков    *.h
 */

#include "insproc.h"

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        printf("Usage: ./x86emu instruction.asm"); 
        return SYNTAX_PROBLEM;
    }

    init();
    iopen(argv[1]);

    return 0;
}