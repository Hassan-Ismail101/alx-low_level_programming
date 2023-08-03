#include "main.h"
#include <stdio.h>
/**
 * print_binary - function to print the convertion of uint to bin
 * @n: ulint number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int one = 1;
	unsigned int counter = 0;
	unsigned long int temp = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	temp = n;
	while (temp)
	{
		if (counter)
			one <<= 1UL;
		counter++;
		temp >>= 1;
	}
	while (counter)
	{
		if ((one & n) >= 1)
			_putchar('1');
		else
			_putchar('0');
		one >>= 1UL;
		counter--;
	}
}
