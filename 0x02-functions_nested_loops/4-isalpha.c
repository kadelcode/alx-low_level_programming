#include "main.h"
/**
* _isalpha - checks if the parmeter is a letter whether uppercase or lowercase
* @c: the parameter passed in the _isalpha()
* Return: returns 1 if the parameter is a letter else return 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
