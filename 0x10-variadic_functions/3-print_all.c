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
	int printed = 0;

	va_start(ap, format);
	while (format && format[index])
	{
		printed = 1;
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

				if (str == NULL || str[0] == '\0')
					str = "(nil)";

				printf("%s", str);
				break;
			default:
				printed = 0;
		};

		if (format[index + 1] && printed == 1)
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(ap);
}
