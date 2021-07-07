#include "holberton.h"

/**
 *_strlen_recursion - return a length string
 *@s: string
 *Return: length  string
 */
int _strlen_recursion(char *s)
{
	int a;

	a = 0;
	if (*s == '\0')
		return (0);

	a = 1 + _strlen_recursion(s + 1);

	return (a);
}
