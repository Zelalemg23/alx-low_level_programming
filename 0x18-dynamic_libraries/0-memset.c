#include "main.h"

/**
 * _custom_memset - fills a block of memory with a specific value
 * @dest: starting address of memory to be filled
 * @value: the desired value
 * @size: number of bytes to be changed
 *
 * Returns: modified array with the new value for the specified number of bytes
 */
char *_custom_memset(char *dest, char value, unsigned int size)
{
	int index = 0;

	for (; size > 0; index++)
	{
	dest[index] = value;
	size--;
	}
	return (dest);
}
