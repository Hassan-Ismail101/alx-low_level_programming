#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print @n number of array @a
 * @a: pointer to the array
 * @n: the number of elements should be printed
 */

void print_array(int *a, int n)
{
	int itr;

	for (itr = 0; itr < n; itr++)
	{
		printf("%d", *(a + itr));
		if (itr < n -1)
			printf(", ");
	}
	printf("\n");
}
