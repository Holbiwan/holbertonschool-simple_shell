#include "shell.h"
/**
 *parse_string - function that parses string
 *@str: string to parse
 *@token: delimiter
 *Return: 0
 */
int parse_string(char *str, const char *token)
{
	char *nw_token = strtok(str, token);

	while (nw_token != NULL)
	{
		printf("%s\n", nw_token);
		nw_token = strtok(NULL, token);
	}
	return (0);
}
