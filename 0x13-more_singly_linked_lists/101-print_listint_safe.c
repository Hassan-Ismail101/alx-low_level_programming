#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - printing list
 * @head: the pointer of the first node
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	size_t counter;

	counter = 0;
	temp = head;
	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		counter++;
	}
	return (counter);
}
