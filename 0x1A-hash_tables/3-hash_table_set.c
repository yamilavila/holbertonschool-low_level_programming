#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hasd table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx;
	hash_node_t *node = NULL, *temp;

	if (!ht || key || !value)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);

	indx = key_index((const unsigned char *) key, ht->size);

	temp = ht->array[indx];
	while (temp && strcmp(key, temp->key) != 0)
		temp = temp->next;
	if (temp)
	{
		free(temp->next);
		temp->value = strdup(value);
	}
	else
	{
		node = malloc(sizeof(hash_table_t));
		if (node == NULL)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = ht->array[indx];
		ht->array[indx] = node;
	}
	return (1);
}
