#include <stdio.h>
#include <stdlib.h>

/**
* main - print the count of arguments passed in command line
* @argc: number of command line arguments
* @argv: array of size argc
* Return: always 0
*/

int main(int argc, char **argv)
{
	int num = 0;

	while (num < argc)
	{
		printf("%s\n", *(argv + num));
		num++;
		(*argv)++;
	}
	return (0);
}
