#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Function converts a binary to unsigned int
 * @b: Pointing to a string of binary chars
 *
 * Return: Converted number
 **/
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (j = 0; b[i]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[j] - '0');
	}

	return (dec_val);
}

