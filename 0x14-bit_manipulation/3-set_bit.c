#include "main.h"
/**
 * set_bit - check the number at specific bit
 * @n: the number
 * @index: the index of bit
 * Return: the kind of bit 0 or 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	*n = *n | (1 << index);
	return (*n);
}
