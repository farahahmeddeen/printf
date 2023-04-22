#include "main.h"

int _char(va_list zab)
{
	char y;

	y = va_arg(zab, int);
	_putchar(y);
	return (1);
}
