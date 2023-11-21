#include "lists.h"
/**
 * free_listint - A function that frees a linked list
 *
 * @head: pointer to pointer to linked list struct
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
