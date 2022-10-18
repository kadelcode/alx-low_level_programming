#include "main.h"
/**
* _islower - checks if a letter is lower
* @c: the parameter for the _islower function
* Return: if the letter is lower return 1 else return 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
