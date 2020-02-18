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
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < (n - 1))
			printf(", ");
	}

	printf("\n");
}
