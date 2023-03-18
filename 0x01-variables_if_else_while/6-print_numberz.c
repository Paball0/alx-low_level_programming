#include <stdio.h>

/**
 * main - Program prints all single digits of base 10 from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = 48;

	while (d < 58)
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
