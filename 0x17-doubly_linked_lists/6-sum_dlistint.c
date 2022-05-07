#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint linked list
 * @head: first node
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{
	size_t reslt = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		reslt += head->n;
		head = head->next;
	}
	return (reslt);
}
