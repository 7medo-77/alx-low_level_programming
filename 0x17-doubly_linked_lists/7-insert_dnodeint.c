#include "lists.h"
/**
 * add_dnodeint_end - Adds a node at the end of a doubly linked list
 *
 * @head: pointer to first node in doubly linked list
 * @n: integer content of the node
 *
 * Return: Pointer to the newly created node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/**
 * add_dnodeint - Adds a node at the beginning of a doubly linked list
 *
 * @head: pointer to first node in doubly linked list
 * @n: integer content of the node
 *
 * Return: Pointer to the newly created node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/**
 * insert_dnodeint_at_index - Returns pointer to the node added
 *							  at index idx in doubly linked list
 *
 * @h: pointer to first node in doubly linked list
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

	while (probe)
	{
		if (index_test == idx)
		{
			if (probe->next == NULL)
				return (add_dnodeint_end(h, n));
			else if (idx == 0)
				return (add_dnodeint(h, n));
			new->next = probe;
			new->prev = probe->prev;
			(probe->prev)->next = new;
			probe->prev = new;
			return (new);
		}
		else
		{
			probe = probe->next;
			index_test++;
		}
	}
	return (NULL);
}
