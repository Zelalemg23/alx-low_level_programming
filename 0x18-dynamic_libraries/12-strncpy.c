#include "main.h"

/**
 * _custom_strncpy - copies a string
 * @destination: the destination string
 * @source: the source string
 * @n: the maximum number of characters to copy
 *
 * Return: a pointer to the destination string
 */
char *_custom_strncpy(char *destination, char *source, int n)
{
	int index = 0;

	while (index < n && source[index] != '\0')
	{
	destination[index] = source[index];
	index++;
	}

	while (index < n)
	{
	destination[index] = '\0';
	index++;
	}

	return destination;
}
