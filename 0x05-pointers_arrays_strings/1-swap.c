#include "main.h"
/**
* swap_int - swap the values of two variables
* @a: first parameter
* @b: second parameter
*/
void swap_int(int *a, int *b)
{
	int tmp_var = *a;

	*a = *b;
	*b = tmp_var;
}
