#include "main.h"
#include <stdio.h>

int main(void)
{
	/*
	printf("\n############### Number 2-strncpy ################\n");
	int i;

	for (i = 0; i < 98 - 1; i++)
		s1[i] = '*';
	s1[i] = '\0';
	printf("%s\n", s1);
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
	printf("%s\n", s1);
	printf("%s\n", ptr);
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
        printf("%s", s1);
        printf("%s", ptr);
	for (i = 0; i < 98; i++)
	{
		if ( i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", s1[i]);
	}
	printf("\n");
	*/
	printf("\n############### Number 4-reverse array ################\n");
	int a[] = {1, 2};
	int itr4;
	int size4;


	size4 = sizeof(a) / sizeof(int);
	itr4 = 0;
	while (itr4 < size4)
	{
		if (itr4 != 0)
			printf(", ");
		printf("%d", a[itr4]);
		itr4++;
	}
	printf("\n");
	reverse_array(a, size4);
	itr4 = 0;
        while (itr4 < size4)
        {
                if (itr4 != 0)
                        printf(", ");
                printf("%d", a[itr4]);
                itr4++;
        }
	printf("\n");

	return (0);
}
