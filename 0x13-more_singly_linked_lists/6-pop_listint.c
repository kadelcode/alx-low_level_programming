#include "lists.h"

/**
* pop_listint - deletes the head node of a linked list
* @head: head of the linked list
* Return: 0 if linked list is empty
*/

int pop_listint(listint_t **head)
{
	int element;
	listint_t *pop;

	if (*head == NULL)
		return (0);

	pop = *head;
	element = (*head)->n;

	*head = (*head)->next;

	free(pop);

	return (element);
}
