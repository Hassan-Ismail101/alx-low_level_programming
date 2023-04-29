#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_char - print character
 * @ptr: pointer to the argument list
 */
void print_char(va_list *ptr)
{
	printf("%c\n", va_arg(*ptr, int));
}
/**
 * print_int - print integer
 * @ptr: pointer to the argument list
 */
void print_int(va_list *ptr)
{
	printf("%i\n", va_arg(*ptr, int));
}
/**
 * print_float - print float number
 * @ptr: pointer to the argument list
 */
void print_float(va_list *ptr)
{
	printf("%f\n", (float)va_arg(*ptr, double));
}
/**
 * print_string - print string
 * @ptr: pointer to the argument list
 */
void print_string(va_list *ptr)
{
	char *str = va_arg(*ptr, char *);

	if (str != NULL || !(printf("(nil)\n")))
		printf("%s\n", str);
}
/**
 * print_all - function like printf with different specifiers
 * @format: the specifiers pointer
 */
void print_all(const char * const format, ...)
{
	int itr, structItr;
	va_list ptr;
	list_t *structPtr;
	list_t list[5] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};
	va_start(ptr, format);
	itr = 0;
	while (*(format + itr) != '\0')
	{
		structPtr = list;
		structItr = 4;
		while (structPtr->key != *(format + itr) && structItr--)
			structPtr++;
		if ((structPtr->funcPtr))
			(structPtr->funcPtr)(&ptr);
		itr++;
	}
}
