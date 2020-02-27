#include "holberton.h"
int length(char *s);

/**
 * is_palindrome - check for palindrome strings.
 *@s: string.
 * Return: 1 if s is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	return (length(s));
}

/**
 * length - length of a string.
 *@s: string.
 * Return: length of s.
 */
int length(char *s)
{
	if (*s == '\0')
		return (0);

	return (length(++s) + 1);
}
