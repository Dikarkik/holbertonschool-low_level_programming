#include "holberton.h"

/**
 * _islower - checks for lowercase characters.
 * @c: character to check
 * Return: 1 if c is lowercase, 0 in otherwise.
 */
int _islower(int c)
{
	int i = 97;

	while (i <= 122)
	{
		if (c == i)
			return (1);
		i++;
	}
	return (0);
}
