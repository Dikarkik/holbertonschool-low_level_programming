#include "holberton.h"

/**
 * _isalpha - checks if is a letter
 * @c: character to check
 * Return: 1 if c is a letter, 0 in otherwise.
 */
int _isalpha(int c)
{
	int i = 97;

	while (i <= 122)
	{
		if (c == i)
			return (1);
		i++;
	}

	i = 65;

	while (i <= 90)
	{
		if (c == i)
			return (1);
		i++;
	}

	return (0);
}
