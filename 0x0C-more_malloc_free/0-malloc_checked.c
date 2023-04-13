#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - create a memory in heap
 * @b: the size of the mem
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
