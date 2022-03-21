#include "lists.h"

/**
 * list_len - return the length of a string
 * @h: string
 * Return: success
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
