#include "main.h"
/**
 * clear_bit - reset the number at specific bit
 * @n: the number
 * @m: the index of bit
 * Return: 1 if it worked or -1 if not
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n &= ~(1L << index);
	return (1);
}
