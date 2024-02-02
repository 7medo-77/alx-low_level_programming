#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	hash_node_t *probe;
	unsigned long int index;

	ht = hash_table_create(1024);
	hash_table_set(ht, "lmao", "cool");
	hash_table_set(ht, "stylist", "haircut");
	hash_table_set(ht, "beta", "juice");
	hash_table_set(ht, "subgenera", "vice");

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			probe = ht->array[index];

			while (probe)
			{
				printf("%lu -> value:%s | key:%s\n", index,
		   probe->value, probe->key);
				probe = probe->next;
			}
		}
		else
			continue;
	}

	return (EXIT_SUCCESS);
}
