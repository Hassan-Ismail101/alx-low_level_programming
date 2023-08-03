#include "main.h"
#include <stdio.h>
/**
 * get_bit - function to print the value of bit at index
 * @n: number to get bit from
 * @index: the index of the bit
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index == sizeof(long int) * 8)
		return (-1);
	return (((1UL << index) & n) >= 1);
}
