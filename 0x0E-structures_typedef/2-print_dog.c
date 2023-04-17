#include "dog.h"
#include <stdio.h>

/**
 * print_dog: frunction prints a struct dog
 *
 * @d: struct var
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
