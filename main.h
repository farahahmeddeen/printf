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

int _hexaD(va_list zab);
int _hexad(va_list zab);
int _octal(va_list zab);
int _unsigned(va_list zab);
int _pointer(va_list zab);
int _rot13(va_list zab);
int _decimal(va_list zab);
int _int(va_list zab);
int _char(va_list zab);
int _string(va_list zab);
int _percent(void);
int _printf(const char *format, ...);
int _putchar(char c);
int _binary(va_list zab);
int _reverse(va_list zab);

#endif
