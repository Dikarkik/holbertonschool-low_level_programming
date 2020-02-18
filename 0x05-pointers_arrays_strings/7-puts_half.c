#include "holberton.h"

/**
 * puts_half - print the second half of the string.
 *@str: pointer of the string.
 * Return: void.
 */
void puts_half(char *str)
{
	int size = 0;
	int half = 0;

	while (*(str + size))
		size++;

	if (size % 2 != 0)
		half = (size - 1) / 2;
	else
		half = size / 2;

	while (half < size)
	{
		_putchar(str[half]);
		half++;
	}

	_putchar('\n');
}
