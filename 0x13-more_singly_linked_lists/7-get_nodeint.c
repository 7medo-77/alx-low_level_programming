#include "lists.h"
/**
 * get_nodeint_at_index - A function that returns the value inside
 *						  node of index index in a linked list
 *
 * @head: Address of pointer to linked list struct
 * @index: Index of the node in the linked list
 *
 * Return: pointer to struct in linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
