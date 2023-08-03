#include "main.h"
#include <stdio.h>
/**
 * get_endianness - function to check if the mem store in little or big endien
 * return: 1 if little and 0 if big
 */
int get_endianness(void)
{
	unsigned int number = 0x44332211;
	void *ptr = &number;
	if (*(char *)ptr == 0x11)
		return (1);
	return (0);
}
