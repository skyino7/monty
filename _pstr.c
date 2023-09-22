#include "monty.h"

/**
 * _pstr - prints a string
 * @stack: the stack
 * @line_number: line number in the file
 */

void _pstr(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	while ((*stack) != NULL)
	{
		if ((*stack)->n < 0 || (*stack)->n > 127)
			return;
		putchar((*stack)->n);
		(*stack) = (*stack)->next;
	}

	putchar('\n');
}
