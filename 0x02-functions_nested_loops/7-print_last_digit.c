#include "main.h"
/**
 * print_last_digit - write the last digit of number
 * @n: The number to test
 *
 * Return: last digit of @n and print it
 */
int print_last_digit(long int n)
{
	if (n < 0)
		n *= -1;
	_putchar(n % 10 + '0');
	return (n % 10);
}
