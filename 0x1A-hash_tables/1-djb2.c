#include "hash_tables.h"

/**
 * hash_djb2 - Computes the djb2 hash of a string
 * @str: Hash string
 *
 * Return: The djb2 hash value of the input string
 *
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int i;

	while ((i = *str++))
	{
		hash = ((hash << 5) + hash) + i;
	}

	return (hash);
}
