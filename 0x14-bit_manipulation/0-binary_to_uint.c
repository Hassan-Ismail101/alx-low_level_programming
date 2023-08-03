#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - function to convert bin to uint
 * @b: binary number to be converted
 * Return: the number in uint
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    if (b == NULL)
        return (0);
    while (*b != '\0')
    {
        if (*b != '0' && *b != '1')
            return (0);
        result *= 2;
        result += (*b - '0');
        b++;
    }
    return (result);
}
