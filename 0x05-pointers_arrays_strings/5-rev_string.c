#include "holberton.h"

/**
 * rev_string - reverses a string.
 *@s: pointer of the string.
 * Return: void.
 */
void rev_string(char *s)
{
	int half = 0;
	int count = 0;
	int i;
	char temporal;

	while(*(s + count))
		count++;

	count--;

	half = count / 2;

	for (i = 0; i <= half; i++)
	{
		temporal =  *(s + i);
		*(s + i) = *(s + count);
		*(s + count) = temporal;

		count--;
	}
}
