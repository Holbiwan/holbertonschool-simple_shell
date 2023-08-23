#include "shell.h"

/**
 * _getline2 - read a line fron standard input and prints it
 * @string: pointer to a buffer where line will be stored
 * @size: size of the buffer
 * @bytes_read: reader
 * Return: 0 on succees, -1 on failure
 */
int _getline2(char **string, size_t *size)
{
	ssize_t bytes_read;

	printf("$sa_team ");

	bytes_read = getline(string, size, stdin);

	if (bytes_read == -1)
	{
	perror("getline");
	return (-1);
	}
	else
	{
	printf("entered: %s", *string);
	}
	return (0);
}

/**
 * _signal - function to handle signal
 * Return: 0
 */
void _signal(void)
{
	signal(SIGINT, sig_handler);

	while (1)
	{
	sleep(1);
	}
}
