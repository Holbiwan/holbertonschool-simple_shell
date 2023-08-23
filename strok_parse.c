#include "shell.h"

/**
 * _strtok - function that parses string
 *@str: string to parse
 *@token: delimiter
 *Return: 0
 */
char **_strtok(char *str, const char *delim)
{
	char *token = strtok(str, delim);

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);
}
