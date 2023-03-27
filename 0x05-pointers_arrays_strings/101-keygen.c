#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	time_t t;

	srand((unsigned) time(&t));
	printf("%d", rand() % 1000);
	return (0);
}
