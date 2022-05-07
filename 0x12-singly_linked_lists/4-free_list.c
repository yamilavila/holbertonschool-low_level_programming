#include "lists.h"
/**
 * free_list - free memory of the list
 * @head: first node
 */

void free_list(list_t *head)
{
	list_t *tempo;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		tempo = head->next;
		free(head->str);
		free(head);
		head = tempo;
	}
}
