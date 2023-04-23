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
	int i;
	int j;
	char *str;
	char ori[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		     'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		     'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		     'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		     'Z'};
	char rotate[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		     'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		     'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		     'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		     'M'};

	str = va_arg(zab, char*);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 53 ; j++)
		{
			if (str[i] == ori[j])
			{
				_putchar(rotate[j]);
				c++;
			}
			else
			{
				_putchar(str[i]);
				c++;
			}
		}
	}
	return (c);
}
