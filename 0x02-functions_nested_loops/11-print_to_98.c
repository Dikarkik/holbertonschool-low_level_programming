#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 *@n: number to start.
 * Return: void.
 */
void print_to_98(int n)
{
	int change = 0;

	if (n < 98)
		change = 1;
	else
		change = -1;

	while (n != 98)
	{
		printf ("%d, ", n);
		n = n + change;
	}

	printf ("%d\n", 98);
}
