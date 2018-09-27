#include "monty.h"

svar_t share = {0,        /* push_val */
		0,        /* queue */
		1,        /* line_no */
		NULL,     /* fd */
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
	int l_index = 0, get = 1;
	size_t buffsize = 1024;
	stack_t *head = NULL;

	if (argc != 2)
		err_exit(0, "USAGE: monty file\n", 0);
	share.fd = fopen(argv[1], "r");
	if (!share.fd)
	{
		share.post_err = argv[1];
		err_exit(0, "Error: Can't open file", 1);
	}
	share.file_buffer = malloc(buffsize);
	if (!share.file_buffer)
		err_exit(0, "Error: malloc failed\n", 0);
	share.tokray = malloc(buffsize);
	if (!share.tokray)
		err_exit(0, "Error: malloc failed\n", 0);
	get = input_get();
	while (get != -1)
	{
		str_tokenize();
		get_opcode()(&head, (unsigned int) l_index + 1);
		share.head = head;
		get = input_get();
		l_index++;
		share.line_no = l_index + 1;
	}
	fclose(share.fd);
	free(share.file_buffer);
	free(share.tokray);
	free_monty();
	return (0);
}
