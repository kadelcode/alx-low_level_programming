#include <stdio.h>
#include <stdlib.h>
/**
* main - print the name of the executable file
* @argc: size of argv array
* @argv: an array of command line arguments
* Return: always 0
*/

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
