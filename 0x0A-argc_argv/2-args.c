#include <stdio.h>

/**
 * main - prints all arguments inputted
 *
 * @argc: argument numer counted
 * @argv: argument arrays and pointers
 * Return: int 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
