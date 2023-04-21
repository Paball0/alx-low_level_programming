#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - This function returns the sum of all its parameters
 * @n: The number of arguments
 * @...: Variable arguments passed into the function
 * Return: An integer sum of all the int arguments passed into the function
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
