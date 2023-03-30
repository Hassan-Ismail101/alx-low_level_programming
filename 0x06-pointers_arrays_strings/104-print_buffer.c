#include "main.h"
#include <ctype.h>

/**
 * print_buffer - print bytes of buffer
 * @b: the pointer to the buffer
 * @size: the size of the string
 */

void print_buffer(char *b, int size)
{
	if (size <= 0)
		printf("\n");
	else
	{
		int itr;
		int loop;

		itr = 0;
		loop = 0;
		while (itr < size)
		{
			printf("%08x: ", itr);
			for (loop = 0; loop < 10; loop += 2)
			{
				if (itr + loop > size - 1)
				{
					printf("%4s ", " ");
					continue;
				}
				printf("%02x", *(b + itr + loop));
				printf("%02x ", *(b + itr + loop + 1));
			}
			for (loop = 0; loop < 10; loop++)
			{
				if (itr + loop > size - 1)
					break;
				if (isprint(*(b + itr + loop)))
					printf("%c", *(b + itr + loop));
				else
					printf(".");
			}
			printf("\n");
			itr += 10;
		}
	}
}
