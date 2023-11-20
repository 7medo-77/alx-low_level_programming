#include "lists.h"
/**
 * listint_len- A function that prints the number of nodes in a linked list
 *
 * @h: List whose nodes are to be counted
 *
 * Return: Number of nodes in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t	len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
