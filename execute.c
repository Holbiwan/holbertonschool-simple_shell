#include "shell.h"
/**
 * execute_command - forks a new process and executes the command
 * @command: the command to be executed and its arguments
 * Return: void
 */
void execute_command(char **command)
{
	pid_t pid;	
	int status;
	pid = fork();

	if (pid == -1)
	{
		perror("fork failed");
		exit(EXIT_FAILURE);
	}

	else if (pid == 0)
	{
		if (execve(command[0], command, environ) == -1)
		{
			perror("failed execute");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		waitpid(pid, &status, 0);
	}
}
/**
 * find_execute_command - finds the path to the executable and executes the command
 * @command: the command to be executed
 * @executable_path: the path to the executable
 * 
 * Return: 1 if the executable was found, 0 otherwise
 */
int find_execute_command(char *command, char *executable_path)
{
	int found_executable = 0;
	int i;
	char **argv = parse_args(command);

	if (argv[0] == NULL)
	{
	free(argv);
	return (0);
	}

	if (file_exists(argv[0]))
	{	
	found_executable = 1;
	strcpy(executable_path, argv[0]);
	}
	else
	{
	char *path_env = get_env_value("PATH");

	if (path_env)
	{
	char *path_env_copy = strdup(path_env);
	char *token = strtok(path_env_copy, ":");
	while (token != NULL)
	{
	strcpy(executable_path, token);
	strcat(executable_path, "/");
	strcat(executable_path, argv[0]);

	if (file_exists(executable_path))
	{
	found_executable = 1;
	break;
	}
	token = strtok(NULL, ":");
	}
	free_string(path_env_copy);
	free_string(path_env);
	}
	}

        for (i = 1; argv[i] != NULL; i++)
	{
	argv[0] = executable_path;
	strcat(executable_path, " ");
	strcat(executable_path, argv[i]);
	}

	free(argv);
	return (found_executable);
}
