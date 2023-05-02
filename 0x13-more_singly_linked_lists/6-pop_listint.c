#include "lists.h"

/**
 * pop_listint - function deletes the head node of a linked list
 * @head: Head of the list
 *
 * Return: Head node’s list of entries
 **/
int pop_listint(listint_t **head)
{
	int n_aux;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = (*head)->next;
	n_aux = (*head)->n;
	free(*head);
	*head = tmp;

	return (n_aux);
}
