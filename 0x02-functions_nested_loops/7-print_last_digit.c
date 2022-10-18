#include "main.h"
/**
* print_last_digit - print the last digit of a number
* @n: the parameter for the number
* Return: return the last value of the last digit
*/

int print_last_digit(int n)
{
	int ls_d;

	ls_d = n % 10;
	_putchar('0' + ls_d);
	return (ls_d);
}
