#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: a pointer
* @old_size: size of the allocated space for ptr
* @new_size: new size, of the new memoryy block
* Return: pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *temp;

	if (ptr == NULL)
	{
		temp = malloc(new_size);
		return (temp);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		temp = malloc(new_size);
		if (temp != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)temp + i) = *((char *) ptr + i);
			free(ptr);
			return (temp);
		}
		else
			return (NULL);
	}
}
