#include "lists.h"

/**
 * add_nodeint_end - add a node in the end of a list
 * @head: first node
 * @n: node
 * Return: new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last_node = *head;
	int a = 0;

	if (new_node == NULL)
	{
		return (0);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last_node->next)
		{
			last_node = last_node->next;
			a++;
		}
		last_node->next = new_node;
	}
	return (new_node);
}
