#include "holberton.h"

/**
 *_strncat - concatenates two strings (use at most n bytes from src).
 *@dest: string.
 *@src: string to concatenate in dest.
 *@n: use max n bytes of src.
 *Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int count2 = 0;

	while (dest[count])
		count++;

	while (count2 < n && src[count2])
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}

	return(dest);
}
