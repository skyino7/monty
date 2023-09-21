#include "monty.h"
/**
 * is_monty_file - checks if the string ends with ".m"
 *
 * @string: input string
 * Return: 1 on success 0 otherwise
 */
int is_monty_file(char *string)
{
	int slen;

	slen = strlen(string);
	if (string[slen - 1] == 'm')
		if (string[slen - 2] == '.')
			return (1);
	return (0);
}
