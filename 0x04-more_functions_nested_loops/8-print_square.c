#include "main.h"
/**
* print_square - prints a square
* @size: parameter
*/

void print_square(int size)
{
	int i = 0;

	if (size <= 0)
		_putchar('\n');

	else
	{
		while (i < size)
		{
			int j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
