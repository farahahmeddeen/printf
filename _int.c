#include "main.h"

/**
  * _int - print intergers
  * @zab: parameter
  * Return: length
  */
int _int(va_list zab)
{
	int x = va_arg(zab, int);
	int num1, dig, y = 1, len = 0;

	if (x < 0)
	{
		_putchar('-');
		x *= -1;
		len++;
	}

	for (num1 = x; num1 > 0; num1 /= 10)
	{
		y = y * 10;
	}
	y = y / 10;

	for (; y >= 1; y /= 10)
	{
		dig = x / y;
		_putchar(dig + '0');
		x = x % y;
		len++;
	}
	len++;

	return (len);
}
