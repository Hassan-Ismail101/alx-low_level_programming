#include "main.h"
/**
 * print_sign - test is the sign of number
 * @n: The number to test
 *
 * Return: 1 and print '+' if the number @n is greater than zero
 * In case of zero, 0 is returned and print '0'
 * In case of negative, -1 is returned and print '-'
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
