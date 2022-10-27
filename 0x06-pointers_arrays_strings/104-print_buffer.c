#include "main.h"
#include <stdio.h>

/**
* isPrintableASCII - checks if n is a printable ASCII character
* @n: integer parameter
* Return: return the integer
*/
int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
* printHexes - print hexadecimal values for a string
* @b: parameter string
* @start: start
* @end: end
*/
void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf(" ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
* printASCII - print ascii values for the string parameter
* @b: string parameter
* @start: start
* @end: end
*/
void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
* print_buffer - a function that prints a buffer
* @b: number of bytes
* @size: size of bytes
*/

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
