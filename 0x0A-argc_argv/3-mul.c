#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints produnt of two numbers, new line
 *
 * @argc: argument inputted
 * @argv: argument array and pointers
 * Return: int
 */
int main(int argc, char *argv[])
{
	int m1, m2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	m1 = atoi(argv[1]);
	m2 = atoi(argv[2]);
	printf("%d\n", m1 * m2);
	return (0);
}
