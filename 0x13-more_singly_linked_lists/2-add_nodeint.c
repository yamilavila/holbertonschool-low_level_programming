#include "lists.h"

/**
 * add_nodeint - add node
 * @head: this is the first node
 * @n: int node
 * Return: the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (0);
	}
	if (head == NULL)
	{
		return (0);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
