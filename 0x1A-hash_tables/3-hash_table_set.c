#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. 'key' can not be an empty string.
 * @value: is the value associated with the key.
 * 'value' must be duplicated. 'value' can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision, add the new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL;
	hash_node_t *current = NULL;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	/* Update key */
	if (ht->array[index])
	{
		current = ht->array[index];

		while (current)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = malloc(sizeof(char) * (strlen(value) + 1));
				strcpy(current->value, value);
				return (1);
			}
			current = current->next;
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = malloc(sizeof(char) * (strlen(key) + 1));
	strcpy(new_node->key, key);
	new_node->value = malloc(sizeof(char) * (strlen(value) + 1));
	strcpy(new_node->value, value);

	new_node->next = NULL;
	if (ht->array[index])
		new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
