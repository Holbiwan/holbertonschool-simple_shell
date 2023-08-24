#include "simpleshell.h"

/**
 * *_strcpy - function that copies a string
 * @dest: destination string
 * @src: source string
 * Description: Copies and returns the string
 * Return: First, solve the problem. Then, write the code
 */
char *_strcpy(char *dest, char *src)
{
	char *copy = dest;

	if (dest == NULL)
		return (src);
	if (src == NULL)
		return (dest);
	if ((*dest != '\0') && (*src != '\0'))
	{
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';
	}
	return (copy);
}
