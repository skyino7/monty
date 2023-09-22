#include "monty.h"
/**
 * _rotr - rotates the stack to the bottom
 * @stack: the stack
 * @line_number: file's line number
 */
void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void)line_number;
	if (!((*stack)->next))
		return;
	while ((*stack))
	{
		
		temp  = (*stack)->prev;
		printf("---------%d\n", (*stack)->n);
		(*stack)->prev = (*stack)->next;
		(*stack)->next = temp;
		if (!((*stack)->prev))
			break;
		(*stack) = (*stack)->prev;
	}
}