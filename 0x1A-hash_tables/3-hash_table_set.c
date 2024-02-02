#include "hash_tables.h"
/**
 * str_len - A function that returns the key index from a key string
 *
 * @key: Character array which comprises the key
 *
 * Return: Length of string
 */
int str_len(const char *key)
{
	int i = 0;

	while (key[i])
		i++;
	return (i);
}

/**
 * str_cpy - A function that returns the key index from a key string
 *
 * @dest: Destination string
 * @key: Character array which comprises the key
 *
 * Return: Length of string
 */
char *str_cpy(char *dest, const char *key)
{
	int i = 0;

	while (key[i])
	{
		dest[i] = key[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


/**
 * hash_table_set - A function that returns the key index from a key string
 *
 * @ht: Pointer to the hash table struct
 * @key: Key to be parsed by the hash_djb2 function
 * @value: Value inside the hash node
 *
 * Return: 1 on SUCCESS
 *		   0 on FAILURE
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	unsigned long int index_key = key_index((unsigned char *)key, ht->size);
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	node->value = malloc(sizeof(char) * str_len(value) + 1);

	if (!key || !ht || !node || !node->value)
		return (0);

	node->value = str_cpy(node->value, value);
	if (!ht->array[index_key]->next)
	{
		node->next = NULL;
		ht->array[index_key]->next = node;
	}
	else
	{
		node->next = ht->array[index_key]->next;
		ht->array[index_key]->next = node;
	}
	return (1);

}
