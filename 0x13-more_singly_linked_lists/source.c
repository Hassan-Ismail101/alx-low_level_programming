#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

int main(void)
{
	
	listint_t *node;
	listint_t *head2;

	
	/*
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
        add_nodeint_end(&head, 98);
        add_nodeint_end(&head, 402);
        add_nodeint_end(&head, 1024);
	print_listint_safe(head);
	printf("-------------------\n");
	*/
	head2 = NULL;
	node = add_nodeint(&head2, 0);
	add_nodeint(&head2, 1);
	add_nodeint(&head2, 2);
	add_nodeint(&head2, 3);
	add_nodeint(&head2, 4);
	node->next = add_nodeint(&head2, 98);
	/*
	add_nodeint(&head2, 402);
	add_nodeint(&head2, 1024);
	*/
	print_listint_safe(head2);
	return (0);
}
