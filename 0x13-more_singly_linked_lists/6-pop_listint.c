#include "lists.h"
/**
 * pop_listint - A function that frees a linked list
 *
 * @head: Address of pointer to linked list struct
 *
 * Return: Integer content of the head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int content;

	if (!head)
	{
		return (0);
		(void)content;
	}
	else if (head)
	{
		temp = *head;
		content = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (content);
}
