#include "holberton.h"

/**
 *leet - encodes a string into 1337.
 *@str: string.
 *Return: a pointer to the resulting string dest.
 */
char *leet(char *str)
{
	int count = 0;
	int i = 0;
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char numbers[] = {'4', '3', '0', '7', '1'};

	while (str[count])
	{
		for (i = 0; i <= 4; i++)
		{
			if (str[count] == lower[i] || str[count] == upper[i])
			str[count] = numbers[i];
		}
		count++;
	}

	return (str);
}
