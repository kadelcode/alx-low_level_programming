#include "main.h"
/**
* times_table - print the 9 times-table
*/

void times_table(void)
{
	/* declaring variables */
	int i, j, mul;

	for (i = 0; i <= 9; i++)
	{
		_putchar(0 + '0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			mul = i * j;
			if (mul <= 9)
				_putchar(' ');
			else
				_putchar((mul / 10) + '0');
		_putchar((mul % 10) + '0');
		}
		_putchar('\n');
	}
}
