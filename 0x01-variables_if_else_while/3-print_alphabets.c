#include <stdio.h>

/**
 *main - main function
 *Return: always 0
 */

int main(void)
{
	char l;
	char al;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (al = 'A'; al <= 'Z'; al++)
	{
		putchar(al);
	}

	putchar('\n');

	return (0);
}
