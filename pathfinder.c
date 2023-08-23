#include "simpleshell.h"

/**
 * pathfinder - function that finds the path
 * @cmd: command
 * Return: path of the command
 */
char *pathfinder(char *cmd)
{
	char *path = NULL;
	int j = 0;
	char **token_paths;
	char *updpath = NULL;

	path = _strdup(getenviron("PATH"));
	token_paths = strtok_helper(path, ":");
	updpath = malloc(100);
	while (token_paths[j++])
	{
		updpath = _strcat(token_paths[j], "/");
		updpath = _strcat(updpath, cmd);
		updpath = _strcat(updpath, "\0");
		if (access(updpath, X_OK) == 0)
			break;
	}
	free(path);
	return (updpath);
}
