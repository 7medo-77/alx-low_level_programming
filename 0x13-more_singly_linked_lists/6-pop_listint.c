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

	if (head)
	{
		temp = malloc(sizeof(listint_t));
		temp = *head;
		temp->n = (*head)->n;
		temp->next = NULL;
		content = temp->n;
		free(temp);
		*head = (*head)->next;
	}
	else if (!head)
		return (0);

	return (content);
}
