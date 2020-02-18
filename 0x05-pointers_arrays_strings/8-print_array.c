#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 *@a: pointer of an array of integers.
 *@n: to print n times the values of a.
 * Return: void.
 */
void print_array(int *a, int n)
{
	int size = 0;
	int i = 0;

	while (a[size])
		size++;

	if (n <= size)
	{
		for (i = 0; i < n; i++)
		{
			if (i < (n - 1))
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
		}

	}
}
