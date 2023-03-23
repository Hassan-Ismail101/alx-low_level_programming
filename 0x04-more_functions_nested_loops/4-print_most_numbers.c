#include "main.h"

/**
 * print_most_numbers - print the numbers from '0' to '9' without '2' and '4'
 */

void print_most_numbers(void)
{
	char ch;

	ch = 48;
	while (ch < 58)
	{
		if (ch != '2' && ch != '4')
			_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
