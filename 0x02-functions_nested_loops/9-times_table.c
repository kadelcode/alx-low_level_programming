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
		for (j = 0; j <= 9; j++)
		{
			mul = i * j;
			_putchar(mul + '0');
			if (j == 9)
				break;
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
