#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at the index
 * @index: idx of the node
 * @head: first node
 * Return: 1 if it succeeded or -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del;
	unsigned int idx = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	del = *head;
	if (idx == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(del);
		return (1);
	}
	while (del->next != NULL)
	{
		if (idx == index)
		{
			del->next->prev = del->prev;
			del->prev->next = del->next;
			free(del);
			return (1);
		}
		del = del->next;
		idx++;
	}
	return (-1);
}
