#include "hash_tables.h"

/**
 * hash_table_print -Function prints table
 * @ht: hash table
 * Return: none
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, commasymbol = 0;
	hash_node_t *tmp_hn;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		tmp_hn = ht->array[i];
		while (tmp_hn != NULL)
		{
			if (commasymbol)
				printf(", ");
			printf("'%s': '%s'", tmp_hn->key, tmp_hn->value);
			tmp_hn = tmp_hn->next;
			commasymbol = 1;
		}
	}
	printf("}\n");
}
