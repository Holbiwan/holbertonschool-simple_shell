#include "simpleshell.h"

/**
 * main - function that invokes simple shell
 * @argc: number of arguments
 * @argv: arguments
 * @envp: NULL terminated array of strings
 * Return: 0
 */

int main(int argc, char **argv, char **envp)
{
	char *updpath = NULL, *line = NULL, *cmd = NULL;
	size_t buff = 0;
	ssize_t status = 0;
	char **tokens = NULL;

	(void)argc;
	(void)argv;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(1, "$ ", 5);
		status = getline(&line, &buff, stdin);
		if (status == -1)
		{
			if (isatty(STDIN_FILENO) == 0)
				break;
			if (isatty(STDIN_FILENO) == 1)
			{
				write(1, "getline failed", 14);
				write(1, "\n", 1);
				continue;
			}
		}
		tokens = strtok_helper(line, " ,\n");
		cmd = tokens[0];
		if (compare(cmd) == -1)
		{
			updpath = pathfinder(cmd);
			if (builtin_helper(cmd) == -1)
				execute(updpath, tokens, envp);
		}
		else if (compare(cmd) == 0)
			execute(cmd, tokens, envp);
		else if (compare(cmd) == 1)
			write(1, "command not found\n", 18);
	}
	free(line);
	free(tokens);
	return (0);
}
