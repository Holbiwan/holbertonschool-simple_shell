#include "simpleshell.h"

/**
 * *_strdup - Duplicates a string
 * @str: the string to duplicate
 * Description: this function duplicates the input string and return a pointer
 * Return: Pointer to the duplicated string or NULL on failure
 */
char *_strdup(char *str)
{
	/* declare a pointer for the duplicate */
	char *dup;
	/* for finding the length of the strings */
	unsigned int len1;
	unsigned int len2;

	/* return NULL for empty string */
	if (str == NULL)
	{
		return (NULL);
	}
	/* find the length of the string */
	for (len1 = 0; str[len1] != '\0'; len1++)
	{
	}
	/* add the null byte */
	len1++;
	/* allocate memory for the duplicate */
	dup = malloc(len1 * sizeof(char));

	/**
	 * if the duplicate is not more than string
	 * copy string to duplicate
	 * return NULL if it fails to copy
	 */
	if (dup != NULL)
	{
		for (len2 = 0; len2 < len1; len2++)
		{
			dup[len2] = str[len2];
		}
		return (dup);
	}
	else
	{
		return (NULL);
	}
	return (0);
}
