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
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	return (p);
}
