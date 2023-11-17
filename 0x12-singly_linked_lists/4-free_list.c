#include "lists.h"
#include <stdio.h>
#include <stdarg.h>
/***/
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
