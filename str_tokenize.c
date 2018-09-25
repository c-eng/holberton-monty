#include "monty.h"
/**
 * str_tokenize - tokenizes a string 
 * @s: string
 * Return: 0
 */

int  str_tokenize(char *s, char **tok_array)
{
	char **strray;
	char  *token;
	int  token_c = 0;
	if (!s)
		return (NULL);
	token = strtok(s, " ");
	while (token)
	{
		tok_array[token_c] = token;
		token = strtok(NULL, " ");
		token_c++;
	}
	tok_array[token_c] = NULL;
	return (0);
}
