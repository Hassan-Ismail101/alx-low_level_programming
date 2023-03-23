#include "main.h"

/**
 * more_numbers - print the numbers from '0' to '14'
 */

void more_numbers(void)
{

	char loops;
	char counter;
	char ch;

	loops = 10;
	while (loops--)
	{
		counter = 0;
		ch = 48;
		for (counter = 1; counter <= 15; counter++)
		{
			if (counter % 16 > 10)
				_putchar('1');
			_putchar(ch);
			ch++;
			if (ch == 58)
				ch = 48;
			if (counter % 15 == 0)
			{
				_putchar('\n');
				ch = 48;
			}
		}
	}
}
