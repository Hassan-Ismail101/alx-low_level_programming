#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - free the list @h
 * @head: pointer to the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		temp->next = NULL;
		free(temp);
	}
}
