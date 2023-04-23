#include "main.h"
/**
 * _printf - function to print.
 * @format: parameter
 * Return: length of the string.
 */
int _printf(const char * const format, ...)
{
	conversion_array fa[] = {
		{"%s", _string},
		{"%c", _char},
		{"%%", _percent},
		{"%i", _int},
		{"%d", _decimal}
	};

	va_list zab;
	int i = 0, j, len = 0;

	va_start(zab, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 4;
		while (j >= 0)
		{
			if (fa[j].h[0] == format[i] && fa[j].h[1] == format[i + 1])
			{
				len += fa[j].func(zab);
				i = i + 2;
				break;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(zab);
	return (len);
}
