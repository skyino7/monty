#include "monty.h"
/**
 * _mod - computes rest of the division of the second by top element of stack.
 * @stack: the stack
 * @line_number: line number in file
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	if (!(*stack) || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		free(plane.line);
		fclose(plane.File);
		if (*stack)
			free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		free(plane.line);
		fclose(plane.File);
		if (*stack)
			free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n %= (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
