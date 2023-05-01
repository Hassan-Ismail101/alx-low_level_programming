#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - free the head node of the list @head
 * @head: pointer to the list
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = (*head)->next;
	temp->next = NULL;
	n = temp->n;
	free(temp);
	return (n);
}
