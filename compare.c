#include "simpleshell.h"
/**
 * compare - tests if command is executable  checking for '/'
 * @string: - the command to be checked
 *
 * Return: 0 if executable, 1 if not, -1 on error
 */
int compare(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		if (string[i] == '/')
		{
			if (access(string, X_OK) == 0)
			{
				return (0);
			}
			else
				return (1);
		}
		i++;
	}
	return (-1);
}
