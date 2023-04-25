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
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(zab, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = _count(a);
	return (b + 2);
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
