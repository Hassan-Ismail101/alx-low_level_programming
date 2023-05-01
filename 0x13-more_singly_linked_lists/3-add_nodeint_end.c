#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_new_node1 - create a new node
 * @n: value of the element
 * Return: pointer to new node
 */
listint_t *create_new_node1(const int n)
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
 * add_nodeint_end - add new node at the end of the list @h
 * @head: pointer to the list
 * @n: the value of the element
 * Return: pointer the new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	ptr = create_new_node1(n);
	if (ptr == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = ptr;
	return (*head);
}
