#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter of each element
 *
 *
 * @array: the array
 * @size: sarray size
 * @action:pointer to the exected array
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
