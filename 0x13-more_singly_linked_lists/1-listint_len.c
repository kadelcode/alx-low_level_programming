#include "lists.h"

/**
* listint_len - returns the number of elements
* @h: head pointer
* Return: the number of elements in the list
*/

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
