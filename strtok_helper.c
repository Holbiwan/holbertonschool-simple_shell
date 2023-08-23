#include "simpleshell.h"

/**
 * strtok_helper - function that splits a line
 * @line: line from getline_helper
 * @delim: delimiters
 * Return: token
 */
char **strtok_helper(char *line, char *delim)
{
	char **tok;
	int i = 0, wc = 100;


	tok = malloc(sizeof(char *) * (wc + 1));
	tok[i] = strtok(line, delim);
	while (tok[i] != NULL)
	{
		i++;
		tok[i] = strtok(NULL, delim);
	}
	return (tok);
}
