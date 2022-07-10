#include "hash_tables.h"

/**
 * key_index -Function gives you the index of a key.
 *
 * @key: is the key
 * @size: size of the array
 * Return: index at  which the key/value pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
	{
		return (0);
	}
	return (hash_djb2(key) % size);
}
