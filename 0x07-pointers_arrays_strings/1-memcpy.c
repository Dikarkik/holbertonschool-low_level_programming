#include "holberton.h"

/**
 * _memcpy - copies memory area.
 *@dest: string were we will copy.
 *@src: string that we will copy.
 *@n: number of bytes that we will copy.
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
