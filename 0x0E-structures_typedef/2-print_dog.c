#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog.
 * @d: struct dog pointer.
 * Return: void.
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
