#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings with delamiter
 * @separator: the delamiter
 * @n: the number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *temp;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(ptr, char *);
		if (temp != NULL)
			printf("%s", temp);
		else
			printf("nil");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
