#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 *@s: array of characters.
 * Return: lenght of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count))
	{
		count++;
	}

	return (count);
}
