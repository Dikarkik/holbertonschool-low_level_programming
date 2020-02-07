#include <stdlib.h>
#include <stdio.h>

/**
 *main - main function
 *Return: always 0
 */
int main(void)
{
	int i;
	int x;
	int j;
	int u;

	for (i = 48; i <= 57; i++)
	{
		for (x = 48; x <= 57; x++)
		{
			for (j = i; j <= 57; j++)
			{
				for (u = x + 1; u <= 57; u++)
				{
					putchar(i);
					putchar(x);
					putchar(32);
					putchar(j);
					putchar(u);

					if (!(i == 57 && x == 57 && j == 57 && u == 57))
					{
						putchar(44);
						putchar(32);
					}
				}

			}

		}
	}
	putchar('\n');

	return (0);
}
