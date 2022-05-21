#include "lists.h"

/**
 * free_listint2 - free/liberando memory and setting head to Null
 * head: first node at the beggining of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	else
	{
		while (*head)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
		*head = NULL;
	}
}
