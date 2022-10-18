#include "main.h"
/**
* main - calls the function print_alphabet()
* Description: The print_alphabet() prints alphabet from a to z in lower case
* print_alphabet - prints lowercase alphabets
* Return: Always 0
*/

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
