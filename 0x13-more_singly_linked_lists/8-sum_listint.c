#include "lists.h"
/**
 * sum_listint - A function that frees a linked list
 *
 * @head: Address of pointer to linked list struct
 *
 * Return: Sum of all the content of the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
