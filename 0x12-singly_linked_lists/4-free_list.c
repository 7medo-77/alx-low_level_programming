#include "lists.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * free_list - Frees dynamically allocated memory reserved
 *			   for linked list and all its internal elements
 *
 * @head: Pointer to the first node of linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	if (head == NULL)
		return;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
