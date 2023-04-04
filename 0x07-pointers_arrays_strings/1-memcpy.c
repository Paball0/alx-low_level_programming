#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination where mem is copied to
 * @src: source where mem is copied from
 * @n: bytes of memory to copied
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
