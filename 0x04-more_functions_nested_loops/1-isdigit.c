#include "holberton.h"

/**
 * _isdigit - checks for a digit.
 *@c: integer to compare with ASCII.
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	int i;

	i = 0;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
