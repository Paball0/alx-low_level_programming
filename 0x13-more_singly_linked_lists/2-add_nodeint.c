#include "lists.h"

/**
 * add_nodeint - This funtion adds a new node at the beginning of a listint_t list
 * @head: Head of the list
 * @n: Value of the new element
 *
 * Return: The placement of the new node
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
