#include "main.h"

/**
 * _custom_strspn - calculates the length of the initial segment of @s
 *                  which consists only of characters from @accept
 * @str: the string to be analyzed
 * @accept: the string containing the characters to match
 *
 * Return: the number of characters in the initial segment of @s that match @accept
 */
unsigned int _custom_strspn(char *str, char *accept)
{
	unsigned int count = 0;
	int index;

	while (*str)
	{
	for (index = 0; accept[index]; index++)
		{
		if (*str == accept[index])
		{
		count++;
		break;
		}
		else if (accept[index + 1] == '\0')
		{
		return count;
		}
	}
	str++;
	}

	return (count);
}
