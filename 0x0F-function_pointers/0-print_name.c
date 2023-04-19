#include "function_pointers.h"

/**
 * print_name - prints name passed through pointer
 *
 * @name: character string to be added
 * @f: function pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
