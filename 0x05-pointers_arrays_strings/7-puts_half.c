#include "holberton.h"

/**
 * puts_half - print the second half of the string.
 *@str: pointer of the string.
 * Return: void.
 */
void puts_half(char *str)
{
	int size = 0;
	int since = 0;

	while (*(str + size))
		size++;

	if(size % 2 == 0)
		since = size / 2;
	else
		since = (size / 2) + 1;

	while (since < size)
	{
		_putchar(str[since]);
		since++;
	}

	_putchar('\n');
}
