#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - print the contain of nodes
 * @h: pointer to the linked list
 * Return: the number of nodes in linked list
 */
size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		counter++;
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (counter);
}
