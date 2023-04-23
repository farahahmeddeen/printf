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
	int i, c = 0;
	char storeh[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char storel[] = "nopqrstuvwxyzabcdefghijklm";

	str = va_arg(zab, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				if (str[i] - 'A' + 26 > 25)
				{
					str[i] = storel[str[i] - 'a'];
					_putchar(str[i]);
					c++;
				}
				else
				{
					str[i] = storeh[str[i] - 'A'];
					_putchar(str[i]);
					c++;
				}
			}
		}
		else
		{
			_putchar(str[i]);
			c++;
		}
	}
	return (c);
}
