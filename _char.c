#include "main.h"
/**
 * _char - function to print a char
 * @zab: argument passed
 * Return: 1 always
 */
int _char(va_list zab)
{
	char f;

	f = va_arg(zab, int);
	_putchar(f);
	return (1);
}
