#include "lists.h"
/**
 * insert_nodeint_at_index - A function that frees a linked list
 *
 * @head: Address of pointer to linked list struct
 * @idx: Index of the added node
 * @n: Content of the node
 *
 * Return: Sum of all the content of the linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *probe;

	new = malloc(sizeof(listint_t));
	if (!head || !new)
	{
		return (NULL);
	}
	new->n = n;
	probe = *head;
	probe->next = (*head)->next;
	probe->n = (*head)->n;
	while (probe != NULL)
	{
		if (i == idx && (idx == 0 || !idx))
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		else if (i == idx - 1)
		{
			new->next = probe->next;
			probe->next = new;
			return (new);
		}
		probe = probe->next;
		i++;
	}
	if (probe->next == NULL && i == idx)
	{
		probe->next = new;
		new->next = NULL;
		return (new);
	}
	free(new);
	return (NULL);
}

