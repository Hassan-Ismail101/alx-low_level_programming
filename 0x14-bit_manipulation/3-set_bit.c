#include "main.h"
#include <stdio.h>
/**
 * set_bit - function to set the value of bit at index
 * @n: number to get bit from
 * @index: the index of the bit
 * Return: the value of the bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
