#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first_element = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (first_element)
				first_element = 0;
			else
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}

	printf("}\n");
}
