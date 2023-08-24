#include "simpleshell.h"

/**
 * _strlen - evaluates string length
 * @s: char
 *
 * Desription: evaluates string length
 *
 * Return: integer
 */

int _strlen(char *s)
{

	int length = 0;

	while (s && *s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
