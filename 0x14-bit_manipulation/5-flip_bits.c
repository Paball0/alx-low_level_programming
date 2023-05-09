#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Function returns number of bits for flip
 * @n: 1st Number
 * @m: 2nd  Number
 *
 * Return: Numbers of bits changed from n to m
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, counter;

	for (counter = j = 0; j < 64; j++, counter++)
		if (((n >> j) & 1) == ((m >> j) & 1))
			counter--;

	return (counter);
}
