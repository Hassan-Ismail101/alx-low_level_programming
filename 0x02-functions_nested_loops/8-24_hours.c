#include "main.h"
/**
 * jack_bauer - writes every minute layout in day
 */
void jack_bauer(void)
{
	int minutesPerDay = 1440;
	int counter;

	for (counter = 0; counter < minutesPerDay; counter++)
	{
		_putchar(((counter / 60) / 10) + '0');
		_putchar(((counter / 60) % 10) + '0');
		_putchar(':');
		_putchar(((counter % 60) / 10) + '0');
		_putchar((counter % 10) + '0');
		_putchar('\n');
	}
}
