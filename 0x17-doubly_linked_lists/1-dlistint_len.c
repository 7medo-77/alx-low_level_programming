#include "lists.h"
/**
 * dlistint_len - Number of nodes in a singly linked list
 *
 * @h: pointer to first node in doubly linked list
 *
 * Return: Number of nodes in a doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
