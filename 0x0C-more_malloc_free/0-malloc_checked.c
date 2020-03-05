#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: number of bytes to reserve.
 * Return: a pointer to the allocated memory.
 * If malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);


	if (p == NULL)
		exit(98);

	return (p);

}
