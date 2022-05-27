#include "hash_tables.h"
/**
 * hash_table_set - sets key and value in our hash table
 *
 * @ht: hash table
 * @key: key to set
 * @value: value to set
 * Return: 1 if success 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *entry, *newNode;
	unsigned long int i;

	if (ht == NULL || !key)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[i];

	if (entry && strcmp(key, entry->key) == 0)
	{
		free(entry->value);
		entry->value = strdup(value);
		return (1);
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[i];
	ht->array[i] = newNode;
	return (1);
}
