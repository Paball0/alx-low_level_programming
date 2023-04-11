#include "main.h"
#include <stddef.h>

/**
 * _strchr - initial starting point
 * @s: input
 * @c: input
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
