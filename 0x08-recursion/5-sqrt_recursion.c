#include "main.h"

int natural_sqr(int n, int i);

/**
* _sqrt_recursion - returns the natual square root of a number
* @n: the number
* Return: the square root of the number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqr(n, 0));
}

/**
* natural_sqr - find the natural square root
* @n: number
* @i: couter variable
* Return: the square root
*/
int natural_sqr(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (natural_sqr(n, i + 1));
}
