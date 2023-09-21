#include "monty.h"
/**
 * @brief 
 * 
 */
void _push(stack_t **stack, unsigned int line_number)
{
	char *data = NULL;

	data = strtok(NULL, " \n");
	if (data == NULL)/*|| !atoi(data)*/
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		if (*stack)
			free_dlistint(*stack);
		free(plane.line);
		fclose(plane.File);
		exit(EXIT_FAILURE);
	}
	printf("%s----------\n", data);
	add_dnodeint(stack, atoi(data));
}