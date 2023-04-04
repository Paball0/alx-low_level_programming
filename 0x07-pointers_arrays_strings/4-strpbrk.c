#include "main.h"

/**
 * _strpbrk - identifies 1st occurence of any bytes from accept in s
 *
 * @s: string
 * @accept: matching pattern
 * Return: pointer to the first match
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
