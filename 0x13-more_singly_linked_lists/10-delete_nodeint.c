#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delelte node at idx position
 * @head: pointer to the list
 * @idx: the index of the position to add at
 * Return: True if succeeded
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *tempDel;
	listint_t *temp1;
	listint_t *temp2;

	temp1 = *head;
	if (*head == NULL)
		return (-1);
	if (idx == 0)
	{
		*head = (*head)->next;
		temp1->next = NULL;
		free(temp1);
		return (1);
	}
	idx--;
	while (idx > 0 && temp1->next != NULL)
	{
		temp1 = temp1->next;
		idx--;
	}
	if (idx > 0)
		return (-1);
	tempDel = temp1;
	if (tempDel != NULL)
		tempDel = tempDel->next;
	else
		return (-1);
	temp2 = tempDel->next;
	temp1->next = temp2;
	tempDel->next = NULL;
	free(tempDel);
	return (1);
}
