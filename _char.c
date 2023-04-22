#include "main.h"

void _char(va_list zab)
{
	char y;

	y = va_arg(zab, int);
	_putchar(y);
}
