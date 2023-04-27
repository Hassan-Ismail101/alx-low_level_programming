#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - create a node and add it at the beginning of list
 * @head: the address of the linked list
 * @str: the value of the string member
 * Return: the update linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;
	return (*head);
}
