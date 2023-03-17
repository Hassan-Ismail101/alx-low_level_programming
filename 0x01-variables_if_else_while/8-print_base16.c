#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char counter = '0';

	while (counter <= '9')
	{
		putchar(counter++);
	}
	counter = 'a';
	while (counter <= 'f')
	{
		putchar(counter++);
	}
	putchar('\n');
	return (0);
}
