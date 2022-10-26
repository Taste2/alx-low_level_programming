#include "list.h"

/**
*print_listint - prints the elements
*@h: listing list
*Return:  The number of nodes
*/

size_t print_listint(const listint_t *h)
{
	listint_t *trav;

	size_t count = 0;

	trav = h;
	while (trav)
	{
		printf("%d", trav->n);
		trav = trav->next;
		count++;
	}

	return (count);
}
