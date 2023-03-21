#include <stdio.h>
#include "main.h"
/**
 * print_fibonacci - write the @n times of fibonacci numbers
 * @n: the number of counts
 */
void print_fibonacci(int n)
{
	long double temp1;
	long double temp2;
	long double currentValue;

	temp2 = 1;
	printf("1, ");
	temp1 = 2;
	printf("2, ");
	n -= 2;
	while (n--)
	{
		currentValue = temp1 + temp2;
		if (n != 0)
			printf("%.0Lf, ", currentValue);
		else
			printf("%.0Lf\n", currentValue);
		temp2 = temp1;
		temp1 = currentValue;
	}
}
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print_fibonacci(98);
	return (0);
}
