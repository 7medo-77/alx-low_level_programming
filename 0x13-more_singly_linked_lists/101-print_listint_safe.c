#include "lists.h"

/**
 * print_listint_safe - Safely prints a linked list with a loop.
 * @head: Pointer to the first node of the linked list.
 * Return: Number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = NULL;
	const listint_t *runner = NULL;
	size_t node_count = 0;

	for (current = head; current != NULL; current = current->next)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;

		runner = head;

		while (runner != current)
		{
			if (runner == current->next)
			{
				printf("-> [%p] %d\n", (void *)current->next, current->next->n);
				return (node_count);
			}
			runner = runner->next;
		}

		if (!head)
			exit(98);
	}

	return (node_count);
}

