#include <stdio.h>
/**
 * main - entry point
 * @argc: the number of the arguments
 * @argv: vector of the arguments
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
		printf("%s\n", *(argv + counter));
	return (0);
}
