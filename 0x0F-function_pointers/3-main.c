#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"
/**
 * main -entry point
 *
 * Return: true success
 */
int main(int argc, char **argv)
{
	int (*ptr)(int, int);

	ptr = get_op_func(argv[2]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (strcmp(argv[3], "0") == 0 && (strcmp(argv[2], "/") == 0
				|| strcmp(argv[2], "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", ptr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
