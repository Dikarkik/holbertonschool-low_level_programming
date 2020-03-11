#include "function_pointers.h"

/**
 * print_name - prints a name using the passed function.
 * @name: string.
 * @f: pointer function.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
