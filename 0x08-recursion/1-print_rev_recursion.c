#include "holberton.h"
void _print_rev(char *s, int pos);

/**
 * _print_rev_recursion - prints a string in reverse.
 *@s: string.
* Return: void.
 */
void _print_rev_recursion(char *s)
{
	int pos = 0;

	_print_rev(s, pos);
}

/**
 * _print_rev - find last char and then start to print.
 *@s: string.
 *@pos: index to go through the string.
 * Return: void.
 */
void _print_rev(char *s, int pos)
{

	if (s[pos])
	{
		pos++;
		_print_rev(s, pos);
		_putchar(s[pos - 1]);
	}
	else
		return;
}
