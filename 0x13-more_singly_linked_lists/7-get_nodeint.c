#include "lists.h"

/**
* get_nodeint_at_index - gets a node
* @head: a pointer to the head of linked list
* @index: index of the node
* Return: NULL if node does not exist
* else: the located node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
