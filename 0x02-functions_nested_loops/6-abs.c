#include "main.h"
/**
 * _abs - writes the number in absolute value
 * @n: The number to return
 *
 * Return: @n in its absolute value
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
