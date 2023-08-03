#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - function to print the convertion of uint to bin
 * @n: ulint number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int one = 1;
	unsigned int counter = 0;

	if (n == 0)
	{
		printf("0");
	}
	while (n >> counter)
	{
		counter++;
		one <<= 1;
	}
	one >>= 1;
	while (counter)
	{
		printf("%d", (one & n) >= 1);
		one >>= 1;
		counter--;
	}
}
