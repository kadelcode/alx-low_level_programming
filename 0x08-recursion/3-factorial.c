#include "main.h"

/**
* factorial - a function that computes the factorial of a number
* @n: the number
* Return: if n < 0 => -1, return 1 for factorial of 0
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
