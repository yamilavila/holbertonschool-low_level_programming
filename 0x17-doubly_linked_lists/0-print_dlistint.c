#include "lists.h"
/*
 * print_dlistint - print all elements of a doubly list
 * @h: head node
 * Return: size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cuenta = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cuenta++;
	}
	return (cuenta);
}
