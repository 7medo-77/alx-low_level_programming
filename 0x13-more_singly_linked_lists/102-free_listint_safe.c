#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a linked list the safe way and returns length
 *
 * @header_node: Double pointer to the head of the list
 *
 * Return: the size of the list that was free'd.
 */


size_t free_listint_safe(listint_t **header_node)
{
	size_t free_counter = 0;
	int difference_add;
	listint_t *curr_node;

	if (!header_node || !*header_node)
		return (0);

	while (*header_node)
	{
		difference_add = *header_node - (*header_node)->next;

		if (difference_add > 0)
		{
			curr_node = (*header_node)->next;
			free(*header_node);
			*header_node = curr_node;
			free_counter++;
		}
		else
		{
			free(*header_node);
			*header_node = NULL;
			free_counter++;
			break;
		}
	}

	*header_node = NULL;
	return (free_counter);
}
