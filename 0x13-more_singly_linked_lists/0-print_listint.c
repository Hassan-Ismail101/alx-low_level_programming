#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - print the elements of list @h
 * @h: pointer to the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		counter++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
