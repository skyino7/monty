#include <stdlib.h>
#include "monty.h"
/**
 * add_dnodeint - counts the elements in a linked list
 * @head: head of the list
 * @n: new node value
 * Return: elements of the list
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fclose(plane.File);
		free(plane.line);
		if (*head)
			free_dlistint(*head);
		write(2, "Error: malloc failed\n", 22);
		exit(EXIT_FAILURE);
	}
	new->n = n;

	if ((*head) == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (*head);
	}
	while ((*head)->prev)
		*head = (*head)->prev;
	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
