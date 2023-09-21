#include "monty.h"

void _pop(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;

    stack_t *head = *stack;

    temp = head;

    if (temp == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free(plane.line);
		fclose(plane.File);
		exit(EXIT_FAILURE);
    }

    temp =  head->next;
    head->next = temp->next;

    free(temp);

}