#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int N;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	N = start->N;
	free(start);
	return (N);
}i
