#include "lists.h"
/**
 * dlistint_len - mide el largo del doubly linked
 * @h: head node
 * Return: list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cuenta = 0;

		while (h != NULL)
		{
			h = h->next;
			cuenta++;
		}
	return (cuenta);
}
