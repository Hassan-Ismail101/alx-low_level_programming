#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

int main(void)
{
	list_t *head;
	size_t n;

	head = NULL;
	add_node(&head, "Alexandro");
	add_node(&head, "Asaia");
	add_node(&head, "Augustin");
	add_node(&head, "Bennett");
	add_node(&head, "Bilal");
	add_node(&head, "Chandler");
        add_node(&head, "Damian");
        add_node(&head, "Daniel");
        add_node(&head, "Dora");
        add_node(&head, "Electra");
	add_node(&head, "Joe");
        add_node(&head, "John");
        add_node(&head, "John");
        add_node(&head, "Josquin");
        add_node(&head, "Kris");
	add_node(&head, "Marine");
        add_node(&head, "Mason");
        add_node(&head, "Praylin");
        add_node(&head, "Rick");
        add_node(&head, "Rick");
	add_node(&head, "Rona");
        add_node(&head, "Siphan");
        add_node(&head, "Sravanthi");
        add_node(&head, "Steven");
        add_node(&head, "Tasneem");
	add_node(&head, "William");
        add_node(&head, "Zee");

	n = print_list(head);
	printf("-> %lu elements\n", n);
	
	return (0);
}
