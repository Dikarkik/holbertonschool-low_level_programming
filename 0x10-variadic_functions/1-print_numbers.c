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

	if (separator == NULL)
		separator = "";

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", va_arg(numbers, int));
		else
			printf("%d%s", va_arg(numbers, int), separator);
	}

	printf("\n");
	va_end(numbers);
}
