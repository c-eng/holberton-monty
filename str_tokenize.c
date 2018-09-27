#include "monty.h"
/**
 * str_tokenize - tokenizes a string
 *
 * Return: 0
 */
int str_tokenize(void)
{
	char  *token, new[] = {'\n', '\0'};
	int  token_c = 0;

	if (!share.file_buffer)
		err_exit(0, "Error: Bad Tokenization\n", 0);
	token = strtok(share.file_buffer, " ");
	while (token)
	{
		share.tokray[token_c] = token;
		token = strtok(NULL, " ");
		token_c++;
	}
	if (share.tokray[token_c - 1][strlen(share.tokray[token_c - 1]) - 1] == '\n')
		share.tokray[token_c - 1] = strtok(share.tokray[token_c - 1], new);
	share.tokray[token_c] = NULL;
	return (0);
}
