#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free the linked list
 * @head: The head of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		temp->next = NULL;

		free(temp->str);
		free(temp);
	}

}
