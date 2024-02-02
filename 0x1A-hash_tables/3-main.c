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
	hash_table_set(ht, "empty_value", "somehting");
	hash_table_set(ht, "stylist", "haircut");
	hash_table_set(ht, "joyful", "person");
	hash_table_set(ht, "one_key", "one_value");
	hash_table_set(ht, "synaphea", "person_another");
	hash_table_set(ht, "subgenera", "vice");
	hash_table_set(ht, "subgenera", "vice_2");

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
