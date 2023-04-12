#include "hash_tables.h"

/**
 * key_index - gives the key index
 * @key: required key to find index
 * @size: hash table size
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
