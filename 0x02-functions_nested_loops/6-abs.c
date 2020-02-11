#include "holberton.h"

/**
 * _abs - Print the absolute value of an integer.
 *
 * Return: 1 if c is a letter, 0 in otherwise.
 */
int _abs(int n)
{
	if (n < 0)
		return (n*-1);

	return (n);
}
