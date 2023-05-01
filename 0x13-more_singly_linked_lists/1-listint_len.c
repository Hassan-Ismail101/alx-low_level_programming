#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - count the elements of list @h
 * @h: pointer to the list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
