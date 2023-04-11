#include "main.h"
/**
 * _memset - fills blocks with n bytes of memeory
 * @s: initisl blocks to be filled
 * @b: amoount of blocks to be filled
 * @n: number of bytes difference between initial value and final
 *
 * Return: transformed array with new values inside
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
