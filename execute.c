#include "simpleshell.h"

/**
 * execute - function that executes a program
 * @updpath: updated path
 * @tokens: tokens
 * @__environ: env
 * Return: 0
 */
int execute(char *updpath, char **tokens, char **__environ)
{
	pid_t child, pid;
	int stat;

	child = fork();
	if (child == -1)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	if (child == 0)
	{
		if (execve(updpath, tokens, __environ) == -1)
		{
			perror("Error");
			exit(EXIT_FAILURE);
			return (-1);
		}
		else
			execve(updpath, tokens, __environ);
	}
	else
	{
		do {
			pid = waitpid(child, &stat, WUNTRACED);
			if (pid == -1)
			{
				perror("waitpid");
				exit(EXIT_FAILURE);
				return (-1);
			}
		} while (!WIFEXITED(stat));
	}

	return (EXIT_SUCCESS);
}
