#include "main.h"
/**
 * my_square - check the number with the square of its factors
 * @n: the number
 * @divide: the dominator
 * Return: True if the number is equal to the square of its
 * factor and false if not
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
 * _sqrt_recursion - check if the square root of the number is natural
 * @n: the number
 * Return: true if prime and false if not
 */
int _sqrt_recursion(int n)
{
	if (n < -1)
		return (-1);
	return (my_square(n, 0));
}
