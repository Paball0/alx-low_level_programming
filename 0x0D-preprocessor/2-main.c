#include <stdio.h>

/*
 * function prints name of the file the program was compiled from + \n
 *
 * Return:0.
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
