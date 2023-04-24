#include "main.h"

/**
 * _reverse - function to print string in reverse
 * @zab: argument
 *
 * Return: the lenght
 */
int _reverse(va_list zab)
{
	char *fa;
	int len;
	int index;

	fa = va_arg(zab, char *);

	if (fa == NULL)
		fa = "(null)";

	for (len = 0; fa[len] != '\0'; len++)
		;

	index = len - 1;
	while (index >= 0)
	{
		_putchar(fa[index]);
		index--;
	}
	return (len);
}
