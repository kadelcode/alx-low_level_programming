#include "main.h"
/**
* print_most_numbers - print numbers from 0 to 9, except 2 and 4
*/

void print_most_numbers(void)
{
	int c = 48;

	while (c <= 57)
	{
		if (c == 50)
			continue;
		if (c == 52)
			continue;
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

