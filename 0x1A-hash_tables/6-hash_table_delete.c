#include "hash_tables.h"
/**
 * hash_table_delete - deletes/frees hash table
 *
 * @ht: hash table to free
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *entry, *tmp;

	if (ht && ht->array && ht->size)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				entry = ht->array[i];
				while (entry != NULL)
				{
					tmp = entry;
					entry = entry->next;
					free(tmp->key);
					free(tmp->value);
					free(tmp);
				}
			}
		}
		free(ht->array);
		free(ht);
	}
}
