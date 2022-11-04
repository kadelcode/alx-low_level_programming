#include "main.h"
/**
* *_strcat - a function that concatenates two strings
* @dest: first string param
* @src: second string param
* Return: returns a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;

	int dest_count = 0;

	while (dest[i++])
		dest_count++;

	for (i = 0; src[i]; i++)
		dest[dest_count++] = src[i];

	return (dest);
}
