#include "main.h"
/**
 * my_prime - check if the number is prime with increment of
 * the domenator
 * @n: the number
 * @divide: the dominator
 * Return: True if the number is prime and false if not
 */
int my_square(int n, int divide)
{
	if (n == divide * divide)
		return (divide);
	if (n == divide)
		return (-1);

	return (0 + my_square(n, divide + 1));
}
/**
 * is_prime_number - check if the number is prime or not
 * @n: the number
 * Return: true if prime and false if not
 */
int _sqrt_recursion(int n)
{
	if (n < -1)
		return (-1);
	return (my_square(n, 0));
}
