#include "holberton.h"

/**
 *_strcmp - compares two strings.
 *@s1: string 1.
 *@s2: string 2.
 *Return: 0 if s1 == s2. 1 if s1 > s2. -1 if s1 < s2.
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;
	int dif = 0;

	while (s1[count])
	{
		dif = s1[count] - s2[count];

		if (dif != 0)
			return (dif);

		count++;
	}

	return (dif);
}
