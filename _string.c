#include "main.h"

int _strlen(char *str);
int _strleng(const char *str);
/**
  * _string - function that print string
  * @zab: argument parameter
  *
  * Return: length of string
  */
int _string(va_list zab)
{
	int f;
	char *ptr;
	int z;

	ptr = va_arg(zab, char *);

	if (ptr == NULL)
		ptr = "(null)";

	z = _strlen(ptr);
	f = 0;
	while (f < z)
	{
		_putchar(ptr[f]);
		f++;
	}

	return (z);
}

/**
  * _strlen - string length
  * @str: parameter
  * Return: string length
  */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
  * _strleng - Entry point
  * @str: string parameter
  * Return: length
  */
int _strleng(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}
