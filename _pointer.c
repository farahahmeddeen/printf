#include "main.h"

int _count(unsigned long int number);
/**
  * _pointer - Function that prints pointer
  * @zab: argument parameter
  *
  * Return: counts pointer
  */
int _pointer(va_list zab)
{
	void *ptr;
	char *str = "(nil)";
	int count;
	int i;

	ptr = va_arg(zab, void*);
	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}

	_putchar('0');
	_putchar('x');
	count = _count((unsigned long int)ptr);
	return (count + 2);
}

/**
  * _count - count pointer length
  * @num: unsigned long int parameter
  *
  * Return: length
  */
int _count(unsigned long int num)
{
	long int len = 0, index;
	char hex_digits[] = "0123456789abcdef";
	char digit;
	char str[15];

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
