#include "main.h"
/**
 * _printf - function to print
 * @format: what to print
 * Return: the string to be printed
 */
int _printf(const char *format, ...)
{
	conversion_array fa[] = {
		{"%c", _char},
		{"%s", _string},
		{"%%", _percent}
	};

	va_list zab;
	int f, z, l;

	va_start(zab, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	f = 0;
	while (format[f] != '\0')
	{
		for (z = 0; z < 2; z++)
		{
			if (fa[z].h[0] == format[f] && fa[z].h[1] == format[f + 1])
			{
				l += fa[z].func(zab);
				f = f + 2;
				break;
			}
		}
		_putchar(format[f]);
		l++;
		f++;
	}
	va_end(zab);
	return (l);
}
