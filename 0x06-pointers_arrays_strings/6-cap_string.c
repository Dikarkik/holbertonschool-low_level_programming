#include "holberton.h"

/**
 *cap_string - capitalizes all words of a string.
 *@str: string.
 *Return: a pointer to the resulting string dest.
 */
char *cap_string(char *str)
{
	int count = 0;
	char separators[] = {' ', '\t', '\n', ',', ';', '.',
			     '!', '?', '"', '(', ')', '{', '}'};
	int i = 0;

	while (str[count])
	{
		if (str[count] >= 97 && str[count] <= 122)
		{
			if (count == 0)
				str[0] -= 32;
			else
			{
				for (i = 0; separators[i]; i++)
				{
					if (str[count - 1] == separators[i])
					{
					    str[count] -= 32;
					    break;
					}
				}
			}
		}
		count++;
	}

	return (str);
}
