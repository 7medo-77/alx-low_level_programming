#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
unsigned int _strlen(const char *str);
/**
 * add_node_end - A function that prints the number of nodes in a linked list
 *
 * @head: List whose nodes are to be counted
 * @str: List whose nodes are to be counted
 *
 * Return: Number of nodes in a list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t **probe, *new;
	unsigned int len;
	(void) **probe;

	*probe = *head;
	while ((*probe)->next != NULL)
	{
		*probe = (*probe)->next;
	}

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}

	len = _strlen(str);
	new->str = malloc(sizeof(char) * len) ?
		malloc(sizeof(char) * len) : NULL;

	new->str = strdup(str);
	new->len = len;

	(*probe)->next = new;
	new->next = NULL;
	return (new);

}
/**
 * _strlen - A function that prints the number of nodes in a linked list
 * @str: String whose length is to be counted
 *
 * Return: String length
 */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i])
		i++;
	return (i);
}
