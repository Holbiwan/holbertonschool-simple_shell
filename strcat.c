#include "simpleshell.h"

/**
 * *_strcat - function that concatenates strings
 * @dest: destination string
 * @src: source string
 * 
 * Return: dest string
 */
char *_strcat(char *dest, char *src)
{
	/* declared temporary pointer to dest string for return purpose */
	char *append = dest;

	/* ignore the null byte in both strings */
	if ((*dest != '\0') && (*src != '\0'))
	{
		/* loop through the dest string, ignoring the null byte */
		while (*dest != '\0')
		{
			/* increment*/
			dest++;
		}
		/* loop through the src string, ignoring the null byte */
		while (*src != '\0')
		{
			/* copy src string to dest string */
			*dest++ = *src++;
		}
		/* adding null byte */
		*dest = '\0';
	}
	return (append);
}
