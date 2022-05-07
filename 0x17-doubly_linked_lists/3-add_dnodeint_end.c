#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning
 * @head: first node
 * @n: new node
 * Return: the address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tempo;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	return (new);
	}

	tempo = *head;

	while (tempo->next)
		tempo = tempo->next;
	new->prev = tempo;
	tempo->next = new;

	return (new);
}
