#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

int main(void)
{
	listint_t *head;
	listint_t *node;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	print_listint(head);
	node = get_nodeint_at_index(head, 3);
	printf("->  %d\n", node->n);
	node = get_nodeint_at_index(head, 4);
        printf("->  %d\n", node->n);
	return (0);
}
