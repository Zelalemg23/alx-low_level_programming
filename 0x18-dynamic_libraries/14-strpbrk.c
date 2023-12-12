#include "main.h"

/**
 * _custom_strpbrk - searches a string for any of a set of bytes
 * @str: the string to be searched
 * @accept: the string containing the characters to search for
 *
 * Return: a pointer to the first occurrence in @str of any character in @accept, or NULL if not found
 */
char *_custom_strpbrk(char *str, char *accept)
{
	int index;

	while (*str)
	{
	for (index = 0; accept[index]; index++)
	{
		if (*str == accept[index])
		return (str);
	}
	str++;
	}

	return (NULL);
}
