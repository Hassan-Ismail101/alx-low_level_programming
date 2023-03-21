#include <stdio.h>
#include "main.h"
/**
 * print_fibonacci - write the @n times of fibonacci numbers
 * @n: the number of counts
 */
void print_fibonacci(int n)
{
	double temp1;
	double temp2;
	double currentValue;

	temp2 = 0;
	temp1 = 1;
	while (n--)
	{
		currentValue = temp1 + temp2;
		if (n != 0)
			printf("%.0lf, ", currentValue);
		else
			printf("%.0lf\n", currentValue);
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
