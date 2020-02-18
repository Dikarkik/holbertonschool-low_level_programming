#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *@str: pointer of the string.
 * Return: void.
 */
void _puts(char *str)
{
	int count = 0;

	while(*(str + count))
	{
	       	_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
