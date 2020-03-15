#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: is a list of types of arguments passed to the function.
 * Return: always 0.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int index = 0;
	char *str;

	va_start(ap, format);

	while (format && format[index])
	{
		switch (format[index])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
			break;
			case 'i':
				printf("%i", va_arg(ap, int));
			break;
			case 'f':
				printf("%f", (float) va_arg(ap, double));
			break;
			case 's':
				str = va_arg(ap, char *);
				if (!str)
				{
					str = "(nil)";
				}
				printf("%s", str);
			break;
		};

		if (index > 0 && format[index + 1])
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(ap);
}
