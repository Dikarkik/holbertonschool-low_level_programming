#include <stdlib.h>
#include "holberton.h"

/**
 * count_chars_of_argv - counts the chars of the arguments.
 * @ac: arguments count.
 * @av: arguments vector.
 * Return: number of chars.
 */
int count_chars_of_argv(int ac, char **av)
{
	int y;
	int x;
	int all_chars;

	all_chars = 0;

	for (y = 0; y < ac; y++)
	{
		x = 0;

		while (av[y][x])
		{
			all_chars++;
			x++;
		}
	}

	return (all_chars);
}

/**
 * argstostr - concatenates all the arguments of the program.
 * Each argument should be followed by a \n in the new string.
 * @ac: arguments count.
 * @av: arguments vector.
 * Return: a pointer to a new string, or NULL if it fails.
 * Returns NULL if ac == 0 or av == NULL.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int y;
	int x;
	int all_chars;

	if (ac == 0 || av == NULL)
		return (NULL);

	all_chars = count_chars_of_argv(ac, av);

	str = malloc(all_chars + (ac) * sizeof(char));

	if (str == NULL)
		return (NULL);

	all_chars = 0;

	for (y = 0; y < ac; y++)
	{
		x = 0;

		while (av[y][x])
		{
			str[all_chars] = av[y][x];
			all_chars++;
			x++;
		}

		str[all_chars] = '\n';
		all_chars++;
	}

	str[all_chars] = '\0';
	return (str);
}
