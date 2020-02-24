#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char.
 *@s: destination where we need to put the string "to".
 *@to: string.
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
