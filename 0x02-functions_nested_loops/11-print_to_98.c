#include "main.h"
/**
 * print_to_98 - write numbers until reach 98
 * @n: The number to test
 *
 * Return: group of numbers between @n and 98
 */
void print_to_98(int n)
{
	int counter;

	if (n <= 98)
		for (counter = n; counter <= 98; counter++)
		{
			printf("%d", counter);
			if (counter != 98)
				_putchar(',');
				_putchar(' ');
		}
	else
		for (counter = n; counter >= 98; counter--)
		{
			printf("%d", counter);
			if (counter != 98)
				_putchar(',');
				_putchar(' ');
		}
	_putchar('\n');
}
