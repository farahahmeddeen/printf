#include "main.h"

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
	{
		ptr = "NULL";
		z = strlen(ptr)
		f = 0;
		while (f < z)
		{
			_putchar(ptr[f]);
			f++;
		}
		return (z);
	}
	else
	{
		z = strlen(ptr);
		f = 0;
		while (f < z)
		{
			_putchar(ptr[f]);
			f++;
		}
		return (z);
	}

	return (0);
}
