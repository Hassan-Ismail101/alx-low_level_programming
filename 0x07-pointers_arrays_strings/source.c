#include "main.h"
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
int main(void)
{
	/*
	char buffer[98] = {0x00};
	char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

	simple_print_buffer(buffer, 98);
	_memcpy(buffer + 50, buffer2, 10);
	printf("---------------------------------------------\n");
	simple_print_buffer(buffer, 98);
	*/
	char *s = "hello";
	char *f;

/*	f = _strchr(s, 'l');
	if (f != NULL)
	{
		printf("%s\n%s\n", f, s);
	}
	f = _strchr(s, 'e');
        if (f != NULL)
        {
               printf("%s\n%s\n", f, s);
        }
	f = _strchr(s, 'h');
        if (f != NULL)
        {
                printf("%s\n%s\n", f, s);
        }*/
	f = _strchr(s, '\0');
        if (f != NULL)
        {
                printf("%s\n", f);
        }

	return (0);
}
