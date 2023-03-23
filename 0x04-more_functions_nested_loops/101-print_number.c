#include "main.h"

/**
 * print_number - print the number with _putchar
 * @n: the number should be printed
 */

void print_number(int n)
{
	if (n != 0)
	{
		int flag;
		int part = 1000000000;

		flag = 0;
		if (n < 0)
		{
			_putchar(45);
			n *= -1;
		}
		while (part)
		{
			if ((n / part) && (flag != 1))
				flag = 1;
			if (flag)
			{
				_putchar((n / part) + 48);
			}
			n %= part;
			part /= 10;
		}
	}
	else
		_putchar(48);
}
