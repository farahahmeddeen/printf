#include "main.h"

int _count(unsigned long int number);
/**
  * _pointer - Function that prints pointer
  * @zab: argument parameter
  *
  * Return: counts pointer
  */
int _pointer(va_list zab)
{
	void *ptr;
	long int len;
	long int count;

	ptr = va_arg(zab, void *);
	if (ptr == NULL)
	{
		for (len = 0; len != '\0'; len++)
			;
		_printf("(nil)");
		return (len);
	}
	_printf("0x");
	count = _count((unsigned long int)ptr);

	return (count + 2);
}

/**
  * _count - count pointer length
  * @num: unsigned long int parameter
  *
  * Return: length
  */
int _count(unsigned long int num)
{
	long int i;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
