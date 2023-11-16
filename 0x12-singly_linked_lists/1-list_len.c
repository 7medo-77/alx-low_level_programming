#include <stdio.h>
#include "lists.h"
/**
 * list_len - A function that prints the number of nodes in a linked list
 *
 * @h: List whose nodes are to be counted
 *
 * Return: Number of nodes in a list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
