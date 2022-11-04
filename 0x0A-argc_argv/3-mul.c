#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplication of two arguments
* @argc: array size
* @argv: array
* Return: 1 if argument is less than 2
*/

int main(int argc, char **argv)
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int mul = atoi(*(argv + 1)) * atoi(*(argv + 2));

		printf("%i\n", mul);
	}
	return (0);
}
