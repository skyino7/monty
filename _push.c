#include "monty.h"
/**
 * @brief
 *
 */
void _push(stack_t **stack, unsigned int line_number)
{
	char *data = NULL;
	/* stack_t *new = NULL; */
	(void)line_number;

	data = strtok(NULL, " \n");
	if (data == NULL)/*|| !atoi(data)*/
	{
		Error_handle = 1;
		return;
	}
	add_dnodeint(stack, atoi(data));
	/* new = malloc(sizeof(stack));
	if (!new)
	{
		write(2, "Error: malloc failed\n", 22);
		exit(EXIT_FAILURE);
	}
	new->n = atoi(data); */
}