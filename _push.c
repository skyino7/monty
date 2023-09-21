#include "monty.h"
/**
 * _push - pushs int onto the stack
 * @stack: storing stack
 * @line_number: file's line number
 */
void _push(stack_t **stack, unsigned int line_number)
{
	char *data = NULL;

	data = strtok(NULL, " \n");
	if (data == NULL || check_data(data))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		if (*stack)
			free_dlistint(*stack);
		free(plane.line);
		fclose(plane.File);
		exit(EXIT_FAILURE);
	}

	add_dnodeint(stack, atoi(data));
}
