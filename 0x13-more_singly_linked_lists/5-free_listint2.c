#include "lists.h"
/**
 * free_listint2 - A function that frees a linked list
 *
 * @head: pointer to pointer to linked list struct
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *probe, *null;

	null = NULL;
	if (*head)
	{
		probe = *head;
		while (probe != NULL)
		{
			temp = probe;
			probe = probe->next;
			free(temp);
		}
		*head = null;
	}
	else
	{
		return;
	}
}
