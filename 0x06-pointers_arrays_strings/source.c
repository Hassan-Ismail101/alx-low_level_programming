#include "main.h"
#include <stdio.h>

int main(void)
{
	/*
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("############### Number 0-strcat ################\n");
	printf("%s\n",s1);
	printf("%s", s2);
	ptr = _strcat(s1, s2);
	printf("%s",s1);
        printf("%s", s2);
	printf("%s", ptr);
	printf("\n############### Number 1-strncat ################\n");
	char s11[98] = "Hello ";
	char s21[] = "World!\n";

	printf("%s\n",s11);
        printf("%s", s21);
        ptr = _strncat(s11, s21, 1);
        printf("%s\n",s11);
        printf("%s", s21);
        printf("%s\n", ptr);
	ptr = _strncat(s11, s21, 1024);
        printf("%s",s11);
        printf("%s", s21);
        printf("%s", ptr);
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
	printf("\n############### Number 3-strcmp ################\n");
	char s3[] = "Hello";
	char s4[] = "World!";
	
	printf("%d\n", _strcmp(s3, s4));
	printf("%d\n", _strcmp(s4, s3));
	printf("%d\n", _strcmp(s3, s3));
	printf("\n############### Number 4-reverse array ################\n");
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
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

	printf("\n############### Number 5-Always look up ################\n");
	char str[] = "Look up!\n";
	char *ptr4;

	ptr4 = string_toupper(str);
	printf("%s", ptr4);
	printf("%s", str);
	*/

	printf("\n############### Number 6-Capitalize String ################\n");
	char str6[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr6;

	ptr6 = cap_string(str6);
	printf("%s", ptr6);
	printf("%s", str6);

	printf("\n############### Number 7-Leet ################\n");
	char s7[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s7);
	printf("%s", p);
	printf("%s", s7);

	return (0);
}
