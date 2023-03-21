#include <stdio.h>
#include "main.h"
/**
 * print_even_fibonacci - write the @n times of fibonacci numbers
 * @num: the max range for fibonacci num
 */
void print_even_fibonacci(unsigned long int num)
{
	unsigned long int temp1;
	unsigned long int temp2;
	unsigned long int currentValue;

	temp2 = 0;
	temp1 = 1;
	currentValue = 1;
	while (num > currentValue)
	{
		currentValue = temp1 + temp2;
		temp2 = temp1;
		temp1 = currentValue;
		if (temp1 + temp2 < num)
			printf("%li, ", currentValue);
		else
		{
			printf("%li\n", currentValue);
			break;
		}
	}
}
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print_even_fibonacci(4000000);
	return (0);
}
