#include <unistd.h>

/**
* _putchar - writes a character to stdout
* @c: The character
* Return: character
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
