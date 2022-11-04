#include "main.h"
/**
* _abs - outputs the absolute value of any integer
* @n: parameter of an integer type
* Return: return 0
*/

int _abs(int n)
{
	if (n >= 0)
		return (n);
	if (n < 0)
		return (-n);
	return (0);
}
