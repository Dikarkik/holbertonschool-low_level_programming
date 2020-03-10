#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name.
 * @age: age.
 * @owner: owner.
 * Return: pointer to a dog type in heap.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int len_name;
	int len_owner;
	int index;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	len_name = 0;
	while (name[len_name])
		len_name++;

	len_owner = 0;
	while (owner[len_owner])
		len_owner++;

	my_dog->name = malloc(sizeof(char) * len_name + 1);
	if (!my_dog->name)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(sizeof(char) * len_owner + 1);
	if (!my_dog->owner)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->age = age;

	index = 0;
	while (name[index])
	{
		my_dog->name[index] = name[index];
		index++;
	}
	my_dog->name[index] = '\0';

	index = 0;
	while (owner[index])
	{
		my_dog->owner[index] = owner[index];
		index++;
	}
	my_dog->owner[index] = '\0';

	return (my_dog);
}
