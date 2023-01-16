#include "main.h"

/**
* _strpbrk - looks for any specified character
* @s: string parameter
* @accept: matched characters
* Return: returns the string
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (0);
}
