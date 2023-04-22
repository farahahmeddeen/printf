#include "main.h"
/**
 * _char - function to print a char
 * @args: argument passed
 * Return: 1 always
 */
int _char(va_list args)
{
	char y;

	y = va_arg(args, int);
	_putchar(y);
	return (1);
}
