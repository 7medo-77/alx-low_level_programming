#include "lists.h"
/**
 * add_nodeint - A function that adds new node
 *				 at the beginning of a linked list
 *
 * @n: Content of the node
 * @head: pointer to pointer to linked list struct
 *
 * Return: Number of nodes in a list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
