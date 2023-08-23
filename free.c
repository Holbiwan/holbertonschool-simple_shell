#include "shell.h"
/**
 * free_string - frees a string
 * @string: the string to be freed
 */
void free_string(char *string)
{
	if (string != NULL)
	{
		free(string);
	}
}
/**
 * free_all - frees all the strings
 * @command: the command to be freed
 * @str: the string to be freed
 * @execute_path: the execute path to be freed
 */
void free_all(char **command, char *str, char *execute_path)
{
	if (command != NULL)
	{
	free(command);
	}

	if (str != NULL)
	{
	free(str);
	}

	if (execute_path != NULL)
	{
	free(execute_path);
	}
}
