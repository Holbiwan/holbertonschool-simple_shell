#include "shell.h"
/**
 * get_env_value - gets the value of an environment variable
 * @name: the name of the environment variable
 *
 * Return: the value of the environment variable or NULL if it was not found
 */
char *get_env_value(const char *name)
{
	int i;
	int name_len = strlen(name);
	char *value = NULL;
	char *current_env = NULL;

	for (i = 0; environ[i]; i++)
	{
	current_env = environ[i];

 	if (strncmp(current_env, name, name_len) == 0 && current_env[name_len] == '=')
	{
	value = get_value_from_env(current_env);
	break;
	}
	}

    return (value);
}
/**
 * get_value_from_env - gets the value from an environment variable
 * @env: the environment variable
 *
 * Return: the value of the environment variable or NULL if it was not found
 */
char *get_value_from_env(const char *env)
{
	int env_len = strlen(env);
	int separator_pos = 0;
	int count;
	char *value;

	while (env[separator_pos] != '=')

	    separator_pos++;

	value = calloc(env_len - separator_pos, sizeof(char));

	if (value == NULL)

	    return (NULL);

	for (count = 0; count < env_len - separator_pos - 1; count++)
	value[count] = env[count + separator_pos + 1];


	return (value);
}
