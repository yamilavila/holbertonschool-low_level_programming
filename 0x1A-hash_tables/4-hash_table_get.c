#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: value associated with the element, or NULL if key can't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *box = NULL;

	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);

	indx = key_index((const unsigned char *) key, ht->size);

	box = ht->array[indx];

	while (box != NULL)
	{
		if (strcmp(key, box->key) == 0)
			return (box->value);
		box = box->next;
	}
	return (NULL);
}
