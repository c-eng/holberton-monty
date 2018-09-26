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
	char *file_buffer, **tokray; /* need to malloc strray */
	int l_index = 0, get = 1, i;
	size_t buffsize = 1024;
	FILE *fd;

	if (argc != 2)
	{
		printf("USAGE: monty file\n"); /* print to stderr */
		return (1); /* exit with EXIT_FAILURE */
	}
	fd = fopen(argv[1], "r");
	if (!fd)
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
	tokray = malloc(buffsize);
	if (!tokray)
	{
		printf("Error: malloc failed\n"); /* print to stderr */
		return (1);
        }
	while (get != -1)
	{
		printf("%d:::\n", l_index);
		get = input_get(file_buffer, fd);
		str_tokenize(file_buffer, tokray);
		for (i = 0; tokray[i] != NULL; i++)
			printf("%s\n", tokray[i]);
		//then we need to interpret each token to extract an opcode
		//sent the opcode to the opcode selecting struct
		l_index++;
	}

	return (0);
}
