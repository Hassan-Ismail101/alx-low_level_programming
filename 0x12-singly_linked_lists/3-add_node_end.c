#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>
/**
 * add_node_end - create a node and add it at the end of list
 * @head: the address of the linked list
 * @str: the value of the string member
 * Return: the update linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	temp = NULL;
	new = NULL;
	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		temp = new->next;
	}
	temp = NULL;
	return (*head);
}
