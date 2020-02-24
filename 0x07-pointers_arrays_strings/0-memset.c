#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 *@s: pointer were we will start.
 *@b: char constant that we will use to fill.
 *@n: number of bytes that we will fill.
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}
