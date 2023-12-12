#include "main.h"

/**
 * _custom_strstr - locates a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL if not found
 */
char *_custom_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	char *a = haystack;
	char *b = needle;

	while (*a == *b && *b != '\0')
	{
		a++;
		b++;
	}

	if (*b == '\0')
		return haystack;

	haystack++;
	}

	return (NULL);
}
