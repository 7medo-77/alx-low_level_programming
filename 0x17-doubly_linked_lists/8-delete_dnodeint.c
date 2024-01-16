#include "lists.h"
/**
 * delete_dnodeint_at_index - Returns pointer to the node added
 *							  at index idx in doubly linked list
 *
 * @h: pointer to first node in doubly linked list
 * @index: index of the list node to be inserted
 *
 * Return: 1 on success
 *		  -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *probe = *head, *temp;
	int index_probe = 0;

	while (probe)
	{
		if (index_probe == index)
		{
			if (index_probe == 0)
			{
				temp = probe;
				probe->next->prev = NULL;
				probe = probe->next;
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
				probe = probe->next;
				free(temp);
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

