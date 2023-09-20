#include "monty.h"
/**
 * check_opcode - checks wether opcode give in valid
 *
 * @string: string read from the file
 * @stack: list to store the values given in the file
 * @line_number: file's line number
 * Return: 0 on success 1 otherwise
 */
int check_opcode(FILE *f, char *string, stack_t **stack, unsigned int line_number, char *cmd)
{
	instruction_t orders[] = {
		{"push", _push},
		{"pall", _pall},
		{NULL, NULL}
	};
	int i;

	for (i = 0; orders[i].opcode; i++)
	{
		if (!strcmp(orders[i].opcode, string))
			orders[i].f(stack, line_number);
		printf("%s %s %d\n", string, orders[i].opcode, strcmp(orders[i].opcode, string));
		if (Error_handle == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			free(cmd);
			if(*stack)
		 		free_dlistint(*stack);
			fclose(f);
			exit(EXIT_FAILURE);
		}
		//return (0);
	}

	printf("%s\n", string);
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, string);
	free(cmd);
	if(*stack)
		free_dlistint(*stack);
	fclose(f);
	exit(EXIT_FAILURE);
	return (1);
}