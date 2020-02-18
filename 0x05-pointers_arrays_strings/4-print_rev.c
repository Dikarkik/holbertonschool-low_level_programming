#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *@s: the pointer of the string.
 * Return: void.
 */
void print_rev(char *s)
{
	int count = 0;

	while (*(s + count))
		count++;

	while (count >= 0)
	{
		_putchar(*(s + count));
		count--;
	}

	_putchar('\n');
}
