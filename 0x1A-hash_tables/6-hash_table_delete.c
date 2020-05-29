#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current;
	hash_node_t *next_node;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			current = ht->array[index];

			while (current)
			{
				next_node = current->next;

				free(current->key);
				free(current->value);
				free(current);

				current = next_node;
			}
		}
	}

	free(ht->array);
	free(ht);
}
