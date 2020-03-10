#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - this function frees dogs.
 * @d: type dog_t.
 * Return: the length of an stream.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
	}
	else
		free(d);
}
