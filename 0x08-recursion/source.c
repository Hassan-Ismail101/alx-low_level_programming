#include "main.h"
#include <stdio.h>

int main(void)
{
	printf("################### number1 #################\n");
	_puts_recursion("Puts with recursion");
	printf("################### number2 #################\n");
	_print_rev_recursion("\nColton Walker");
	printf("################### number3 #################\n");
	int n;

	n = _strlen_recursion("Corbin Coleman");
	printf("%d\n", n);
	printf("################### number4 #################\n");
	int r;

	r = factorial(1);
	printf("%d\n", r);
	r = factorial(5);
        printf("%d\n", r);
	r = factorial(10);
        printf("%d\n", r);
	r = factorial(-1024);
        printf("%d\n", r);
	r = factorial(0);
        printf("%d\n", r);
	printf("################### number5 #################\n");
	r = _pow_recursion(1, 10);
        printf("%d\n", r);
        r = _pow_recursion(5, 0);
        printf("%d\n", r);
        r = _pow_recursion(2, 16);
        printf("%d\n", r);
        r = _pow_recursion(-5, 2);
        printf("%d\n", r);
        r = _pow_recursion(5, -2);
        printf("%d\n", r);
	r = _pow_recursion(-5, 3);
        printf("%d\n", r);


	return (0);
}
