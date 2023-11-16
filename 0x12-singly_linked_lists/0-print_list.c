#include <stdio.h>
#include "lists.h"

int _strlen(const char *s);
/**
 * print_list - A function that prints the number of nodes in a linked list
 *
 * @h: List whose nodes are to be counted
 *
 * Return: Number of nodes in a list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	unsigned int len;

	while (h != NULL)
	{
		len = (h->str) ? h->len : 0;
		printf("[%u] %s\n", len, (h->str) ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * _strlen - A function that returns the length of string as an integer
 *
 * @s: String to be counted
 *
 * Return: Length of string
 */
int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
