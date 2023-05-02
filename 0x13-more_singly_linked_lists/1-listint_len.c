#include "lists.h"

/**
 * listint_len - Function will return the # of elements in a linked listint_t list
 * @h: Head of the list
 *
 * Return: The number of elements in list
 **/
size_t listint_len(const listint_t *h)
{
	int x;

	for (x = 0; h != NULL; i++, h = h->next)
		;

	return (x);
}
