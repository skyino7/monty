#include "monty.h"
/**
 * @brief 
 * 
 */
int check_data(char *string)
{
	int i;

	for(i = 0; string[i]; i++)
	{
		if (string[i] < '0' || string[i] > '9')
			return (1);
	}
	return (0);
}