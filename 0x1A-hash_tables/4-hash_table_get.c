#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: the value associated with the element,
 * or NULL if 'key' couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);

		current = current->next;
	}

	return (NULL);
}
