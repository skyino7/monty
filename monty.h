#ifndef MONTY_H
#define MONTY_H

/*Added To Enable GETLINE on a different POSIX system.*/
#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct plane_t - plane
 *
 * @File: file
 * @line: line
 * Description: plane
 */
typedef struct plane_t
{
FILE *File;
char *line;
} plane_s;
plane_s plane;
/*extern plane_s plane;*/

stack_t *add_dnodeint(stack_t **head, const int n);
void free_dlistint(stack_t *head);

int is_monty_file(char *string);
FILE *correct_monty_use(int argc, char **string);
void read_opcode(FILE *file, stack_t **stack, unsigned int line_numer);
int check_opcode(char *str, stack_t **stack, unsigned int line_num);
int check_data(char *string);
void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_number);
void _sub(stack_t **stack, unsigned int line_number);

#endif
