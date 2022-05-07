#include "lists.h"

/**
 * dlistint_len - len of the list
 * @h: head
 * Return: size
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

/**
 * insert_dnodeint_at_index - inserting a node in a given idx
 * @h: head
 * @idx: index node
 * @n: first node
 * Return: address of the new node or NULL 4 fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tempo, *new;
	unsigned int index = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tempo = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx > dlistint_len(*h))
		return (NULL);
	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));

	while (index != idx)
	{
		tempo = tempo->next;
		index++;
		if (tempo == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	tempo->prev->next = new;
	new->next = tempo;
	new->prev = tempo->prev;
	tempo->prev = new;
	return (new);
}
