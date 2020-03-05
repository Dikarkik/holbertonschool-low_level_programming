#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * The array created should contain all the values from
 * min (included) to max (included), ordered from min to max.
 * @min: min.
 * @max: max.
 * Return: the pointer to the newly created array.
 * If min > max, return NULL.
 * If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *array;
	int total;
	int index;
	int number;

	if (min > max)
		return (NULL);

	total = max - min + 1;
	array = malloc(sizeof(int) * (total));

	if (array == NULL)
		return (NULL);

	number = min;
	for (index = 0; index < total; index++)
	{
		array[index] = number;
		number++;
	}

	return (array);
}
