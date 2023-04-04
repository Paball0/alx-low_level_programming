#include "main.h"

/**
 * _memset - fills first few bytes pointed by @s
 *
 * @s: pointer to area to be filled
 * @b: constant byte
 * @n: first bytes to be substituted/filled
 * Return: A pointer to filled modified string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
