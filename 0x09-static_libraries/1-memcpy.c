#include "main.h"
/**
 *_memcpy - copies array
 *@dest: destination where array is stored
 *@src: source arrauy is taken from
 *@n: no of bytes
 *
 *Return: copied memory with number of bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
