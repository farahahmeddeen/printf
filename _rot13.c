#include "main.h"
void _lower(char str);
void _capital(char str);
/**
 * _rot13 - function to print rot13
 *
 * @zab: argument
 *
 * Return: lenght of the string
 */
int _rot13(va_list zab)
{
	char *str;
	int i, c = 0;

	str = va_arg(zab, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 65 && str[i] <= 90))
		{
			_capital(str[i]);
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			_lower(str[i]);
		}
		else
		{
			_putchar(str[i]);
			c++;
		}
	}
	return (c);
}
/**
 * _capital - function to print upper
 * @str: string
 * Return: void
 */
void _capital(char str)
{
	str[i] = str[i] + 13;
	if (str[i] > 90)
	{
		str[i] = (str[i] - 90) + 65;
		_putchar(str[i]);
		c++;
	}
	else
	{
		_putchar(str[i]);
		c++;
	}
}
/**
 * _lower - function to print lower
 * @str: string
 * Return: void
 */
void _lower(char str)
{
	str[i] = str[i] + 13;
	if (str[i] > 97)
	{
		str[i] = (str[i] - 122) + 97;
		_putchar(str[i]);

		c++;
	}
	else
	{
		_putchar(str[i]);
		c++;
	}
}

