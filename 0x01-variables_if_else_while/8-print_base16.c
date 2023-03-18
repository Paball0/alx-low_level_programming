#include <stdio.h>

/**
 * main - Program prints and countssingle digits in hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = 48;
	char c = 'a';

	while (d < 58)
	{
		putchar(d);
		d++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
