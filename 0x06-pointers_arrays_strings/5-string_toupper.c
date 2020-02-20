#include "holberton.h"

/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@str: string.
 *Return: a pointer to the resulting string dest.
 */
char *string_toupper(char *str)
{
	int count = 0;

	while (str[count])
	{
		if (str[count] >= 97 && str[count] <= 122)
			str[count] -= 32;

		count++;
	}

	return (str);
}
