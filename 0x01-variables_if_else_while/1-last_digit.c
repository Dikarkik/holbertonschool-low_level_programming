#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	printf("Last digit of %d is %d ", n, last);
	if (last > 5) {
		printf("and is greater than 5\n");
	} else if (last < 5) {
                printf("and is less than 6 and not 0\n");
        } else {
		printf("and is 0\n");
	}
	return (0);
}
