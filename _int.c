#include "main.h"

/**
  * _int - print integers
  * @zab: variable argument list
  * Return: number of digits printed
  */
int _int(va_list zab)
{
	int num = va_arg(zab, int);
	int digit, exp = 1, i = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		i++;
	}

	while (num / exp > 9)
		exp *= 10;

	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		num %= exp;
		exp /= 10;
		i++;
	}

	return (i);
}

