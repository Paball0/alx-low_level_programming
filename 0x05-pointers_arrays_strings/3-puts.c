#include "main.h"

/**
 * _puts - program print a given string to screen
 *
 * @str: passed pointer argument for string
 * Return: void
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
