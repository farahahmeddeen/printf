#include "main.h"

/**
 * _int - prints integer
 * @zab: argument to print
 * Return: number of characters printed
 */
int _int(va_list zab)
{
	int x = va_arg(zab, int);
	int fa, lastdigit = x % 10, num, k = 1;
	int len = 1;

	x = x / 10;
	fa = x;

	if (lastdigit < 0)
	{
		_putchar('-');
		fa = -fa;
		x = -x;
		lastdigit = -lastdigit;
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
	_putchar(lastdigit + '0');

	return (len);
}
