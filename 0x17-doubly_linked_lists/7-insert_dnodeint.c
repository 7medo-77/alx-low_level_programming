#include "lists.h"
/**
 * insert_dnodeint_at_index - Returns pointer to the node added 
 *							  at index idx in doubly linked list
 *
 * @head: pointer to first node in doubly linked list
 * @idx: index of the list node to be inserted
 * @n: integer content of the node
 *
 * Return: Pointer to node added at index idx in doubly linked list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *probe = *h, *new;
	unsigned int index_test = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!*h && idx == 0)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	else
	{
		while (probe)
		{
			if (index_test == idx)
			{
				new->next = probe;
				new->prev = probe->prev;
				probe->prev = new;
				(probe->prev)->next = new;
				return (new);
			}
			probe = probe->next;
			index_test++;
		}
	}
	return (NULL);
}
