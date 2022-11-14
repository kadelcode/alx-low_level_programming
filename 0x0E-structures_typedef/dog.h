#ifndef DOG_H
#define DOG_H

/* function prototypes */
struct dog my_dog;
struct dog *d;
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
* struct dog - a dog structure
* @name: name of dog
* @age: age of dog
* @owner: the owner of the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;

};

#endif
