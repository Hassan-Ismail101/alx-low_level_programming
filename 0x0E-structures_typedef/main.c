#include <stdio.h>
#include "dog.h"

int main(void)
{
	dog_t *dogbo;

	dogbo = new_dog("bebo", 1.5, "HassN");
	printf("my name is %s, and my dog is %s\n", dogbo->owner, dogbo->name);
	free_dog(dogbo);
	return (0);
}
