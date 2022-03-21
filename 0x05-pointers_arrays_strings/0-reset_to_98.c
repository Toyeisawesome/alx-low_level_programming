#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * main - takes a pointer to an int as parameter
 *
 * n: takes the value
 *
 */
void reset_to_98();
void reset_to_98(int *n)
{
	*n = 98;
}
