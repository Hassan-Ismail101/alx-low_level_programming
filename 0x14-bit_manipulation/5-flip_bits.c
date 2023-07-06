#include "main.h"
/**
 * flip_bits - convert the first number into second one
 * @n: the first number
 * @m: the second number
 * Return: 1 if it worked or -1 if not
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int temp;

	temp = n ^ m;
	while (temp)
	{
		counter += (1 & temp);
		temp >>= 1;
	}
	return (counter);
}
