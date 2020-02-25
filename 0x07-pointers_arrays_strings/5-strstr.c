#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the substring.
 *@haystack: string.
 *@needle: sub string.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int checked = 0;
	int size_n = 0;

	while (needle[size_n])
		size_n++;

	while (haystack[i])
	{
		if (needle[checked])
		{
			if (haystack[i] == needle[checked])
			{
				checked++;

				if (checked == size_n)
					return (&haystack[i - (size_n - 1)]);

			}
			else
				checked = 0;
		}
		i++;
	}

	return (&needle[size_n]);
}
