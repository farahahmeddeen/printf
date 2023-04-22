#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

/**
  * struct format - match specifiers
  * @h: Pointer of specifier
  * @func: pointer to fuction
  */
typedef struct format
{
	char *h;
	int (*func)();
} conversion_array;

int _printf(const char *format, ...);
int _putchar(char c);

#endif