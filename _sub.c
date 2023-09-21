#include "monty.h"
/**
 * _sub - second element in stack - the top element
 * @stack: stack
 * @line_number: line number
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	if (!(*stack) || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		free(plane.line);
		fclose(plane.File);
		if (*stack)
			free(*stack);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n -= (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
}
