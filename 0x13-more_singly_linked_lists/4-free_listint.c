#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: first node
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	free(head);
}
