#include <unistd.h>
#include <string.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The string to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set apporopriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	jack_bauer();
	return (0);
}
