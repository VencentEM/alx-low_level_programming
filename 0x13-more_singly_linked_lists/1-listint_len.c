#include "lists.h"

/**
 * listint_len - prints a linked lists.
 *
 * @h: head pointer
 *
 * Return: size of list
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
	h = h->next;
		i++;
	}
	return (i);
}
