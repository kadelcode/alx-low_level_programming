#include "main.h"
/**
* *_strncat - concat to strings and use at most n bytes from src
* @dest: first parameter string
* @src: second parameter string
* @n: number of bytes
*
* Return: return the resulting string(dest)
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_count = 0;

	while (dest[i++])
		dest_count++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_count++] = src[i];

	return (dest);
}
