#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;
    unsigned int m;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    printf("#################\n");
    m = flip_bits(1024, 1);
    printf("%u\n", m);
    m = flip_bits(402, 98);
    printf("%u\n", m);
    m = flip_bits(1024, 3);
    printf("%u\n", m);
    m = flip_bits(1024, 1025);
    printf("%u\n", m);
    return (0);
}
