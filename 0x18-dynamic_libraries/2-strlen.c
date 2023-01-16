#include "main.h"
/**
* _strlen - returns the length of a string
* @s: string parameter
* Return: the length of string
*/
int _strlen(char *s)
{
	int i, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
