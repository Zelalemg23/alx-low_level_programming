#include "main.h"

/**
 * _custom_puts - prints a string to stdout followed by a new line
 * @str: the string to be printed
 */
void _custom_puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
