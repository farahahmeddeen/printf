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
	char *s;
	int i, len;

	s = va_arg(zab, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
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
