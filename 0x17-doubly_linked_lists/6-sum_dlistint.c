#include "lists.h"
/**
 * sum_dlistint - Returns sum of all values in linked list
 *
 * @head: pointer to first node in doubly linked list
 *
 * Return: Sum of all the values of nodes in a linked list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *probe = head;
	int rolling_sum = 0;

	while (probe)
	{
		rolling_sum += probe->n;
		probe = probe->next;
	}
	return (rolling_sum);
}
