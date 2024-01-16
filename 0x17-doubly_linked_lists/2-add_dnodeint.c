#include "lists.h"

/**
 * add_dnodeint - Adds a node at the beginning of a doubly linked list
 *
 * @head: pointer to first node in doubly linked list
 * @n: integer content of the node
 *
 * Return: Pointer to the newly created node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (!head)
	{
		new->prev = NULL;
		(*new).next = NULL;
		*head = new;
	}
	else
	{
		new->prev = NULL;
		(*new).next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
