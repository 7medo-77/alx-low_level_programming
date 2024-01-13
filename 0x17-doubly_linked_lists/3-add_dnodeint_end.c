#include "lists.h"
/**
 * add_dnodeint_end - Adds a node at the end of a doubly linked list
 *
 * @head: pointer to first node in doubly linked list
 * @n: integer content of the node
 *
 * Return: Pointer to the newly created node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *probe = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (probe->next)
			probe = probe->next;
		probe->next = new;
		new->prev = probe;
		probe = new;
	}
	return (new);
}
