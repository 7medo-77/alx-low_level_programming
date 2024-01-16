#include "lists.h"
/**
 * print_dlistint - prints all the contents of a double linked list
 *
 * @h: pointer to first node in doubly linked list
 *
 * Return: number of nodes in a doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
