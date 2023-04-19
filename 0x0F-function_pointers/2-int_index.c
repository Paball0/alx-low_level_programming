#include "function_pointers.h"

/**
 * int_index -function  searches for an int
 *
 * @array: the array
 * @size: array size
 * @cmp: function to compare and return match if it exists
 * Return: index of first matching element or -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
