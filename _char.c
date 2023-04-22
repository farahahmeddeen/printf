#include "main.h"
/**
 * _char - function to print a char
 * @zab: argument passed
 * Return: 1 always
 */
int _char(va_list zw)
{
	char y;

	y = va_arg(zw, int);
	_putchar(y);
	return (1);
}
