#include "main.h"

/**
  * _string - function that print string
  * @zab: argument parameter
  * Return: length of string
  */
int _string(va_list zab)
{
	char *str;
	int i, len;

	str = va_arg(zab, char *);
	if (str == NULL)
	{
		str = "(null)";
		for (len = 0; str[len] != '\0'; len++)
			;
		i = 0;
		while (i < len)
		{
			_putchar(str[i]);
			i++;
		}
		return (len);
	}
	else
	{
		for (len = 0; str[len] != '\0'; len++)
			;
		i = 0;
		while (i < len)
		{
			_putchar(str[i]);
			i++;
		}
		return (len);
	}
}
