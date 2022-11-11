#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void _print(char *str, int l);
char *mul(char n, char *num, int num_index, char *dest, int dest_index);
int check_for_digits(char **av);
void init(char *str, int l);

/**
* _print - moves a string
* @str: string to move
* @l: size of string
*/
void _print(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			putchar(str[i]);
		i++;
	}
	putchar('\n');
	free(str);
}

/**
* mul - multiplies a char with a string and puts the result into dest
* @n: character parameter
* @num: string to multiply
* @num_index: index of num
* @dest: destination of the result
* @dest_index: index of dest
* Return: pointer to dest, or NULL on failure
*/
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addrem)
		return (NULL);
	return (dest);
}

/**
* check_for_digits - checks if the arguments are digits
* @av: pointer to arguments
* Return: 0 if digits, else 1
*/
int check_for_digits(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}
	return (0);
}

/**
* init - initializes a string
* @str: string to initialize
* @l: length of string
*/
void init(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0';
	str[i] = '\0';
}

/**
* main - multiply two numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 or 98  if failure
*/
int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a, *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; e[ti]; ti++)
			putchar(e[ti]);
		exit(98);
	}

	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l1 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			putchar(e[ti]);
		exit(98);
	}
	init(a, ln - 1);
	for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				putchar(e[ti]);
			free(a);
			exit(98);
		}
	}
	_print(a, ln - 1);
	return (0);
}
