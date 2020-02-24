#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 *@s: string.
 *@c: char that we need to find.
 * Return: a pointer to the first occurrence of the character c
 * in the string s or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int count = 0;

	while (s[count])
	{
		if (s[count] == c)
			return (&s[count]);

		count++;
	}

	return (NULL);
}
