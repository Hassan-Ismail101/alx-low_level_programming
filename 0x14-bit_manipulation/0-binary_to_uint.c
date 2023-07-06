#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * power - calculate the power of numbers
 * @base: the first number
 * @expon: the exponential
 * Return: result of power
 */
unsigned int power(unsigned int base, unsigned int expon)
{
	int result = 1;

	while (expon--)
		result *= base;
	return (result);
}
/**
 * binary_to_uint - convert binary number to integer number
 * @b: the string of binary numbers
 * Return: integer number after converting
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int itr = 0, base = 0;

	if (b == NULL)
		return (0);
	while (*(b + itr) != '\0')
	{
		if (*(b + itr) != '0' && *(b + itr) != '1')
			return (0);
		itr++;
	}
	itr--;
	while (itr >= 0)
	{
		result += ((*(b + itr) - 48) * power(2, base));
		base++;
		itr--;
	}
	return (result);
}
