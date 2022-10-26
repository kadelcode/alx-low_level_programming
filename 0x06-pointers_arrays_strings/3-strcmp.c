#include "main.h"
/**
* _strcmp - compare two strings
* @s1: first string
* @s2: second string
* Return: 0 if s1==s2, -ve if s1 < s2, +ve if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, comp = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			comp = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			comp = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			comp = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (comp);
}
