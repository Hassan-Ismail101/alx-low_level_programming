#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: the number of the arguments
 * @argv: vector of the arguments
 * Return: Always (0) success
 */
int main(int argc, char **argv)
{
	if (*argv != NULL)
		printf("%d\n", argc - 1);
	return (0);
}
