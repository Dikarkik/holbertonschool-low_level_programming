#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a
 * sorted array of integers using the Jump search algorithm.
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 * Return: the first index where value is located.
 * If value is not present in array or if array is NULL, must return -1.
 *
 * You can assume that array will be sorted in ascending order.
 * You have to use the square root of the size of the array as the jump step.
 * You can use the sqrt() function included in <math.h>
 * (don’t forget to compile with -lm).
 * gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-jump.c -lm -o 100-jump
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_size;
	size_t jumps = 0;
	size_t index = 0;
	size_t final;

	if (array == NULL || size < 1)
		return (-1);

	jump_size = sqrt(size);

	while (array[jumps * jump_size] < value && (jumps * jump_size) < size)
	{
		printf("Value checked array[%lu] = [%d]\n",
			(jumps * jump_size), array[jumps * jump_size]);
		jumps++;
		if (array[jumps * jump_size] == value)
			break;
	}

	if (jumps == 0)
		jumps = 1;

	printf("Value found between indexes [%lu] and [%lu]\n",
			((jumps - 1) * jump_size), (jumps * jump_size));

	index = (jumps - 1) * jump_size;
	final = jumps * jump_size;
	if (final > size)
		final = size - 1;

	for (; index <= final; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}

	return (-1);
}
