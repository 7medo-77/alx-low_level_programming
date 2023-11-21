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

	temp = *head;
	content = temp->n;
	free(*head);
	*head = (*head)->next;

	return (content);
}
