#include "monty.h"

/**
 * _pop - removes top value from the stack
 *
 * @stack: values stack
 * @line_number: line number in file
 */

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	/*stack_t *head = *stack;*/

	temp = *stack;
	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free(plane.line);
		fclose(plane.File);
		exit(EXIT_FAILURE);
	}

	(*stack) = (*stack)->next;
	free(temp);
}
