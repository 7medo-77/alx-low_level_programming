#include "lists.h"
/**
 * free_dlistint - Frees double linked list
 *
 * @head: pointer to first node in doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp = malloc(sizeof(dlistint_t));

    while (head)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}
