#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
unsigned int _strlen(const char *str);
/**
 * add_node - A function that prints the number of nodes in a linked list
 *
 * @head: List whose nodes are to be counted
 * @str: List whose nodes are to be counted
 *
 * Return: Number of nodes in a list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t)) ? malloc(sizeof(list_t)) : NULL;
	len = _strlen(str);
	new->str = malloc(sizeof(char) * len) ?
		malloc(sizeof(char) * len + 1) : NULL;

	new->str = strdup(str);
	new->len = len;


	new->next = *head;
	*head = new;

	return (*head);
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
