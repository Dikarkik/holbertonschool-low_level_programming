#include "holberton.h"

/**
 *_strcat - concatenates two strings.
 *@dest: string.
 *@src: to concatenate in dest.
 *Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int count2 = 0;

	while (dest[count])
		count++;

	while (src[count2])
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}

	dest[count] = '\0';

	return (dest);
}
