#include "main.h"

int iter_str(char *s, int i, int len);
/**
* is_palindrome - determines if a string is palindrome or not
* @s: the string
* Return: return 1 for a palindrome, else 0
*/
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (iter_str(s, 0, _strlen_recursion(s)));
}

/**
* _strlen_recursion - returns the length of the string
* @s: string parameter
* Return: the length of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
* iter_str - iterates the string
* @s: string
* @i: coutner variable
* @len: string length
* Return: return 1 for a palindrome, else 0
*/
int iter_str(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (iter_str(s, i + 1, len - 1));
}
