#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_new_node2 - create a new node
 * @n: value of the element
 * Return: pointer to new node
 */
listint_t *create_new_node2(const int n)
{
        listint_t *new;

        new = malloc(sizeof(listint_t));
        if (new == NULL)
                return (NULL);
        new->n = n;
        new->next = NULL;
        return (new);
}
/**
 * insert_nodeint_at_index - add node at idx position
 * @head: pointer to the list
 * @idx: the index of the position to add at
 * @n: the value of member n
 * Return: pointer to the new list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;

	new = create_new_node2(n);
	if (new == NULL)
		return (NULL);

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
