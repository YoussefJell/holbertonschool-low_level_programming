#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: hash table
 * @key: key
 * Return: value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *entry;

	if (ht == NULL || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[index];

	if (entry == NULL)
		return (NULL);
	else if (entry->next == NULL)
		return (entry->value);

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
			return (entry->value);
		entry = entry->next;
	}

	return (NULL);
}
