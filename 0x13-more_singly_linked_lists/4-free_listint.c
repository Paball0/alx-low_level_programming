#include "lists.h"

/**
 * free_listint - Frees a listint_t lnked ist
 * @head: Head of list freed
 **/
void free_listint(listint_t *head)
{
	listint_t *aux;

	for (; head != NULL;)
	{
		aux = head;
		head = head->next;
		free(aux);
	}

}
