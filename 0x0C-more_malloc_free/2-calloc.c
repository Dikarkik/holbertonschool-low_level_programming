#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of
 * nmemb elements of size bytes each.
 * The memory is set to zero.
 * @nmemb: number of elements.
 * @size: size of every element.
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, then returns NULL.
 * If malloc fails, then returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int total;
	int count = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	p = malloc(total);

	if (p == NULL)
		return (NULL);

	while (count < total)
	{
		p[count] = '\0';
		count++;
	}
	return (p);
}
