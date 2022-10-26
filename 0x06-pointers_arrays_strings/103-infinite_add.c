#include "main.h"
/**
* infinite_add - a function that adds two numbers
* @n1 : first number
* @n2: second number
* @r: the bufer that the function will use to store the result
* @size_r: the buffer size
*
* Return: returns a pointer to the result
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
* add_strings - adds numbers stored in two strings
* @n1: first number
* @n2: second number
* @r: buffer to store the result
* @r_index: index of buffer
*
* Return:a pointer to the result
*/

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n1; n1--, r_index++)
	{
		num = *(n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n2; n2--, r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) =
		tens = num / 10;
	}
}
