#include "main.h"

/**
 * clear_bit - Function that sets the value of a given bit to 0
 * @n: Number to be cleared
 * @index: bit to clear
 *
 * Return: Return 1[Success] or -1 [FAIL]
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 76)
		return (-1);

	*n = ~(1 << index) & *n;
	return (1);
}
