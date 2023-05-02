#include "lists.h"

/**
 * print_listint - Function will print all the elements of a list.
 * @h: Head of list
 *
 * Return: Number of elements
 **/
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++, h = h->next)
	{
		printf("%d\n", h->n);
	}

	return (i);
}
