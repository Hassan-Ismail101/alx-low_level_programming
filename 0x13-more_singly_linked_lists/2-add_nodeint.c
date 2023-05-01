#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_new_node - create a new node
 * @n: value of the element
 * Return: pointer to new node
 */
listint_t *create_new_node(const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}
/**
 * add_nodeint - add new node at the beginning of the list @h
 * @head: pointer to the list
 * @n: the value of the element
 * Return: pointer the new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = create_new_node(n);
	if (ptr == NULL)
		return (NULL);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
