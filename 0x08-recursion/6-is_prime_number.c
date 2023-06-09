#include "main.h"

/**
 * is_prime_number - returns 1 if the input is a prime number and 0 if not
 *
 * @n: random input number
 * Return: int
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 2)
		return (n == 2 ? 1 : 0);
	if (n % 2 == 0)
		return (0);
	return (is_prime(n, i));
}

/**
 * is_prime - returns 1 if the input is a prime number and 0 if not
 *
 * @n: random input number
 * @i: dividend
 * Return: int
 */
int is_prime(int n, int i)
{
	if (n != i && n % i == 0)
		return (0);
	else if (n == i)
		return (1);
	return (is_prime(n, i + 1));
}
