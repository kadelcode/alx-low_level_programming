#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);
/**
* _memset - copies character
* @s: string
* @b: input parameter
* @n: no of bytes
* Return: string
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
* _calloc - allocates memory for an array using malloc
* @nmemb: number of elements
* @size: bytes
* Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, (nmemb * size));
	return (p);
}
