#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - calculate the sum of all the data(n)
 * @head: pointer to the list
 * Return: pointer to the node
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
