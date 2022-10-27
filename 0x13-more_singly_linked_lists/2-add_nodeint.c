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
	new->n = n;
	head = &new;
	if (head == NULL)
		return (NULL);
	free(new);
	return (new);
}
