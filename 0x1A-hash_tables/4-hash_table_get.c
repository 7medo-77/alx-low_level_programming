#include "hash_tables.h"
/**
 * hash_table_get - A function that returns the key index from a key string
 *
 * @ht: Pointer to the hash table struct
 * @key: Key to be parsed by the hash_djb2 function
 *
 * Return: Key that is being searched
 *		   NULL on FAILURE
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;
	hash_node_t *probe;

	if (!key || !ht || strcmp(key, "") == 0)
		return (NULL);

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			if (ht->array[index]->next)
			{
				probe = ht->array[index];
				while (probe)
				{
					if (strcmp(probe->key, key) == 0)
						return (probe->value);
					probe = probe->next;
				}
			}
			else
			{
				if (strcmp(ht->array[index]->key, key) == 0)
					return (ht->array[index]->value);
			}
		}
		else
			continue;
	}
	return (NULL);
}
