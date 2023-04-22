#include "main.h"

/**
  * _decimal - print decimal
  * @zab: parameter
  * Return: length
  */
int _decimal(va_list zab)
{
	int n = va_arg(zab, int);
	int last = n % 10;
	int i = 1;
	int exp;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;
		i += 2;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
		i++;
	}
	for (exp = 1; exp <= n / 10; exp *= 10)
	{
		for (; exp >= 1; exp /= 10)
		{
			_putchar((n / exp) % 10 + '0');
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
