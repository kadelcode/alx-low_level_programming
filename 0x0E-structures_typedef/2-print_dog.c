#include "dog.h"
#include <stdio.h>
/**
* print_dog - prints a struct dog
* @d: pointer to struct
*/

void print_dog(struct dog *d)
{
	printf("Name: %s", (*d).name);
	printf("Age: %3.2f", (*d).age);
	printf("Owner: %s", (*d).owner);
}
