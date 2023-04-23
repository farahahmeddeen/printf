#include "main.h"
/**
 * _reverse - function to print string in reverse
 *
 * @zab: argument
 *
 * Return: the lenght
 */
int _reverse(va_list zab)
{
	char *fa;

	fa = va_arg(zab, char *);

	if (fa == NULL)
		fa = "(null)";
	int first = 0;

	for (; fa[first] != '\0'; first++)
		;
	for (int second = first - 1; second >= 0; second--)
		_putchar(fa[second]);
	return (first);
}
