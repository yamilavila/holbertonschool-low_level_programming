#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth of a linked list
 * @head: first node
 * @index: node set to 0
 * Return: Null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t cnt;

	for (cnt = 0; head != NULL; cnt++)
	{
		if (cnt == index)
			break;
		head = head->next;
	}
	return (head);
}
