#include "main.h"

/**
 * *swap_int - swap two integer values
 * *@a: first number
 * *@b: second number
 * *Return: no value
 **/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;

	*b = c;
}
