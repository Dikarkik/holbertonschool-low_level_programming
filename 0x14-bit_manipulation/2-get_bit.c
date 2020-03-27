#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number.
 * @index: index starting from 0 of the bit you want to get.
 * Return: the value of the bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;

	return (n & 1);
}
