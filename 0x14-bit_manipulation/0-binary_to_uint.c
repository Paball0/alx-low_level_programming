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
	int x, multiplier;
	unsigned int number;

	if (!b)
		return (0);

	for (x = number = 0; b[x] != 0; x++)
		if (b[x] != 48 && b[x] != 49)
			return (number);

	for (x -= 1, multiplier = 0; x >= 0; x--, multiplier++)
	{
		if (b[x] == 48)
			continue;

		number += 1 << multiplier;
	}

	return (number);
}
