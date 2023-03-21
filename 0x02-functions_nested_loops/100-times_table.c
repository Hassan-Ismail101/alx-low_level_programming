#include "main.h"
/**
 * print_times_table - write the table of multiplication start form 0 to @n
 * @n: is the limit of table
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int numCounts;
		int multiCount;

		for (numCounts = 0; numCounts <= n; numCounts++)
		{
			int result;

			_putchar('0');
			for (multiCount = 1; multiCount <= n; multiCount++)
			{
				result = multiCount * numCounts;
				_putchar(',');
				_putchar(' ');
				if ((result / 10) == 0)
					_putchar(' ');
				else
					_putchar('0' + (result / 10));
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
