#include "main.h"
/**
 * _binary - function to print binary
 *
 * @zab: argument
 *
 * Return: the number to be printed
 */
int _binary(va_list zab)
{
	unsigned int x = vs_srg(zab, unsigned int);
	int bits = sizeof(x) * 8;
	int p = 0;
	int l = 1;

	while (bits-- > 0)
	{
		int b = (x >> bits) & 1;
		if (b || !l)
		{
			l = 0;
			_putchar(b ? '1' : '0');
			p++;
		}
	}
	if (p == 0)
	{
		_putchar('0');
		p++;
	}
	return (p);
}
