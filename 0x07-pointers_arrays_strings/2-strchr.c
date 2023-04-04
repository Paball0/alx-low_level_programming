#include "main.h"

/**
 * _strchr - finds a char in a string
 *
 * @s: string
 * @c: char
 * Return: pointer to first occurence of c if it's there or NULL
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (NULL);
}
