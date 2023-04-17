#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new element of type struct dog
 *
 * @name: dof name (new)
 * @age: dog's age
 * @owner: owners name
 * Return: new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *dog_name, *dog_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (new_dog);
	dog_name = malloc(sizeof(name));
		if (dog_name == NULL)
		{
			free(new_dog);
			return (NULL);
		}
	dog_owner = malloc(sizeof(owner));
	if (dog_owner == NULL)
	{
		free(dog_name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(dog_name, name);
	_strcpy(dog_owner, owner);
	new_dog->name = dog_name;
	new_dog->owner = dog_owner;
	new_dog->age = age;
	return (new_dog);
}

/**
 * *_strcpy - copies string to dest
 * @dest: where str is copied to
 * @src: string source
 *
 * Return: char/ new struct dog
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = *(src + len);

	return (dest);
}
