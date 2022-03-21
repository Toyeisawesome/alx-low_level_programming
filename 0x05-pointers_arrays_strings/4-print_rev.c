#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * main - prints a string in reverse
 * @s: string
 *
 * Return: a string in reverse
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
