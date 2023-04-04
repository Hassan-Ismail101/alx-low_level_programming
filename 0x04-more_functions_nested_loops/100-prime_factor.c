#include <stdio.h>
/**
 * prime - check if the number is prime
 * @num: the number to be checked
 * Return: 1 if prime and 0 if not
 */
int prime(long long num)
{
	if (num == 2)
		return (1);
	if (num == 1)
		return (0);
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
	long long num;
	long long counter;

	num = 612852475143;
	for (counter = (num / 2); counter > 2; counter--)
	{
		if (num % counter == 0)
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
