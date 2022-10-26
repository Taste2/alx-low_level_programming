#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: pointer to a node
 * Return: The number of elemwnts
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
