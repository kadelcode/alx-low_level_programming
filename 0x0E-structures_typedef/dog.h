#ifndef DOG_H
#define DOG_H

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

/* new type of struct dog */
typedef struct dog dog_t;

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
