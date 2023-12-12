#include "main.h"

/**
 * _custom_strcmp - compares two strings
 * @str1: the first string to be compared
 * @str2: the second string to be compared
 *
 * Return: the difference between the first differing characters in @str1 and @str2
 */
int _custom_strcmp(char *str1, char *str2)
{
	int index = 0;

	while (str1[index] != '\0' && str2[index] != '\0')
	{
	if (str1[index] != str2[index])
	{
		return (str1[index] - str2[index]);
	}
	index++;
	}

	return (0);
}
