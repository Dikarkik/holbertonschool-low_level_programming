#include "holberton.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Except the 2 and 4.
 *
 * Return: void.
 */
void print_most_numbers(void)
{
	int i;

	i = 0;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
