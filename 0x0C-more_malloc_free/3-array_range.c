#include <stdlib.h>

/**
 * *array_range - function creates an array of integers orderd in numerical order
 * both inclusive in the array
 * @min: smallest number of the array
 * @max: largest number of the array
 *
 * Return: pointer to the newly created array if success,
 * else NULL if min > max
 */
int *array_range(int min, int max)
{
	int *arr;
	int len, num, index;

	if (min > max)
		return (0);
	len = (max - min) + 1;
	arr = malloc(sizeof(int) * len);
	if (arr == 0)
		return (0);
	for (num = min, index = 0; num <= max; index++, num++)
		*(arr + index) = num;
	return (arr);
}
