#include <stdio.h>
/**
 * root - function used to find the root of number
 * @n: the number
 * Return: the square root of @n
 */
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
int prime(long int num)
{
	int max, i;

	while (num % 2 == 0)
	{
		max = 2;
		num /= 2;
	}
	for (i = 3; i < root(num); i += 2)
	{
		while (num % i == 0)
		{
			max = i;
			num /= i;
		}
	}
	if (num > 2)
		max = num;
	return (max);
}
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int num;
	int maxPrime;

	num = 612852475143;
	maxPrime = prime(num);
	printf("%d\n", maxPrime);
	return (0);
}
