#include "lists.h"

/**
 * insert_nodeint_at_index - Function inserts a node at specified placement
 * @head: Head of list
 * @idx: Index
 * @n: number
 *
 * Return: placement of the new element
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int j;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new ==  NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;

		return (new);
	}

	for (j = 0; *head != NULL; j++)
	{
		if (j + 1 == (int) idx)
		{
			new->next = (*head)->next;

			(*head)->next = new;

			return (new);
		}

		head = &(*head)->next;
	}

	return (NULL);
}
