#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - return the value of (index)th node
 * @head: pointer to the list
 * @index: the index of the node
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL && index)
	{
		temp = temp->next;
		index--;
	}
	if (index)
		return (NULL);
	return (temp);
}
