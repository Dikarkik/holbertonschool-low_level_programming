#include "holberton.h"
int length(char *s);
int check_mirror(char *p1, char *p2);

/**
 * is_palindrome - check for palindrome strings.
 *@s: string.
 * Return: 1 if s is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len;

	len = length(s);
	len--;
	return (check_mirror(s, s + len));
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

/**
 * check_mirror - check for palindrome string.
 *@p1: char 1.
 *@p2: char 2.
 * Return: 1 if success. 0 if some char is diferent.
 */
int check_mirror(char *p1, char *p2)
{
	if (*(p1 + 1) == '\0')
		return (1);

	if (*p1 == *p2)
		return (check_mirror(p1 + 1, p2 - 1));

	return (0);
}
