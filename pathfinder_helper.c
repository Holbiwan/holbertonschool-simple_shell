#include "simpleshell.h"

/**
 * _strncmp - compares strings upto n chars
 * @s1: string
 * @s2: string
 * @n: num of chars
 * Return: 0 if same, non 0 if not
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i = 0;

	while (i < n && (s1[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/**
 * getenviron - function to get the PATH
 * @var: PATH
 * Return: memory address of environ
 */
void *getenviron(char *var)
{
	int i = 0;

	while (__environ[i] != NULL)
	{
		if (_strncmp(__environ[i], var, _strlen(var)) == 0)
			return (__environ[i]);
		if (__environ[i] == NULL)
			return (NULL);
		i++;
	}
	return (NULL);
}
