#include "simpleshell.h"

/**
 * builtin_helper - function calls built-in commands
 * @s: command to check if it's buil-in
 * Return: change depending on the command will be an int
 */
int builtin_helper(char *s)
{

	char *ex = "exit";
	char *en = "env";

	if (_strncmp(s, ex, 6) == 0)
		exit(EXIT_SUCCESS);
	if (_strncmp(s, en, 5) == 0)
	{
		_printenv("env");
		return (0);
	}
	return (-1);
}
