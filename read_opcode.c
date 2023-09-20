#include "monty.h"
/**
 * op_code - reads opcodes in the file and tokenises it
 *
 * @file_discriptor: file discriptor
 * @stack: list to store the values given in the file
 * @line_number: file's line number
 */
void read_opcode(FILE *file_discriptor, stack_t **stack, unsigned int line_numer)
{
	char *cmd = NULL;
	size_t cmdsize = 0;
	ssize_t read_chars = 0;
	char *line_opcode = NULL;

	read_chars = getline(&cmd, &cmdsize, file_discriptor);
	if (read_chars == EOF)
	{	
		free(*stack);
		free(cmd);
		fclose(file_discriptor);
		exit(EXIT_SUCCESS);
	}
	line_opcode = strtok(cmd, " \n");
	printf("before, %ld\n", read_chars);
	if(line_opcode)
	{
		check_opcode(line_opcode, stack, line_numer);
		printf("%s\n", line_opcode);
	}
	printf("after\n");
	
	free(cmd);
}