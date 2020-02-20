#include "holberton.h"

/**
 *_strncpy - copies a string.
 *@dest: where we need to copy the src.
 *@src: the string.
 *@n: at most n bytes are copied.
 *Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	for (count = 0; count < n && src[count] != '\0'; count++)
		dest[count] = src[count];

	for ( ; count < n; count++)
	{
		dest[count] = '\0';
	}

	return (dest);
}
