#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
* space in memory, which contains a copy of the string
* @str: string parameter
* Return: returns a pointer to a new string
*/

char *_strdup(char *str)
{
	int i, len;
	char *c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	c = malloc(sizeof(char) * (len + 1));

	if (c == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		c[i] = str[i];
	}
	c[len] = '\0';

	return (c);
}
