#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - Safely frees a linked list.
 * @start: Pointer to the first node in the linked list.
 *
 * Return: Number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **start)
{
	size_t length = 0;
	int difference;
	listint_t *temporary;

	if (!start || !*start)
		return (0);

	while (*start)
	{
		difference = *start - (*start)->next;
		if (difference > 0)
		{
			temporary = (*start)->next;
			*start = temporary;
			length++;
		}
		else
		{
			*start = NULL;
			length++;
			break;
		}
	}

	*start = NULL;

	return (length);
}

