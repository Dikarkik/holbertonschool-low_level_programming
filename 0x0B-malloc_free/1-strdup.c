#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string.
 * Return: On success, returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *copy;
	int size_str = 0;
	int i;

	if (str == NULL)
		return (NULL);
	else if (str[0] == '\0')

	while (str[size_str])
		size_str++;

	copy = malloc(size_str * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < size_str; i++)
		copy[i] = str[i];

	return (copy);
}
