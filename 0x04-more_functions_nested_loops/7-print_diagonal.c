#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *@n: lenght of the line.
 * Return: void.
 */
void print_diagonal(int n)
{
	int spaces;
	int lines;

	spaces = 0;
	lines = 0;

	if (n <= 0)
		_putchar('\n');

	while (lines < n)
	{
		spaces = lines;

		while (spaces >= 1)
		{
			_putchar(' ');
			spaces--;
		}

		_putchar('\\');
		_putchar('\n');
		lines++;
	}
}
