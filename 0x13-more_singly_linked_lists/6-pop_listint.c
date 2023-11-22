#include "lists.h"
/**
 * pop_listint - A function that removes the head of a linked list
 *
 * @head: Address of pointer to linked list struct
 *
 * Return: Integer content of the head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int content = 0;

	if (!head)
	{
		return (0);
	}
	else
	{
		temp = *head;
		content = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (content);
}
