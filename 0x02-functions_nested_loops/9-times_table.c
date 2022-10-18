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
			mul = i * j;
			_putchar(',');
			_putchar(' ');
			_putchar((i * j) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
