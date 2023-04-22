#include "main.h"

/**
 * _int - prints integer
 * @zab: argument to print
 * Return: number of characters printed
 */
int _int(va_list zab)
{
	int n = va_arg(zab, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		for (; exp > 0; exp /= 10)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
