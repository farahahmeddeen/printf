#include "main.h"
/**
 * _rot13 - function to print rot13
 *
 * @zab: argument
 *
 * Return: lenght of the string
 */
int _rot13(va_list zab)
{
	char *str;
	int i;
	int c = 0;
	char ori[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char rot[] = "nopqrstuvwxyzabcdefghijklm";

	str = va_arg(zab, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = (str[i] - 65 > 25) ?
				ori[str[i] - 97] : rot[str[i] - 65];
			_putchar(str[i]);
			c++
		}
		else
		{
			_putchar(str[i]);
			c++;
		}
	}
	return (c);
}
