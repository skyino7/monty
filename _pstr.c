#include "monty.h"

/**
 * _pstr - prints a string
 * @stack: the stack
 * @line_number: line number in the file
 */

void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;
	(void)line_number;
	while ((temp) != NULL)
	{
		if ((temp)->n <= 0 || (temp)->n > 127)
		{
			putchar('\n');
			return;
		}
		putchar((temp)->n);
		(temp) = (temp)->next;
	}

	putchar('\n');
}
