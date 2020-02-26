#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 *@s: string.
 *Return: void.
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;

	if (s[1])
		_print_rev_recursion(s + 1);

	_putchar(*s);
}
