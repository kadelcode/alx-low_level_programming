#include "main.h"
/**
* print_times_table - print the times table of a particular number
*@n: the parameter
*/

void print_times_table(int n)
{
	int i, j, m;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(0 + '0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				m = i * j;
				if (m <= 99)
					_putchar(' ');

				if (m <= 9)
					_putchar(' ');

				if (m >= 100)
				{
					_putchar((m / 100) + '0');
					_putchar((m / 100) % 10 + '0');
				}
				if (m <= 99 && m >= 10)
					_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			_putchar('\n')
		}
	}
}
