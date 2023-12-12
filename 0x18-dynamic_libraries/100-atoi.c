#include "main.h"

/**
 * _custom_atoi - converts a string into an integer
 * @str: the string to be converted
 *
 * Return: the integer value
 */
int _custom_atoi(char *str)
{
	int sign = 1, index = 0;
	unsigned int result = 0;

	while (!(str[index] <= '9' && str[index] >= '0') && str[index] != '\0')
	{
	if (str[index] == '-')
		sign *= -1;
	index++;
	}

	while (str[index] <= '9' && (str[index] >= '0' && str[index] != '\0'))
	{
	result = (result * 10) + (str[index] - '0');
	index++;
	}

	result *= sign;
	return (result);
}
