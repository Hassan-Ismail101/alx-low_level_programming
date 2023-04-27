#include "lists.h"
#include <stdlib.h>
/**
 * list_len - calculate the number of node in linked list
 * @h: the pointer to the head of linked list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
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
