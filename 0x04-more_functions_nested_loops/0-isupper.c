#include "holberton.h"

/**
 * _isupper - checks for uppercase character.
 *@c: character to check.
 * Return: 1 if c is uppercase, 0 otherise.
 */
int _isupper(int c)
{
	int i;

	i = 0;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
