#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print natural number between any passed integer and 98
* @n: the parameter for the number
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
	printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
	printf("%d\n", n);
	}
}
