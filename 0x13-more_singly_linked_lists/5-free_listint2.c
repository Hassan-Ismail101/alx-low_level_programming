#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - free the list @head
 * @head: pointer to the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
	}
	head = (listint_t **)NULL;
}
