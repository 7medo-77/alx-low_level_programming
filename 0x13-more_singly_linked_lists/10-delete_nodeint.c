#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at a specified
 *							 index in a linked list.
 *
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int index_i = 0;
	listint_t *probe, *curr_add_one;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		probe = (*head)->next;
		free(*head);
		*head = probe;
		return (1);
	}

	probe = *head;

	while (index_i < index - 1)
	{
		if (!probe)
			return (-1);
		probe = probe->next;
		index_i++;
	}

	if (!probe || !(probe->next))
		return (-1);

	switch (!probe || !(probe->next)) {
	case 1:
		return (-1);
	default:
		curr_add_one = probe->next;
		probe->next = curr_add_one->next;
		free(curr_add_one);
		return (1);
	}
}
