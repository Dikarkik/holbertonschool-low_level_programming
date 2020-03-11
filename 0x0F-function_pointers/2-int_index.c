#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of integers.
 * @size: is the number of elements in array.
 * @cmp: is a pointer to the function to be used to compare values.
 * Return: the index of the first element for which the
 * cmp function does not return 0.
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int value;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		value = cmp(array[i]);
		if (value != 0)
			return (i);
	}

	return (-1);
}
