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
	char *Errorbuffer;

	if (argc != 2)
	{
		write(2, "USAGE: monty file\n", 19);
		exit(EXIT_FAILURE);
	}
	Errorbuffer = malloc(sizeof(char) * (24 + strlen(string[1]) + 1));
	if (!Errorbuffer)
	{
		write(2, "Error: malloc failed\n", 22);
		exit(EXIT_FAILURE);
	}
	strcpy(Errorbuffer, "Error: Can't open file ");
	strcat(Errorbuffer, string[1]);
	strcat(Errorbuffer, "\n");
	file = fopen(string[1], "r");
	plane.File = file;
	if (file == NULL || !is_monty_file(string[1]))
	{
		write(2, Errorbuffer, (24 + strlen(string[1])));
		free(Errorbuffer);
		if (file)
			fclose(file);
		exit(EXIT_FAILURE);
	}
	free(Errorbuffer);
	return (file);
}