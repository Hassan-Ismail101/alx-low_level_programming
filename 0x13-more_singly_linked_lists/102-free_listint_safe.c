#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint_safe - free list
 * @h: the pointer of the first node
 * Return: the number of nodes
 */
size_t free_listint_safe(const listint_t **h)
{
	const listint_t *temp;
	size_t counter;

	counter = 0;
	is_safe = 0;
	while (*h != NULL)
	{
		temp = *head;
		printf("[%p] %d\n", (void *)*head, (*head)->n);
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
		counter++;
	}
	if (is_safe)
		exit(is_safe);
	return (counter);
}
