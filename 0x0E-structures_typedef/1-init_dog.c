#include "dog.h"

/**
* init_dog - initializes a variable of type struct
* @d: pointer to struct dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = &my_dog;
	(*d).name = name;
	(*d).age = age;
	d->owner = owner;

}
