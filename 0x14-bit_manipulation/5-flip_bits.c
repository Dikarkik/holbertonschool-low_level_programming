#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: number a.
 * @m: number b.
 * Return: see the description.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int index = 0;
	int total = 0;

	while (index < sizeof(unsigned long int) * 8)
	{
		if ((n & 1) ^ (m & 1))
			total++;

		n = n >> 1;
		m = m >> 1;
		index++;
	}

	return (total);
}
