#include "monty.h"

svar_t share = {0,        /* push_val */
		0,        /* queue */
		1,        /* line_no */
		NULL,     /* post_err */
		NULL,     /* head */
		NULL,     /* file_buffer */
		NULL};     /* tokray */

/**
 * main - Body of Monty interpreter
 *
 * @argc: Number of arguments
 * @argv: list of arguments
 *
 * Return: Something
 */

int main(int argc __attribute__((unused)), char **argv)
{
/*	char *file_buffer, **tokray; */
	int l_index = 0, get = 1;
	size_t buffsize = 1024;
	FILE *fd;
	stack_t *head = NULL;

	if (argc != 2)
		err_exit(0, "USAGE: monty file\n", 0);
	fd = fopen(argv[1], "r");
	if (!fd)
	{
		share.post_err = argv[1];
		err_exit(0, "Error: Can't open file %s\n", 1);
	}
	share.file_buffer = malloc(buffsize);
        if (!share.file_buffer)
		err_exit(0, "Error: malloc failed\n", 0);
	share.tokray = malloc(buffsize);
	if (!share.tokray)
		err_exit(0, "Error: malloc failed\n", 0);
	get = input_get(fd);
	while (get != -1)
	{
		str_tokenize();
		get_opcode()(&head, (unsigned int) l_index + 1);
		share.head = head;
		get = input_get(fd);
		l_index++;
		share.line_no = l_index + 1;
	}

	return (0);
}
