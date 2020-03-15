#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * If separator is NULL, dont print it.
 * @separator: is the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 * Return: always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int num;

	if (separator == NULL)
		return;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers, int);

		if (i == n - 1)
			printf("%d\n", num);
		else
			printf("%d%s", num, separator);
	}


	va_end(numbers);

}
