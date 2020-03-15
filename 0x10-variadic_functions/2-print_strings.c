#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * If one of the string is NULL, print (nil) instead.
 * @separator: is the string to be printed between the strings.
 * @n: is the number of strings passed to the function.
 * Return: always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	if (separator == NULL)
		separator = "";

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}
