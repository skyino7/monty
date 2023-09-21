#include "monty.h"

/**
 * _pchar - prints a character
 * @stack: the stack
 * @line_number: line number in the file
 */

void _pchar(stack_t **stack, unsigned int line_number)
{
	if (!(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		free(plane.line);
		fclose(plane.File);
		if (*stack)
			free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		free(plane.line);
		fclose(plane.File);
		if (*stack)
			free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}

	putchar((*stack)->n);
	putchar('\n');

}
