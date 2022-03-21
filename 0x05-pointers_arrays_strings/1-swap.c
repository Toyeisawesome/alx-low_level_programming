#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * main - swap the value of two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
