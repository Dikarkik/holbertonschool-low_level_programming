#include "holberton.h"
#include <stdlib.h>

/**
 * len - return the length of str.
 * @str: string.
 * Return: the length of str.
 */
int len(char *str)
{
	int i;

	if (str == NULL)
		return (0);

	i = 0;
	while (str[i])
		i++;

	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of characters to copy of s2.
 * Return: a pointer to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated.
 * If the function fails, it should return NULL.
 * If n is greater or equal to the length of s2 then
 * use the entire string s2.
 * If NULL is passed, treat it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1;
	unsigned int enable_s2;
	char *str;
	unsigned int count;
	unsigned int position;

	len_s1 = len(s1);
	enable_s2 = len(s2);

	if (enable_s2 > n)
		enable_s2 = n;

	str = malloc(sizeof(char) * (len_s1 + enable_s2 + 1));

	if (str == NULL)
		return (NULL);

	position = 0;
	count = 0;
	while (s1[count])
	{
		str[position] = s1[count];
		position++;
		count++;
	}

	count = 0;
	while (count < enable_s2)
	{
		str[position] = s2[count];
		position++;
		count++;
	}

	str[position] = '\0';
	return (str);
}
