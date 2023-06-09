#include "main.h"

int _hexadecimal(unsigned int num);
/**
  * _customString - print string
  * @zab: argument parameter
  *
  * Return: length
  */
int _customString(va_list zab)
{
	char *str;
	int fa, count = 0;
	int num;

	str = va_arg(zab, char *);
	if (str == NULL)
		str = "(null)";

	fa = 0;
	while (str[fa] != '\0')
	{
		if (str[fa] <= 31 || str[fa] > 126)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			num = str[fa];
			if (num < 16)
			{
				_putchar('0');
				count++;
			}
			count += _hexadecimal(num);
		}
		else
		{
			_putchar(str[fa]);
			count++;
		}
		fa++;
	}
	return (count);
}

/**
  * _hexadecimal - hexadecimal format using lowercase letters for the digits
  * @num: argument parameter
  *
  * Return: length
  */
int _hexadecimal(unsigned int num)
{
	int *str;
	int size = 0, index = 0;
	char hex_digits[] = "0123456789ABCDEF";
	char digit;
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
