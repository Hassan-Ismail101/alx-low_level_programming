#include "main.h"
/**
 * print_to_98 - write numbers until reach 98
 * @n: The number to test
 *
 * Return: group of numbers between @n and 98
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n++);
	}
	while (n > 98)
	{
		printf("%i, ", n--);
	}
	printf("98\n");
}
