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

	probe = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	while (probe->next)
	{
		probe = probe->next;
	}
	if (*head == NULL)
		*head = new;
	else
		probe->next = new;

	new->next = NULL;
	return (new);
}
