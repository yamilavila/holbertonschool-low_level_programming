#include "lists.h"

/**
 * listint_len - counts # of elements
 * @h: head pointer
 * Return: element
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
