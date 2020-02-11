#include "holberton.h"
#include "ctype.h"

/**
 * int _islower - checks for lowecase characters.
 *
 * Return: 1 if c is lowercase, 0 in otherwise.
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
