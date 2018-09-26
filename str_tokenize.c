#include "monty.h"
/**
 * str_tokenize - tokenizes a string
 * @s: string
 * Return: 0
 */

int str_tokenize(char *s, char **tok_array)
{
	char  *token, new[] = {'\n', '\0'};
	int  token_c = 0;

	printf("tokenizing\n");
	if (!s)
		return (-1);
	token = strtok(s, " ");
	while (token)
	{
		tok_array[token_c] = token;
		token = strtok(NULL, " ");
		token_c++;
	}
	if (tok_array[token_c - 1][strlen(tok_array[token_c - 1]) - 1] == '\n')
	{
		printf("stripping\n");
		tok_array[token_c - 1] = strtok(tok_array[token_c - 1], new);
	}
	tok_array[token_c] = NULL;
	return (0);
}
