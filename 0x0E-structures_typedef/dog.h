#ifndef DOG_H
#define DOG_H
/**
 * struct dog - short description
 * @name: first member of string type
 * @age: second member of int type
 * @owner: third member of string type
 *
 * Description: info of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
