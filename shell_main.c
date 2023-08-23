#include "shell.h"

/**
 * main - Entry of the program
 * Return: Always(0)
 */
int main(void)
{
	int status = 1;
	char *input_line = NULL;
	size_t line_size = 0;

	signal(SIGINT, sig_handler);

	while (status)
	{
		_getline(&input_line, &line_size);
		_strtok();
		_fork();
	}

	free(input_line);

	return (0);
}

/**
 * _strtok - function that used to read a string or a line
 * Return: 0
 */
int _strtok(void)
{
	char *str = " ";
	char *token = strtok(str, " ");

	while (token != NULL)
	{
		printf("%s", token);
		token = strtok(NULL, " ");
	}
	return (0);
}

/**
* _fork - creating a new process
*Return: void
*/
void _fork(void)
{
	char *argv[] = {"/bin/ls", "-l", ".", NULL};

	pid_t pid = fork();

	if (pid == 0)
	{
		execve(argv[0], argv, NULL);
	}
	else
	{
		wait(NULL);
	}
}
/**
* sig_handler - checks if Ctrl C is pressed by the input
* @signum: int
*Return: void
*/
void sig_handler(int signum)
{

	if (signum == SIGINT)
	{
		write(STDOUT_FILENO, "\n$ ", 3);
	}
}

/**
 * _getline - Reads a line of text from standard input and prints it.
 * @string: Pointer to a buffer where the line will be stored.
 * @size: Size of the buffer.
 *
 * This function prompts the user to enter a line, reads it from
 * standard input, and stores it in the buffer.
 *
 * Return: Always returns 0.
 */
int _getline(char **string, size_t *size)
{
	ssize_t bytes_read;

	printf("$sa_team ");
	bytes_read = getline(string, size, stdin);

	if (bytes_read == -1)
	{
		perror("getline");
	}
	else
	{
		printf("entered: %s", *string);
	}
	return (0);
}
