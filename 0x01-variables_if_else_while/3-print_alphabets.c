#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char counter = 'a';

	while (counter <= 'z')
	{
		putchar(counter++);
	}
	counter = 'A';
	while (counter <= 'Z')
	{
		putchar(counter++);
	}
	putchar('\n');
	return (0);
}
