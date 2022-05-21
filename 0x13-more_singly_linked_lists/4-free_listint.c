#include "lists.h"

/**
 * free_listint - free/libera memory
 * @head: first node
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (tmp)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
