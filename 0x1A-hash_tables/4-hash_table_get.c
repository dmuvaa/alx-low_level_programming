#include "hash_tables.h"

/**
 * hash_table_get - t retrieves a value associated with a key
 * @ht: hash table
 * @key: the key to search
 *
 * Return: value associated with the element, or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	/* Check if the hash table and key are valid, if not, return NULL */
	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	/* Calculate the index of the key using the key_index function */
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	/* Iterate through the linked list at the index */
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
