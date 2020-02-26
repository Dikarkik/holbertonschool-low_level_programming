#include "holberton.h"
void _puts(char *s, int pos);

/**
 * _puts_recursion - prints a string, followed by a new line.
 *@s: string.
 * Return: void.
 */
void _puts_recursion(char *s)
{
	int pos = 0;

	_puts(s, pos);
}

/**
 * _puts - recursive print of s.
 *@s: string.
 *@pos: count to go through of s.
 * Return:
 */
void _puts(char *s, int pos)
{
	_putchar(s[pos]);
	pos++;

	if (s[pos])
		_puts(s, pos);
	else
		_putchar('\n');
}
