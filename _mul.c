#include "monty.h"
/**
 * _mul - multiplies the top two elements of the stack.
 * @stack: the stack
 * @line_number: line number in the file
 */
void _mul(stack_t **stack, unsigned int line_number)
{

if (!(*stack) || !((*stack)->next))
{
fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
free(plane.line);
fclose(plane.File);
if (*stack)
	free_dlistint(*stack);
exit(EXIT_FAILURE);
}

(*stack)->next->n *= (*stack)->n;
*stack = (*stack)->next;
free((*stack)->prev);
(*stack)->prev = NULL;

}
