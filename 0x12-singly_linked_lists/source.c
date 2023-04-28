#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

int main(void)
{
	list_t *head;
	size_t n;

	head = NULL;
	add_node_end(&head, "Alexandro");
	add_node_end(&head, "Asaia");
	add_node_end(&head, "Augustin");
	n = print_list(head);
	printf("-> %lu elements\n", n);
	free_list(head);	
	return (0);
}
