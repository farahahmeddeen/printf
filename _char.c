#include "main.h"
/**
 * _char - function to print a char
 * @zab: argument passed
 * Return: 1 always
 */
int _char(va_list st)
{
	char y;

	y = va_arg(st, int);
	_putchar(y);
	return (1);
}
