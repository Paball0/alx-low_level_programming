#include <stdio.h>

/**
 * main - prints name of the program and no of arguments approved
 *
 * @argc: argument counted
 * @argv: argument array
 * Return: int 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
