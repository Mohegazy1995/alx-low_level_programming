#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: String.
 *
 * Return: on success 1,
 * on error -1.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);

}


