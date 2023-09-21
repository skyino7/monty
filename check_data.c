#include "monty.h"
/**
 * check_data - checks is the data is an int or no
 * @string: string to check
 * Return: 0 on success 1 on fail
 */
int check_data(char *string)
{
	int i;

	for (i = 0; string[i]; i++)
	{
		if (i == 0 && string[i] == '-')
			continue;
		if (string[i] < '0' || string[i] > '9')
			return (1);
	}
	return (0);
}
