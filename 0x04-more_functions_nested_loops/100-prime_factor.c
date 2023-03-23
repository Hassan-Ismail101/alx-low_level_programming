#include <stdio.h>
/**
 * prime - check if the number is prime
 * @num: the number to be checked
 * Return: 1 if prime and 0 if not
 */
int prime(long long num)
{
	int flag;
	int counter;

	flag = 1;
	for (counter = 2; counter < num / 2; counter++)
		if (num % counter == 0)
			return (0);
	return (1);
}
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long long counter;

	for (counter = (612852475143 / 2); counter > 2; counter--)
	{
		if (612852475143 % counter == 0)
		{
			if (prime(counter))
			{
				printf("%lld\n", counter);
				break;
			}
		}
	}
	return (0);
}
