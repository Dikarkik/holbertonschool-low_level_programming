#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 *@s: string.
 *@accept: valid characters.
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	unsigned int count_s = 0;
	int count_a = 0;

	for (count_s = 0; s[count_s]; count_s++)
	{
		if (n == count_s)
		{
			for (count_a = 0; accept[count_a]; count_a++)
			{
				if (s[count_s] == accept[count_a])
					n++;
			}
		}
	}

	return (n);
}
