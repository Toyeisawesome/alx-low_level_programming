#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - a function that prints a square, followed by a straight line
 *
 * Return: a square of '#'
 */
void print_square(int size)
{
	int co, ro;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= size; co++)
		{
			_putchar('#');
			for (ro = 2; ro <= size; ro++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
