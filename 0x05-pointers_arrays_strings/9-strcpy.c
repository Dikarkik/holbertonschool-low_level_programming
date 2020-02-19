#include "holberton.h"

/**
 *_strcpy - copies the string pointed to by src.
 *@dest: char array destination.
 *@src: string to copy in dest.
 *Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int size = 0;
	int i = 0;

	while (src[size])
		size++;

	size++;

	for (; i <= size; i++)
		dest[i] = src[i];

	return(dest);
}
