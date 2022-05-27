#include "hash_tables.h"
/**
 * key_index - finds the index to our key
 *
 * @key: the key to hash and find index from
 * @size: the size of our hash
 * Return: Index position
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long my_hash = hash_djb2(key);

	return (my_hash % size);
}
