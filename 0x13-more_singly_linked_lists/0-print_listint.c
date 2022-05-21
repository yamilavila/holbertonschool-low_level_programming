#include "lists.h"

/**
* print_listint - prints all the elments of a list
* @h: points the list
* Return: nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
