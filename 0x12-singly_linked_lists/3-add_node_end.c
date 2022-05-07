#include "lists.h"
/**
 * add_node_end - add a new node at the end of a list
 * @head: first node
 * @str: pointer needs to be duplicated
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *end_node;
	int a = 0;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
		;
	new->str = strdup(str);
	new->len = a;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		end_node = *head;
		while (end_node->next != NULL)
		{
			end_node = end_node->next;
		}
		end_node->next = new;
	}
	return (new);
}
