#include "holberton.h"

/**
 *_strcmp - compares two strings.
 *@s1: string 1.
 *@s2: string 2.
 *Return: 0 if s1 == s2. 1 if s1 > s2. -1 if s1 < s2.
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
		return (0);
	else if (s1 > s2)
		return (1);
	else
		return (-1);
}
