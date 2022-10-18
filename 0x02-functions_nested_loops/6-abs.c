#include "main.h"
/**
* _abs - outputs the absolute value of any integer
* @n: parameter of an integer type
* Return: return 0
*/

int _abs(int n)
{
	if (n >= 0)
		_putchar(n + '0');
	if (n < 0)
		_putchar((-n) + '0');
	return (0);
}
