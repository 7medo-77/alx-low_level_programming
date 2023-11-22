#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Reverse a Linked list
 *
 * @head: Double pointer to the head of the list.
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *next_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = next_node;
	}
	*head = before;

	return (*head);
}
