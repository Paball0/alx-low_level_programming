#include "lists.h"

/**
 * get_nodeint_at_idex - Returns the nth nodes placement in linked list
 * @head: Head of list 
 * @index: Place to yank from 
 *
 * Return: Exact placement of the element
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;

	for (i = 0; head != NULL; i++, head = head->next)
		if (i == (int) index)
			return (head);

	return (NULL);
}
