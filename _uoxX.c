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
	int count = 0;
	unsigned int num = va_arg(zab, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	str = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		str[i] = temp % 8;
		temp /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(str[i] + '0');
	}
	free(str);
	return (count);
}

/**
  * _hexad - hexadecimal format using lowercase letters for the digits
  * @zab: argument parameter
  *
  * Return: length
  */
int _hexad(va_list zab)
{
	int *str;
	int size = 0, index = 0;
	char hex_digits[] = "0123456789abcdef";
	char digit;
	unsigned int num = va_arg(zab, unsigned int);
	unsigned int new = num;

	while (num / 16 != 0)
	{
		num /= 16;
		size++;
	}
	size++;
	str = malloc(size * sizeof(int));

	while (index < size)
	{
		digit = hex_digits[new % 16];
		str[index] = digit;
		new /= 16;
		index++;
	}
	index = index - 1;
	while (index >= 0)
	{
		_putchar(str[index]);
		index--;
	}
	free(str);

	return (size);
}
/**
  * _hexaD - hexadecimal format using lowercase letters for the digits
  * @zab: argument parameter
  *
  * Return: length
  */
int _hexaD(va_list zab)
{
	int *str;
	int size = 0, index = 0;
	char hex_digits[] = "0123456789ABCDEF";
	char digit;
	unsigned int num = va_arg(zab, unsigned int);
	unsigned int new = num;

	while (num / 16 != 0)
	{
		num /= 16;
		size++;
	}
	size++;
	str = malloc(size * sizeof(int));

	while (index < size)
	{
		digit = hex_digits[new % 16];
		str[index] = digit;
		new /= 16;
		index++;
	}
	index = index - 1;
	while (index >= 0)
	{
		_putchar(str[index]);
		index--;
	}
	free(str);

	return (size);
}
