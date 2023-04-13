#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function alots memory for an array via malloc
 *
 * @nmemb: members for the array
 * @size: size of each member
 * Return: void if 0 or allocate  pointer to alloted memeory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (arr);
	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;
	return (arr);
}
