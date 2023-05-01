#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

int main(void)
{
	int sum;
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
        add_nodeint_end(&head, 98);
        add_nodeint_end(&head, 402);
        add_nodeint_end(&head, 1024);
	sum = sum_listint(head);
	printf("sum = %d\n", sum);
	print_listint(head);
	return (0);
}
