#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character printed
 *
 * Return: 1 if success
 * On error, -1 is returned, and err number is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
