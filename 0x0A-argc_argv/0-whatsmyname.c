#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: vector of the arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
