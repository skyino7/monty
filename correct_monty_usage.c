#include "monty.h"
/**
 * correct_monty_use - checks if monty is used correctly in tty
 *
 * @argc: argument count in the tty
 * @string: arguments in the command line (tty)
 * Return: FILE pointer to an openned file
 */
FILE *correct_monty_use(int argc, char **string)
{
	FILE *file = NULL;

	if (argc != 2)
	{
		write(2, "USAGE: monty file\n", 19);
		exit(EXIT_FAILURE);
	}
	file = fopen(string[1], "r");
	plane.File = file;
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", string[1]);
		if (file)
			fclose(file);
		exit(EXIT_FAILURE);
	}
	return (file);
}
