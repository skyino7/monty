#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack.
 * @stack: the stack
 * @line_number: line number in the file
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (!(*stack) || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short", line_number);
		free(plane.line);
		fclose(plane.File);
		if (*stack)
			free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}
}
