#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function to sum the definite args
 * @n: the number of args
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ptr;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
