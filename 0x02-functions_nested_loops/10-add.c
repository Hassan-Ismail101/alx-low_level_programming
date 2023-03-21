#include <stdio.h>

/**
 * add - get the summation of two numbers
 * @num1: the first number of summation
 * @num2: the second number of summation
 *
 * Return: the summation of @num1 and @num2
 */
int add(int num1, int num2)
{
	return (num1 + num2);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}
