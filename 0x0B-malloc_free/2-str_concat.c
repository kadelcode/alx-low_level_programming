#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: return pointer poins to a new allocated space
* return NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	int i, concat_i = 0, len = 0;
	char *concat_s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat_s = malloc(len * sizeof(char));

	if (concat_s == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concat_s[concat_i++] = s1[i];
	for (i = 0; s2[i]; i++)
		concat_s[concat_i++] = s2[i];
	return (concat_s);
}
