#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *probe = head;
	int test_index = 0;

	if (!head)
		return (NULL);

	while (probe)
	{
		if (test_index == index)
			return (probe);
		else
		{
			probe = probe->next;
			test_index++;
		}
	}
	return (NULL);
}

