#include "monty.h"
/**
 * main - contains the functionality of the monty
 *
 * @argc: number of arguments on the command line
 * @argv: contains each argument
 * Return: 0 on success 1 otherwise
 */
int main(int argc, char **argv)
{
	FILE *file;
	stack_t *stack = NULL;
	int line_number = 1;

	file = correct_monty_use(argc, argv);
	stack = malloc(sizeof(stack));
	if (!stack)
	{
		write(2, "Error: malloc failed\n", 22);
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		read_opcode(file, &stack, line_number);
		line_number++;
	}


}