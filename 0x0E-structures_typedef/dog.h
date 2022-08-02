#ifndef DOG_H
#define DOG_H
/**
 * struct dog - first struct
 * @name: char type
 * @age: float type
 * @owner: char type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
