#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: is the hash table
 * If 'ht' is NULL, don't print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int index;
	int flag_comma = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			current = ht->array[index];

			while (current)
			{
				if (flag_comma == 0)
					flag_comma = 1;
				else
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
			}
		}
	}
	printf("}\n");
}
