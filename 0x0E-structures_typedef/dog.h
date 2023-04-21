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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
