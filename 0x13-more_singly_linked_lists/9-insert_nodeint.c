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
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	probe = *head;
	while (probe != NULL)
	{
		if (i == n - 1)
		{
			probe->next = new;
		}
		else if (i == n + 1)
		{
			new->next = probe;
		}
		else if (n == 0)
		{
			new->next = *head;
			*head = new;
		}
		if (probe == new && probe->next == NULL)
		{
			new->next = NULL;
		}
		probe = probe->next;
		i++;
	}
	return (new);

}
