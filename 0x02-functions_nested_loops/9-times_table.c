#include "main.h"
/**
 * times_table - write the table of multiplication start form 0
 */
void times_table(void)
{
	int numCounts;
	int multiCount;

	for (numCounts = 0; numCounts < 10; numCounts++)
	{
		int result;

		_putchar('0');
		for (multiCount = 1; multiCount < 10; multiCount++)
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
