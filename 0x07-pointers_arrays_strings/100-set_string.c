#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s:  the chare
 * @to: pointer
 * Return:  0 or NULL
 */
void set_string(char **s, char *to)
{
	*s = to;
}
