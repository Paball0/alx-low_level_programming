#include "lists.h"

/**
 * sum_listint - Sum of all the data from linked list
 * @head: Head of list
 *
 * Return: Sumi of inputs
 **/
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
