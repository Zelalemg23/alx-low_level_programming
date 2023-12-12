#include <unistd.h>

/**
 * _putchar - outputs the character c to the standard output
 * @c: The character to be printed
 *
 * Returns: 1 on success. On failure, -1 is returned, and errno is appropriately set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
