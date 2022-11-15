#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_strlen - returns length of string
* @str: string param
* Return: the length of string
*/
int _strlen(char *str)
{
	int len = 0;

	while (str)
		len++;
	return (len);
}

/**
* _strcopy - copies a string
* @dest: the buffer storing the string copy
* @src: buffer storing string to be copied
* Return: the copied string
*/
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}

/**
* new_dog - creates anew dog
* @name: name of new dog
* @age: age of the new dog
* @owner: owner of the new dog
* Return: NULL in case of failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);

	dogg->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogg->name == NULL)
	{
		free(dogg->name);
		free(dogg);
		return (NULL);
	}

	dogg->name = _strcopy(dogg->name, name);
	dogg->age = age;
	dogg->owner = _strcopy(dogg->owner, owner);

	return (dogg);
}
