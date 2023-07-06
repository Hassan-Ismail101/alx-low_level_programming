#include "main.h"
/**
 * get_bit - check the number at specific bit
 * @n: the number
 * @index: the index of bit
 * Return: the kind of bit 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n & (1 << index)) > 0);
}
