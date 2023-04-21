#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers with delamiter
 * @separator: the delamiter
 * @n: the number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (separator != NULL)
	{
		va_start(ptr, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ptr, int));
			if (i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(ptr);
	}
}
