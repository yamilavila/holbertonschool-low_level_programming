#include "lists.h"
/**
 * add_node - add note at the beginning of the list
 * @str: pointer
 * @head: first node
 * Return: address of the new element or NULL 4 fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int a = 0;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		;
	if (str == NULL)
	{
		node->next = NULL;
		node->len = 0;
	}
	else
	{
		node->str = strdup(str);
		node->len = a;
	}
	node->next = *head;
	*head = node;
	return (node);
}
