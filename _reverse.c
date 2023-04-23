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

	for (int first = 0; fa[first] != '\0'; first++)
		first++;
	for (int second = len - 1; second >= 0; second--)
		_putchar(fa[second]);
	return (first);
}
