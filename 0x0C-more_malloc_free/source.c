#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
int main(void)
{
	char *c;
	int *i;
	float *f;
	double *d;
	char *concat;
	char *a;

	c = malloc_checked(sizeof(char) * 1024);
	printf("%p\n", (void *)c);
	i = malloc_checked(sizeof(int) * 402);
	printf("%p\n", (void *)i);
	f = malloc_checked(sizeof(float) * 100000000);
	printf("%p\n", (void *)f);
	d = malloc_checked(INT_MAX);
	printf("%p\n", (void *)d);
	free (c);
	free (i);
	free (f);
	free (d);
	concat = string_nconcat("Best ", "School !", 10);
	printf("%s\n", concat);
	free(concat);
	a = _calloc(98, sizeof(char));
	strcpy(a + 4, " School! :)\n");
	a[97] = '!';
	simple_print_buffer(a, 98);
	free(a);
	return (0);
}
