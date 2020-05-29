#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: is the size of the array
 * Return: a pointer to the created hash table
 * If something went wrong, return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	hash_node_t **array = NULL;
	unsigned long int index;

	if (size == 0)
		return (NULL);

	hash_table = calloc(1, sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	array = calloc(size, sizeof(hash_node_t));
	if (array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = array;

	for (index = 0; index < size; index++)
		array[index] = NULL;

	return (hash_table);
}
