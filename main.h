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

int _char(va_list zw);
int _string(va_list zw);
int _percent(void);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
