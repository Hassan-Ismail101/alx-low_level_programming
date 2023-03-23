#include "main.h"

/**
 * print_numbers - print the numbers from '0' to '9'
 */

void print_numbers(void)
{
	char ch;

	ch = 48;
	while (ch < 58)
	{
		_putchar(ch);
		ch++;
	}
}
