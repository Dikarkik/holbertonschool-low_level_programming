#include "holberton.h"
int check_each_div(int n, int div);

/**
 * is_prime_number - check if n is a prime numbers.
 *@n: number.
 * Return: 1 if n is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check_each_div(n, 2));
}

/**
 * check_each_div - check for prime number.
 *@n: number to check.
 *@div: posible divisor, i use "modulo" to check that.
 * Return: 1 if n is prime, 0 otherwise.
 */
int check_each_div(int n, int div)
{
	if (div == n)
		return (1);

	if (n % div == 0)
	{
		check_each_div(n, (div + 1));
	}
	else
		return (0);

	return (3);
}
