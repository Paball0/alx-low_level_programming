#include "dog.h"

/**
 * init_dog - initializes var of type struct dog
 * @d: pointer to var type struct dog
 * @name: name dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
