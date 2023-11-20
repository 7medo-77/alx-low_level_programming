#include "main.h"
/**
 * print_listint - A function that prints the number of nodes in a linked list
 *
 * @h: List whose nodes are to be counted
 *
 * Return: Number of nodes in a list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
