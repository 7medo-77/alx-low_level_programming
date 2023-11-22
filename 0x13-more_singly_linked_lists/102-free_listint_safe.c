#include "lists.h"

/**
 * free_safe_listint - Frees a linked list safely.
 * @head: Pointer to the first node in the linked list.
 *
 * Return: Number of elements in the freed list.
 */
size_t free_safe_listint(listint_t **head)
{
	size_t freed_elements = 0;
	int difference;
	listint_t *temp_node;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		difference = *head - (*head)->next;

		if (difference > 0)
		{
			temp_node = (*head)->next;
			free(*head);
			*head = temp_node;
		}
		else if (difference == 0)
		{
			free(*head);
			*head = NULL;
			++freed_elements;
		}
		else
		{
			*head = NULL;
		}

		++freed_elements;
	}

	return (freed_elements);
}

