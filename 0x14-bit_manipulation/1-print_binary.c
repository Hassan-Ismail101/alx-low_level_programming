#include "main.h"
/**
 * power - calculate the power of numbers
 * @base: the first number
 * @expon: the exponential
 * Return: result of power
 */
unsigned long int power(unsigned int base, unsigned int expon)
{
	unsigned long int result = 1;

	while (expon--)
		result *= base;
	return (result);
}
/**
 * print_binary - convert the integer number to binary
 * @n: the integer number
*/
void print_binary(unsigned long int n)
{
	unsigned long int base = 1;
	int expon = 0;
	int start = 0;

	while (base < n)
	{
		base *= 2;
		expon++;
	}
	while (expon >= 0)
	{
		base = power(2, expon);
		if (base <= n)
		{
			printf("1");
			start = 1;
			n -= base;
		}
		else
		{
			if (start || n == 0)
				printf("0");
		}
		expon--;
	}
}
