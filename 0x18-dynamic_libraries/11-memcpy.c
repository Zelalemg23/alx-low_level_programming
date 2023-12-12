#include "main.h"

/**
 * _custom_memcpy - copies a memory area
 * @destination: memory to be stored
 * @source: memory from where to copy
 * @size: number of bytes
 *
 * Return: pointer to the destination memory with @size bytes changed
 */
char *_custom_memcpy(char *destination, char *source, unsigned int size)
{
	int index = 0;

	for (; index < size; index++)
	{
	destination[index] = source[index];
	size--;
	}
	return (destination);
}
