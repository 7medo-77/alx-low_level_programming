#include "hash_tables.h"
/**
 * hash_table_print - A function that returns the key index from a key string
 *
 * @ht: Pointer to the hash table struct
 *
 * Return: Key that is being searched
 *		   NULL on FAILURE
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index, index_inner_1, index_end = 0;
	hash_node_t *probe;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
			index_end = index;
	}

	putchar('{');
	for (index_inner_1 = 0; index_inner_1 < ht->size; index_inner_1++)
	{
		probe = ht->array[index_inner_1];
		while (probe)
		{
			printf("'%s': '%s'%s", probe->key, probe->value,
			index_inner_1 == index_end  ? "" : ", ");
			probe = probe->next;
		}
	}
	putchar('}');
	putchar('\n');
}
