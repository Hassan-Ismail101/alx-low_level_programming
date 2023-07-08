#include "main.h"
/**
 * get_endianness - check the way of storing bytes in memory
 * Return: 1 if LE or 0 if BE
 */
int get_endianness(void)
{
	unsigned int x = 0xAABBCCDD;
	void *ptr = &x;

	if (*(unsigned char *)ptr == 0xDD)
		return (1);
	return (0);
}
