#include "main.h"
/**
* rev_string - reverses a string
* @s: the parameter string to reverse
*/
void rev_string(char *s)
{
	int i = 0, length;

	length = _strlen(s) - 1;
	while (length > i)
	{
		swap_char(s + length, s + i);
		i++;
		length--;
	}
}

/**
* _strlen - returns the length of a string
* @s: string parameter
* Return: returns length
*/
int _strlen(char *s)
{
	int count, i;

	i = 0;

	for (count = 0; s[count] != '\0'; count++)
		i++;
	return (i);
}

/**
* swap_char - swap two characters
* @a: first character
* @b: second character
*/
void swap_char(char *a, char *b)
{
	char tmp = *a;

	*a = *b;
	*b = tmp;
}
