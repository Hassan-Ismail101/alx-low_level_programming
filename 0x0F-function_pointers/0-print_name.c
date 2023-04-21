#include "function_pointers.h"
/**
 * print_name - function used to print a string based on way of
 * pointer of function
 * @name: The string which should be printed
 * @f: the method to print that string
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
