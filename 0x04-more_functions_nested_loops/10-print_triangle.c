#include "main.h"

/**
 * *print_triangle - print a triangle
 * *@length: demensions of triangle
 * *Return: nothing
 **/

void print_triangle(int length)
{
	int i, j;

	for (i = 1; i <= length; i++)
	{
		for (j = length - i; j > 0; j--)
			_putchar(' ');
		for (j = i; j > 0; j--)
			_putchar('#';
		_putchar('\n');
	}
	if (length < 1)
		_putchar('\n');
}
