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
	unsigned long int index_key = key_index((unsigned char *)key, ht->size);
	hash_node_t *node, *probe;

	node = malloc(sizeof(hash_node_t));
	node->value = malloc(sizeof(char) * str_len(value) + 1);
	node->key = malloc(sizeof(char) * str_len(key) + 1);

	if (strcmp(key, "") == 0 || !ht || !node
		|| !node->value || !node->key || !key)
	{
		free(node->value);
		free(node->key);
		free(node);
		return (0);
	}
	node->value = str_cpy(node->value, value);
	node->key = str_cpy(node->key, key);
	if (!ht->array[index_key])
		ht->array[index_key] = node, node->next = NULL;
	else
	{
		probe = ht->array[index_key];
		while (probe)
		{
			if (strcmp(probe->key, key) == 0)
			{
				free(probe->value);
				probe->value = malloc(sizeof(char) * str_len(value) + 1);
				probe->value = str_cpy(probe->value, value);
				return (1);
			}
			probe = probe->next;
		}
		node->next = ht->array[index_key];
		ht->array[index_key] = node;
	}
	return (1);
}
