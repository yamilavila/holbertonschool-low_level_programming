#include "lists.h"

/**
 * free_dlistint - free list
 * @head: first node
 * Return: success
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempo = NULL;

	while (head != NULL)
	{
		tempo = head->next;
		free(head);
		head = tempo;
	}
}
