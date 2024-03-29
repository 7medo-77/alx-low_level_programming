#include "hash_tables.h"
/**
 * hash_table_delete - A function that frees and deletes hash table
 *
 * @ht: Pointer to the hash table struct
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp, *probe;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			probe = ht->array[index];
			while (probe)
			{
				temp = probe;
				probe = probe->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
		else
			continue;
	}
	free(ht->array);
	free(ht);
}
