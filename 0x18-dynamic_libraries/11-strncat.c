#include "main.h"

/**
 * _custom_strncat - concatenates two strings using at most n bytes from src
 * @destination: the destination string
 * @source: the source string
 * @n: the maximum number of bytes to concatenate
 *
 * Return: a pointer to the destination string
 */
char *_custom_strncat(char *destination, char *source, int n)
{
	int dest_index = 0;
	int src_index = 0;

	while (destination[dest_index] != '\0')
	{
	dest_index++;
	}

	while (src_index < n && source[src_index] != '\0')
	{
	destination[dest_index] = source[src_index];
	dest_index++;
	src_index++;
	}

	destination[dest_index] = '\0';
	return destination;
}
