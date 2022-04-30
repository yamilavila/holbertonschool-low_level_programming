#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: head of the node
 * Return: nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);
	{
		while (h != NULL)
		{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", h->len, h->str);

		h = h->next;

		nodes++;
	}

	return (nodes);
}
