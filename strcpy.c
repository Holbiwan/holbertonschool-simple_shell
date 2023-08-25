#include "simpleshell.h"

/**
 * *_strcpy - Copy a string
 * @dest: destination string
 * @src: source string
 * Description: this function copie the source string to the destination
 * Return: Pointer to the destination string
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
