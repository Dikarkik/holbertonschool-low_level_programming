#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of
 * @nmemb: number of elements.
 * @size: size of every element.
 * size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero.
 * Return: if nmemb or size is 0, then returns NULL.
 * If malloc fails, then returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	return (p);
}
