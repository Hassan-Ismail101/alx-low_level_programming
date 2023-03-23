#include "main.h"

/**
 * most_numbers - print the numbers from '0' to '14'
 */

void most_numbers(void)
{
	char counter;
	char ch;

	counter = 0;
	ch = 48;
	for (counter = 1; counter <= 15; counter++)
	{
		if (counter / 10)
			_putchar('1');
		_putchar(ch);
		ch++;
		if (ch == 58)
			ch = 48;
	}
	_putchar('\n');
}
