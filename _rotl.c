#include "monty.h"
/**
 * _rotl - rotates the stack to the top.
 * @stack: stack to work on
 * @line_number: file's line number
 */
void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *oldhead;

	(void)line_number;
	temp = *stack;
	oldhead = *stack;
	if (oldhead && oldhead->next)
	{
		while(temp->next)
			temp = temp->next;
		*stack = (*stack)->next;
		/*printf("----%d\n", (*stack)->n);*/
		(*stack)->prev = NULL;
		oldhead->prev = temp;
		temp->next = oldhead;
		oldhead->next = NULL;
	}
}