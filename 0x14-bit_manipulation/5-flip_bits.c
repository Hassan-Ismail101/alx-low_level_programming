#include "main.h"
#include <stdio.h>
/**
 * flip_bits - function to print the value of counts to get n like m
 * @n: number to tranform
 * @m: number to be like
 * Return: the value of the counts
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int temp;

	temp = n ^ m;
	while (temp)
	{
		if (1 & temp)
			counter++;
		temp >>= 1;
	}
	return (counter);
}
