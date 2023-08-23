#include "shell.h"
/**
 * parse_args - parses the command and its arguments
 * @command: the command to be parsed
 *
 * Return: the parsed command and its arguments
 */
char **parse_args(char *command)
{

	char *token;
	int argc = 0;
	char **argv = malloc(sizeof(char *) * (COMMAND_SIZE + 1));


	if (argv == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	token = strtok(command, " \t");

	while (token != NULL)
	{

	if (argc >= COMMAND_SIZE)
	{
	fprintf(stderr, "Too many arguments\n");
	free(argv);
	exit(EXIT_FAILURE);
	}
	argv[argc++] = token;
	token = strtok(NULL, " \t");
	}
	
	argv[argc] = NULL;

	return (argv);
}
/**
 * file_exists - checks if a file exists
 * @filepath: the path to the file
 *
 * Return: 1 if the file exists, 0 otherwise
 */
int file_exists(const char *filepath)
{
	struct stat st;
	return (stat(filepath, &st) == 0);
}
/**
 * custom_isspace - checks if a given character is a white-space character
 * @ch: the character to be checked
 *
 * Return: 1 if the character is a white-space character, 0 otherwise
 */
int custom_isspace(int ch)
{
	return (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r' || ch == '\v');
}
