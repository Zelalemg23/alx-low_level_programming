#include "main.h"

/**
 * _custom_strchr - locates a character in a string
 * @str: the string to be searched
 * @ch: the character to find
 *
 * Return: a pointer to the first occurrence of @ch in @str, or NULL if not found
 */
char *_custom_strchr(char *str, char ch)
{
	int index = 0;

	for (; str[index] >= '\0'; index++)
	{
	if (str[index] == ch)
		return (&str[index]);
	}

	return (NULL);
}
