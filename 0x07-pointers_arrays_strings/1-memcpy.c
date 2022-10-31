#include "main.h"
/**
* _memcpy - copies n bytes from memory area src to mem area dest
* @dest: first memory area
* @src: second memory area
* @n: number of bytes
* Return: retuns a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
