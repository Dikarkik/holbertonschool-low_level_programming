#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 *@a: an int[][] casted into an int*
 *@size: leght of the first and second subcripts.
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int y = 0;
	int x = 0;
	int x_rev = size - 1;
	int sum_d1 = 0;
	int sum_d2 = 0;

	for (y = 0; y < size; y++)
	{
		x = (y * size) + y;
		sum_d1 += *(a + x);
		x = (y * size) + x_rev;
		sum_d2 += *(a + x);
		x_rev--;
	}

	printf("%d, %d\n", sum_d1, sum_d2);
}
