#include "holberton.h"
int check_posible_root(int n, int root);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *@n: radicand.
 * Return: the natural square root of a n.
 * If n does not have a natural square root,
 * the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);

	return (check_posible_root(n, 1));
}

/**
 * check_posible_root - check square root for n.
 *@n: radicand.
 *@root: posible root.
 * Return: root of n, -1 if n does not have a natural square root.
 */
int check_posible_root(int n, int root)
{
	int result = root * root;

	if (result == n)
		return (root);
	else if (result < n)
		return (check_posible_root(n, root + 1));
	else
		return (-1);
}
