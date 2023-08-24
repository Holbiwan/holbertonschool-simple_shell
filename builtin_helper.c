#include "simpleshell.h"

/**
 * builtin_helper - function that calls builtins
 * @s: builtin commands
 * Return: varies depending on check will be int
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
