#include "holberton.h"

/**
 *rot13 - encodes a string using rot13.
 *@str: string.
 *Return: a pointer to the resulting string str.
 */
char *rot13(char *str)
{
	int count = 0;
	int i = 0;
	char abc1[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char abc2[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	while (str[count])
	{
		for (i = 0; i < 52; i++)
		{
			if (str[count] == abc1[i])
			{
				str[count] = abc2[i];
				i = 52;
			}
		}

		count++;
	}

	return (str);
}
