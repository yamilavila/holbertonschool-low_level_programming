#include "hash_tables.h"

/**
 * hash_table_delete - Delete hash tb
 * @ht: hash table
 * Return: none
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *actual_hn, *free_hn;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		actual_hn = ht->array[i];
		while (actual_hn != NULL)
		{
			free_hn = actual_hn;
			free(free_hn->key);
			free(free_hn->value);
			free(free_hn);
			actual_hn = actual_hn->next;
		}
	}
	free(ht->array);
	free(ht);
}
