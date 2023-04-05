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

	r = is_prime_number(1);
	printf("%d\n", r);
	r = is_prime_number(1024);
	printf("%d\n", r);
	r = is_prime_number(16);
	printf("%d\n", r);
	r = is_prime_number(17);
        printf("%d\n", r);
        r = is_prime_number(25);
        printf("%d\n", r);
        r = is_prime_number(-1);
        printf("%d\n", r);
	r = is_prime_number(113);
        printf("%d\n", r);
        r = is_prime_number(7919);
        printf("%d\n", r);

	return (0);
}
