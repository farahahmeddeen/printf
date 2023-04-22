#include "main.h"

int _char(va_list zw)
{
	char y;

	y = va_arg(zw, int);
	_putchar(y);
	return (1);
}
