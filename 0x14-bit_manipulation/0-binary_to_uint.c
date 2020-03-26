#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 *@x: base.
 *@y: exponente.
 * Return: value of x raised to the power of y.
 * if y is lower than 0 return -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));

}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if b is NULL.
 * return 0 if one or more chars in the string b that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	int total = 0;
	int index_str = 0;
	int count = 0;
	int value_bin_pos = 0;

	if (!b || !b[0])
		return (0);

	while (b[index_str])
	{
		if (b[index_str] != '0' && b[index_str] != '1')
			return (0);

		index_str++;
	}

	index_str--;

	while (index_str >= 0)
	{
		value_bin_pos = _pow_recursion(2, count);
		total = total + (value_bin_pos * (b[index_str] - '0'));
		index_str--;
		count++;
	}

	return (total);
}
