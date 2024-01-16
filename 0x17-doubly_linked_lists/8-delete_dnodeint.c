#include "lists.h"
/**
 * delete_dnodeint_at_index - Returns pointer to the node added
 *							  at index idx in doubly linked list
 *
 * @head: pointer to first node in doubly linked list
 * @index: index of the list node to be inserted
 *
 * Return: 1 on success
 *		  -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *probe = *head, *temp;
	unsigned int index_probe = 0;

	if (!head)
		return (-1);
	while (probe)
	{
		if (index_probe == index)
		{
			if (index == 0)
			{
				temp = probe;
				probe = probe->next;
				*head = probe;
				(*head)->prev = NULL;
				free(temp);
			}
			else if (probe->next == NULL)
			{
				temp = probe;
				probe->prev->next = NULL;
				probe = probe->next;
				free(temp);
			}
			else
			{
				temp = probe;
				probe->prev->next = probe->next;
				probe->next->prev = probe->prev;
				probe = probe->next, free(temp);
			}
			return (1);
		}
		else
		{
			probe = probe->next;
			index_probe++;
		}
	}
	return (-1);
}
