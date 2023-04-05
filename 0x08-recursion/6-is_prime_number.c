#include "main.h"
int my_prime(int n, int divide)
{
	if (divide == 1)
		return (1);
	return ((n % divide) && my_prime(n, divide - 1));
}
/**
 * is_prime_number - check if the number is prime or not
 * @n: the number
 * Return: true if prime and false if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (my_prime(n, n / 2 - 1));
}
