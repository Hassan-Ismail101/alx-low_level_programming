#ifndef variadic_H
#define variadic_H
#include <stdarg.h>
/**
 * struct format_s - structure to choose the correct specifier
 * @specifier: the specifier
 * @ptrFunc: pointer to the function
 */
typedef struct list_s
{
	char key;
	void (*funcPtr)(va_list *ptr); 
} list_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
#endif
