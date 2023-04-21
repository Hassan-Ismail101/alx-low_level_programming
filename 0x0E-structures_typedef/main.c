#include <stdio.h>
#include "dog.h"

int main(void)
{
	struct dog my_dog;
	dog_t *dogbo;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	print_dog(&my_dog);
	printf("size of string %lu\n", sizeof("Hassan"));
	dogbo = new_dog("bebo", 1.5, "HassN");
	printf("my name is %s, and my dog is %s\n", dogbo->owner, dogbo->name);
	free_dog(dogbo);
	return (0);
}
