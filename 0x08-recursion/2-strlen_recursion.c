#include "main.h"

/**
 * _strlen_recursion - prints the length of the string
 * @s: the string to be printed
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
