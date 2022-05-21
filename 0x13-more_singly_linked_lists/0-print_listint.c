#include "lists.h"

/**
 * print_listint - prints all the elments of a list
 * @h: points the list
 * Return: nodes
 */

size_t print_listint(const listing_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n" h->n);
		h = h->next;
	}
	return (nodes);
}
