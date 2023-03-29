#include "main.h"
#include <stdio.h>
/**
 * infinite_add - add two string of digits
 * @n1: the first string
 * @n2: the second string
 * @r: the buffer should contain the result
 * @size_r: the size of the buffer
 * Return: The pointer to the buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1Itr = 0, n2Itr = 0, rItr, digBuf = 0, sum = 0;

	*(r + size_r) = '\0';
	while (*(n1 + n1Itr) != '\0')
		n1Itr++;
	while (*(n2 + n2Itr) != '\0')
		n2Itr++;
	if (n1Itr > size_r || n2Itr > size_r)
		return (0);
	rItr = size_r - 1;
	n1Itr--;
	n2Itr--;
	while ((rItr >= 0) && ((n1Itr >= 0) || (n2Itr >= 0)))
	{
		sum = 0;
		if (n1Itr < 0 && n2Itr >= 0)
			sum += *(n2 + n2Itr--) - 48 + digBuf;
		else if (n2Itr < 0 && n1Itr >= 0)
			sum += *(n1 + n1Itr--) - 48 + digBuf;
		else
		{
			sum += (*(n1 + n1Itr--) - '0' + *(n2 + n2Itr--) - '0' + digBuf);
			digBuf = 0;
		}
		digBuf = sum / 10;
		//printf("in loop %dDigbuf: %d\n", rItr, digBuf);
		*(r + rItr--) = (sum % 10) + '0';
	}
	if (digBuf)
	{
		//printf("digBuf: %d\n", digBuf);
		*(r + rItr--) = digBuf + '0';
	}
	if (n1Itr > -1 || n2Itr > -1 || rItr < 0)
		return (0);
	return (r + rItr + 1);
}
