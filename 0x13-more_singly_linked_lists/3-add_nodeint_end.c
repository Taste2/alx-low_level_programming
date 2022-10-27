#include "lists.h"
/**
 * add_nodeint_end - adds node at end of list
 * @head: pointer to the first node
 * @n: data of the new node
 * Return: Address of new node or null if faled
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	listint_t *trav;

	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	trav = *head;

	while (trav->next != NULL)
	{
		trav = trav->next;
	}
	trav->next = new;

	return (trav->next);
}
