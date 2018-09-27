#ifndef _MONTY_H_
#define _MONTY_H_

/*** Libraries ***/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>

#define BUF_MAX 1024

/*** Structs ***/

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/*** Global Struct ***/
/**
 * struct sharedvar_s - struct of variables
 * @push_val: variable to push onto the stack
 * @queue: flag to queue behavior
 * @line_no: the line number
 * @fd: file descriptor
 * @post_err: error variable to post append
 * @head: pointer to head
 * @file_buffer: buffer for file input
 * @tokray: array of string tokens for op commands
 *
 * Description: global variables to be used across all functions
 */
typedef struct sharedvar_s
{
	int push_val;
	int queue;
	int line_no;
	FILE *fd;
	char *post_err;
	stack_t *head;
	char *file_buffer;
	char **tokray;
} svar_t;

extern svar_t share;

/*** Prototypes ***/
void free_monty(void);
void err_exit(int line_append, char *error, int end);
int input_get(void);
int str_tokenize(void);
void (*get_opcode())();
int intcheck(char *str);
void push(stack_t **head, unsigned int line);
void pall(stack_t **head, unsigned int line);
void nop(stack_t **head, unsigned int line);
void pint(stack_t **head, unsigned int line);
void pop(stack_t **head, unsigned int line);
void swap(stack_t **head, unsigned int line);
void add(stack_t **head, unsigned int line);
void sub(stack_t **head, unsigned int line);
void mdiv(stack_t **head, unsigned int line);
void mul(stack_t **head, unsigned int line);
void mod(stack_t **head, unsigned int line);
void pchar(stack_t **head, unsigned int line);
void pstr(stack_t **head, unsigned int line);
void rotl(stack_t **head, unsigned int line);
void rotr(stack_t **head, unsigned int line);

#endif /* _MONTY_H_ */
