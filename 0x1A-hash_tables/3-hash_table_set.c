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
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key)
	{
	return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

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

/**
 * update_node_value - updates the value of a node if the key matches
 * @node: pointer to the node in the hash table
 * @key: key to be matched
 * @value: new value to be set
 *
 * Return: 1 if the value is updated, 0 otherwise
 */

int update_node_value(hash_node_t *node, const char *key, const char *value)
{
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

	return (0);
}

/**
 * create_new_node - creates a new hash table node with the given key and value
 * @key: key for the new node
 * @value: value for the new node
 *
 * Return: pointer to the new node, NULL if memory allocation fails
 */

hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
	{
		return (NULL);
	}

	node->key = strdup(key);
	node->value = strdup(value);

	if (!node->key || !node->value)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (NULL);
	}

	return (node);
}
