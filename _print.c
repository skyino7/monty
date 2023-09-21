#include "monty.h"
/**
 * @brief 
 * 
 */
void _print(stack_t **stack, unsigned int line_number)
{
	if (!(*stack))
	{
		free(plane.line);
		fclose(plane.File);
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}