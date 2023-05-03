#include "lists.h"
#include "stdlib.h"
#include "stdio.h"
/**
 * reverse_listint - reverses the list
 * @head: pointer to the first node
 * Return: pointer to the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1;
	listint_t *temp2;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);
	temp1 = *head;
	temp2 = *head;
	*head = (*head)->next;
	temp2->next = NULL;
	while (*head != NULL)
	{
		temp1 = *head;
		*head = (*head)->next;
		temp1->next = temp2;
		temp2 = temp1;
	}
	*head = temp2;
	return (*head);
}
