#include <stdio.h>

/**
 * fizz_buzz - prints the numbers from 1 to 100, followed by a new line. .
 *
 * Return: void.
 */
void main(void)
{
	int i;

	i = 1;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	putchar('\n');
}
