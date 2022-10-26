#include "main.h"
/**
* reverse_array - reverses the contents in an array
* @a: array
* @n: number of elements in an array
*/

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n - 1; i > n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
