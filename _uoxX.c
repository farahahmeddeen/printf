#include "main.h"

/**
  * _unsigned - print unsigned int
  * @zab: argument parameter
  *
  * Return: length
  */
int _unsigned(va_list zab)
{
	unsigned int x = va_arg(zab, int);
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
/**
  * _octal - to print an unsigned integer in octal
  * @zab: argument parameter
  *
  * Return: Length
  */
int _octal(va_list zab)
{
	int i;
	int *str;
	int size = 0;
	unsigned int num = va_arg(zab, unsigned int);
	unsigned int temp = num;

	while (num != 0)
	{
		num /= 8;
		size++;
	}

	str = malloc(size * sizeof(int));

	for (i = 0; i < size; i++)
	{
		str[i] = temp % 8;
		temp /= 8;
	}

	i = size - 1;
	while (i >= 0)
	{
		_putchar(str[i] + '0');
		i--;
	}
	free(str);
	return (size);
}

/**
  * _hexad - hexadecimal format using lowercase letters for the digits
  * @zab: argument parameter
  *
  * Return: length
  */
int _hexad(va_list zab)
{
	int len = 0, index;
	unsigned int num;
	char hex_digits[] = "0123456789abcdef";
	char digit;
	char str[15];

	num = va_arg(zab, unsigned int);
	while (num != 0)
	{
		digit = hex_digits[num % 16];
		str[len] = digit;
		num /= 16;
		len++;
	}
	index = len - 1;
	while (index >= 0)
	{
		_putchar(str[index]);
		index--;
	}
	return (len);
}

/**
  * _hexaD - hexadecimal format using lowercase letters for the digits
  * @zab: argument parameter
  *
  * Return: length
  */
int _hexaD(va_list zab)
{
	int len = 0, index;
	unsigned int num;
	char hex_digits[] = "0123456789ABCDEF";
	char digit;
	char str[15];

	num = va_arg(zab, unsigned int);
	while (num != 0)
	{
		digit = hex_digits[num % 16];
		str[len] = digit;
		num /= 16;
		len++;
	}
	index = len - 1;
	while (index >= 0)
	{
		_putchar(str[index]);
		index--;
	}
	return (len);
}
