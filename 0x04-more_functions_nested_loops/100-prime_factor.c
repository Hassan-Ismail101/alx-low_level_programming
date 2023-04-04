#include <stdio.h>
int root(double n)
{
	double low;
	double high;
	double mid;
	int counter;

	if (n > 1)
	{
		low = 1;
		high = n;
	}
	else
	{
		low = n;
		high = 1;
	}
	while (100 * low * low < n)
		low *= 10;
	while (0.01 * high * high > n)
		high *= 0.1;
	for (counter = 0; counter < 100; counter++)
	{
		mid = (low + high) / 2;
		if ((mid * mid) == n)
			return (mid);
		if ((mid * mid) > n)
			high = mid;
		else
			low = mid;
	}
	return ((int) mid + 1);
}
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
	int limit;

	limit = root(num);
	flag = 1;
	for (counter = 2; counter <= limit; counter++)
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
	long long start;

	num = 612852475143;
	start = root(num);
	for (counter = start; counter < num / 2; counter++)
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
