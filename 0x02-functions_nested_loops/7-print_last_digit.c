#include "holberton.h"

/**
 * print_last_digit - Return and print the last digit of a number.
 * @n: number to check
 * Return: the last digit of n.
 */
int print_last_digit(int n)
{
	int lastDigit = 0;

	lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit = lastDigit * -1;

	_putchar (lastDigit + '0');

	return (lastDigit);
}
