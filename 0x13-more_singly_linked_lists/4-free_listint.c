#include "lists.h"
/**
 * free_listint - A function that prints the number
 *					 of nodes in a linked list
 *
 * @head: pointer to pointer to linked list struct
 *
 * Return: new node of struct type listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
}
