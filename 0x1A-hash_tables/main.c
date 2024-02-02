#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	unsigned long int index;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			printf("%lu -> %s | %s\n", index,
				  ht->array[index]->value, ht->array[index]->key);
		}
		else
			continue;
	}

	return (EXIT_SUCCESS);
}
