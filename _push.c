#include "monty.h"
/**
 * @brief 
 * 
 */
void _push(stack_t **stack, unsigned int line_number)
{
	char *data = NULL;

	data = strtok(NULL, " \n");
	printf("data-%s----------\n", data);
	printf("data-%d----------\n", atoi(data));
	if (data == NULL|| !atoi(data))
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