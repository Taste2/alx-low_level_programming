#include "lists.h"
/**
 * add_nodeint - Adds new node at beginning
 * @head: pointer to fist node
 * @n: data for fist node
 * Return: address of new node, NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	free(new);

	return (*head);
}
