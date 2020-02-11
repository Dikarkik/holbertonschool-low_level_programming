#include "holberton.h"

/**
 * _abs - Return the absolute value of an integer.
 *@n: number to check
 * Return: the abosulute value of n.
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);

	return (n);
}
