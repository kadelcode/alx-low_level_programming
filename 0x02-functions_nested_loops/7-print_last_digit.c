#include "main.h"
/**
* print_last_digit - print the last digit of a number
* @n: the parameter for the number
* Return: return the last value of the last digit
*/

int print_last_digit(int n)
{
	int ls_d = n % 10;

	if (ls_d < 0)
		ls_d *= -1;
	_putchar(ls_d + '0');
	return (ls_d);

}
