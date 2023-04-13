#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function allots mememory via malloc
 *
 * @b: number of bytes
 * Return: allocates pointer
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == NULL)
		exit(98);
	return (arr);
}
