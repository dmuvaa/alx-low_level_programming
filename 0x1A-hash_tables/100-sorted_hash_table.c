#include "hash_tables.h"

/**
 * shash_node_create - create a new sorted hash node
 * @key: the key
 * @value: the value
 *
 * Return: pointer to the newly created node, or NULL on failure
 */

shash_node_t *shash_node_create(const char *key, const char *value)
{
	shash_node_t *node = calloc(1, sizeof(shash_node_t));

	if (!node)
		return (NULL);

	node->key = strdup(key);
	node->value = strdup(value);

	if (!node->key || !node->value)
	{
		if (node->key)
			free(node->key);
		if (node->value)
			free(node->value);
		free(node);
		return (NULL);
	}

	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;

	return (node);
}

/**
 * shash_sorted_insert - insert a node into the sorted linked list
 * @ht: the hash table
 * @node: the new node to be inserted
 *
 */

void shash_sorted_insert(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp = NULL;

	if (!ht->shead)
	{
		ht->shead = node;
		ht->stail = node;
		return;
	}

	tmp = ht->shead;
	while (tmp && strcmp(node->key, tmp->key) > 0)
		tmp = tmp->snext;

	if (!tmp)
	{
		node->sprev = ht->stail;
		ht->stail->snext = node;
		ht->stail = node;
	}
	else
	{
		node->snext = tmp;
		node->sprev = tmp->sprev;
		if (tmp->sprev)
			tmp->sprev->snext = node;
		else
			ht->shead = node;
		tmp->sprev = node;
	}
}

/**
 * shash_sorted_delete - delete the sorted list from a hash table
 * @ht: the hash table
 */

void shash_sorted_delete(shash_table_t *ht)
{
	shash_node_t *tmp = ht->shead;
	shash_node_t *next = NULL;

	while (tmp)
	{
		next = tmp->snext;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
		tmp = next;
	}
}

/**
 * shash_table_create - create a new sorted hash table
 * @size: size of the hash table
 *
 * Return: pointer to the newly created hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = NULL;

	if (size == 0)
		return (NULL);

	ht = calloc(1, sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}

/**
 * shash_table_set - add an element to the sorted hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node = NULL, *node = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	new_node = shash_node_create(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	shash_sorted_insert(ht, new_node);

	return (1);
}

/**
 * shash_table_get - retrieve a value associated with a key
 * @ht: the hash table
 * @key: the key to look for
 *
 * Return: the value associated with the key, or NULL if not found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - print the sorted hash table
 * @ht: the hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node = NULL;

	if (ht == NULL)
		return;

	putchar('{');
	node = ht->shead;
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->snext != NULL)
			printf(", ");
		node = node->snext;
	}
	puts("}");
}

/**
 * shash_table_print_rev - print the sorted hash table in reverse order
 * @ht: the hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node = NULL;

	if (ht == NULL)
		return;

	putchar('{');
	node = ht->stail;
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->sprev != NULL)
			printf(", ");
		node = node->sprev;
	}
	puts("}");
}

/**
 * shash_table_delete - delete a sorted hash table
 * @ht: the hash table
 */

void shash_table_delete(shash_table_t *ht)
{
	if (ht == NULL)
		return;

	shash_sorted_delete(ht);
	free(ht->array);
	free(ht);
}
