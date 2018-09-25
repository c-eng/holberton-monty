#include "monty.h"

/**
 * main - Body of Monty interpreter
 *
 * @argc: Number of arguments
 * @argv: list of arguments
 *
 * Return: Something
 */

int main(int argc, char **argv)
{
	char *file_buffer, **strray, **tokray; /* need to malloc strray */
	int file, l_index = 0, i = 0;
	size_t buffsize = 1024;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		printf("USAGE: monty file\n"); /* print to stderr */
		return (1); /* exit with EXIT_FAILURE */
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		printf("Error: Can't open file %s\n", argv[1]); /* print to stderr */
		return (1);
	}
	file_buffer = malloc(buffsize);
        if (!file_buffer)
	{
		printf("Error: malloc failed\n"); /* print to stderr */
                return (1);
	}
	strray = malloc(buffsize);
	if (!strray)
	{
		printf("Error: malloc failed\n"); /* print to stderr */
		return (1);
	}
	tokray = malloc(buffsize);
	//get file input (get_input), also tokenizes by line
	input_get(file_buffer, file, strray);
	while (strray[l_index])
	{
		str_tokenize(strray[l_index], tokray);
		get_opcode(tokray)(stack, (unsigned int) (l_index + 1));
		//then we need to interpret each token to extract an opcode
		//sent the opcode to the opcode selecting struct
		l_index++;
	}

	return (0);
}
