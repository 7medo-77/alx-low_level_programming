#include "hash_tables.h"
/**
 * hash_table_create - A function to create hash
 *					   table with the size given
 *
 * @size: size of the hash table
 *
 * Return: Pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table_1;
	int index;

	table_1 = malloc(sizeof(hash_table_t));
	if (!table_1)
		return (NULL);

	table_1->size = size;
	table_1->array = malloc(sizeof(hash_node_t *) * size + 1);
	if (!table_1->array)
		return (NULL);

	for (index = 0; index < size; index++)
		table_1->array[index] = NULL;
	table_1->array[size] = NULL;

	return (table_1);
}
