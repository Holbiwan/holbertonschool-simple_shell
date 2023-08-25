#include "simpleshell.h"

/**
 * _printenv - Function that prints environment variables
 * @s: array of strings
 * Return: array of strings
 */
void _printenv(char *s)
{
	int i = 0;

	while (s)
	{
		write(1, s, _strlen(s));
		write(1, "\n", 1);
		s =  __environ[++i];
	}
}
