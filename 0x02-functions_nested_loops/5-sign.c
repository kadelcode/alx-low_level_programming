#include "main.h"
/**
* print_sign - print the sign of an integer
* @n: the parameter that accept a number
* Return: if n > 0 return 1, if n = 0 return 0, and if n < 0 return -1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
