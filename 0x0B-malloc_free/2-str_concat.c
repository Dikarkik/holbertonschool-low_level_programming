#include <stdlib.h>
#include "holberton.h"

/**
 * len_str - length of a string.
 * @s: string.
 * Return: the length of the string.
 */
int len_str(char *s)
{
	int i;

	if (s == NULL)
		return (0);

	i = 0;
	while (s[i])
		i++;

	return (i);
}

/**
 * str_concat - concatenates two strings.
 * @s1: string. If NULL is passed, treat it as an empty string.
 * @s2: string. If NULL is passed, treat it as an empty string.
 * Return: new pointer which contains the contents of s1,
 * followed by the contents of s2, and null terminated.
 * Return NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len_s1;
	int len_s2;
	int i;
	int position;

	len_s1 = len_str(s1);
	len_s2 = len_str(s2);

	str = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	i = 0;
	position = 0;
	while (i < len_s1)
	{
		str[position] = s1[i];
		i++;
		position++;
	}

	i = 0;
	while (i < len_s2)
	{
		str[position] = s2[i];
		i++;
		position++;
	}

	str[position] = '\0';
	return (str);
}
