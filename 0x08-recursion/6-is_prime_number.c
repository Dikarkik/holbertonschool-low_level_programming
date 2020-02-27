#include "holberton.h"
int check_each_div(int n, int div);

/**
 * is_prime_number - check if n is a prime numbers.
 *@n: number.
 * Return: 1 if n is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);

	else if (check_each_div(n, 1) == 2)
		return (1);
	else
		return (0);
}

/**
 * check_each_div - check each posible divisor of a number.
 *@n: number.
 *@div: posible divisor, should start in 1.
 * Return: count of times when n % div is == 0.
 */
int check_each_div(int n, int div)
{
	if (div == n)
		return (1);

	else if (n % div == 0)
		return (1 + check_each_div(n, (div + 1)));
	else
		return (0 + check_each_div(n, (div + 1)));
}
