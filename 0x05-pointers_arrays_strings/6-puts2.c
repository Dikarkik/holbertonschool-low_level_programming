#include "holberton.h"

/**
 * _puts2 - prints every other character of a string, starting with the first.
 *@str: the string.
 * Return: void.
 */
void puts2(char *str)
{
	int count;

	while(str[count] != '\0')
	{
		if(count % 2 == 0)
			_putchar(str[count]);
		count++;
	}

	_putchar('\n');
}
