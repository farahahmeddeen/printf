#include "main.h"

/**
 * _decimal - prints integer
 * @zab: argument to print
 * Return: number of characters printed
 */
int _decimal(va_list zab)
{
	int x = va_arg(zab, int);
	int fa, lastdigits = x % 10, num, k = 1;
	int len = 1;

	x = x / 10;
	fa = x;

	if (lastdigits < 0)
	{
		_putchar('-');
		fa = -fa;
		x = -x;
		lastdigits = -lastdigits;
		len++;
	}
	if (fa > 0)
	{
		for (k = 1; fa / k  >= 10; k *= 10)
			;

		fa = x;

		for (; k > 0; k /= 10)
		{
			num = fa / k;
			_putchar(num + '0');
			fa = fa - (num * k);
			len++;
		}
	}
	_putchar(lastdigits + '0');

	return (len);
}
