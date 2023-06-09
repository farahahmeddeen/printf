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
	int count = 0;
	int idx = 0;
	unsigned int num = va_arg(zab, unsigned int);
	unsigned int mask;
	int l = 0;
	int bit = 1;
	int temp;

	while (idx < 32)
	{
		mask = ((bit << (31 - idx)) & num);
		if (mask >> (31 - idx))
			l = 1;
		if (l)
		{
			temp = mask >> (31 - idx);
			_putchar(temp + '0');
			count++;
		}
		idx++;
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
