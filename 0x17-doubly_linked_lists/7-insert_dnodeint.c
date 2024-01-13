#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *probe = *h, *new;
    unsigned int index_test = 0;

    new = malloc(sizeof(dlistint_t));
    if (!new)
        return (NULL);
    new->n = n;
    if (!*h && idx == 0)
    {
        new->next = NULL;
        new->prev = NULL;
        *h = new;
        return (new);
    }
    else
    {
        while (probe)
        {
            if (index_test == idx)
            {
                new->next = probe;
                new->prev = probe->prev;
                probe->prev = new;
                (probe->prev)->next = new;
                return (new);
            }
            probe = probe->next;
        }
    }
    return (NULL);
}
