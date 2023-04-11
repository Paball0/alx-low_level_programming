#include "main.h"
/**
 * _strncat - joins 2 strings together
 *
 * @dest:vslue tsken to destination
 * @src: value taken from source
 * @n: number inputed
 *
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
