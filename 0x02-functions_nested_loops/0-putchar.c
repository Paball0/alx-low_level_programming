#include "main.h"

/**
*main - Program prints the word _putchar
*
*Return: 0 on success
*/

int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(10);

	return (0);
}
