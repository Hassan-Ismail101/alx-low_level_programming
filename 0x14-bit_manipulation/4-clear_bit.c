#include "main.h"
/**
 * clear_bit - reset the number at specific bit
 * @n: the number
 * @index: the index of bit
 * Return: 1 if it worked or -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n &= ~(1L << index);
	return (1);
}
