#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the table
 * @ht: pointer to the hash table
 * @key: node key
 * @value: node value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (!ht || !key)
	{
	return (0);
	}

	unsigned long int index;
	hash_node_t *node;

	if (update_node_value(node, key, value))
	{
		return (1);
	}

	node = create_new_node(key, value);
	if (!node)
	{
		return (0);
	}

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
/

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
		free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		return (0);
	}

	node->key = strdup(key);
	node->value = strdup(value);

	if (!node->key || !node->value)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
