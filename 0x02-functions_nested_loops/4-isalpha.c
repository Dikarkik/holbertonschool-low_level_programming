#include "holberton.h"
#include "ctype.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: 1 if c is a letter, 0 in otherwise.
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
