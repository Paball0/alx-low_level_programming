#include "main.h"

/**
 * is_palindrome - function returns 1 if a string is a palindrome and 0 if not
 *
 * @s: string
 * Return: int
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s), i = 0;

	if (len == 0)
		return (1);
	return (palindrome_check(s, len - 1, i));
}

/**
 * _strlen_recursion - function returns the length of a string
 *
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	len = _strlen_recursion(s + 1);
	return (len + 1);
}

/**
 * palindrome_check - function returns 1 if true and 0 if not
 *
 * @s: string
 * @len: length of the string
 * @i: counting variable
 * Return: int
 */
int palindrome_check(char *s, int len, int i)
{
	if (len == i)
		return (1);
	else if (s[len] != s[i])
		return (0);
	if (i < len)
		return (palindrome_check(s, --len, ++i));
	return (1);
}
