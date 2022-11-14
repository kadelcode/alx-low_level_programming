#ifndef DOG_H
#define DOG_H

/* function prototypes */
struct dog *d;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/* new type of struct dog */
typedef struct dog dog_t;
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
