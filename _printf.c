#include "main.h"
/**
 * _printf - prints formatted output to stdout
 * @format: format string containing conversion specifiers
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	conversion_array fa[] = {
		{"%c", _char},
		{"%s", _string},
		{"%%", _percent},
		{"%d", _int}
	};

	va_list zab;
	int f, z, l = 0;

	va_start(zab, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	f = 0;
	while (format[f] != '\0')
	{
		if (format[f] == '%')
		{
			for (z = 0; z < 4; z++)
			{
				if (fa[z].h[0] == format[f] && fa[z].h[1] == format[f + 1])
				{
					l += fa[z].func(zab);
					f = f + 2;
					break;
				}
			}
		}
		else
		{
			_putchar(format[f]);
			l++;
			f++;
		}
	}
	va_end(zab);
	return (l);
}
