#include <stdlib.h>
#include "dog.h"

/**
 * len - return the length of an stream.
 * @str: string.
 * Return: the length of an stream.
 */
int len(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}

/**
 * str_copy - copy str to dest.
 * @dest: destination.
 * @str: string.
 * Return: void.
 */
void str_copy(char *dest, char *str)
{
	int i = 0;

	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}

	dest[i] = '\0';
}

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

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	len_name = len(name);
	len_owner = len(owner);

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

	str_copy((*my_dog).name, name);

	return (my_dog);
}
