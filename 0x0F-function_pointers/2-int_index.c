#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: an array
* @size: size of array
* @cmp: a pointer to the function to be used
* to compare values
* Return: -1 if no element matches or size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

