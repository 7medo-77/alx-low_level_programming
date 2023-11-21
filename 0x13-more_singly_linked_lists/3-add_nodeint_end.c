#include "lists.h"
/**
 * add_nodeint_end - A function that prints the number
 *					 of nodes in a linked list
 *
 * @n: Content of the node
 * @head: pointer to pointer to linked list struct
 *
 * Return: new node of struct type listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *probe, *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	probe = *head;

	if (*head == NULL)
	{
		*head = new;
		(*head)->next = NULL;
	}
	else
	{
		while (probe->next)
		{
			probe = probe->next;
		}
		probe->next = new;
		new->next = NULL;
	}

	return (new);
}
