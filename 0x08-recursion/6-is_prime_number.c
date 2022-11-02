#include "main.h"

int _prime(int n, int i);

/**
* is_prime_number - a function that determines a prime number
* @n: the number
* Return: return 1 if n is prime, else 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
* _prime - iterate prime numbers
* @n: the number
* @i: the count variable
* Return: same as above
*/
int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}
