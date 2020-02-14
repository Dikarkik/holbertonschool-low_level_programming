#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *@size: lenght on the triangule.
 * Return: void.
 */
void print_triangle(int size)
{
	int y;
	int x;
	int spaces;

	y = 1;
	x = 1;
	spaces = 0;

	if (size <= 0)
		_putchar('\n');

	for (y = 1; y <= size; y++)
	{
		spaces = size - y;

		for (x = 1; x <= size; x++)
		{
			if (x <= spaces)
				_putchar(' ');
			else
				_putchar('#');
		}

		_putchar('\n');
	}
}
