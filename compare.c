#include "simpleshell.h"
/**
 * compare - tests string for /
 * @string: - command passed in
 *
 * Return: int
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
