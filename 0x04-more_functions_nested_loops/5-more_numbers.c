#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: void.
 */
void more_numbers(void)
{
	int x;
	int i;

	x = 0;
	i = 0;

	while (x <= 9)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');

			_putchar((i % 10) + '0');
		}

		_putchar('\n');
		x++;
	}
}
