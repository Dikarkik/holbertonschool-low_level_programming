#include "holberton.h"

/**
 *reverse_array - reverses the content of an array of integers.
 *@a: the array.
 *@n: is the number of elements of the array.
 *Return: void.
 */
void reverse_array(int *a, int n)
{
	int middle = n / 2;
	int count = 0;
	int other = n - 1;
	int backup;

	for (count = 0; count < middle; count++)
	{
		backup = a[count];
		a[count] = a[other];
		a[other] = backup;
		other--;
	}
}
