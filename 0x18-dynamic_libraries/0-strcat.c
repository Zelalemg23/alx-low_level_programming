#include "main.h"

/**
 * _custom_strcat - concatenates two strings
 * @destination: the destination string
 * @source: the source string
 *
 * Return: a pointer to the destination string
 */
char *_custom_strcat(char *destination, char *source)
{
	int dest_index = 0;
	int src_index = 0;

	while (destination[dest_index] != '\0')
	{
	dest_index++;
	}

	while (source[src_index] != '\0')
	{
	destination[dest_index] = source[src_index];
	dest_index++;
	src_index++;
	}

	destination[dest_index] = '\0';
	return destination;
}
