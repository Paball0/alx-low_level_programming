#include "main.h"

/**
 * set_bit - Function sets the value of index to 1
 * @n: Number
 * @index: Index to set
 *
 * Return: 1 [success], or -1 [fail]
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 88)
		return (-1);

	*n = (1 << index) | *n;

	return (1);
}
