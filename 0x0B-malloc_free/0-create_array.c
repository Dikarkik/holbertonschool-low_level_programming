#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: character to inicialize the array.
 * Return: a pointer to the array, or NULL if it fails, or size is 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));
	i = 0;

	while (i < size)
	{
		ar[i] = c;
		i++;
	}

	return (ar);
}
