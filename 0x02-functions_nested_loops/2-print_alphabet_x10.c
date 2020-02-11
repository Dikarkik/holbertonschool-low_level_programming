#include "holberton.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int r = 0;
	int i = 97;

	while (r <= 9)
	{
		i = 97;
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		r++;
	}
}
