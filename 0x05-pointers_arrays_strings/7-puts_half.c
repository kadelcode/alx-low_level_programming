#include "main.h"
/**
* puts_half - prints half of a string
* @str: string parameter
*/
void puts_half(char *str)
{
	int len = _strlen(str);

	if (len % 2 == 0)
		len = len / 2;

	else
		len = (len + 1) / 2;
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}

/**
* _strlen -  returns the length of string
* @s:string
* Return: returns length;
*/
int _strlen(char *s)
{
	int count, i;

	for (count = 0; s[count] != '\0'; count++)
		i++;
	return (i);
}
