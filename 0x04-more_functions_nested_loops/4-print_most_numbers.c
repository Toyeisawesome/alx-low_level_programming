#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * main - a function that prints numbers, from 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by a new line
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
