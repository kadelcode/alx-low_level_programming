#include "main.h"
/**
* print_rev - prints a string in reverse order
* @s: string parameter
*/

void print_rev(char *s)
{
	int len = 0, i = 0;

	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

/**
* _strlen - prints length of string
* @s: parameter
* Return: return the string len
*/
int _strlen(char *s)
{
	int count, j = 0;

	j = 0;

	for (count = 0; s[count] != '\0'; count++)
		j++;
	return (j);
}
