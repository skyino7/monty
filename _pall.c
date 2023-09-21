#include "monty.h"
/**
 * _pall - function that prints all elements in the stack
 * @stack: head of the stack
 * @line_number: line number of the stack
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void)line_number;
	temp = *stack;
	if (temp == NULL)
		return;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
